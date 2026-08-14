// Copyright(c) 2016 YamaArashi
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include <cmath>
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <vector>
#include "agb.h"
#include "main.h"
#include "midi.h"
#include "tables.h"

int g_agbTrack;

static std::string s_lastOpName;
static int s_blockNum;
static bool s_keepLastOpName;
static int s_lastNote;
static int s_lastVelocity;
static bool s_noteChanged;
static bool s_velocityChanged;
static bool s_inPattern;
static int s_extendedCommand;
static int s_memaccOp;
static int s_memaccParam1;
static int s_memaccParam2;
static int s_cc5Value;
static bool s_cc65Enabled;
static int s_lastPortValue;
static int s_lastModValue;
static int s_lastModMValue;
static int s_lastPanValue;
static int s_lastBendrValue;
static int s_lastLfosValue;
static int s_lastModtValue;
static int s_lastTuneValue;
static int s_lastLfodlValue;
static int s_lastVolumeValue;
static int s_lastVolume2Value;
static int s_lastPitchBendValue;
static int s_lastVoiceValue;

void PrintWait(int wait);
void PrintByte(const char *format, ...);
void PrintOp(int wait, std::string name, const char *format, ...);

static void EmitPortIfChanged(int wait, int value)
{
    if (value != s_lastPortValue)
    {
        PrintOp(wait, "PORT  ", "%u", value);
        s_lastPortValue = value;
    }
    else
    {
        PrintWait(wait);
    }
}

static void InvalidateDedupeState()
{
    s_lastPortValue = -1;
    s_lastModValue = -1;
    s_lastModMValue = -1;
    s_lastPanValue = -1;
    s_lastBendrValue = -1;
    s_lastLfosValue = -1;
    s_lastModtValue = -1;
    s_lastTuneValue = -1;
    s_lastLfodlValue = -1;
    s_lastVolumeValue = -1;
    s_lastVolume2Value = -1;
    s_lastPitchBendValue = -1;
    s_lastVoiceValue = -1;
}

void PrintAgbHeader()
{
    std::fprintf(g_outputFile, "\t.include \"MPlayDef.s\"\n\n");
    std::fprintf(g_outputFile, "\t.equ\t%s_grp, voicegroup%s\n", g_asmLabel.c_str(), g_voiceGroup.c_str());
    std::fprintf(g_outputFile, "\t.equ\t%s_pri, %u\n", g_asmLabel.c_str(), g_priority);

    if (g_reverb >= 0)
        std::fprintf(g_outputFile, "\t.equ\t%s_rev, reverb_set+%u\n", g_asmLabel.c_str(), g_reverb);
    else
        std::fprintf(g_outputFile, "\t.equ\t%s_rev, 0\n", g_asmLabel.c_str());

    std::fprintf(g_outputFile, "\t.equ\t%s_mvl, %u\n", g_asmLabel.c_str(), g_masterVolume);
    std::fprintf(g_outputFile, "\t.equ\t%s_key, %u\n", g_asmLabel.c_str(), 0);
    std::fprintf(g_outputFile, "\t.equ\t%s_tbs, %u\n", g_asmLabel.c_str(), g_clocksPerBeat);
    std::fprintf(g_outputFile, "\t.equ\t%s_exg, %u\n", g_asmLabel.c_str(), g_exactGateTime);
    std::fprintf(g_outputFile, "\t.equ\t%s_cmp, %u\n", g_asmLabel.c_str(), g_compressionEnabled);

    std::fprintf(g_outputFile, "\n\t.section .rodata\n");
    std::fprintf(g_outputFile, "\t.global\t%s\n", g_asmLabel.c_str());

    std::fprintf(g_outputFile, "\t.align\t2\n");
}

void ResetTrackVars()
{
    s_lastVelocity = -1;
    s_lastNote = -1;
    s_velocityChanged = false;
    s_noteChanged = false;
    s_keepLastOpName = false;
    s_lastOpName = "";
    s_inPattern = false;
    InvalidateDedupeState();
}

void PrintWait(int wait)
{
    if (wait > 0)
    {
        std::fprintf(g_outputFile, "\t.byte\tW%02d\n", wait);
        s_velocityChanged = true;
        s_noteChanged = true;
        s_keepLastOpName = true;
    }
}

void PrintOp(int wait, std::string name, const char *format, ...)
{
    std::va_list args;
    va_start(args, format);
    std::fprintf(g_outputFile, "\t.byte\t\t");

    if (format != nullptr)
    {
        if (!g_compressionEnabled || s_lastOpName != name)
        {
            std::fprintf(g_outputFile, "%s, ", name.c_str());
            s_lastOpName = name;
        }
        else
        {
            std::fprintf(g_outputFile, "        ");
        }
        std::vfprintf(g_outputFile, format, args);
    }
    else
    {
        std::fputs(name.c_str(), g_outputFile);
        s_lastOpName = name;
    }

    std::fprintf(g_outputFile, "\n");

    va_end(args);

    PrintWait(wait);
}

void PrintByte(const char *format, ...)
{
    std::va_list args;
    va_start(args, format);
    std::fprintf(g_outputFile, "\t.byte\t");
    std::vfprintf(g_outputFile, format, args);
    std::fprintf(g_outputFile, "\n");
    s_velocityChanged = true;
    s_noteChanged = true;
    s_keepLastOpName = true;
    va_end(args);
}

void PrintWord(const char *format, ...)
{
    std::va_list args;
    va_start(args, format);
    std::fprintf(g_outputFile, "\t .word\t");
    std::vfprintf(g_outputFile, format, args);
    std::fprintf(g_outputFile, "\n");
    va_end(args);
}

void PrintNote(const Event& event)
{
    int note = event.note;
    int velocity = event.param1; 
    int duration = -1;

    if (event.param2 != -1)
        duration = g_noteDurationLUT[event.param2];

    int gateTimeParam = 0;

    if (g_exactGateTime && duration != -1)
        gateTimeParam = event.param2 - duration;

    char gtpBuf[16];

    if (gateTimeParam > 0)
        std::snprintf(gtpBuf, sizeof(gtpBuf), ", gtp%u", gateTimeParam);
    else
        gtpBuf[0] = 0;

    char opName[16];

    if (duration == -1)
        std::strcpy(opName, "TIE   ");
    else
        std::snprintf(opName, sizeof(opName), "N%02u   ", duration);

    bool noteChanged = true;
    bool velocityChanged = true;

    if (g_compressionEnabled)
    {
        noteChanged = (note != s_lastNote);
        velocityChanged = (velocity != s_lastVelocity);
    }

    if (s_keepLastOpName)
        s_keepLastOpName = false;
    else
        s_lastOpName = "";

    if (noteChanged || velocityChanged || (gateTimeParam > 0))
    {
        s_lastNote = note;

        char noteBuf[16];

        if (note >= 24)
            std::snprintf(noteBuf, sizeof(noteBuf), g_noteTable[note % 12], note / 12 - 2);
        else
            std::snprintf(noteBuf, sizeof(noteBuf), g_minusNoteTable[note % 12], note / -12 + 2);

        char velocityBuf[16];

        if (velocityChanged || (gateTimeParam > 0))
        {
            s_lastVelocity = velocity;
            std::snprintf(velocityBuf, sizeof(velocityBuf), ", v%03u", velocity);
        }
        else
        {
            velocityBuf[0] = 0;
        }

        PrintOp(event.time, opName, "%s%s%s", noteBuf, velocityBuf, gtpBuf);
    }
    else
    {
        PrintOp(event.time, opName, 0);
    }

    s_noteChanged = noteChanged;
    s_velocityChanged = velocityChanged;
}

void PrintEndOfTieOp(const Event& event)
{
    int note = event.note;
    bool noteChanged = (note != s_lastNote);

    if (!noteChanged || !s_noteChanged)
        s_lastOpName = "";

    if (!noteChanged && g_compressionEnabled)
    {
        PrintOp(event.time, "EOT   ", nullptr);
    }
    else
    {
        s_lastNote = note;
        if (note >= 24)
            PrintOp(event.time, "EOT   ", g_noteTable[note % 12], note / 12 - 2);
        else
            PrintOp(event.time, "EOT   ", g_minusNoteTable[note % 12], note / -12 + 2);
    }

    s_noteChanged = noteChanged;
}

void PrintSeqLoopLabel(const Event& event)
{
    s_blockNum = event.param1 + 1;
    std::fprintf(g_outputFile, "%s_%u_B%u:\n", g_asmLabel.c_str(), g_agbTrack, s_blockNum);
    PrintWait(event.time);
    ResetTrackVars();
}

void PrintMemAcc(const Event& event)
{
    switch (s_memaccOp)
    {
    case 0x00:
        PrintByte("MEMACC, mem_set, 0x%02X, %u", s_memaccParam1, event.param2);
        break;
    case 0x01:
        PrintByte("MEMACC, mem_add, 0x%02X, %u", s_memaccParam1, event.param2);
        break;
    case 0x02:
        PrintByte("MEMACC, mem_sub, 0x%02X, %u", s_memaccParam1, event.param2);
        break;
    case 0x03:
        PrintByte("MEMACC, mem_mem_set, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        break;
    case 0x04:
        PrintByte("MEMACC, mem_mem_add, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        break;
    case 0x05:
        PrintByte("MEMACC, mem_mem_sub, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        break;
    case 0x06:
        PrintByte("MEMACC, mem_beq, 0x%02X, %u", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x07:
        PrintByte("MEMACC, mem_bne, 0x%02X, %u", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x08:
        PrintByte("MEMACC, mem_bhi, 0x%02X, %u", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x09:
        PrintByte("MEMACC, mem_bhs, 0x%02X, %u", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x0A:
        PrintByte("MEMACC, mem_bls, 0x%02X, %u", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x0B:
        PrintByte("MEMACC, mem_blo, 0x%02X, %u", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x0C:
        PrintByte("MEMACC, mem_mem_beq, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x0D:
        PrintByte("MEMACC, mem_mem_bne, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x0E:
        PrintByte("MEMACC, mem_mem_bhi, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x0F:
        PrintByte("MEMACC, mem_mem_bhs, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x10:
        PrintByte("MEMACC, mem_mem_bls, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    case 0x11:
        PrintByte("MEMACC, mem_mem_blo, 0x%02X, 0x%02X", s_memaccParam1, event.param2);
        PrintWord("%s_%u_L%u", g_asmLabel.c_str(), g_agbTrack, s_memaccParam2);
        break;
    default:
        break;
    }

    PrintWait(event.time);
}

void PrintExtendedOp(const Event& event)
{
    // TODO: support for other extended commands

    switch (s_extendedCommand)
    {
    case 0x08:
        PrintOp(event.time, "XCMD  ", "xIECV , %u", event.param2);
        break;
    case 0x09:
        PrintOp(event.time, "XCMD  ", "xIECL , %u", event.param2);
        break;
    default:
        PrintWait(event.time);
        break;
    }
}

void PrintControllerOp(const Event& event)
{
    switch (event.param1)
    {
    case 0x01:
        if (event.param2 != s_lastModValue)
        {
            PrintOp(event.time, "MOD   ", "%u", event.param2);
            s_lastModValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x03:
        if (event.param2 != s_lastModMValue)
        {
            PrintOp(event.time, "MODM  ", "%u", event.param2);
            s_lastModMValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x05:
        s_cc5Value = event.param2;
        EmitPortIfChanged(event.time, s_cc65Enabled ? s_cc5Value : 0);
        break;
    case 0x07: // Volume
        if (event.param2 != s_lastVolumeValue)
        {
            PrintOp(event.time, "VOL   ", "%u*%s_mvl/mxv", event.param2, g_asmLabel.c_str());
            s_lastVolumeValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x0A:
        if (event.param2 != s_lastPanValue)
        {
            PrintOp(event.time, "PAN   ", "c_v%+d", event.param2 - 64);
            s_lastPanValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x0B: // Expression
        if (event.param2 != s_lastVolume2Value)
        {
            PrintOp(event.time, "VOL2  ", "%u", event.param2);
            s_lastVolume2Value = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x0C:
    case 0x10:
        PrintMemAcc(event);
        break;
    case 0x0D:
        s_memaccOp = event.param2;
        PrintWait(event.time);
        break;
    case 0x0E:
        s_memaccParam1 = event.param2;
        PrintWait(event.time);
        break;
    case 0x0F:
        s_memaccParam2 = event.param2;
        PrintWait(event.time);
        break;
    case 0x11:
        std::fprintf(g_outputFile, "%s_%u_L%u:\n", g_asmLabel.c_str(), g_agbTrack, event.param2);
        PrintWait(event.time);
        ResetTrackVars();
        break;
    case 0x14:
        if (event.param2 != s_lastBendrValue)
        {
            PrintOp(event.time, "BENDR ", "%u", event.param2);
            s_lastBendrValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x15:
        if (event.param2 != s_lastLfosValue)
        {
            PrintOp(event.time, "LFOS  ", "%u", event.param2);
            s_lastLfosValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x16:
    {
        int modtValue = event.param2;
        if (g_modtAdd64Enabled && modtValue < 64)
            modtValue += 64;

        if (modtValue != s_lastModtValue)
        {
            PrintOp(event.time, "MODT  ", "%u", modtValue);
            s_lastModtValue = modtValue;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    }
    case 0x18:
        if (event.param2 != s_lastTuneValue)
        {
            PrintOp(event.time, "TUNE  ", "c_v%+d", event.param2 - 64);
            s_lastTuneValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x1A:
        if (event.param2 != s_lastLfodlValue)
        {
            PrintOp(event.time, "LFODL ", "%u", event.param2);
            s_lastLfodlValue = event.param2;
        }
        else
        {
            PrintWait(event.time);
        }
        break;
    case 0x1B:
        PrintOp(event.time, "PWMC  ", "%u", event.param2);
        break;
    case 0x1C:
        PrintOp(event.time, "PWMS  ", "%u", event.param2);
        break;
    case 0x1D:
    case 0x1F:
        PrintExtendedOp(event);
        break;
    case 0x1E:
        s_extendedCommand = event.param2;
        // TODO: loop op
        break;
    case 0x21:
    case 0x27:
        PrintByte("PRIO  , %u", event.param2);
        PrintWait(event.time);
        break;
    case 0x41:
        s_cc65Enabled = (event.param2 >= 64);
        EmitPortIfChanged(event.time, s_cc65Enabled ? s_cc5Value : 0);
        break;
    default:
        PrintWait(event.time);
        break;
    }
}

void PrintAgbTrack(std::vector<Event>& events)
{
    std::fprintf(g_outputFile, "\n@**************** Track %u (Midi-Chn.%u) ****************@\n\n", g_agbTrack, g_midiChan + 1);
    std::fprintf(g_outputFile, "%s_%u:\n", g_asmLabel.c_str(), g_agbTrack);

    int wholeNoteCount = 0;
    int loopEndBlockNum = 0;

    ResetTrackVars();
    s_cc5Value = 0;
    s_cc65Enabled = false;
    s_lastPortValue = 0;
    s_lastModValue = 0;
    s_lastModMValue = 0;
    s_lastPanValue = 64;
    s_lastBendrValue = 2;
    s_lastLfosValue = 22;
    s_lastModtValue = 0;
    s_lastTuneValue = 64;
    s_lastLfodlValue = 0;
    s_lastVolumeValue = -1;
    s_lastVolume2Value = -1;
    s_lastPitchBendValue = 128;
    s_lastVoiceValue = -1;

    bool foundVolBeforeNote = false;
    bool foundModt = false;

    for (const Event& event : events)
    {
        if (event.type == EventType::Note)
            break;

        if (event.type == EventType::Controller && event.param1 == 0x07)
        {
            foundVolBeforeNote = true;
        }

        if (event.type == EventType::Controller && event.param1 == 0x16)
            foundModt = true;

        if (foundVolBeforeNote && foundModt)
            break;
    }

    if (!foundVolBeforeNote)
    {
        PrintByte("\tVOL   , 127*%s_mvl/mxv", g_asmLabel.c_str());
        s_lastVolumeValue = 127;
        s_lastVolume2Value = 127;
    }

    PrintWait(g_initialWait);
    PrintByte("KEYSH , %s_key%+d", g_asmLabel.c_str(), 0);

    if (g_modtAdd64Enabled && !foundModt)
    {
        PrintByte("MODT  , %u", 64);
        s_lastModtValue = 64;
    }

    for (unsigned i = 0; events[i].type != EventType::EndOfTrack; i++)
    {
        const Event& event = events[i];

        if (IsPatternBoundary(event.type))
        {
            if (s_inPattern)
                PrintByte("PEND");
            s_inPattern = false;
        }

        if (event.type == EventType::WholeNoteMark || event.type == EventType::Pattern)
            std::fprintf(g_outputFile, "@ %03d   ----------------------------------------\n", wholeNoteCount++);

        switch (event.type)
        {
        case EventType::Note:
            PrintNote(event);
            break;
        case EventType::EndOfTie:
            PrintEndOfTieOp(event);
            break;
        case EventType::Label:
            PrintSeqLoopLabel(event);
            break;
        case EventType::LoopEnd:
            PrintByte("GOTO");
            PrintWord("%s_%u_B%u", g_asmLabel.c_str(), g_agbTrack, loopEndBlockNum);
            PrintSeqLoopLabel(event);
            break;
        case EventType::LoopEndBegin:
            PrintByte("GOTO");
            PrintWord("%s_%u_B%u", g_asmLabel.c_str(), g_agbTrack, loopEndBlockNum);
            PrintSeqLoopLabel(event);
            loopEndBlockNum = s_blockNum;
            break;
        case EventType::LoopBegin:
            PrintSeqLoopLabel(event);
            loopEndBlockNum = s_blockNum;
            break;
        case EventType::WholeNoteMark:
            if (event.param2 & 0x80000000)
            {
                std::fprintf(g_outputFile, "%s_%u_%03lu:\n", g_asmLabel.c_str(), g_agbTrack, (unsigned long)(event.param2 & 0x7FFFFFFF));
                ResetTrackVars();
                s_inPattern = true;
            }
            PrintWait(event.time);
            break;
        case EventType::Pattern:
            PrintByte("PATT");
            PrintWord("%s_%u_%03lu", g_asmLabel.c_str(), g_agbTrack, event.param2);

            while (!IsPatternBoundary(events[i + 1].type))
                i++;

            ResetTrackVars();
            break;
        case EventType::Tempo:
            if (g_clocksPerBeat > 1)
                PrintByte("TEMPO , %u*%s_tbs/2", static_cast<int>(round(60000000.0f / static_cast<float>(event.param2))), g_asmLabel.c_str());
            else
                PrintByte("TEMPO , (%u*%s_tbs+1)/2", static_cast<int>(round(60000000.0f / static_cast<float>(event.param2))), g_asmLabel.c_str());
            PrintWait(event.time);
            break;
        case EventType::InstrumentChange:
            if (event.param1 != s_lastVoiceValue)
            {
                PrintOp(event.time, "VOICE ", "%u", event.param1);
                s_lastVoiceValue = event.param1;
            }
            else
            {
                PrintWait(event.time);
            }
            break;
        case EventType::PitchBend:
        {
            int bendValue = ((event.param1 >> 6) | (event.param2 << 1));
            if (bendValue != s_lastPitchBendValue)
            {
                // Running-status shorthand only works for data bytes < 0x80.
                // With c_b centered at 0x80, high bend values must keep explicit BEND.
                if (bendValue >= 0x80)
                    s_lastOpName = "";
                PrintOp(event.time, "BEND  ", "c_b%+d", bendValue - 128);
                s_lastPitchBendValue = bendValue;
            }
            else
            {
                PrintWait(event.time);
            }
            break;
        }
        case EventType::Controller:
            PrintControllerOp(event);
            break;
        default:
            PrintWait(event.time);
            break;
        }
    }

    PrintByte("FINE");
}

void PrintAgbFooter()
{
    int trackCount = g_agbTrack - 1;

    std::fprintf(g_outputFile, "\n@******************************************************@\n");
    std::fprintf(g_outputFile, "\t.align\t2\n");
    std::fprintf(g_outputFile, "\n%s:\n", g_asmLabel.c_str());
    std::fprintf(g_outputFile, "\t.byte\t%u\t@ NumTrks\n", trackCount);
    std::fprintf(g_outputFile, "\t.byte\t%u\t@ NumBlks\n", 0);
    std::fprintf(g_outputFile, "\t.byte\t%s_pri\t@ Priority\n", g_asmLabel.c_str());
    std::fprintf(g_outputFile, "\t.byte\t%s_rev\t@ Reverb.\n", g_asmLabel.c_str());
    std::fprintf(g_outputFile, "\n");
    std::fprintf(g_outputFile, "\t.word\t%s_grp\n", g_asmLabel.c_str());
    std::fprintf(g_outputFile, "\n");

    // track pointers
    for (int i = 1; i <= trackCount; i++)
        std::fprintf(g_outputFile, "\t.word\t%s_%u\n", g_asmLabel.c_str(), i);

    std::fprintf(g_outputFile, "\n\t.end\n");
}
