#include "global.h"
#include "malloc.h"
#include "data.h"
#include "decompress.h"
#include "pokemon.h"
#include "text.h"

EWRAM_DATA ALIGNED(4) u8 gDecompressionBuffer[0x4000] = {0};

static void DuplicateDeoxysTiles(void *pointer, s32 species);

void LZDecompressWram(const u32 *src, void *dest)
{
    LZ77UnCompWram(src, dest);
}

void LZDecompressVram(const u32 *src, void *dest)
{
    LZ77UnCompVram(src, dest);
}

u16 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;

    LZ77UnCompWram(src->data, gDecompressionBuffer);
    dest.data = gDecompressionBuffer;
    dest.size = src->size;
    dest.tag = src->tag;
    return LoadSpriteSheet(&dest);
}

void LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer)
{
    struct SpriteSheet dest;

    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    LoadSpriteSheet(&dest);
}

void LoadCompressedSpritePalette(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;

    LZ77UnCompWram(src->data, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer)
{
    struct SpritePalette dest;

    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer, s32 species)
{
    if (species > NUM_SPECIES)
        LZ77UnCompWram(gMonFrontPicTable[0].data, buffer);
    else
        LZ77UnCompWram(src->data, buffer);
    DuplicateDeoxysTiles(buffer, species);
}

void HandleLoadSpecialPokePic(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality)
{
    bool8 isFrontPic;

    if (src == &gMonFrontPicTable[species])
        isFrontPic = TRUE; // frontPic
    else
        isFrontPic = FALSE; // backPic

    LoadSpecialPokePic_2(src, dest, species, personality, isFrontPic);
}

void LoadSpecialPokePic(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    if (species == SPECIES_UNOWN || species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_HIPPOPOTAS || species == SPECIES_HIPPOWDON
        || species == SPECIES_UNFEZANT || species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_FRILLISH || species == SPECIES_JELLICENT || species == SPECIES_VIVILLON
        || species == SPECIES_PYROAR || species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES || species == SPECIES_MEOWSTIC || species == SPECIES_PUMPKABOO
        || species == SPECIES_GOURGEIST || species == SPECIES_MINIOR_CORE_RED || species == SPECIES_TOXTRICITY || species == SPECIES_ALCREMIE || species == SPECIES_BASCULEGION
        || species == SPECIES_OINKOLOGNE || species == SPECIES_MAUSHOLD || species == SPECIES_SQUAWKABILLY || species == SPECIES_TATSUGIRI || species == SPECIES_DUDUNSPARCE)
    {
        u16 i;

        if (species == SPECIES_UNOWN)
        {
            // The other Unowns are separate from Unown A.
            i = GET_UNOWN_LETTER(personality);
            if (i == 0)
                i = SPECIES_UNOWN;
            else
                i += SPECIES_UNOWN_B - 1;
        }
        else if (species == SPECIES_SHELLOS || species == SPECIES_GASTRODON)
        {
            i = (personality >> 8) % 2;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_SHELLOS)
                    i = SPECIES_SHELLOS_EAST_SEA;
                else
                    i = SPECIES_GASTRODON_EAST_SEA;
            }
        }
        else if (species == SPECIES_MAUSHOLD || species == SPECIES_DUDUNSPARCE)
        {
            i = (personality >> 8) % 100;
            if (i != 69) //  nice
                i = species;
            else
            {
                if (species == SPECIES_MAUSHOLD)
                    i = SPECIES_MAUSHOLD_FAMILY_OF_THREE;
                else
                    i = SPECIES_DUDUNSPARCE_THREE_SEGMENT;
            }
        }
        else if (species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_PUMPKABOO || species == SPECIES_GOURGEIST || species == SPECIES_SQUAWKABILLY)
        {
            i = (personality >> 8) % 4;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_DEERLING)
                    i += SPECIES_DEERLING_SUMMER - 1;
                else if (species == SPECIES_SAWSBUCK)
                    i += SPECIES_SAWSBUCK_SUMMER - 1;
                else if (species == SPECIES_SQUAWKABILLY)
                    i += SPECIES_SQUAWKABILLY_BLUE_PLUMAGE - 1;
                else if (species == SPECIES_PUMPKABOO)
                    i += SPECIES_PUMPKABOO_SMALL - 1;
                else
                    i += SPECIES_GOURGEIST_SMALL - 1;
            }
        }
        else if (species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES)
        {
            i = (personality >> 8) % 5;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_FLABEBE)
                    i += SPECIES_FLABEBE_YELLOW_FLOWER - 1;
                else if (species == SPECIES_FLOETTE)
                    i += SPECIES_FLOETTE_YELLOW_FLOWER - 1;
                else
                    i += SPECIES_FLORGES_YELLOW_FLOWER - 1;
            }
        }
        else if (species == SPECIES_VIVILLON)
        {
            i = (personality >> 8) % 20;
            if (!i)
                i = species;
            else
                i += SPECIES_VIVILLON_POLAR - 1;
        }
        else if (species == SPECIES_MINIOR_CORE_RED)
        {
            i = (personality >> 8) % 7;
            if (!i)
                i = species;
            else
                i += SPECIES_MINIOR_CORE_ORANGE - 1;
        }
        else if (species == SPECIES_ALCREMIE)
        {
            i = (personality >> 8) % 9;
            if (!i)
                i = species;
            else
                i += SPECIES_ALCREMIE_RUBY_CREAM - 1;
        }
        else if (species == SPECIES_TATSUGIRI)
        {
            i = (personality >> 8) % 3;
            if (!i)
                i = species;
            else
                i += SPECIES_TATSUGIRI_DROOPY - 1;
        }
        else if (species == SPECIES_TOXTRICITY)
        {
            if ((personality % 25) == 0 || (personality % 25) == 2 || (personality % 25) == 3 || (personality % 25) == 4 ||
            (personality % 25) == 6 || (personality % 25) == 8 || (personality % 25) == 9 || (personality % 25) == 11 || 
            (personality % 25) == 13 || (personality % 25) == 14 || (personality % 25) == 19 || (personality % 25) == 22 || (personality % 25) == 24)
                i = species;
            else
                i = SPECIES_TOXTRICITY_LOW_KEY;
        }
        else if (species == SPECIES_PYROAR)
        {
            if ((personality % 0x100) >= 0xDF)
                i = species;
            else
                i = SPECIES_PYROAR_FEMALE;
        }
        else
        {
            if ((personality % 0x100) >= 0x7F)
                i = species;
            else
                if (species == SPECIES_HIPPOPOTAS)
                    i = SPECIES_HIPPOPOTAS_FEMALE;
                else if (species == SPECIES_HIPPOWDON)
                    i = SPECIES_HIPPOWDON_FEMALE;
                else if (species == SPECIES_UNFEZANT)
                    i = SPECIES_UNFEZANT_FEMALE;
                else if (species == SPECIES_FRILLISH)
                    i = SPECIES_FRILLISH_FEMALE;
                else if (species == SPECIES_JELLICENT)
                    i = SPECIES_JELLICENT_FEMALE;
                else if (species == SPECIES_MEOWSTIC)
                    i = SPECIES_MEOWSTIC_FEMALE;
                else if (species == SPECIES_OINKOLOGNE)
                    i = SPECIES_OINKOLOGNE_FEMALE;
                else
                    i = SPECIES_BASCULEGION_FEMALE;
        }

        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else if (species > NUM_SPECIES) // is species unknown? draw the ? icon
        LZ77UnCompWram(gMonFrontPicTable[0].data, dest);
    else
        LZ77UnCompWram(src->data, dest);

    DuplicateDeoxysTiles(dest, species);
    DrawSpindaSpots(species, personality, dest, isFrontPic);
}

void Unused_LZDecompressWramIndirect(const void **src, void *dest)
{
    LZ77UnCompWram(*src, dest);
}

static void StitchObjectsOn8x8Canvas(s32 object_size, s32 object_count, u8 *src_tiles, u8 *dest_tiles)
{
    /*
      This function appears to emulate behaviour found in the GB(C) versions regarding how the Pokemon images
      are stitched together to be displayed on the battle screen.
      Given "compacted" tiles, an object count and a bounding box/object size, place the tiles in such a way
      that the result will have each object centered in a 8x8 tile canvas.
    */
    s32 i, j, k, l;
    u8 *src = src_tiles, *dest = dest_tiles;
    u8 bottom_off;

    if (object_size & 1)
    {
        // Object size is odd
        bottom_off = (object_size >> 1) + 4;
        for (l = 0; l < object_count; l++)
        {
            // Clear all unused rows of tiles plus the half-tile required due to centering
            for (j = 0; j < 8-object_size; j++)
            {
                for (k = 0; k < 8; k++)
                {
                    for (i = 0; i < 16; i++)
                    {
                        if (j % 2 == 0)
                        {
                            // Clear top half of top tile and bottom half of bottom tile when on even j
                            ((dest+i) + (k << 5))[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                        }
                        else
                        {
                            // Clear bottom half of top tile and top half of tile following bottom tile when on odd j
                            ((dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 256)[((j >> 1) << 8)] = 0;
                        }
                    }
                }
            }

            // Clear the columns to the left and right that wont be used completely
            // Unlike the previous loops, this will clear the later used space as well
            for (j = 0; j < 2; j++)
            {
                for (i = 0; i < 8; i++)
                {
                    for (k = 0; k < 32; k++)
                    {
                        // Left side
                        ((dest+k) + (i << 8))[(j << 5)] = 0;
                        // Right side
                        ((dest+k) + (i << 8))[(j << 5)+192] = 0;
                    }
                }
            }

            // Skip the top row and first tile on the second row for objects of size 5
            if (object_size == 5) dest += 0x120;

            // Copy tile data
            for (j = 0; j < object_size; j++)
            {
                for (k = 0; k < object_size; k++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        // Offset the tile by +4px in both x and y directions
                        (dest + (i << 2))[18] = (src + (i << 2))[0];
                        (dest + (i << 2))[19] = (src + (i << 2))[1];
                        (dest + (i << 2))[48] = (src + (i << 2))[2];
                        (dest + (i << 2))[49] = (src + (i << 2))[3];

                        (dest + (i << 2))[258] = (src + (i << 2))[16];
                        (dest + (i << 2))[259] = (src + (i << 2))[17];
                        (dest + (i << 2))[288] = (src + (i << 2))[18];
                        (dest + (i << 2))[289] = (src + (i << 2))[19];
                    }
                    src += 32;
                    dest += 32;
                }

                // At the end of a row, skip enough tiles to get to the beginning of the next row
                if (object_size == 7) dest += 0x20;
                else if (object_size == 5) dest += 0x60;
            }

            // Skip remaining unused space to go to the beginning of the next object
            if (object_size == 7) dest += 0x100;
            else if (object_size == 5) dest += 0x1e0;
        }
    }
    else
    {
        // Object size is even
        for (i = 0; i < object_count; i++)
        {
            // For objects of size 6, the first and last row and column will be cleared
            // While the remaining space will be filled with actual data
            if (object_size == 6)
            {
                for (k = 0; k < 256; k++) {
                    *dest = 0;
                    dest++;
                }
            }

            for (j = 0; j < object_size; j++)
            {
                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++) {
                        *dest = 0;
                        dest++;
                    }
                }

                // Copy tile data
                for (k = 0; k < 32 * object_size; k++) {
                    *dest = *src;
                    src++;
                    dest++;
                }

                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++) {
                        *dest = 0;
                        dest++;
                    }
                }
            }

            if (object_size == 6)
            {
                for (k = 0; k < 256; k++) {
                    *dest = 0;
                    dest++;
                }
            }
        }
    }
}

u32 GetDecompressedDataSize(const u32 *ptr)
{
    const u8 *ptr8 = (const u8 *)ptr;
    return (ptr8[3] << 16) | (ptr8[2] << 8) | (ptr8[1]);
}

bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;
    void *buffer;

    buffer = AllocZeroed(src->data[0] >> 8);
    LZ77UnCompWram(src->data, buffer);

    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;

    LoadSpriteSheet(&dest);
    Free(buffer);
    return FALSE;
}

bool8 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;
    void *buffer;

    buffer = AllocZeroed(src->data[0] >> 8);
    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;

    LoadSpritePalette(&dest);
    Free(buffer);
    return FALSE;
}

void DecompressPicFromTable_2(const struct CompressedSpriteSheet *src, void *buffer, s32 species) // a copy of DecompressPicFromTable
{
    if (species > NUM_SPECIES)
        LZ77UnCompWram(gMonFrontPicTable[0].data, buffer);
    else
        LZ77UnCompWram(src->data, buffer);
    DuplicateDeoxysTiles(buffer, species);
}

void LoadSpecialPokePic_2(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic) // a copy of LoadSpecialPokePic
{
    if (species == SPECIES_UNOWN || species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_HIPPOPOTAS || species == SPECIES_HIPPOWDON
        || species == SPECIES_UNFEZANT || species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_FRILLISH || species == SPECIES_JELLICENT || species == SPECIES_VIVILLON
        || species == SPECIES_PYROAR || species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES || species == SPECIES_MEOWSTIC || species == SPECIES_PUMPKABOO
        || species == SPECIES_GOURGEIST || species == SPECIES_MINIOR_CORE_RED || species == SPECIES_TOXTRICITY || species == SPECIES_ALCREMIE || species == SPECIES_BASCULEGION
        || species == SPECIES_OINKOLOGNE || species == SPECIES_MAUSHOLD || species == SPECIES_SQUAWKABILLY || species == SPECIES_TATSUGIRI || species == SPECIES_DUDUNSPARCE)
    {
        u16 i;

        if (species == SPECIES_UNOWN)
        {
            // The other Unowns are separate from Unown A.
            i = GET_UNOWN_LETTER(personality);
            if (i == 0)
                i = SPECIES_UNOWN;
            else
                i += SPECIES_UNOWN_B - 1;
        }
        else if (species == SPECIES_SHELLOS || species == SPECIES_GASTRODON)
        {
            i = (personality >> 8) % 2;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_SHELLOS)
                    i = SPECIES_SHELLOS_EAST_SEA;
                else
                    i = SPECIES_GASTRODON_EAST_SEA;
            }
        }
        else if (species == SPECIES_MAUSHOLD || species == SPECIES_DUDUNSPARCE)
        {
            i = (personality >> 8) % 100;
            if (i != 69) //  nice
                i = species;
            else
            {
                if (species == SPECIES_MAUSHOLD)
                    i = SPECIES_MAUSHOLD_FAMILY_OF_THREE;
                else
                    i = SPECIES_DUDUNSPARCE_THREE_SEGMENT;
            }
        }
        else if (species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_PUMPKABOO || species == SPECIES_GOURGEIST || species == SPECIES_SQUAWKABILLY)
        {
            i = (personality >> 8) % 4;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_DEERLING)
                    i += SPECIES_DEERLING_SUMMER - 1;
                else if (species == SPECIES_SAWSBUCK)
                    i += SPECIES_SAWSBUCK_SUMMER - 1;
                else if (species == SPECIES_SQUAWKABILLY)
                    i += SPECIES_SQUAWKABILLY_BLUE_PLUMAGE - 1;
                else if (species == SPECIES_PUMPKABOO)
                    i += SPECIES_PUMPKABOO_SMALL - 1;
                else
                    i += SPECIES_GOURGEIST_SMALL - 1;
            }
        }
        else if (species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES)
        {
            i = (personality >> 8) % 5;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_FLABEBE)
                    i += SPECIES_FLABEBE_YELLOW_FLOWER - 1;
                else if (species == SPECIES_FLOETTE)
                    i += SPECIES_FLOETTE_YELLOW_FLOWER - 1;
                else
                    i += SPECIES_FLORGES_YELLOW_FLOWER - 1;
            }
        }
        else if (species == SPECIES_VIVILLON)
        {
            i = (personality >> 8) % 20;
            if (!i)
                i = species;
            else
                i += SPECIES_VIVILLON_POLAR - 1;
        }
        else if (species == SPECIES_MINIOR_CORE_RED)
        {
            i = (personality >> 8) % 7;
            if (!i)
                i = species;
            else
                i += SPECIES_MINIOR_CORE_ORANGE - 1;
        }
        else if (species == SPECIES_ALCREMIE)
        {
            i = (personality >> 8) % 9;
            if (!i)
                i = species;
            else
                i += SPECIES_ALCREMIE_RUBY_CREAM - 1;
        }
        else if (species == SPECIES_TATSUGIRI)
        {
            i = (personality >> 8) % 3;
            if (!i)
                i = species;
            else
                i += SPECIES_TATSUGIRI_DROOPY - 1;
        }
        else if (species == SPECIES_TOXTRICITY)
        {
            if ((personality % 25) == 0 || (personality % 25) == 2 || (personality % 25) == 3 || (personality % 25) == 4 ||
            (personality % 25) == 6 || (personality % 25) == 8 || (personality % 25) == 9 || (personality % 25) == 11 || 
            (personality % 25) == 13 || (personality % 25) == 14 || (personality % 25) == 19 || (personality % 25) == 22 || (personality % 25) == 24)
                i = species;
            else
                i = SPECIES_TOXTRICITY_LOW_KEY;
        }
        else if (species == SPECIES_PYROAR)
        {
            if ((personality % 0x100) >= 0xDF)
                i = species;
            else
                i = SPECIES_PYROAR_FEMALE;
        }
        else
        {
            if ((personality % 0x100) >= 0x7F)
                i = species;
            else
                if (species == SPECIES_HIPPOPOTAS)
                    i = SPECIES_HIPPOPOTAS_FEMALE;
                else if (species == SPECIES_HIPPOWDON)
                    i = SPECIES_HIPPOWDON_FEMALE;
                else if (species == SPECIES_UNFEZANT)
                    i = SPECIES_UNFEZANT_FEMALE;
                else if (species == SPECIES_FRILLISH)
                    i = SPECIES_FRILLISH_FEMALE;
                else if (species == SPECIES_JELLICENT)
                    i = SPECIES_JELLICENT_FEMALE;
                else if (species == SPECIES_MEOWSTIC)
                    i = SPECIES_MEOWSTIC_FEMALE;
                else if (species == SPECIES_OINKOLOGNE)
                    i = SPECIES_OINKOLOGNE_FEMALE;
                else
                    i = SPECIES_BASCULEGION_FEMALE;
        }

        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else if (species > NUM_SPECIES) // is species unknown? draw the ? icon
        LZ77UnCompWram(gMonFrontPicTable[0].data, dest);
    else
        LZ77UnCompWram(src->data, dest);

    DuplicateDeoxysTiles(dest, species);
    DrawSpindaSpots(species, personality, dest, isFrontPic);
}

void HandleLoadSpecialPokePic_2(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality) // a copy of HandleLoadSpecialPokePic
{
    bool8 isFrontPic;

    if (src == &gMonFrontPicTable[species])
        isFrontPic = TRUE; // frontPic
    else
        isFrontPic = FALSE; // backPic

    LoadSpecialPokePic_2(src, dest, species, personality, isFrontPic);
}

void DecompressPicFromTable_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *buffer, s32 species)
{
    if (species > NUM_SPECIES)
        LZ77UnCompWram(gMonFrontPicTable[0].data, buffer);
    else
        LZ77UnCompWram(src->data, buffer);
}

void HandleLoadSpecialPokePic_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality)
{
    bool8 isFrontPic;

    if (src == &gMonFrontPicTable[species])
        isFrontPic = TRUE; // frontPic
    else
        isFrontPic = FALSE; // backPic

    LoadSpecialPokePic_DontHandleDeoxys(src, dest, species, personality, isFrontPic);
}

void LoadSpecialPokePic_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    if (species == SPECIES_UNOWN || species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_HIPPOPOTAS || species == SPECIES_HIPPOWDON
        || species == SPECIES_UNFEZANT || species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_FRILLISH || species == SPECIES_JELLICENT || species == SPECIES_VIVILLON
        || species == SPECIES_PYROAR || species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES || species == SPECIES_MEOWSTIC || species == SPECIES_PUMPKABOO
        || species == SPECIES_GOURGEIST || species == SPECIES_MINIOR_CORE_RED || species == SPECIES_TOXTRICITY || species == SPECIES_ALCREMIE || species == SPECIES_BASCULEGION
        || species == SPECIES_OINKOLOGNE || species == SPECIES_MAUSHOLD || species == SPECIES_SQUAWKABILLY || species == SPECIES_TATSUGIRI || species == SPECIES_DUDUNSPARCE)
    {
        u16 i;

        if (species == SPECIES_UNOWN)
        {
            // The other Unowns are separate from Unown A.
            i = GET_UNOWN_LETTER(personality);
            if (i == 0)
                i = SPECIES_UNOWN;
            else
                i += SPECIES_UNOWN_B - 1;
        }
        else if (species == SPECIES_SHELLOS || species == SPECIES_GASTRODON)
        {
            i = (personality >> 8) % 2;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_SHELLOS)
                    i = SPECIES_SHELLOS_EAST_SEA;
                else
                    i = SPECIES_GASTRODON_EAST_SEA;
            }
        }
        else if (species == SPECIES_MAUSHOLD || species == SPECIES_DUDUNSPARCE)
        {
            i = (personality >> 8) % 100;
            if (i != 69) //  nice
                i = species;
            else
            {
                if (species == SPECIES_MAUSHOLD)
                    i = SPECIES_MAUSHOLD_FAMILY_OF_THREE;
                else
                    i = SPECIES_DUDUNSPARCE_THREE_SEGMENT;
            }
        }
        else if (species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_PUMPKABOO || species == SPECIES_GOURGEIST || species == SPECIES_SQUAWKABILLY)
        {
            i = (personality >> 8) % 4;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_DEERLING)
                    i += SPECIES_DEERLING_SUMMER - 1;
                else if (species == SPECIES_SAWSBUCK)
                    i += SPECIES_SAWSBUCK_SUMMER - 1;
                else if (species == SPECIES_SQUAWKABILLY)
                    i += SPECIES_SQUAWKABILLY_BLUE_PLUMAGE - 1;
                else if (species == SPECIES_PUMPKABOO)
                    i += SPECIES_PUMPKABOO_SMALL - 1;
                else
                    i += SPECIES_GOURGEIST_SMALL - 1;
            }
        }
        else if (species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES)
        {
            i = (personality >> 8) % 5;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_FLABEBE)
                    i += SPECIES_FLABEBE_YELLOW_FLOWER - 1;
                else if (species == SPECIES_FLOETTE)
                    i += SPECIES_FLOETTE_YELLOW_FLOWER - 1;
                else
                    i += SPECIES_FLORGES_YELLOW_FLOWER - 1;
            }
        }
        else if (species == SPECIES_VIVILLON)
        {
            i = (personality >> 8) % 20;
            if (!i)
                i = species;
            else
                i += SPECIES_VIVILLON_POLAR - 1;
        }
        else if (species == SPECIES_MINIOR_CORE_RED)
        {
            i = (personality >> 8) % 7;
            if (!i)
                i = species;
            else
                i += SPECIES_MINIOR_CORE_ORANGE - 1;
        }
        else if (species == SPECIES_ALCREMIE)
        {
            i = (personality >> 8) % 9;
            if (!i)
                i = species;
            else
                i += SPECIES_ALCREMIE_RUBY_CREAM - 1;
        }
        else if (species == SPECIES_TATSUGIRI)
        {
            i = (personality >> 8) % 3;
            if (!i)
                i = species;
            else
                i += SPECIES_TATSUGIRI_DROOPY - 1;
        }
        else if (species == SPECIES_TOXTRICITY)
        {
            if ((personality % 25) == 0 || (personality % 25) == 2 || (personality % 25) == 3 || (personality % 25) == 4 ||
            (personality % 25) == 6 || (personality % 25) == 8 || (personality % 25) == 9 || (personality % 25) == 11 || 
            (personality % 25) == 13 || (personality % 25) == 14 || (personality % 25) == 19 || (personality % 25) == 22 || (personality % 25) == 24)
                i = species;
            else
                i = SPECIES_TOXTRICITY_LOW_KEY;
        }
        else if (species == SPECIES_PYROAR)
        {
            if ((personality % 0x100) >= 0xDF)
                i = species;
            else
                i = SPECIES_PYROAR_FEMALE;
        }
        else
        {
            if ((personality % 0x100) >= 0x7F)
                i = species;
            else
                if (species == SPECIES_HIPPOPOTAS)
                    i = SPECIES_HIPPOPOTAS_FEMALE;
                else if (species == SPECIES_HIPPOWDON)
                    i = SPECIES_HIPPOWDON_FEMALE;
                else if (species == SPECIES_UNFEZANT)
                    i = SPECIES_UNFEZANT_FEMALE;
                else if (species == SPECIES_FRILLISH)
                    i = SPECIES_FRILLISH_FEMALE;
                else if (species == SPECIES_JELLICENT)
                    i = SPECIES_JELLICENT_FEMALE;
                else if (species == SPECIES_MEOWSTIC)
                    i = SPECIES_MEOWSTIC_FEMALE;
                else if (species == SPECIES_OINKOLOGNE)
                    i = SPECIES_OINKOLOGNE_FEMALE;
                else
                    i = SPECIES_BASCULEGION_FEMALE;
        }

        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else if (species > NUM_SPECIES) // is species unknown? draw the ? icon
        LZ77UnCompWram(gMonFrontPicTable[0].data, dest);
    else
        LZ77UnCompWram(src->data, dest);

    DrawSpindaSpots(species, personality, dest, isFrontPic);
}

static void DuplicateDeoxysTiles(void *pointer, s32 species)
{
    if (species == SPECIES_DEOXYS)
        CpuCopy32(pointer + MON_PIC_SIZE, pointer, MON_PIC_SIZE);
}
