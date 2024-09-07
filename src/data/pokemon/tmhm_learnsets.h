#define TMHM_LEARNSET(moves) {(u32)(moves), ((u64)(moves) >> 32)}
#define TMHM(tmhm) ((u64)1 << (ITEM_##tmhm - ITEM_TM01_FOCUS_PUNCH))

// This table determines which TMs and HMs a species is capable of learning.
// Each entry is a 64-bit bit array spread across two 32-bit values, with
// each bit corresponding to a TM or HM.
const u32 gTMHMLearnsets[][2] =
{
    [SPECIES_NONE]                        = TMHM_LEARNSET(0),

    [SPECIES_BULBASAUR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_IVYSAUR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_VENUSAUR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CHARMANDER]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHARMELEON]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHARIZARD]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SQUIRTLE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_WARTORTLE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BLASTOISE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CATERPIE]                    = TMHM_LEARNSET(0),

    [SPECIES_METAPOD]                     = TMHM_LEARNSET(0),

    [SPECIES_BUTTERFREE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_WEEDLE]                      = TMHM_LEARNSET(0),

    [SPECIES_KAKUNA]                      = TMHM_LEARNSET(0),

    [SPECIES_BEEDRILL]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_PIDGEY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_PIDGEOTTO]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_PIDGEOT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_RATTATA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RATICATE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SPEAROW]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_FEAROW]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_EKANS]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_ARBOK]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_PIKACHU]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RAICHU]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SANDSHREW]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SANDSLASH]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_NIDORAN_F]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_NIDORINA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_NIDOQUEEN]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_NIDORAN_M]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_NIDORINO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_NIDOKING]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CLEFAIRY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CLEFABLE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_VULPIX]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_NINETALES]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_JIGGLYPUFF]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_WIGGLYTUFF]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZUBAT]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_GOLBAT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_ODDISH]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_GLOOM]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_VILEPLUME]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_PARAS]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PARASECT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_VENONAT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_VENOMOTH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DIGLETT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DUGTRIO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MEOWTH]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PERSIAN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PSYDUCK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOLDUCK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MANKEY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PRIMEAPE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GROWLITHE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ARCANINE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_POLIWAG]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_POLIWHIRL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_POLIWRATH]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ABRA]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KADABRA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ALAKAZAM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MACHOP]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MACHOKE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MACHAMP]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BELLSPROUT]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_WEEPINBELL]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_VICTREEBEL]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_TENTACOOL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_TENTACRUEL]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_GEODUDE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GRAVELER]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GOLEM]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PONYTA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_RAPIDASH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SLOWPOKE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SLOWBRO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MAGNEMITE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MAGNETON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_FARFETCHD]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_DODUO]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)),

    [SPECIES_DODRIO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SEEL]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_DEWGONG]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_GRIMER]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MUK]                         = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SHELLDER]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_CLOYSTER]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_GASTLY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HAUNTER]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GENGAR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ONIX]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DROWZEE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HYPNO]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KRABBY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_KINGLER]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_VOLTORB]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ELECTRODE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_EXEGGCUTE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_EXEGGUTOR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CUBONE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MAROWAK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HITMONLEE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_HITMONCHAN]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_LICKITUNG]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_KOFFING]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_WEEZING]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_RHYHORN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RHYDON]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHANSEY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TANGELA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_KANGASKHAN]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HORSEA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_SEADRA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_GOLDEEN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_SEAKING]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_STARYU]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_STARMIE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MR_MIME]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SCYTHER]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_JYNX]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ELECTABUZZ]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MAGMAR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PINSIR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TAUROS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MAGIKARP]                    = TMHM_LEARNSET(0),

    [SPECIES_GYARADOS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_LAPRAS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DITTO]                       = TMHM_LEARNSET(0),

    [SPECIES_EEVEE]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_VAPOREON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_JOLTEON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLAREON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PORYGON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_OMANYTE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_OMASTAR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_KABUTO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_KABUTOPS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_AERODACTYL]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SNORLAX]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ARTICUNO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_ZAPDOS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MOLTRES]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_DRATINI]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_DRAGONAIR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_DRAGONITE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_MEWTWO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MEW]                         = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CHIKORITA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_BAYLEEF]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_MEGANIUM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_CYNDAQUIL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_QUILAVA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TYPHLOSION]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TOTODILE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CROCONAW]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FERALIGATR]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SENTRET]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FURRET]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HOOTHOOT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NOCTOWL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LEDYBA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LEDIAN]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SPINARAK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ARIADOS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CROBAT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CHINCHOU]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_LANTURN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_PICHU]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_CLEFFA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_IGGLYBUFF]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TOGEPI]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TOGETIC]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NATU]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_XATU]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MAREEP]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLAAFFY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_AMPHAROS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BELLOSSOM]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MARILL]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_AZUMARILL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SUDOWOODO]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_POLITOED]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HOPPIP]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SKIPLOOM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_JUMPLUFF]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_AIPOM]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SUNKERN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SUNFLORA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_YANMA]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_WOOPER]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_QUAGSIRE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_ESPEON]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_UMBREON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MURKROW]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SLOWKING]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MISDREAVUS]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_UNOWN]                       = TMHM_LEARNSET(0),

    [SPECIES_WOBBUFFET]                   = TMHM_LEARNSET(0),

    [SPECIES_GIRAFARIG]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PINECO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FORRETRESS]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DUNSPARCE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_GLIGAR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_STEELIX]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SNUBBULL]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GRANBULL]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_QWILFISH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SCIZOR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_SHUCKLE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_HERACROSS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SNEASEL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TEDDIURSA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_URSARING]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SLUGMA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_MAGCARGO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SWINUB]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PILOSWINE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CORSOLA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_REMORAID]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_OCTILLERY]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DELIBIRD]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_MANTINE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SKARMORY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_HOUNDOUR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_HOUNDOOM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_KINGDRA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_PHANPY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DONPHAN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PORYGON2]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_STANTLER]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SMEARGLE]                    = TMHM_LEARNSET(0),

    [SPECIES_TYROGUE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_HITMONTOP]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SMOOCHUM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ELEKID]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MAGBY]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MILTANK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_BLISSEY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_RAIKOU]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ENTEI]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SUICUNE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_LARVITAR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PUPITAR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TYRANITAR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LUGIA]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HO_OH]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CELEBI]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_OLD_UNOWN_B]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_C]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_D]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_E]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_F]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_G]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_H]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_I]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_J]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_K]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_L]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_M]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_N]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_O]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_P]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_Q]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_R]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_S]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_T]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_U]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_V]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_W]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_X]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_Y]                 = TMHM_LEARNSET(0),
    [SPECIES_OLD_UNOWN_Z]                 = TMHM_LEARNSET(0),

    [SPECIES_TREECKO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GROVYLE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SCEPTILE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TORCHIC]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_COMBUSKEN]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BLAZIKEN]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MUDKIP]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MARSHTOMP]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SWAMPERT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_POOCHYENA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MIGHTYENA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ZIGZAGOON]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LINOONE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_WURMPLE]                     = TMHM_LEARNSET(0),

    [SPECIES_SILCOON]                     = TMHM_LEARNSET(0),

    [SPECIES_BEAUTIFLY]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CASCOON]                     = TMHM_LEARNSET(0),

    [SPECIES_DUSTOX]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LOTAD]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_LOMBRE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_LUDICOLO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SEEDOT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_NUZLEAF]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SHIFTRY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_NINCADA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_NINJASK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SHEDINJA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TAILLOW]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_SWELLOW]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SHROOMISH]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_BRELOOM]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SPINDA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_WINGULL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_PELIPPER]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SURSKIT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_MASQUERAIN]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_WAILMER]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WAILORD]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SKITTY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DELCATTY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_KECLEON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BALTOY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CLAYDOL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NOSEPASS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_TORKOAL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SABLEYE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BARBOACH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WHISCASH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_LUVDISC]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_CORPHISH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CRAWDAUNT]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FEEBAS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_MILOTIC]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_CARVANHA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_SHARPEDO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_TRAPINCH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_VIBRAVA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLYGON]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MAKUHITA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HARIYAMA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ELECTRIKE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MANECTRIC]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_NUMEL]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CAMERUPT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SPHEAL]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SEALEO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WALREIN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_CACNEA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CACTURNE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SNORUNT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_GLALIE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_LUNATONE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SOLROCK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_AZURILL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_SPOINK]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GRUMPIG]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PLUSLE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MINUN]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MAWILE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_MEDITITE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MEDICHAM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SWABLU]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ALTARIA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WYNAUT]                      = TMHM_LEARNSET(0),

    [SPECIES_DUSKULL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DUSCLOPS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ROSELIA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SLAKOTH]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_VIGOROTH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SLAKING]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GULPIN]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SWALOT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_TROPIUS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WHISMUR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_LOUDRED]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_EXPLOUD]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_CLAMPERL]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_HUNTAIL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_GOREBYSS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ABSOL]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_SHUPPET]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BANETTE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SEVIPER]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_ZANGOOSE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RELICANTH]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_ARON]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LAIRON]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_AGGRON]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CASTFORM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_VOLBEAT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ILLUMISE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_LILEEP]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_CRADILY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ANORITH]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ARMALDO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RALTS]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KIRLIA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GARDEVOIR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BAGON]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_SHELGON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_SALAMENCE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_BELDUM]                      = TMHM_LEARNSET(0),

    [SPECIES_METANG]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_METAGROSS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_REGIROCK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_REGICE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_REGISTEEL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_KYOGRE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_GROUDON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RAYQUAZA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_LATIAS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LATIOS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_JIRACHI]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DEOXYS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CHIMECHO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TURTWIG]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_GROTLE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_TORTERRA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_CHIMCHAR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MONFERNO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_INFERNAPE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PIPLUP]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_PRINPLUP]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_EMPOLEON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_STARLY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_STARAVIA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_STARAPTOR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_BIDOOF]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BIBAREL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_KRICKETOT]                   = TMHM_LEARNSET(0),

    [SPECIES_KRICKETUNE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_SHINX]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_LUXIO]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_LUXRAY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_BUDEW]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ROSERADE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CRANIDOS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RAMPARDOS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SHIELDON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BASTIODON]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BURMY]                       = TMHM_LEARNSET(0),

    [SPECIES_WORMADAM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MOTHIM]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_COMBEE]                      = TMHM_LEARNSET(0),

    [SPECIES_VESPIQUEN]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_PACHIRISU]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BUIZEL]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLOATZEL]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHERUBI]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_CHERRIM]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SHELLOS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_GASTRODON]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_AMBIPOM]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DRIFLOON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DRIFBLIM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BUNEARY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LOPUNNY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MISMAGIUS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HONCHKROW]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GLAMEOW]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PURUGLY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHINGLING]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_STUNKY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SKUNTANK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_BRONZOR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BRONZONG]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BONSLY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MIME_JR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HAPPINY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CHATOT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_SPIRITOMB]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GIBLE]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GABITE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GARCHOMP]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MUNCHLAX]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RIOLU]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LUCARIO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HIPPOPOTAS]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HIPPOWDON]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SKORUPI]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_DRAPION]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CROAGUNK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_TOXICROAK]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CARNIVINE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_FINNEON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_LUMINEON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_MANTYKE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SNOVER]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ABOMASNOW]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WEAVILE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MAGNEZONE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_LICKILICKY]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RHYPERIOR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TANGROWTH]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_ELECTIVIRE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MAGMORTAR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TOGEKISS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_YANMEGA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LEAFEON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GLACEON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GLISCOR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MAMOSWINE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PORYGON_Z]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GALLADE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PROBOPASS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_DUSKNOIR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FROSLASS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ROTOM]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_UXIE]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MESPRIT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_AZELF]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DIALGA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_PALKIA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_HEATRAN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_REGIGIGAS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_GIRATINA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CRESSELIA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PHIONE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_MANAPHY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DARKRAI]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SHAYMIN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ARCEUS]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_VICTINI]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SNIVY]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SERVINE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SERPERIOR]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_TEPIG]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PIGNITE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_EMBOAR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_OSHAWOTT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DEWOTT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SAMUROTT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PATRAT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_WATCHOG]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LILLIPUP]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HERDIER]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_STOUTLAND]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PURRLOIN]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)),

    [SPECIES_LIEPARD]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_PANSAGE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SIMISAGE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PANSEAR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SIMISEAR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PANPOUR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SIMIPOUR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MUNNA]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MUSHARNA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PIDOVE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_TRANQUILL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_UNFEZANT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_BLITZLE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ZEBSTRIKA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ROGGENROLA]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_BOLDORE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_GIGALITH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WOOBAT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SWOOBAT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DRILBUR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_EXCADRILL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_AUDINO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TIMBURR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GURDURR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CONKELDURR]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TYMPOLE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)),

    [SPECIES_PALPITOAD]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)),

    [SPECIES_SEISMITOAD]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_THROH]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SAWK]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SEWADDLE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SWADLOON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_LEAVANNY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_VENIPEDE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_WHIRLIPEDE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SCOLIPEDE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_COTTONEE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_WHIMSICOTT]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PETILIL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_LILLIGANT]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_BASCULIN]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SANDILE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_KROKOROK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_KROOKODILE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DARUMAKA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DARMANITAN]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MARACTUS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_DWEBBLE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CRUSTLE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SCRAGGY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SCRAFTY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SIGILYPH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_YAMASK]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_COFAGRIGUS]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TIRTOUGA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CARRACOSTA]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ARCHEN]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ARCHEOPS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TRUBBISH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)),

    [SPECIES_GARBODOR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZORUA]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ZOROARK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MINCCINO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CINCCINO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GOTHITA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOTHORITA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOTHITELLE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SOLOSIS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DUOSION]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_REUNICLUS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DUCKLETT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)),

    [SPECIES_SWANNA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_VANILLITE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_VANILLISH]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_VANILLUXE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_DEERLING]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SAWSBUCK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_EMOLGA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_KARRABLAST]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)),

    [SPECIES_ESCAVALIER]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_FOONGUS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_AMOONGUSS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_FRILLISH]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_JELLICENT]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ALOMOMOLA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_JOLTIK]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_GALVANTULA]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_FERROSEED]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_FERROTHORN]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_KLINK]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_KLANG]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_KLINKLANG]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_TYNAMO]                      = TMHM_LEARNSET(0),

    [SPECIES_EELEKTRIK]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_EELEKTROSS]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ELGYEM]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BEHEEYEM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LITWICK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LAMPENT]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CHANDELURE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_AXEW]                        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FRAXURE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HAXORUS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CUBCHOO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BEARTIC]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CRYOGONAL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SHELMET]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)),

    [SPECIES_ACCELGOR]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_STUNFISK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MIENFOO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MIENSHAO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DRUDDIGON]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GOLETT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOLURK]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PAWNIARD]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BISHARP]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BOUFFALANT]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_RUFFLET]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_BRAVIARY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_VULLABY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MANDIBUZZ]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_HEATMOR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DURANT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DEINO]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_ZWEILOUS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_HYDREIGON]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_LARVESTA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_VOLCARONA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_COBALION]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_TERRAKION]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_VIRIZION]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_TORNADUS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_THUNDURUS]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_RESHIRAM]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZEKROM]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LANDORUS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KYUREM]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KELDEO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_MELOETTA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GENESECT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CHESPIN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_QUILLADIN]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHESNAUGHT]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FENNEKIN]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BRAIXEN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DELPHOX]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FROAKIE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FROGADIER]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GRENINJA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BUNNELBY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DIGGERSBY]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLETCHLING]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_FLETCHINDER]                 = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)),

    [SPECIES_TALONFLAME]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SCATTERBUG]                  = TMHM_LEARNSET(0),

    [SPECIES_SPEWPA]                      = TMHM_LEARNSET(0),

    [SPECIES_VIVILLON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LITLEO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PYROAR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLABEBE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FLOETTE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FLORGES]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SKIDDO]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GOGOAT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PANCHAM]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PANGORO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FURFROU]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ESPURR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MEOWSTIC]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HONEDGE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)),

    [SPECIES_DOUBLADE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)),

    [SPECIES_AEGISLASH]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SPRITZEE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_AROMATISSE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SWIRLIX]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SLURPUFF]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_INKAY]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MALAMAR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BINACLE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BARBARACLE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SKRELP]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_DRAGALGE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CLAUNCHER]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_CLAWITZER]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_HELIOPTILE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HELIOLISK]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TYRUNT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TYRANTRUM]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_AMAURA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_AURORUS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SYLVEON]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HAWLUCHA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DEDENNE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CARBINK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOOMY]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_SLIGGOO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_GOODRA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_KLEFKI]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PHANTUMP]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TREVENANT]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PUMPKABOO]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOURGEIST]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BERGMITE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_AVALUGG]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_NOIBAT]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NOIVERN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_XERNEAS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_YVELTAL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZYGARDE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DIANCIE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HOOPA]                       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_VOLCANION]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ROWLET]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_DARTRIX]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_DECIDUEYE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_LITTEN]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)),

    [SPECIES_TORRACAT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)),

    [SPECIES_INCINEROAR]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_POPPLIO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_BRIONNE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_PRIMARINA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PIKIPEK]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_TRUMBEAK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_TOUCANNON]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_YUNGOOS]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GUMSHOOS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GRUBBIN]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHARJABUG]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_VIKAVOLT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CRABRAWLER]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CRABOMINABLE]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ORICORIO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_CUTIEFLY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_RIBOMBEE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ROCKRUFF]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LYCANROC]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_WISHIWASHI]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_MAREANIE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_TOXAPEX]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MUDBRAY]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_MUDSDALE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_DEWPIDER]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_ARAQUANID]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_FOMANTIS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_LURANTIS]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_MORELULL]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SHIINOTIC]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SALANDIT]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SALAZZLE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_STUFFUL]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_BEWEAR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_BOUNSWEET]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_STEENEE]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_TSAREENA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_COMFEY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ORANGURU]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PASSIMIAN]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_WIMPOD]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)),

    [SPECIES_GOLISOPOD]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SANDYGAST]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PALOSSAND]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PYUKUMUKU]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)),

    [SPECIES_TYPE_NULL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SILVALLY]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_MINIOR]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KOMALA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_TURTONATOR]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_TOGEDEMARU]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MIMIKYU]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BRUXISH]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DRAMPA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_DHELMISE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_JANGMO_O]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_HAKAMO_O]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_KOMMO_O]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_TAPU_KOKO]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_TAPU_LELE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TAPU_BULU]                   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_TAPU_FINI]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_COSMOG]                      = TMHM_LEARNSET(0),

    [SPECIES_COSMOEM]                     = TMHM_LEARNSET(0),

    [SPECIES_SOLGALEO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LUNALA]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NIHILEGO]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BUZZWOLE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_PHEROMOSA]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_XURKITREE]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_CELESTEELA]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_KARTANA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)),

    [SPECIES_GUZZLORD]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_NECROZMA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MAGEARNA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MARSHADOW]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_POIPOLE]                     = TMHM_LEARNSET(0),

    [SPECIES_NAGANADEL]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_STAKATAKA]                   = TMHM_LEARNSET(TMHM(TM26_EARTHQUAKE)),

    [SPECIES_BLACEPHALON]                 = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZERAORA]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MELTAN]                      = TMHM_LEARNSET(TMHM(TM24_THUNDERBOLT)),

    [SPECIES_MELMETAL]                    = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_GROOKEY]                     = TMHM_LEARNSET(TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_THWACKEY]                    = TMHM_LEARNSET(TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_RILLABOOM]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SCORBUNNY]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)),

    [SPECIES_RABOOT]                      = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)),

    [SPECIES_CINDERACE]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SOBBLE]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)),

    [SPECIES_DRIZZILE]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)),

    [SPECIES_INTELEON]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SKWOVET]                     = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_GREEDENT]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ROOKIDEE]                    = TMHM_LEARNSET(TMHM(HM02_FLY)),

    [SPECIES_CORVISQUIRE]                 = TMHM_LEARNSET(TMHM(HM02_FLY)),

    [SPECIES_CORVIKNIGHT]                 = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_BLIPBUG]                     = TMHM_LEARNSET(0),

    [SPECIES_DOTTLER]                     = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ORBEETLE]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NICKIT]                      = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_THIEVUL]                     = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOSSIFLEUR]                  = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ELDEGOSS]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_WOOLOO]                      = TMHM_LEARNSET(0),

    [SPECIES_DUBWOOL]                     = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)),

    [SPECIES_CHEWTLE]                     = TMHM_LEARNSET(TMHM(HM03_SURF)),

    [SPECIES_DREDNAW]                     = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_YAMPER]                      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BOLTUND]                     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ROLYCOLY]                    = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_CARKOL]                      = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_COALOSSAL]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_APPLIN]                      = TMHM_LEARNSET(0),

    [SPECIES_FLAPPLE]                     = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_APPLETUN]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SILICOBRA]                   = TMHM_LEARNSET(TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SANDACONDA]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CRAMORANT]                   = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_ARROKUDA]                    = TMHM_LEARNSET(TMHM(HM03_SURF)),

    [SPECIES_BARRASKEWDA]                 = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_TOXEL]                       = TMHM_LEARNSET(0),

    [SPECIES_TOXTRICITY]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SIZZLIPEDE]                  = TMHM_LEARNSET(0),

    [SPECIES_CENTISKORCH]                 = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_CLOBBOPUS]                   = TMHM_LEARNSET(0),

    [SPECIES_GRAPPLOCT]                   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SINISTEA]                    = TMHM_LEARNSET(TMHM(TM29_PSYCHIC)),

    [SPECIES_POLTEAGEIST]                 = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_HATENNA]                     = TMHM_LEARNSET(TMHM(TM29_PSYCHIC)),

    [SPECIES_HATTREM]                     = TMHM_LEARNSET(TMHM(TM29_PSYCHIC)),

    [SPECIES_HATTERENE]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_IMPIDIMP]                    = TMHM_LEARNSET(0),

    [SPECIES_MORGREM]                     = TMHM_LEARNSET(0),

    [SPECIES_GRIMMSNARL]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)),

    [SPECIES_OBSTAGOON]                   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PERRSERKER]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CURSOLA]                     = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SIRFETCHD]                   = TMHM_LEARNSET(0),

    [SPECIES_MR_RIME]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_RUNERIGUS]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MILCERY]                     = TMHM_LEARNSET(0),

    [SPECIES_ALCREMIE]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FALINKS]                     = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)),

    [SPECIES_PINCURCHIN]                  = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_SNOM]                        = TMHM_LEARNSET(0),

    [SPECIES_FROSMOTH]                    = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_STONJOURNER]                 = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_EISCUE]                      = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_INDEEDEE]                    = TMHM_LEARNSET(TMHM(TM29_PSYCHIC)),

    [SPECIES_MORPEKO]                     = TMHM_LEARNSET(TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_CUFANT]                      = TMHM_LEARNSET(TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_COPPERAJAH]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DRACOZOLT]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_ARCTOZOLT]                   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_DRACOVISH]                   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_ARCTOVISH]                   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_DURALUDON]                   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_DREEPY]                      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)),

    [SPECIES_DRAKLOAK]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_DRAGAPULT]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ZACIAN]                      = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ZAMAZENTA]                   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ETERNATUS]                   = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_KUBFU]                       = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_URSHIFU]                     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ZARUDE]                      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_REGIELEKI]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_REGIDRAGO]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_GLASTRIER]                   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SPECTRIER]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CALYREX]                     = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_WYRDEER]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KLEAVOR]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_URSALUNA]                    = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BASCULEGION]                 = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SNEASLER]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_OVERQWIL]                    = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_ENAMORUS]                    = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SPRIGATITO]                  = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_FLORAGATO]                   = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_MEOWSCARADA]                 = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_FUECOCO]                     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CROCALOR]                    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SKELEDIRGE]                  = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_QUAXLY]                      = TMHM_LEARNSET(TMHM(HM03_SURF)),

    [SPECIES_QUAXWELL]                    = TMHM_LEARNSET(TMHM(HM03_SURF)),

    [SPECIES_QUAQUAVAL]                   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_LECHONK]                     = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_OINKOLOGNE]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TAROUNTULA]                  = TMHM_LEARNSET(0),

    [SPECIES_SPIDOPS]                     = TMHM_LEARNSET(0),

    [SPECIES_NYMBLE]                      = TMHM_LEARNSET(0),

    [SPECIES_LOKIX]                       = TMHM_LEARNSET(0),

    [SPECIES_PAWMI]                       = TMHM_LEARNSET(TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PAWMO]                       = TMHM_LEARNSET(TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PAWMOT]                      = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TANDEMAUS]                   = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_MAUSHOLD]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FIDOUGH]                     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DACHSBUN]                    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SMOLIV]                      = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_DOLLIV]                      = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ARBOLIVA]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SQUAWKABILLY]                = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_NACLI]                       = TMHM_LEARNSET(TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_NACLSTACK]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GARGANACL]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHARCADET]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)),

    [SPECIES_ARMAROUGE]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CERULEDGE]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)),

    [SPECIES_TADBULB]                     = TMHM_LEARNSET(TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_BELLIBOLT]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_WATTREL]                     = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_KILOWATTREL]                 = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_MASCHIFF]                    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MABOSSTIFF]                  = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SHROODLE]                    = TMHM_LEARNSET(TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_GRAFAIAI]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_BRAMBLIN]                    = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_BRAMBLEGHAST]                = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_TOEDSCOOL]                   = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_TOEDSCRUEL]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_KLAWF]                       = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CAPSAKID]                    = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SCOVILLAIN]                  = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_RELLOR]                      = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_RABSCA]                      = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FLITTLE]                     = TMHM_LEARNSET(TMHM(TM29_PSYCHIC)),

    [SPECIES_ESPATHRA]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TINKATINK]                   = TMHM_LEARNSET(0),

    [SPECIES_TINKATUFF]                   = TMHM_LEARNSET(0),

    [SPECIES_TINKATON]                    = TMHM_LEARNSET(0),

    [SPECIES_WIGLETT]                     = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_WUGTRIO]                     = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BOMBIRDIER]                  = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_FINIZEN]                     = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_PALAFIN]                     = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_VAROOM]                      = TMHM_LEARNSET(TMHM(TM06_TOXIC)),

    [SPECIES_REVAVROOM]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_CYCLIZAR]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)),

    [SPECIES_ORTHWORM]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GLIMMET]                     = TMHM_LEARNSET(TMHM(TM06_TOXIC)),

    [SPECIES_GLIMMORA]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_GREAVARD]                    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HOUNDSTONE]                  = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLAMIGO]                     = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_CETODDLE]                    = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_CETITAN]                     = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_VELUZA]                      = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DONDOZO]                     = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_TATSUGIRI]                   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_ANNIHILAPE]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CLODSIRE]                    = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_FARIGIRAF]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DUDUNSPARCE]                 = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_KINGAMBIT]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GREAT_TUSK]                  = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SCREAM_TAIL]                 = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BRUTE_BONNET]                = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_FLUTTER_MANE]                = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_SLITHER_WING]                = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_SANDY_SHOCKS]                = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_IRON_TREADS]                 = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_IRON_BUNDLE]                 = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_IRON_HANDS]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_IRON_JUGULIS]                = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_IRON_MOTH]                   = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_IRON_THORNS]                 = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_FRIGIBAX]                    = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ARCTIBAX]                    = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BAXCALIBUR]                  = TMHM_LEARNSET(TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GIMMIGHOUL]                  = TMHM_LEARNSET(0),

    [SPECIES_GHOLDENGO]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_WO_CHIEN]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_CHIEN_PAO]                   = TMHM_LEARNSET(TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_TING_LU]                     = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_CHI_YU]                      = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ROARING_MOON]                = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_IRON_VALIANT]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KORAIDON]                    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MIRAIDON]                    = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_WALKING_WAKE]                = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_IRON_LEAVES]                 = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_DIPPLIN]                     = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_POLTCHAGEIST]                = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_SINISTCHA]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_OKIDOGI]                     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MUNKIDORI]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FEZANDIPITI]                 = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_OGERPON]                     = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ARCHALUDON]                  = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_HYDRAPPLE]                   = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_GOUGING_FIRE]                = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_RAGING_BOLT]                 = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_IRON_BOULDER]                = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_IRON_CROWN]                  = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TERAPAGOS]                   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_PECHARUNT]                   = TMHM_LEARNSET(TMHM(TM06_TOXIC)),

    [SPECIES_VENUSAUR_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_CHARIZARD_MEGA_X]            = TMHM_LEARNSET(0),

    [SPECIES_CHARIZARD_MEGA_Y]            = TMHM_LEARNSET(0),

    [SPECIES_BLASTOISE_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_BEEDRILL_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_PIDGEOT_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_ALAKAZAM_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_SLOWBRO_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_GENGAR_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_KANGASKHAN_MEGA]             = TMHM_LEARNSET(0),

    [SPECIES_PINSIR_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_GYARADOS_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_AERODACTYL_MEGA]             = TMHM_LEARNSET(0),

    [SPECIES_MEWTWO_MEGA_X]               = TMHM_LEARNSET(0),

    [SPECIES_MEWTWO_MEGA_Y]               = TMHM_LEARNSET(0),

    [SPECIES_AMPHAROS_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_STEELIX_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_SCIZOR_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_HERACROSS_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_HOUNDOOM_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_TYRANITAR_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_SCEPTILE_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_BLAZIKEN_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_SWAMPERT_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_GARDEVOIR_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_SABLEYE_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_MAWILE_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_AGGRON_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_MEDICHAM_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_MANECTRIC_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_SHARPEDO_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_CAMERUPT_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_ALTARIA_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_BANETTE_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_ABSOL_MEGA]                  = TMHM_LEARNSET(0),

    [SPECIES_GLALIE_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_SALAMENCE_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_METAGROSS_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_LATIAS_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_LATIOS_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_LOPUNNY_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_GARCHOMP_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_LUCARIO_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_ABOMASNOW_MEGA]              = TMHM_LEARNSET(0),

    [SPECIES_GALLADE_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_AUDINO_MEGA]                 = TMHM_LEARNSET(0),

    [SPECIES_DIANCIE_MEGA]                = TMHM_LEARNSET(0),

    [SPECIES_RAYQUAZA_MEGA]               = TMHM_LEARNSET(0),

    [SPECIES_KYOGRE_PRIMAL]               = TMHM_LEARNSET(0),

    [SPECIES_GROUDON_PRIMAL]              = TMHM_LEARNSET(0),

    [SPECIES_RATTATA_ALOLAN]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RATICATE_ALOLAN]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_RAICHU_ALOLAN]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SANDSHREW_ALOLAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_SANDSLASH_ALOLAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_VULPIX_ALOLAN]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_NINETALES_ALOLAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DIGLETT_ALOLAN]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DUGTRIO_ALOLAN]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MEOWTH_ALOLAN]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PERSIAN_ALOLAN]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GEODUDE_ALOLAN]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GRAVELER_ALOLAN]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GOLEM_ALOLAN]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GRIMER_ALOLAN]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MUK_ALOLAN]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_EXEGGUTOR_ALOLAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MAROWAK_ALOLAN]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_MEOWTH_GALARIAN]             = TMHM_LEARNSET(TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PONYTA_GALARIAN]             = TMHM_LEARNSET(TMHM(TM29_PSYCHIC)),

    [SPECIES_RAPIDASH_GALARIAN]           = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SLOWPOKE_GALARIAN]           = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SLOWBRO_GALARIAN]            = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_FARFETCHD_GALARIAN]          = TMHM_LEARNSET(0),

    [SPECIES_WEEZING_GALARIAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_MR_MIME_GALARIAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ARTICUNO_GALARIAN]           = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZAPDOS_GALARIAN]             = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_MOLTRES_GALARIAN]            = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_SLOWKING_GALARIAN]           = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CORSOLA_GALARIAN]            = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZIGZAGOON_GALARIAN]          = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LINOONE_GALARIAN]            = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DARUMAKA_GALARIAN]           = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DARMANITAN_GALARIAN]         = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_YAMASK_GALARIAN]             = TMHM_LEARNSET(TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_STUNFISK_GALARIAN]           = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_GROWLITHE_HISUIAN]           = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ARCANINE_HISUIAN]            = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_VOLTORB_HISUIAN]             = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ELECTRODE_HISUIAN]           = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_TYPHLOSION_HISUIAN]          = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_QWILFISH_HISUIAN]            = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SNEASEL_HISUIAN]             = TMHM_LEARNSET(TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_SAMUROTT_HISUIAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LILLIGANT_HISUIAN]           = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_ZORUA_HISUIAN]               = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ZOROARK_HISUIAN]             = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BRAVIARY_HISUIAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SLIGGOO_HISUIAN]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_GOODRA_HISUIAN]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_AVALUGG_HISUIAN]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_DECIDUEYE_HISUIAN]           = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_TAUROS_PALDEAN]              = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_WOOPER_PALDEAN]              = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_PIKACHU_CAP]                 = TMHM_LEARNSET(0),

    [SPECIES_PIKACHU_PARTNER]             = TMHM_LEARNSET(0),

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED]  = TMHM_LEARNSET(TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED]   = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_EEVEE_PARTNER]               = TMHM_LEARNSET(0),

    [SPECIES_PICHU_SPIKY_EARED]           = TMHM_LEARNSET(0),

    [SPECIES_CASTFORM_SUNNY]              = TMHM_LEARNSET(0),

    [SPECIES_CASTFORM_RAINY]              = TMHM_LEARNSET(0),

    [SPECIES_CASTFORM_SNOWY]              = TMHM_LEARNSET(0),

    [SPECIES_DEOXYS_ATTACK]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DEOXYS_DEFENSE]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_DEOXYS_SPEED]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BURMY_SANDY_CLOAK]           = TMHM_LEARNSET(0),

    [SPECIES_BURMY_TRASH_CLOAK]           = TMHM_LEARNSET(0),

    [SPECIES_WORMADAM_SANDY_CLOAK]        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_WORMADAM_TRASH_CLOAK]        = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CHERRIM_SUNSHINE]            = TMHM_LEARNSET(0),

    [SPECIES_ROTOM_HEAT]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ROTOM_WASH]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ROTOM_FROST]                 = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ROTOM_FAN]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_ROTOM_MOW]                   = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)),

    [SPECIES_DIALGA_ORIGIN]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_PALKIA_ORIGIN]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)),

    [SPECIES_GIRATINA_ORIGIN]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_SHAYMIN_SKY]                 = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_BASCULIN_BLUE_STRIPED]       = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_BASCULIN_WHITE_STRIPED]      = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)),

    [SPECIES_DARMANITAN_ZEN_MODE]         = TMHM_LEARNSET(0),

    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN]= TMHM_LEARNSET(0),

    [SPECIES_TORNADUS_THERIAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_THUNDURUS_THERIAN]           = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_LANDORUS_THERIAN]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KYUREM_WHITE]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_KYUREM_BLACK]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM02_FLY)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MELOETTA_PIROUETTE]          = TMHM_LEARNSET(0),

    [SPECIES_GRENINJA_ASH]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_FLOETTE_ETERNAL_FLOWER]      = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_MEOWSTIC_FEMALE]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM28_DIG)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_AEGISLASH_BLADE]             = TMHM_LEARNSET(0),

    [SPECIES_PUMPKABOO_SMALL]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PUMPKABOO_LARGE]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_PUMPKABOO_SUPER]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOURGEIST_SMALL]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOURGEIST_LARGE]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_GOURGEIST_SUPER]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM35_FLAMETHROWER)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ZYGARDE_10]                  = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ZYGARDE_COMPLETE]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_HOOPA_UNBOUND]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_ORICORIO_POM_POM]            = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_ORICORIO_PAU]                = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_ORICORIO_SENSU]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM02_FLY)),

    [SPECIES_LYCANROC_MIDNIGHT]           = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_LYCANROC_DUSK]               = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_WISHIWASHI_SCHOOL]           = TMHM_LEARNSET(0),

    [SPECIES_MINIOR_CORE_RED]             = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NECROZMA_DUSK_MANE]          = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NECROZMA_DAWN_WINGS]         = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_NECROZMA_ULTRA]              = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_TOXTRICITY_LOW_KEY]          = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM24_THUNDERBOLT)
                                                        | TMHM(TM25_THUNDER)
                                                        | TMHM(TM06_TOXIC)),

    [SPECIES_EISCUE_NOICE_FACE]           = TMHM_LEARNSET(0),

    [SPECIES_INDEEDEE_FEMALE]             = TMHM_LEARNSET(TMHM(TM29_PSYCHIC)),

    [SPECIES_MORPEKO_HANGRY]              = TMHM_LEARNSET(0),

    [SPECIES_ZACIAN_CROWNED_SWORD]        = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ZAMAZENTA_CROWNED_SHIELD]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_ETERNATUS_ETERNAMAX]         = TMHM_LEARNSET(0),

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE]  = TMHM_LEARNSET(TMHM(TM28_DIG)),

    [SPECIES_CALYREX_ICE_RIDER]           = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_CALYREX_SHADOW_RIDER]        = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM22_SOLAR_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_URSALUNA_BLOODMOON]          = TMHM_LEARNSET(TMHM(TM32_DOUBLE_TEAM)
                                                        | TMHM(HM01_CUT)
                                                        | TMHM(TM05_ROAR)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(HM04_STRENGTH)
                                                        | TMHM(TM26_EARTHQUAKE)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_BASCULEGION_FEMALE]          = TMHM_LEARNSET(TMHM(HM03_SURF)
                                                        | TMHM(TM13_ICE_BEAM)
                                                        | TMHM(TM14_BLIZZARD)
                                                        | TMHM(TM15_HYPER_BEAM)),

    [SPECIES_ENAMORUS_THERIAN]            = TMHM_LEARNSET(TMHM(HM02_FLY)
                                                        | TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM29_PSYCHIC)),

    [SPECIES_OINKOLOGNE_FEMALE]           = TMHM_LEARNSET(TMHM(TM15_HYPER_BEAM)
                                                        | TMHM(TM28_DIG)),

    [SPECIES_PALAFIN_HERO]                = TMHM_LEARNSET(0),

    [SPECIES_GIMMIGHOUL_ROAMING]          = TMHM_LEARNSET(0),

    [SPECIES_OGERPON_WELLSPRING]          = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_OGERPON_HEARTHFLAME]         = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_OGERPON_CORNERSTONE]         = TMHM_LEARNSET(TMHM(TM22_SOLAR_BEAM)),

    [SPECIES_TERAPAGOS_TERASTAL]          = TMHM_LEARNSET(0),

    [SPECIES_TERAPAGOS_STELLAR]           = TMHM_LEARNSET(0),
};
