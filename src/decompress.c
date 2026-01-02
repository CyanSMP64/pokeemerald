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

    LoadSpecialPokePic(src, dest, species, personality, isFrontPic);
}

void LoadSpecialPokePic(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    if (species == SPECIES_UNOWN || species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_HIPPOPOTAS || species == SPECIES_HIPPOWDON
        || species == SPECIES_UNFEZANT || species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_FRILLISH || species == SPECIES_JELLICENT
        || species == SPECIES_VIVILLON || species == SPECIES_PYROAR || species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES
        || species == SPECIES_MINIOR_CORE_RED || species == SPECIES_ALCREMIE || species == SPECIES_MAUSHOLD || species == SPECIES_SQUAWKABILLY
        || species == SPECIES_TATSUGIRI || species == SPECIES_DUDUNSPARCE || species == SPECIES_FURFROU || species == SPECIES_COMBEE
        || species == SPECIES_MAGEARNA || species == SPECIES_CRAMORANT || species == SPECIES_ZARUDE || species == SPECIES_PIKACHU_CAP || species == SPECIES_PACHIRISU
        
        || species == SPECIES_VENUSAUR || species == SPECIES_BUTTERFREE || species == SPECIES_RATTATA || species == SPECIES_RATICATE
        || species == SPECIES_PIKACHU || species == SPECIES_PIKACHU_PARTNER || species == SPECIES_RAICHU || species == SPECIES_ZUBAT
        || species == SPECIES_GOLBAT || species == SPECIES_GLOOM || species == SPECIES_VILEPLUME || species == SPECIES_KADABRA
        || species == SPECIES_ALAKAZAM || species == SPECIES_DODUO || species == SPECIES_DODRIO || species == SPECIES_HYPNO
        || species == SPECIES_RHYHORN || species == SPECIES_RHYDON || species == SPECIES_GOLDEEN || species == SPECIES_SEAKING
        || species == SPECIES_SCYTHER || species == SPECIES_MAGIKARP || species == SPECIES_GYARADOS || species == SPECIES_EEVEE
        || species == SPECIES_EEVEE_PARTNER
        
        || species == SPECIES_MEGANIUM || species == SPECIES_LEDYBA || species == SPECIES_LEDIAN || species == SPECIES_XATU
        || species == SPECIES_SUDOWOODO || species == SPECIES_POLITOED || species == SPECIES_AIPOM || species == SPECIES_WOOPER
        || species == SPECIES_QUAGSIRE || species == SPECIES_MURKROW || species == SPECIES_WOBBUFFET || species == SPECIES_GIRAFARIG
        || species == SPECIES_GLIGAR || species == SPECIES_STEELIX || species == SPECIES_SCIZOR || species == SPECIES_HERACROSS
        || species == SPECIES_SNEASEL || species == SPECIES_SNEASEL_HISUIAN || species == SPECIES_URSARING || species == SPECIES_PILOSWINE
        || species == SPECIES_OCTILLERY || species == SPECIES_HOUNDOOM || species == SPECIES_DONPHAN
        
        || species == SPECIES_TORCHIC || species == SPECIES_COMBUSKEN || species == SPECIES_BLAZIKEN || species == SPECIES_BEAUTIFLY
        || species == SPECIES_DUSTOX || species == SPECIES_LUDICOLO || species == SPECIES_NUZLEAF || species == SPECIES_SHIFTRY
        || species == SPECIES_MEDITITE || species == SPECIES_MEDICHAM || species == SPECIES_ROSELIA || species == SPECIES_GULPIN
        || species == SPECIES_SWALOT || species == SPECIES_NUMEL || species == SPECIES_CAMERUPT || species == SPECIES_CACTURNE
        || species == SPECIES_MILOTIC || species == SPECIES_RELICANTH
        
        || species == SPECIES_STARLY || species == SPECIES_STARAVIA || species == SPECIES_STARAPTOR || species == SPECIES_BIDOOF
        || species == SPECIES_BIBAREL || species == SPECIES_KRICKETOT || species == SPECIES_KRICKETUNE || species == SPECIES_SHINX
        || species == SPECIES_LUXIO || species == SPECIES_LUXRAY || species == SPECIES_ROSERADE || species == SPECIES_BUIZEL
        || species == SPECIES_FLOATZEL || species == SPECIES_AMBIPOM || species == SPECIES_GIBLE || species == SPECIES_GABITE
        || species == SPECIES_GARCHOMP || species == SPECIES_CROAGUNK || species == SPECIES_TOXICROAK || species == SPECIES_FINNEON
        || species == SPECIES_LUMINEON || species == SPECIES_SNOVER || species == SPECIES_ABOMASNOW || species == SPECIES_WEAVILE
        || species == SPECIES_RHYPERIOR || species == SPECIES_TANGROWTH || species == SPECIES_MAMOSWINE || species == SPECIES_PACHIRISU)
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
        else if (species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_MAGEARNA || species == SPECIES_ZARUDE)
        {
            i = (personality >> 8) % 2;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_SHELLOS)
                    i = SPECIES_SHELLOS_EAST_SEA;
                else if (species == SPECIES_MAGEARNA)
                    i = SPECIES_MAGEARNA_ORIGINAL_COLOR;
                else if (species == SPECIES_ZARUDE)
                    i = SPECIES_ZARUDE_DADA;
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
        else if (species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_SQUAWKABILLY)
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
                else
                    i += SPECIES_SQUAWKABILLY_BLUE_PLUMAGE - 1;
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
        else if (species == SPECIES_VIVILLON || species == SPECIES_CRAMORANT || species == SPECIES_FURFROU)
        {
            i = (personality >> 8) % 20;
            if (species == SPECIES_VIVILLON) {
                if (!i)
                    i = species;
                else
                    i += SPECIES_VIVILLON_POLAR - 1;
            }
            else if (species == SPECIES_CRAMORANT) {
                if (i < 16)
                    i = species;
                else if (i == 19)
                    i = SPECIES_CRAMORANT_GORGING;
                else
                    i = SPECIES_CRAMORANT_GULPING;
            }
            else {
                if (i <= 10)
                    i = species;
                else
                    i += SPECIES_FURFROU_TRIM_1 - 11;
            }
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
            i = (personality >> 8) % 63;
            if (!i)
                i = species;
            else
                i += SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM - 1;
        }
        else if (species == SPECIES_TATSUGIRI)
        {
            i = (personality >> 8) % 3;
            if (!i)
                i = species;
            else
                i += SPECIES_TATSUGIRI_DROOPY - 1;
        }
        // 12.5% male
        else if (species == SPECIES_PYROAR)
        {
            if ((personality % 0x100) >= 0xDF)
                i = species;
            else
                i = SPECIES_PYROAR_FEMALE;
        }
        // 87.5% male
        else if (species == SPECIES_VENUSAUR || species == SPECIES_EEVEE || species == SPECIES_EEVEE_PARTNER || species == SPECIES_MEGANIUM
              || species == SPECIES_TORCHIC || species == SPECIES_COMBUSKEN || species == SPECIES_BLAZIKEN || species == SPECIES_RELICANTH
              || species == SPECIES_COMBEE)
        {
            if ((personality % 0x100) >= 0x1F)
                i = species;
            else
                if (species == SPECIES_VENUSAUR)
                    i = SPECIES_VENUSAUR_FEMALE;
                else if (species == SPECIES_EEVEE)
                    i = SPECIES_EEVEE_FEMALE;
                else if (species == SPECIES_EEVEE_PARTNER)
                    i = SPECIES_EEVEE_PARTNER_FEMALE;
                else if (species == SPECIES_MEGANIUM)
                    i = SPECIES_MEGANIUM_FEMALE;
                else if (species == SPECIES_TORCHIC)
                    i = SPECIES_TORCHIC_FEMALE;
                else if (species == SPECIES_COMBUSKEN)
                    i = SPECIES_COMBUSKEN_FEMALE;
                else if (species == SPECIES_BLAZIKEN)
                    i = SPECIES_BLAZIKEN_FEMALE;
                else if (species == SPECIES_RELICANTH)
                    i = SPECIES_RELICANTH_FEMALE;
                else if (species == SPECIES_COMBEE)
                    i = SPECIES_COMBEE_FEMALE;
        }
        // 75% male
        else if (species == SPECIES_KADABRA || species == SPECIES_ALAKAZAM)
        {
            if ((personality % 0x100) >= 0x3F)
                i = species;
            else
                if (species == SPECIES_KADABRA)
                    i = SPECIES_KADABRA_FEMALE;
                else if (species == SPECIES_ALAKAZAM)
                    i = SPECIES_ALAKAZAM_FEMALE;
        }
        // 50% male
        else
        {
            if ((personality % 0x100) >= 0x7F) {
                if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 8 == 1)
                        i = SPECIES_PIKACHU_CAP_2;
                    else if ((personality >> 8) % 8 == 2)
                        i = SPECIES_PIKACHU_CAP_3;
                    else if ((personality >> 8) % 8 == 3)
                        i = SPECIES_PIKACHU_CAP_4;
                    else if ((personality >> 8) % 8 == 4)
                        i = SPECIES_PIKACHU_CAP_5;
                    else if ((personality >> 8) % 8 == 5)
                        i = SPECIES_PIKACHU_CAP_6;
                    else if ((personality >> 8) % 8 == 6)
                        i = SPECIES_PIKACHU_CAP_7;
                    else if ((personality >> 8) % 8 == 7)
                        i = SPECIES_PIKACHU_CAP_8;
                    else
                        i = species;
                }
                else
                    i = species;
            }
            else
                if (species == SPECIES_HIPPOPOTAS)
                    i = SPECIES_HIPPOPOTAS_FEMALE;
                else if (species == SPECIES_HIPPOWDON)
                    i = SPECIES_HIPPOWDON_FEMALE;
                else if (species == SPECIES_UNFEZANT)
                    i = SPECIES_UNFEZANT_FEMALE;
                else if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 6 == 0)
                        i = SPECIES_PIKACHU_COSPLAY_1;
                    else if ((personality >> 8) % 6 == 1)
                        i = SPECIES_PIKACHU_COSPLAY_2;
                    else if ((personality >> 8) % 6 == 2)
                        i = SPECIES_PIKACHU_COSPLAY_3;
                    else if ((personality >> 8) % 6 == 3)
                        i = SPECIES_PIKACHU_COSPLAY_4;
                    else if ((personality >> 8) % 6 == 4)
                        i = SPECIES_PIKACHU_COSPLAY_5;
                    else
                        i = SPECIES_PIKACHU_COSPLAY_6;
                }
                else if (species == SPECIES_FRILLISH)
                    i = SPECIES_FRILLISH_FEMALE;
                else if (species == SPECIES_JELLICENT)
                    i = SPECIES_JELLICENT_FEMALE;

                else if (species == SPECIES_BUTTERFREE)
                    i = SPECIES_BUTTERFREE_FEMALE;
                else if (species == SPECIES_RATTATA)
                    i = SPECIES_RATTATA_FEMALE;
                else if (species == SPECIES_RATICATE)
                    i = SPECIES_RATICATE_FEMALE;
                else if (species == SPECIES_PIKACHU)
                    i = SPECIES_PIKACHU_FEMALE;
                else if (species == SPECIES_PIKACHU_PARTNER)
                    i = SPECIES_PIKACHU_PARTNER_FEMALE;
                else if (species == SPECIES_RAICHU)
                    i = SPECIES_RAICHU_FEMALE;
                else if (species == SPECIES_ZUBAT)
                    i = SPECIES_ZUBAT_FEMALE;
                else if (species == SPECIES_GOLBAT)
                    i = SPECIES_GOLBAT_FEMALE;
                else if (species == SPECIES_GLOOM)
                    i = SPECIES_GLOOM_FEMALE;
                else if (species == SPECIES_VILEPLUME)
                    i = SPECIES_VILEPLUME_FEMALE;
                else if (species == SPECIES_DODUO)
                    i = SPECIES_DODUO_FEMALE;
                else if (species == SPECIES_DODRIO)
                    i = SPECIES_DODRIO_FEMALE;
                else if (species == SPECIES_HYPNO)
                    i = SPECIES_HYPNO_FEMALE;
                else if (species == SPECIES_RHYHORN)
                    i = SPECIES_RHYHORN_FEMALE;
                else if (species == SPECIES_RHYDON)
                    i = SPECIES_RHYDON_FEMALE;
                else if (species == SPECIES_GOLDEEN)
                    i = SPECIES_GOLDEEN_FEMALE;
                else if (species == SPECIES_SEAKING)
                    i = SPECIES_SEAKING_FEMALE;
                else if (species == SPECIES_SCYTHER)
                    i = SPECIES_SCYTHER_FEMALE;
                else if (species == SPECIES_MAGIKARP)
                    i = SPECIES_MAGIKARP_FEMALE;
                else if (species == SPECIES_GYARADOS)
                    i = SPECIES_GYARADOS_FEMALE;
                else if (species == SPECIES_LEDYBA)
                    i = SPECIES_LEDYBA_FEMALE;
                else if (species == SPECIES_LEDIAN)
                    i = SPECIES_LEDIAN_FEMALE;
                else if (species == SPECIES_XATU)
                    i = SPECIES_XATU_FEMALE;
                else if (species == SPECIES_SUDOWOODO)
                    i = SPECIES_SUDOWOODO_FEMALE;
                else if (species == SPECIES_POLITOED)
                    i = SPECIES_POLITOED_FEMALE;
                else if (species == SPECIES_AIPOM)
                    i = SPECIES_AIPOM_FEMALE;
                else if (species == SPECIES_WOOPER)
                    i = SPECIES_WOOPER_FEMALE;
                else if (species == SPECIES_QUAGSIRE)
                    i = SPECIES_QUAGSIRE_FEMALE;
                else if (species == SPECIES_MURKROW)
                    i = SPECIES_MURKROW_FEMALE;
                else if (species == SPECIES_WOBBUFFET)
                    i = SPECIES_WOBBUFFET_FEMALE;
                else if (species == SPECIES_GIRAFARIG)
                    i = SPECIES_GIRAFARIG_FEMALE;
                else if (species == SPECIES_GLIGAR)
                    i = SPECIES_GLIGAR_FEMALE;
                else if (species == SPECIES_STEELIX)
                    i = SPECIES_STEELIX_FEMALE;
                else if (species == SPECIES_SCIZOR)
                    i = SPECIES_SCIZOR_FEMALE;
                else if (species == SPECIES_HERACROSS)
                    i = SPECIES_HERACROSS_FEMALE;
                else if (species == SPECIES_SNEASEL)
                    i = SPECIES_SNEASEL_FEMALE;
                else if (species == SPECIES_SNEASEL_HISUIAN)
                    i = SPECIES_SNEASEL_HISUIAN_FEMALE;
                else if (species == SPECIES_URSARING)
                    i = SPECIES_URSARING_FEMALE;
                else if (species == SPECIES_PILOSWINE)
                    i = SPECIES_PILOSWINE_FEMALE;
                else if (species == SPECIES_OCTILLERY)
                    i = SPECIES_OCTILLERY_FEMALE;
                else if (species == SPECIES_HOUNDOOM)
                    i = SPECIES_HOUNDOOM_FEMALE;
                else if (species == SPECIES_DONPHAN)
                    i = SPECIES_DONPHAN_FEMALE;
                else if (species == SPECIES_BEAUTIFLY)
                    i = SPECIES_BEAUTIFLY_FEMALE;
                else if (species == SPECIES_DUSTOX)
                    i = SPECIES_DUSTOX_FEMALE;
                else if (species == SPECIES_LUDICOLO)
                    i = SPECIES_LUDICOLO_FEMALE;
                else if (species == SPECIES_NUZLEAF)
                    i = SPECIES_NUZLEAF_FEMALE;
                else if (species == SPECIES_SHIFTRY)
                    i = SPECIES_SHIFTRY_FEMALE;
                else if (species == SPECIES_MEDITITE)
                    i = SPECIES_MEDITITE_FEMALE;
                else if (species == SPECIES_MEDICHAM)
                    i = SPECIES_MEDICHAM_FEMALE;
                else if (species == SPECIES_ROSELIA)
                    i = SPECIES_ROSELIA_FEMALE;
                else if (species == SPECIES_GULPIN)
                    i = SPECIES_GULPIN_FEMALE;
                else if (species == SPECIES_SWALOT)
                    i = SPECIES_SWALOT_FEMALE;
                else if (species == SPECIES_NUMEL)
                    i = SPECIES_NUMEL_FEMALE;
                else if (species == SPECIES_CAMERUPT)
                    i = SPECIES_CAMERUPT_FEMALE;
                else if (species == SPECIES_CACTURNE)
                    i = SPECIES_CACTURNE_FEMALE;
                else if (species == SPECIES_MILOTIC)
                    i = SPECIES_MILOTIC_FEMALE;
                else if (species == SPECIES_STARLY)
                    i = SPECIES_STARLY_FEMALE;
                else if (species == SPECIES_STARAVIA)
                    i = SPECIES_STARAVIA_FEMALE;
                else if (species == SPECIES_STARAPTOR)
                    i = SPECIES_STARAPTOR_FEMALE;
                else if (species == SPECIES_BIDOOF)
                    i = SPECIES_BIDOOF_FEMALE;
                else if (species == SPECIES_BIBAREL)
                    i = SPECIES_BIBAREL_FEMALE;
                else if (species == SPECIES_KRICKETOT)
                    i = SPECIES_KRICKETOT_FEMALE;
                else if (species == SPECIES_KRICKETUNE)
                    i = SPECIES_KRICKETUNE_FEMALE;
                else if (species == SPECIES_SHINX)
                    i = SPECIES_SHINX_FEMALE;
                else if (species == SPECIES_LUXIO)
                    i = SPECIES_LUXIO_FEMALE;
                else if (species == SPECIES_LUXRAY)
                    i = SPECIES_LUXRAY_FEMALE;
                else if (species == SPECIES_ROSERADE)
                    i = SPECIES_ROSERADE_FEMALE;
                else if (species == SPECIES_PACHIRISU)
                    i = SPECIES_PACHIRISU_FEMALE;
                else if (species == SPECIES_BUIZEL)
                    i = SPECIES_BUIZEL_FEMALE;
                else if (species == SPECIES_FLOATZEL)
                    i = SPECIES_FLOATZEL_FEMALE;
                else if (species == SPECIES_AMBIPOM)
                    i = SPECIES_AMBIPOM_FEMALE;
                else if (species == SPECIES_GIBLE)
                    i = SPECIES_GIBLE_FEMALE;
                else if (species == SPECIES_GABITE)
                    i = SPECIES_GABITE_FEMALE;
                else if (species == SPECIES_GARCHOMP)
                    i = SPECIES_GARCHOMP_FEMALE;
                else if (species == SPECIES_CROAGUNK)
                    i = SPECIES_CROAGUNK_FEMALE;
                else if (species == SPECIES_TOXICROAK)
                    i = SPECIES_TOXICROAK_FEMALE;
                else if (species == SPECIES_FINNEON)
                    i = SPECIES_FINNEON_FEMALE;
                else if (species == SPECIES_LUMINEON)
                    i = SPECIES_LUMINEON_FEMALE;
                else if (species == SPECIES_SNOVER)
                    i = SPECIES_SNOVER_FEMALE;
                else if (species == SPECIES_ABOMASNOW)
                    i = SPECIES_ABOMASNOW_FEMALE;
                else if (species == SPECIES_WEAVILE)
                    i = SPECIES_WEAVILE_FEMALE;
                else if (species == SPECIES_RHYPERIOR)
                    i = SPECIES_RHYPERIOR_FEMALE;
                else if (species == SPECIES_TANGROWTH)
                    i = SPECIES_TANGROWTH_FEMALE;
                else if (species == SPECIES_MAMOSWINE)
                    i = SPECIES_MAMOSWINE_FEMALE;
        }

        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else if (species > NUM_SPECIES && species != SPECIES_KELDEO_RESOLUTE) // is species unknown? draw the ? icon
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

void HandleLoadSpecialPokePic_2(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality) // a copy of HandleLoadSpecialPokePic
{
    bool8 isFrontPic;

    if (src == &gMonFrontPicTable[species])
        isFrontPic = TRUE; // frontPic
    else
        isFrontPic = FALSE; // backPic

    LoadSpecialPokePic(src, dest, species, personality, isFrontPic);
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
        || species == SPECIES_UNFEZANT || species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_FRILLISH || species == SPECIES_JELLICENT
        || species == SPECIES_VIVILLON || species == SPECIES_PYROAR || species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES
        || species == SPECIES_MINIOR_CORE_RED || species == SPECIES_ALCREMIE || species == SPECIES_MAUSHOLD || species == SPECIES_SQUAWKABILLY
        || species == SPECIES_TATSUGIRI || species == SPECIES_DUDUNSPARCE || species == SPECIES_FURFROU || species == SPECIES_COMBEE
        || species == SPECIES_MAGEARNA || species == SPECIES_CRAMORANT || species == SPECIES_ZARUDE || species == SPECIES_PIKACHU_CAP || species == SPECIES_PACHIRISU
        
        || species == SPECIES_VENUSAUR || species == SPECIES_BUTTERFREE || species == SPECIES_RATTATA || species == SPECIES_RATICATE
        || species == SPECIES_PIKACHU || species == SPECIES_PIKACHU_PARTNER || species == SPECIES_RAICHU || species == SPECIES_ZUBAT
        || species == SPECIES_GOLBAT || species == SPECIES_GLOOM || species == SPECIES_VILEPLUME || species == SPECIES_KADABRA
        || species == SPECIES_ALAKAZAM || species == SPECIES_DODUO || species == SPECIES_DODRIO || species == SPECIES_HYPNO
        || species == SPECIES_RHYHORN || species == SPECIES_RHYDON || species == SPECIES_GOLDEEN || species == SPECIES_SEAKING
        || species == SPECIES_SCYTHER || species == SPECIES_MAGIKARP || species == SPECIES_GYARADOS || species == SPECIES_EEVEE
        || species == SPECIES_EEVEE_PARTNER
        
        || species == SPECIES_MEGANIUM || species == SPECIES_LEDYBA || species == SPECIES_LEDIAN || species == SPECIES_XATU
        || species == SPECIES_SUDOWOODO || species == SPECIES_POLITOED || species == SPECIES_AIPOM || species == SPECIES_WOOPER
        || species == SPECIES_QUAGSIRE || species == SPECIES_MURKROW || species == SPECIES_WOBBUFFET || species == SPECIES_GIRAFARIG
        || species == SPECIES_GLIGAR || species == SPECIES_STEELIX || species == SPECIES_SCIZOR || species == SPECIES_HERACROSS
        || species == SPECIES_SNEASEL || species == SPECIES_SNEASEL_HISUIAN || species == SPECIES_URSARING || species == SPECIES_PILOSWINE
        || species == SPECIES_OCTILLERY || species == SPECIES_HOUNDOOM || species == SPECIES_DONPHAN
        
        || species == SPECIES_TORCHIC || species == SPECIES_COMBUSKEN || species == SPECIES_BLAZIKEN || species == SPECIES_BEAUTIFLY
        || species == SPECIES_DUSTOX || species == SPECIES_LUDICOLO || species == SPECIES_NUZLEAF || species == SPECIES_SHIFTRY
        || species == SPECIES_MEDITITE || species == SPECIES_MEDICHAM || species == SPECIES_ROSELIA || species == SPECIES_GULPIN
        || species == SPECIES_SWALOT || species == SPECIES_NUMEL || species == SPECIES_CAMERUPT || species == SPECIES_CACTURNE
        || species == SPECIES_MILOTIC || species == SPECIES_RELICANTH
        
        || species == SPECIES_STARLY || species == SPECIES_STARAVIA || species == SPECIES_STARAPTOR || species == SPECIES_BIDOOF
        || species == SPECIES_BIBAREL || species == SPECIES_KRICKETOT || species == SPECIES_KRICKETUNE || species == SPECIES_SHINX
        || species == SPECIES_LUXIO || species == SPECIES_LUXRAY || species == SPECIES_ROSERADE || species == SPECIES_BUIZEL
        || species == SPECIES_FLOATZEL || species == SPECIES_AMBIPOM || species == SPECIES_GIBLE || species == SPECIES_GABITE
        || species == SPECIES_GARCHOMP || species == SPECIES_CROAGUNK || species == SPECIES_TOXICROAK || species == SPECIES_FINNEON
        || species == SPECIES_LUMINEON || species == SPECIES_SNOVER || species == SPECIES_ABOMASNOW || species == SPECIES_WEAVILE
        || species == SPECIES_RHYPERIOR || species == SPECIES_TANGROWTH || species == SPECIES_MAMOSWINE || species == SPECIES_PACHIRISU)
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
        else if (species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_MAGEARNA || species == SPECIES_ZARUDE)
        {
            i = (personality >> 8) % 2;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_SHELLOS)
                    i = SPECIES_SHELLOS_EAST_SEA;
                else if (species == SPECIES_MAGEARNA)
                    i = SPECIES_MAGEARNA_ORIGINAL_COLOR;
                else if (species == SPECIES_ZARUDE)
                    i = SPECIES_ZARUDE_DADA;
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
        else if (species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_SQUAWKABILLY)
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
                else
                    i += SPECIES_SQUAWKABILLY_BLUE_PLUMAGE - 1;
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
        else if (species == SPECIES_VIVILLON || species == SPECIES_CRAMORANT || species == SPECIES_FURFROU)
        {
            i = (personality >> 8) % 20;
            if (species == SPECIES_VIVILLON) {
                if (!i)
                    i = species;
                else
                    i += SPECIES_VIVILLON_POLAR - 1;
            }
            else if (species == SPECIES_CRAMORANT) {
                if (i < 16)
                    i = species;
                else if (i == 19)
                    i = SPECIES_CRAMORANT_GORGING;
                else
                    i = SPECIES_CRAMORANT_GULPING;
            }
            else {
                if (i <= 10)
                    i = species;
                else
                    i += SPECIES_FURFROU_TRIM_1 - 11;
            }
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
            i = (personality >> 8) % 63;
            if (!i)
                i = species;
            else
                i += SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM - 1;
        }
        else if (species == SPECIES_TATSUGIRI)
        {
            i = (personality >> 8) % 3;
            if (!i)
                i = species;
            else
                i += SPECIES_TATSUGIRI_DROOPY - 1;
        }
        // 12.5% male
        else if (species == SPECIES_PYROAR)
        {
            if ((personality % 0x100) >= 0xDF)
                i = species;
            else
                i = SPECIES_PYROAR_FEMALE;
        }
        // 87.5% male
        else if (species == SPECIES_VENUSAUR || species == SPECIES_EEVEE || species == SPECIES_EEVEE_PARTNER || species == SPECIES_MEGANIUM
              || species == SPECIES_TORCHIC || species == SPECIES_COMBUSKEN || species == SPECIES_BLAZIKEN || species == SPECIES_RELICANTH
              || species == SPECIES_COMBEE)
        {
            if ((personality % 0x100) >= 0x1F)
                i = species;
            else
                if (species == SPECIES_VENUSAUR)
                    i = SPECIES_VENUSAUR_FEMALE;
                else if (species == SPECIES_EEVEE)
                    i = SPECIES_EEVEE_FEMALE;
                else if (species == SPECIES_EEVEE_PARTNER)
                    i = SPECIES_EEVEE_PARTNER_FEMALE;
                else if (species == SPECIES_MEGANIUM)
                    i = SPECIES_MEGANIUM_FEMALE;
                else if (species == SPECIES_TORCHIC)
                    i = SPECIES_TORCHIC_FEMALE;
                else if (species == SPECIES_COMBUSKEN)
                    i = SPECIES_COMBUSKEN_FEMALE;
                else if (species == SPECIES_BLAZIKEN)
                    i = SPECIES_BLAZIKEN_FEMALE;
                else if (species == SPECIES_RELICANTH)
                    i = SPECIES_RELICANTH_FEMALE;
                else if (species == SPECIES_COMBEE)
                    i = SPECIES_COMBEE_FEMALE;
        }
        // 75% male
        else if (species == SPECIES_KADABRA || species == SPECIES_ALAKAZAM)
        {
            if ((personality % 0x100) >= 0x3F)
                i = species;
            else
                if (species == SPECIES_KADABRA)
                    i = SPECIES_KADABRA_FEMALE;
                else if (species == SPECIES_ALAKAZAM)
                    i = SPECIES_ALAKAZAM_FEMALE;
        }
        // 50% male
        else
        {
            if ((personality % 0x100) >= 0x7F) {
                if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 8 == 1)
                        i = SPECIES_PIKACHU_CAP_2;
                    else if ((personality >> 8) % 8 == 2)
                        i = SPECIES_PIKACHU_CAP_3;
                    else if ((personality >> 8) % 8 == 3)
                        i = SPECIES_PIKACHU_CAP_4;
                    else if ((personality >> 8) % 8 == 4)
                        i = SPECIES_PIKACHU_CAP_5;
                    else if ((personality >> 8) % 8 == 5)
                        i = SPECIES_PIKACHU_CAP_6;
                    else if ((personality >> 8) % 8 == 6)
                        i = SPECIES_PIKACHU_CAP_7;
                    else if ((personality >> 8) % 8 == 7)
                        i = SPECIES_PIKACHU_CAP_8;
                    else
                        i = species;
                }
                else
                    i = species;
            }
            else
                if (species == SPECIES_HIPPOPOTAS)
                    i = SPECIES_HIPPOPOTAS_FEMALE;
                else if (species == SPECIES_HIPPOWDON)
                    i = SPECIES_HIPPOWDON_FEMALE;
                else if (species == SPECIES_UNFEZANT)
                    i = SPECIES_UNFEZANT_FEMALE;
                else if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 6 == 0)
                        i = SPECIES_PIKACHU_COSPLAY_1;
                    else if ((personality >> 8) % 6 == 1)
                        i = SPECIES_PIKACHU_COSPLAY_2;
                    else if ((personality >> 8) % 6 == 2)
                        i = SPECIES_PIKACHU_COSPLAY_3;
                    else if ((personality >> 8) % 6 == 3)
                        i = SPECIES_PIKACHU_COSPLAY_4;
                    else if ((personality >> 8) % 6 == 4)
                        i = SPECIES_PIKACHU_COSPLAY_5;
                    else
                        i = SPECIES_PIKACHU_COSPLAY_6;
                }
                else if (species == SPECIES_FRILLISH)
                    i = SPECIES_FRILLISH_FEMALE;
                else if (species == SPECIES_JELLICENT)
                    i = SPECIES_JELLICENT_FEMALE;

                else if (species == SPECIES_BUTTERFREE)
                    i = SPECIES_BUTTERFREE_FEMALE;
                else if (species == SPECIES_RATTATA)
                    i = SPECIES_RATTATA_FEMALE;
                else if (species == SPECIES_RATICATE)
                    i = SPECIES_RATICATE_FEMALE;
                else if (species == SPECIES_PIKACHU)
                    i = SPECIES_PIKACHU_FEMALE;
                else if (species == SPECIES_PIKACHU_PARTNER)
                    i = SPECIES_PIKACHU_PARTNER_FEMALE;
                else if (species == SPECIES_RAICHU)
                    i = SPECIES_RAICHU_FEMALE;
                else if (species == SPECIES_ZUBAT)
                    i = SPECIES_ZUBAT_FEMALE;
                else if (species == SPECIES_GOLBAT)
                    i = SPECIES_GOLBAT_FEMALE;
                else if (species == SPECIES_GLOOM)
                    i = SPECIES_GLOOM_FEMALE;
                else if (species == SPECIES_VILEPLUME)
                    i = SPECIES_VILEPLUME_FEMALE;
                else if (species == SPECIES_DODUO)
                    i = SPECIES_DODUO_FEMALE;
                else if (species == SPECIES_DODRIO)
                    i = SPECIES_DODRIO_FEMALE;
                else if (species == SPECIES_HYPNO)
                    i = SPECIES_HYPNO_FEMALE;
                else if (species == SPECIES_RHYHORN)
                    i = SPECIES_RHYHORN_FEMALE;
                else if (species == SPECIES_RHYDON)
                    i = SPECIES_RHYDON_FEMALE;
                else if (species == SPECIES_GOLDEEN)
                    i = SPECIES_GOLDEEN_FEMALE;
                else if (species == SPECIES_SEAKING)
                    i = SPECIES_SEAKING_FEMALE;
                else if (species == SPECIES_SCYTHER)
                    i = SPECIES_SCYTHER_FEMALE;
                else if (species == SPECIES_MAGIKARP)
                    i = SPECIES_MAGIKARP_FEMALE;
                else if (species == SPECIES_GYARADOS)
                    i = SPECIES_GYARADOS_FEMALE;
                else if (species == SPECIES_LEDYBA)
                    i = SPECIES_LEDYBA_FEMALE;
                else if (species == SPECIES_LEDIAN)
                    i = SPECIES_LEDIAN_FEMALE;
                else if (species == SPECIES_XATU)
                    i = SPECIES_XATU_FEMALE;
                else if (species == SPECIES_SUDOWOODO)
                    i = SPECIES_SUDOWOODO_FEMALE;
                else if (species == SPECIES_POLITOED)
                    i = SPECIES_POLITOED_FEMALE;
                else if (species == SPECIES_AIPOM)
                    i = SPECIES_AIPOM_FEMALE;
                else if (species == SPECIES_WOOPER)
                    i = SPECIES_WOOPER_FEMALE;
                else if (species == SPECIES_QUAGSIRE)
                    i = SPECIES_QUAGSIRE_FEMALE;
                else if (species == SPECIES_MURKROW)
                    i = SPECIES_MURKROW_FEMALE;
                else if (species == SPECIES_WOBBUFFET)
                    i = SPECIES_WOBBUFFET_FEMALE;
                else if (species == SPECIES_GIRAFARIG)
                    i = SPECIES_GIRAFARIG_FEMALE;
                else if (species == SPECIES_GLIGAR)
                    i = SPECIES_GLIGAR_FEMALE;
                else if (species == SPECIES_STEELIX)
                    i = SPECIES_STEELIX_FEMALE;
                else if (species == SPECIES_SCIZOR)
                    i = SPECIES_SCIZOR_FEMALE;
                else if (species == SPECIES_HERACROSS)
                    i = SPECIES_HERACROSS_FEMALE;
                else if (species == SPECIES_SNEASEL)
                    i = SPECIES_SNEASEL_FEMALE;
                else if (species == SPECIES_SNEASEL_HISUIAN)
                    i = SPECIES_SNEASEL_HISUIAN_FEMALE;
                else if (species == SPECIES_URSARING)
                    i = SPECIES_URSARING_FEMALE;
                else if (species == SPECIES_PILOSWINE)
                    i = SPECIES_PILOSWINE_FEMALE;
                else if (species == SPECIES_OCTILLERY)
                    i = SPECIES_OCTILLERY_FEMALE;
                else if (species == SPECIES_HOUNDOOM)
                    i = SPECIES_HOUNDOOM_FEMALE;
                else if (species == SPECIES_DONPHAN)
                    i = SPECIES_DONPHAN_FEMALE;
                else if (species == SPECIES_BEAUTIFLY)
                    i = SPECIES_BEAUTIFLY_FEMALE;
                else if (species == SPECIES_DUSTOX)
                    i = SPECIES_DUSTOX_FEMALE;
                else if (species == SPECIES_LUDICOLO)
                    i = SPECIES_LUDICOLO_FEMALE;
                else if (species == SPECIES_NUZLEAF)
                    i = SPECIES_NUZLEAF_FEMALE;
                else if (species == SPECIES_SHIFTRY)
                    i = SPECIES_SHIFTRY_FEMALE;
                else if (species == SPECIES_MEDITITE)
                    i = SPECIES_MEDITITE_FEMALE;
                else if (species == SPECIES_MEDICHAM)
                    i = SPECIES_MEDICHAM_FEMALE;
                else if (species == SPECIES_ROSELIA)
                    i = SPECIES_ROSELIA_FEMALE;
                else if (species == SPECIES_GULPIN)
                    i = SPECIES_GULPIN_FEMALE;
                else if (species == SPECIES_SWALOT)
                    i = SPECIES_SWALOT_FEMALE;
                else if (species == SPECIES_NUMEL)
                    i = SPECIES_NUMEL_FEMALE;
                else if (species == SPECIES_CAMERUPT)
                    i = SPECIES_CAMERUPT_FEMALE;
                else if (species == SPECIES_CACTURNE)
                    i = SPECIES_CACTURNE_FEMALE;
                else if (species == SPECIES_MILOTIC)
                    i = SPECIES_MILOTIC_FEMALE;
                else if (species == SPECIES_STARLY)
                    i = SPECIES_STARLY_FEMALE;
                else if (species == SPECIES_STARAVIA)
                    i = SPECIES_STARAVIA_FEMALE;
                else if (species == SPECIES_STARAPTOR)
                    i = SPECIES_STARAPTOR_FEMALE;
                else if (species == SPECIES_BIDOOF)
                    i = SPECIES_BIDOOF_FEMALE;
                else if (species == SPECIES_BIBAREL)
                    i = SPECIES_BIBAREL_FEMALE;
                else if (species == SPECIES_KRICKETOT)
                    i = SPECIES_KRICKETOT_FEMALE;
                else if (species == SPECIES_KRICKETUNE)
                    i = SPECIES_KRICKETUNE_FEMALE;
                else if (species == SPECIES_SHINX)
                    i = SPECIES_SHINX_FEMALE;
                else if (species == SPECIES_LUXIO)
                    i = SPECIES_LUXIO_FEMALE;
                else if (species == SPECIES_LUXRAY)
                    i = SPECIES_LUXRAY_FEMALE;
                else if (species == SPECIES_ROSERADE)
                    i = SPECIES_ROSERADE_FEMALE;
                else if (species == SPECIES_PACHIRISU)
                    i = SPECIES_PACHIRISU_FEMALE;
                else if (species == SPECIES_BUIZEL)
                    i = SPECIES_BUIZEL_FEMALE;
                else if (species == SPECIES_FLOATZEL)
                    i = SPECIES_FLOATZEL_FEMALE;
                else if (species == SPECIES_AMBIPOM)
                    i = SPECIES_AMBIPOM_FEMALE;
                else if (species == SPECIES_GIBLE)
                    i = SPECIES_GIBLE_FEMALE;
                else if (species == SPECIES_GABITE)
                    i = SPECIES_GABITE_FEMALE;
                else if (species == SPECIES_GARCHOMP)
                    i = SPECIES_GARCHOMP_FEMALE;
                else if (species == SPECIES_CROAGUNK)
                    i = SPECIES_CROAGUNK_FEMALE;
                else if (species == SPECIES_TOXICROAK)
                    i = SPECIES_TOXICROAK_FEMALE;
                else if (species == SPECIES_FINNEON)
                    i = SPECIES_FINNEON_FEMALE;
                else if (species == SPECIES_LUMINEON)
                    i = SPECIES_LUMINEON_FEMALE;
                else if (species == SPECIES_SNOVER)
                    i = SPECIES_SNOVER_FEMALE;
                else if (species == SPECIES_ABOMASNOW)
                    i = SPECIES_ABOMASNOW_FEMALE;
                else if (species == SPECIES_WEAVILE)
                    i = SPECIES_WEAVILE_FEMALE;
                else if (species == SPECIES_RHYPERIOR)
                    i = SPECIES_RHYPERIOR_FEMALE;
                else if (species == SPECIES_TANGROWTH)
                    i = SPECIES_TANGROWTH_FEMALE;
                else if (species == SPECIES_MAMOSWINE)
                    i = SPECIES_MAMOSWINE_FEMALE;
        }

        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else if (species > NUM_SPECIES && species != SPECIES_KELDEO_RESOLUTE) // is species unknown? draw the ? icon
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
