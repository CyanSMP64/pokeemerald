#!/usr/bin/env python3

"""
Adds a custom 'agbl' (AGB Loop end) chunk to looped .wav files.
This chunk specifies the exact loop-end point to handle the off-by-one error
in the original game, where the loop-end should be one sample earlier than
the total number of samples in the file.
"""

import struct
import sys
import os
from typing import Optional


def read_wav_chunks(wav_path: str) -> tuple:
    """
    Read a .wav file and parse all chunks.
    Returns: (chunks_list, is_looped, num_samples)
    chunks_list is a list of (chunk_id, chunk_data) tuples
    """
    with open(wav_path, 'rb') as f:
        wav_data = f.read()

    if len(wav_data) < 12:
        raise ValueError(f"File too small: {len(wav_data)} bytes")

    # Read RIFF header
    if wav_data[0:4] != b'RIFF':
        raise ValueError("Not a valid WAV file (missing RIFF header)")

    riff_size = struct.unpack('<I', wav_data[4:8])[0]

    if wav_data[8:12] != b'WAVE':
        raise ValueError("Not a valid WAV file (missing WAVE format)")

    pos = 12
    chunks = []
    is_looped = False
    num_samples = 0

    # Read all chunks
    while pos + 8 <= len(wav_data):
        chunk_id = wav_data[pos:pos+4]
        chunk_size = struct.unpack('<I', wav_data[pos+4:pos+8])[0]
        chunk_data = wav_data[pos+8:pos+8+chunk_size]

        chunks.append((chunk_id, chunk_data))

        # Check if this is a smpl chunk to determine if looped
        if chunk_id == b'smpl':
            # Read num_sample_loops from smpl chunk (offset 28)
            if len(chunk_data) >= 36:
                num_loops = struct.unpack('<I', chunk_data[28:32])[0]
                is_looped = num_loops > 0

        # Check if this is the data chunk to get number of samples
        if chunk_id == b'data':
            # For 8-bit mono audio, each sample is 1 byte
            num_samples = chunk_size

        pos += 8 + chunk_size
        # Align to even boundary if needed
        if chunk_size % 2 == 1 and pos < len(wav_data):
            pos += 1

    return chunks, is_looped, num_samples


def write_wav_with_loop_end_chunk(wav_path: str, chunks: list, loop_end_override: int):
    """
    Write a .wav file with an added 'agbl' (AGB Loop end) chunk.
    The agbl chunk stores the loop-end override value.
    """
    # Check if agbl chunk already exists
    has_agbl = any(chunk_id == b'agbl' for chunk_id, _ in chunks)

    if has_agbl:
        # Replace existing agbl chunk
        new_chunks = []
        for chunk_id, chunk_data in chunks:
            if chunk_id == b'agbl':
                # Replace with new value
                new_chunks.append((b'agbl', struct.pack('<I', loop_end_override)))
            else:
                new_chunks.append((chunk_id, chunk_data))
        chunks = new_chunks
    else:
        # Insert agbl chunk before the data chunk
        new_chunks = []
        inserted = False
        for chunk_id, chunk_data in chunks:
            if chunk_id == b'data' and not inserted:
                # Insert agbl chunk before data chunk
                new_chunks.append((b'agbl', struct.pack('<I', loop_end_override)))
                inserted = True
            new_chunks.append((chunk_id, chunk_data))
        chunks = new_chunks

    # Calculate total RIFF size (including padding bytes for odd-sized chunks)
    total_chunk_size = 0
    for _, chunk_data in chunks:
        total_chunk_size += 8 + len(chunk_data)  # 8 bytes for chunk header + data
        if len(chunk_data) % 2 == 1:
            total_chunk_size += 1  # Add padding byte for odd-sized chunks
    riff_size = 4 + total_chunk_size  # 4 for 'WAVE' + all chunks

    # Write the WAV file
    with open(wav_path, 'wb') as f:
        # Write RIFF header
        f.write(b'RIFF')
        f.write(struct.pack('<I', riff_size))
        f.write(b'WAVE')

        # Write all chunks
        for chunk_id, chunk_data in chunks:
            f.write(chunk_id)
            f.write(struct.pack('<I', len(chunk_data)))
            f.write(chunk_data)
            # Add padding byte if chunk size is odd
            if len(chunk_data) % 2 == 1:
                f.write(b'\x00')


def process_wav_file(wav_path: str, output_path: Optional[str] = None, in_place: bool = False):
    """
    Process a single .wav file and add the loop-end chunk if it's looped.
    """
    print(f"Processing {wav_path}")

    chunks, _, num_samples = read_wav_chunks(wav_path)

    # Calculate loop-end override (one sample earlier than total)
    loop_end_override = num_samples - 1

    print(f"  Total samples: {num_samples}")
    print(f"  Loop end override: {loop_end_override}")

    # Determine output path
    if in_place:
        out_path = wav_path
    elif output_path:
        out_path = output_path
    else:
        # Default: add _looped suffix
        base, ext = os.path.splitext(wav_path)
        out_path = f"{base}_looped{ext}"

    write_wav_with_loop_end_chunk(out_path, chunks, loop_end_override)
    print(f"  Written to {out_path}")


def main():
    if len(sys.argv) < 2:
        print("Usage: add_loop_end_chunk.py <input.wav> [output.wav]")
        print("   or: add_loop_end_chunk.py <directory> [-i|--in-place]")
        print()
        print("Adds a custom 'agbl' chunk to looped .wav files specifying the loop-end override.")
        print("The loop-end is set to (total_samples - 1) to handle the off-by-one error.")
        print()
        print("Options:")
        print("  -i, --in-place    Modify files in place (when processing directory)")
        sys.exit(1)

    input_path = sys.argv[1]
    in_place = False

    if os.path.isdir(input_path):
        # Check for --in-place flag
        if len(sys.argv) > 2 and sys.argv[2] in ('-i', '--in-place'):
            in_place = True

        # Process all .wav files in directory
        wav_files = [f for f in sorted(os.listdir(input_path)) if f.lower().endswith('.wav')]

        if not wav_files:
            print(f"No .wav files found in {input_path}")
            sys.exit(1)

        print(f"Found {len(wav_files)} .wav file(s)")
        for filename in wav_files:
            file_path = os.path.join(input_path, filename)
            process_wav_file(file_path, in_place=in_place)
            print()
    else:
        # Process single file
        if not input_path.lower().endswith('.wav'):
            print(f"Error: File must have .wav extension")
            sys.exit(1)

        output_path = sys.argv[2] if len(sys.argv) > 2 else None
        process_wav_file(input_path, output_path)


if __name__ == '__main__':
    main()
