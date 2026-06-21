#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <capstone/capstone.h>
#include "global.h"
#include "elf.h"
#include "util.h"

// Get constants from the repository
#include "constants/global.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/items.h"
#include "constants/abilities.h"
#include "constants/moves.h"
#include "constants/pokemon.h"
#include "constants/event_objects.h"

/*
 * ---------------------------------------------------------
 * Type definitions
 * ---------------------------------------------------------
 */

#define len(arr) (sizeof(arr)/sizeof(*arr))

struct TMText {
    int tmno;
    int mapgp;
    int mapno;
    int scriptno;
    int offset;
    const char * text;
};

//struct TMText {
//    int tmno;
//    const char * label;
//    const char * text;
//};

struct StaticPokemon {
    const char * speciesLabel;
    int speciesOffset;
    const char * levelLabel;
    int levelOffset;
    const char * comment;
};

static csh sCapstone;

/*
 * ---------------------------------------------------------
 * Data
 * ---------------------------------------------------------
 */

static const char * gTypeNames[] = {
    "Normal",
    "Fighting",
    "Flying",
    "Poison",
    "Ground",
    "Rock",
    "Grass", // "Bug",
    "Ghost",
    "Steel",
    "Ghost", // "Mystery",
    "Fire",
    "Water",
    "Grass",
    "Electric",
    "Psychic",
    "Ice",
    "Dragon",
    "Dark",
    "Psychic" // "Fairy"
};

static const char * gPokeMarts[] = {
    "SlateportCity_Pokemart_EnergyGuru",
    "SlateportCity_Pokemart_PowerTMs",
    "OldaleTown_Mart_Pokemart_Basic",
    "OldaleTown_Mart_Pokemart_Expanded",
    "LavaridgeTown_HerbShop_Pokemart",
    "LavaridgeTown_Mart_Pokemart",
    "FallarborTown_Mart_Pokemart",
    "VerdanturfTown_Mart_Pokemart",
    "PetalburgCity_Mart_Pokemart_Basic",
    "PetalburgCity_Mart_Pokemart_Expanded",
    "SlateportCity_Mart_Pokemart",
    "MauvilleCity_Mart_Pokemart",
    "RustboroCity_Mart_Pokemart_Basic",
    "RustboroCity_Mart_Pokemart_Expanded",
    "FortreeCity_Mart_Pokemart",
    "LilycoveCity_DepartmentStore_2F_Pokemart1",
    "LilycoveCity_DepartmentStore_2F_Pokemart2",
    "LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins",
    "LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters",
    "LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs",
    "LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs",
    "MossdeepCity_Mart_Pokemart",
    "SootopolisCity_Mart_Pokemart",
    "EverGrandeCity_PokemonLeague_1F_Pokemart",
    "BattleFrontier_Mart_Pokemart",
    "TrainerHill_Entrance_Pokemart_Basic",
    "TrainerHill_Entrance_Pokemart_Expanded"
};

const struct StaticPokemon gStaticPokemon[][9] = {
    {{"RustboroCity_DevonCorp_2F_EventScript_LileepReady", 0x2, "RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep", 0x8, " // Lileep"}, {"RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep", 0x3, NULL, 0x0, NULL}, {"RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep", 0x6, NULL, 0x0, NULL}, {"RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare", 0x2, NULL, 0x0, NULL}, {"RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare", 0x10, NULL, 0x0, NULL}},
    {{"RustboroCity_DevonCorp_2F_EventScript_AnorithReady", 0x2, "RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith", 0x8, " // Anorith"}, {"RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith", 0x3, NULL, 0x0, NULL}, {"RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith", 0x6, NULL, 0x0, NULL}, {"RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare", 0x2, NULL, 0x0, NULL}, {"RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare", 0x10, NULL, 0x0, NULL}},
    {{"MarineCave_End_EventScript_Kyogre", 0x17, "MarineCave_End_EventScript_Kyogre", 0x27, " // Kyogre"}, {"MarineCave_End_EventScript_Kyogre", 0x25, NULL, 0x0, NULL}, {"MarineCave_End_EventScript_RanFromKyogre", 0x3, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_LegendariesSceneFromPokeCenter", 0x3C, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_LegendariesSceneFromPokeCenter", 0xBC, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_LegendariesSceneFromDive", 0x3C, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_LegendariesSceneFromDive", 0xBC, NULL, 0x0, NULL}},
    {{"TerraCave_End_EventScript_Groudon", 0x17, "TerraCave_End_EventScript_Groudon", 0x27, " // Groudon"}, {"TerraCave_End_EventScript_Groudon", 0x25, NULL, 0x0, NULL}, {"TerraCave_End_EventScript_RanFromGroudon", 0x3, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_LegendariesSceneFromPokeCenter", 0x7C, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_LegendariesSceneFromDive", 0x7C, NULL, 0x0, NULL}},
    {{"DesertRuins_EventScript_Regirock", 0x4, "DesertRuins_EventScript_Regirock", 0xF, " // Regirock"}, {"DesertRuins_EventScript_Regirock", 0xD, NULL, 0x0, NULL}, {"DesertRuins_EventScript_RanFromRegirock", 0x3, NULL, 0x0, NULL}},
    {{"IslandCave_EventScript_Regice", 0x4, "IslandCave_EventScript_Regice", 0xF, " // Regice"}, {"IslandCave_EventScript_Regice", 0xD, NULL, 0x0, NULL}, {"IslandCave_EventScript_RanFromRegice", 0x3, NULL, 0x0, NULL}},
    {{"AncientTomb_EventScript_Registeel", 0x4, "AncientTomb_EventScript_Registeel", 0xF, " // Registeel"}, {"AncientTomb_EventScript_Registeel", 0xD, NULL, 0x0, NULL}, {"AncientTomb_EventScript_RanFromRegisteel", 0x3, NULL, 0x0, NULL}},
    {{"SkyPillar_Top_EventScript_Rayquaza", 0x3, "SkyPillar_Top_EventScript_Rayquaza", 0xE, " // Rayquaza"}, {"SkyPillar_Top_EventScript_Rayquaza", 0xC, NULL, 0x0, NULL}, {"SkyPillar_Top_EventScript_RanFromRayquaza", 0x3, NULL, 0x0, NULL}, {"SkyPillar_Top_EventScript_AwakenRayquaza", 0x29, NULL, 0x0, NULL}, {"SkyPillar_Top_EventScript_AwakenRayquaza", 0x47, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_RayquazaSceneFromPokeCenter", 0x42, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_RayquazaSceneFromPokeCenter", 0x60, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_RayquazaSceneFromDive", 0x46, NULL, 0x0, NULL}, {"SootopolisCity_EventScript_RayquazaSceneFromDive", 0x64, NULL, 0x0, NULL}},
    {{"EventScript_BattleKecleon", 0x1F, "EventScript_BattleKecleon", 0x2A, " // Kecleons on OW (7)"}, {"EventScript_BattleKecleon", 0x28, NULL, 0x0, NULL}},
    {{"Route120_EventScript_StevenBattleKecleon", 0x4B, "Route120_EventScript_StevenBattleKecleon", 0x56, " // Kecleon w/ Steven"}, {"Route120_EventScript_StevenBattleKecleon", 0x54, NULL, 0x0, NULL}},
    {{"NewMauville_Inside_EventScript_Voltorb1", 0x3, "NewMauville_Inside_EventScript_Voltorb1", 0x5, " // Voltorb 1"}, {"NewMauville_Inside_EventScript_Voltorb1", 0xA, NULL, 0x0, NULL}},
    {{"NewMauville_Inside_EventScript_Voltorb2", 0x3, "NewMauville_Inside_EventScript_Voltorb2", 0x5, " // Voltorb 2"}, {"NewMauville_Inside_EventScript_Voltorb2", 0xA, NULL, 0x0, NULL}},
    {{"NewMauville_Inside_EventScript_Voltorb3", 0x3, "NewMauville_Inside_EventScript_Voltorb3", 0x5, " // Voltorb 3"}, {"NewMauville_Inside_EventScript_Voltorb3", 0xA, NULL, 0x0, NULL}},
    {{"AquaHideout_B1F_EventScript_Electrode1", 0x3, "AquaHideout_B1F_EventScript_Electrode1", 0x5, " // Electrode 1"}, {"AquaHideout_B1F_EventScript_Electrode1", 0xA, NULL, 0x0, NULL}},
    {{"AquaHideout_B1F_EventScript_Electrode2", 0x3, "AquaHideout_B1F_EventScript_Electrode2", 0x5, " // Electrode 2"}, {"AquaHideout_B1F_EventScript_Electrode2", 0xA, NULL, 0x0, NULL}},
    {{"BattleFrontier_OutsideEast_EventScript_WaterSudowoodo", 0x1F, "BattleFrontier_OutsideEast_EventScript_WaterSudowoodo", 0x2F, " // Sudowoodo in Battle Frontier"}, {"BattleFrontier_OutsideEast_EventScript_WaterSudowoodo", 0x2D, NULL, 0x0, NULL}},
    {{"SouthernIsland_Interior_EventScript_SetUpLatios", 0x8, "SouthernIsland_Interior_EventScript_SetLatiosBattleVars", 0x8, " // Latios on Southern Island"}, {"SouthernIsland_Interior_EventScript_SetLatiosBattleVars", 0x3, NULL, 0x0, NULL}},
    {{"SouthernIsland_Interior_EventScript_SetUpLatias", 0x8, "SouthernIsland_Interior_EventScript_SetLatiasBattleVars", 0x8, " // Latias on Southern Island"}, {"SouthernIsland_Interior_EventScript_SetLatiasBattleVars", 0x3, NULL, 0x0, NULL}},
    {{"BirthIsland_Exterior_EventScript_Deoxys", 0x26, "BirthIsland_Exterior_EventScript_Deoxys", 0x3B, " // Deoxys on Birth Island"}, {"BirthIsland_Exterior_EventScript_Deoxys", 0x36, NULL, 0x0, NULL}, {"BirthIsland_Exterior_EventScript_DefeatedDeoxys", 0x6, NULL, 0x0, NULL}, {"BirthIsland_Exterior_EventScript_RanFromDeoxys", 0x3, NULL, 0x0, NULL}},
    {{"FarawayIsland_Interior_EventScript_Mew", 0x1B, "FarawayIsland_Interior_EventScript_Mew", 0x5A, " // Mew on Faraway Island"}, {"FarawayIsland_Interior_EventScript_Mew", 0x55, NULL, 0x0, NULL}, {"FarawayIsland_Interior_EventScript_MewDefeated", 0x6, NULL, 0x0, NULL}, {"FarawayIsland_Interior_EventScript_PlayerOrMewRan", 0x3, NULL, 0x0, NULL}},
    {{"NavelRock_Top_EventScript_HoOh", 0x30, "NavelRock_Top_EventScript_HoOh", 0x64, " // Ho-Oh on Navel Rock"}, {"NavelRock_Top_EventScript_HoOh", 0x5F, NULL, 0x0, NULL}, {"NavelRock_Top_EventScript_DefeatedHoOh", 0x6, NULL, 0x0, NULL}, {"NavelRock_Top_EventScript_RanFromHoOh", 0x3, NULL, 0x0, NULL}},
    {{"NavelRock_Bottom_EventScript_Lugia", 0x45, "NavelRock_Bottom_EventScript_Lugia", 0x55, " // Lugia on Navel Rock"}, {"NavelRock_Bottom_EventScript_Lugia", 0x50, NULL, 0x0, NULL}, {"NavelRock_Bottom_EventScript_DefeatedLugia", 0x6, NULL, 0x0, NULL}, {"NavelRock_Bottom_EventScript_RanFromLugia", 0x3, NULL, 0x0, NULL}},
    {{"LavaridgeTown_EventScript_EggWoman", 0x3F, NULL, 0x0, " // Wynaut Egg"}},
    {{"MossdeepCity_StevensHouse_EventScript_GiveBeldum", 0x3, "MossdeepCity_StevensHouse_EventScript_GiveBeldum", 0x8, " // Beldum"}, {"MossdeepCity_StevensHouse_EventScript_GiveBeldum", 0x6, NULL, 0x0, NULL}, {"MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare", 0x2, NULL, 0x0, NULL}, {"MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare", 0x13, NULL, 0x0, NULL}},
    {{"Route119_WeatherInstitute_2F_EventScript_ReceiveCastform", 0xB, "Route119_WeatherInstitute_2F_EventScript_ReceiveCastform", 0x10, " // Castform"}, {"Route119_WeatherInstitute_2F_EventScript_ReceiveCastform", 0xE, NULL, 0x0, NULL}, {"Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare", 0xC, NULL, 0x0, NULL}},
};

const struct StaticPokemon gRoamingPokemon[][9] = {
    {{"CreateInitialRoamerMon", 0x1B, "CreateInitialRoamerMon", 0x4D, " // Latios"}, {NULL, 0x0, "CreateInitialRoamerMon", 0x59, NULL}},
    {{"CreateInitialRoamerMon", 0x23, "CreateInitialRoamerMon", 0x4D, " // Latias"}, {NULL, 0x0, "CreateInitialRoamerMon", 0x59, NULL}},
};

const struct TMText gTMTexts[] = {
    { 3, 15,  0,  1,  0xA9, "The Technical Machine I handed you contains [move].\\p… … … … … …"},
    { 4, 14,  0,  1,  0xB8, "Tate: That TM04 contains... Liza: [move]!\\pTate: It’s a move that’s perfect... Liza: For any Pokémon!\\p… … … … … …"},
    { 5,  0, 29, 12,  0x0D, "All my Pokémon does is [move]... No one dares to come near me...\\pSigh... If you would, please take this TM away..."},
    { 5,  0, 29, 12,  0x2F, "TM05 contains [move]."},
    { 8,  3,  3,  1,  0xAC, "That TM08 contains [move].\\p… … … … … …"},
    { 9,  0, 19, 31,  0x0D, "Why do you want this?\\nYou can’t even use it!"},
    {24,  0,  2,  8,  0x4C, "Wattson: Wahahahaha!\\pI knew it, \\v01\\v05! I knew I’d made the right choice asking you!\\pThis is my thanks - a TM containing [move]!\\pGo on, you’ve earned it!"},
    {31, 15,  5,  1,  0x2F, "TM31 contains [move]! It’s a move so horrible that I can’t describe it."},
    {34, 10,  0,  1,  0xBB, "That TM34 there contains [move]. You can count on it!\\p… … … … … …"},
    {39, 11,  3,  1,  0x8F, "That TM39 contains [move].\\pGood luck with Brawly."},
    {40, 12,  1,  1,  0x97, "TM40 contains [move].\\p… … … … … …"},
    {41,  9,  2,  2,  0x2F, "That’s, like, TM41, you know? Hey, it’s [move], you hearing me?\\pHey, now, you listen here, like, I’m not laying a torment on you!"},
    {42,  8,  1,  1, 0x4FD, "Dad: TM42 contains [move].\\pIt might be able to turn a bad situation into an advantage."},
    {47, 24, 10,  1,  0x19, "Steven: Thank you.\\nI’ll give you this TM.\\pIt contains the ultimate technique!"},
    {50,  4,  1,  1,  0xAA, "That TM50 contains [move].\\p… … … … … …"}
};

const struct TMText gMoveTutorTexts[] = {
    { 4, 15,  2,  4, 0x0D, "Sigh…\\pSootopolis’s Gym Leader is really lovably admirable.\\pBut that also means I have many rivals for his attention.\\pHe’s got appeal with a [move]. I couldn’t even catch his eye.\\pPlease, let me teach your Pokémon the move [move]!"},
    { 4, 15,  2,  4, 0x30, "Okay, which Pokémon should I teach [move]?"},
    {15,  0,  6, 15, 0x0D, "I can’t do this anymore!\\pIt’s utterly hopeless!\\pI’m a Fighting-type Trainer, so I can’t win at the Mossdeep Gym no matter how hard I try!\\pArgh! Punch! Punch! Punch! Punch! Punch! Punch!\\pWhat, don’t look at me that way! I’m only hitting the ground!\\pOr do you want me to teach your Pokémon [move]?"},
    {15,  0,  6, 15, 0x60, "I want you to win at the Mossdeep Gym using that [move]!"},
    {12,  7,  0,  5, 0x0D, "I don’t intend to be going nowhere fast in the sticks like this forever.\\pYou watch me, I’ll get out to the city and become a huge hit.\\pSeriously, I’m going to cause a huge explosion of popularity!\\pIf you overheard that, I’ll happily teach [move] to your Pokémon!"},
    {12,  7,  0,  5, 0x30, "Fine! [move] it is! Which Pokémon wants to learn it?"},
    {12,  7,  0,  5, 0x60, "For a long time, I’ve taught Pokémon how to use [move], but I’ve yet to ignite my own explosion…\\pMaybe it’s because deep down, I would rather stay here…"},
    {29,  6,  4,  4, 0x0D, "There’s a move that is wickedly cool.\\pIt’s called [move].\\nWant me to teach it to a Pokémon?"},
    { 8,  5,  0,  5, 0x0D, "I want all sorts of things! But I used up my allowance…\\pWouldn’t it be nice if there were a spell that made money appear when you waggle a finger?\\pIf you want, I can teach your Pokémon the move [move].\\pMoney won’t appear, but your Pokémon will do well in battle. Yes?"},
    { 8,  5,  0,  5, 0x60, "When a Pokémon uses [move], all sorts of nice things happen."},
    { 7,  4,  3,  3, 0x0D, "Ah, young one!\\pI am also a young one, but I mimic the styles and speech of the elderly folks of this town.\\pWhat do you say, young one? Would you agree to it if I were to offer to teach the move [move]?"},
    { 7,  4,  3,  3, 0x60, "[move] is a move of great depth.\\pCould you execute it to perfection as well as me…?"},
    { 7,  4,  3,  3, 0x56, "Oh, boo! I wanted to teach [move] to your Pokémon!"},
    {16,  0,  2, 10, 0x0D, "Did you know that you can go from here a long way in that direction without changing direction?\\pI might even be able to roll that way.\\pDo you think your Pokémon will want to roll, too?\\pI can teach one the move [move] if you’d like."},
    {24, 12,  5,  2, 0x0D, "Humph! My wife relies on Hidden Power to stay awake.\\pShe should just take a nap like I do.\\pI can teach your Pokémon how to [move]. Interested?"},
    {24, 12,  5,  2, 0x60, "I’ve never once gotten my wife’s coin trick right.\\pI would be happy if I got it right even as I teach [move]…"},
    {14, 13, 21,  4, 0x0D, "When I see the wide world from up here on the roof…\\pI think about how nice it would be if there were more than just one me so I could enjoy all sorts of lives.\\pOf course it’s not possible. Giggle…\\pI know! Would you be interested in having a Pokémon learn [move]?"},
    {14, 13, 21,  4, 0x30, "Giggle… Which Pokémon do you want me to teach [move]?"},
    {14, 13, 21,  4, 0x56, "Oh, no?\\pA Pokémon can do well in a battle using it, you know."},
    {25,  9,  6,  9, 0x0D, "Heh! My Pokémon totally rules! It’s cooler than any Pokémon!\\pI was lipping off with a swagger in my step like that when the Chairman chewed me out.\\pThat took the swagger out of my step.\\pIf you’d like, I’ll teach the move [move] to a Pokémon of yours."},
    {25,  9,  6,  9, 0x30, "All right, which Pokémon wants to learn how to [move]?"},
    {25,  9,  6,  9, 0x60, "I’ll just praise my Pokémon from now on without the [move]."}
};

/*
 * ----------------------------------------------
 * Capstone callbacks
 * ----------------------------------------------
 */

static int IsLoadingStarterItems(const struct cs_insn * insn)
{
    static int to_return;
    Elf32_Sym *sym = GetSymbolByName("ScriptGiveMon");
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov r2, #0
    if (insn->id == ARM_INS_MOV
     && ops[0].type == ARM_OP_REG
     && ops[0].reg == ARM_REG_R2
     && ops[1].type == ARM_OP_IMM
     && ops[1].imm == 0)
        to_return = insn->address;
    // bl ScriptGiveMon
    else if (insn->id == ARM_INS_BL)
    {
        uint32_t target = ops[0].imm;
        if (target == (sym->st_value & ~1))
            return to_return;
    }
    return -1;
}

static int IsIntroLotadForCry_1(const struct cs_insn * insn)
{
    static int to_return;
    static unsigned tmp_reg, tmp_reg2;
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov rX, SPECIES_LOTAD / 2
    if (insn->id == ARM_INS_MOV
    && ops[0].type == ARM_OP_REG
    && ops[1].type == ARM_OP_IMM
    && ops[1].imm == SPECIES_LOTAD / 2)
    {
        to_return = insn->address;
        tmp_reg = ops[0].reg;
    }
    // lsl rX, rY, 1
    else if (insn->id == ARM_INS_LSL
    && ops[0].type == ARM_OP_REG
    && ops[1].type == ARM_OP_REG
    && ops[1].reg == tmp_reg
    && ops[2].type == ARM_OP_IMM
    && ops[2].imm == 1
    )
        tmp_reg2 = ops[0].reg;
    // str rX, [sp, 16]
    else if (insn->id == ARM_INS_STR
             && ops[0].type == ARM_OP_REG
             && ops[0].reg == tmp_reg2
             && ops[1].type == ARM_OP_MEM
             && !ops[1].subtracted
             && ops[1].mem.base == ARM_REG_SP
             && ops[1].mem.index == ARM_REG_INVALID
             && ops[1].mem.disp == 16)
        return to_return;

    return -1;
}

static int IsIntroLotadForCry_2(const struct cs_insn * insn)
{
    static int to_return;
    static unsigned tmp_reg;
    cs_arm_op * ops = insn->detail->arm.operands;
    // ldr rX, =SPECIES_LOTAD
    if (insn->id == ARM_INS_LDR
        && ops[0].type == ARM_OP_REG
        && ops[1].type == ARM_OP_MEM
        && !ops[1].subtracted
        && ops[1].mem.base == ARM_REG_PC
        && ops[1].mem.index == ARM_REG_INVALID)
    {
        to_return = (insn->address & ~3) + ops[1].mem.disp + 4;
        tmp_reg = ops[0].reg;
    }
    // str rX, [sp, #0x10]
    else if (insn->id == ARM_INS_STR
             && ops[0].type == ARM_OP_REG
             && ops[0].reg == tmp_reg
             && ops[1].type == ARM_OP_MEM
             && !ops[1].subtracted
             && ops[1].mem.base == ARM_REG_SP
             && ops[1].mem.index == ARM_REG_INVALID
             && ops[1].mem.disp == 16)
        return to_return;
    return -1;
}

static int IsIntroLotadForCry(const struct cs_insn * insn)
{
    int retval = IsIntroLotadForCry_1(insn);
    if (retval >= 0)
        return retval;
    return IsIntroLotadForCry_2(insn);
}

static int IsIntroLotadForPic_1(const struct cs_insn * insn)
{
    static int to_return;
    static unsigned tmp_reg;
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov rX, SPECIES_LOTAD / 2
    if (insn->id == ARM_INS_MOV
    && ops[0].type == ARM_OP_REG
    && ops[1].type == ARM_OP_IMM
    && ops[1].imm == SPECIES_LOTAD / 2)
    {
        to_return = insn->address;
        tmp_reg = ops[0].reg;
    }
    // lsl rX, rY, 1
    else if (insn->id == ARM_INS_LSL
    && ops[0].type == ARM_OP_REG
    && ops[1].type == ARM_OP_REG
    && ops[1].reg == tmp_reg
    && ops[2].type == ARM_OP_IMM
    && ops[2].imm == 1
    )
        return to_return;

    return -1;
}

static int IsIntroLotadForPic_2(const struct cs_insn * insn)
{
    cs_arm_op * ops = insn->detail->arm.operands;
    // ldr rX, =SPECIES_LOTAD
    if (insn->id == ARM_INS_LDR
        && ops[0].type == ARM_OP_REG
        && ops[1].type == ARM_OP_MEM
        && !ops[1].subtracted
        && ops[1].mem.base == ARM_REG_PC
        && ops[1].mem.index == ARM_REG_INVALID)
        return (insn->address & ~3) + ops[1].mem.disp + 4;
    return -1;
}

static int IsIntroLotadForPic(const struct cs_insn * insn)
{
    int retval = IsIntroLotadForPic_1(insn);
    if (retval >= 0)
        return retval;
    return IsIntroLotadForPic_2(insn);
}

static int IsWallyZigzagoon_1(const struct cs_insn * insn)
{
    static int to_return;
    static unsigned tmp_reg;
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov rX, SPECIES_ZIGZAGOON / 2
    if (insn->id == ARM_INS_MOV
        && ops[0].type == ARM_OP_REG
        && ops[1].type == ARM_OP_IMM
        && ops[1].imm == SPECIES_ZIGZAGOON / 2)
    {
        to_return = insn->address;
        tmp_reg = ops[0].reg;
    }
        // lsl rX, rY, 1
    else if (insn->id == ARM_INS_LSL
             && ops[0].type == ARM_OP_REG
             && ops[0].reg == ARM_REG_R1
             && ops[1].type == ARM_OP_REG
             && ops[1].reg == tmp_reg
             && ops[2].type == ARM_OP_IMM
             && ops[2].imm == 1
        )
        return to_return;

    return -1;
}

static int IsWallyZigzagoon_2(const struct cs_insn * insn)
{
    cs_arm_op * ops = insn->detail->arm.operands;
    // ldr rX, =SPECIES_ZIGZAGOON
    if (insn->id == ARM_INS_LDR
        && ops[0].type == ARM_OP_REG
        && ops[0].reg == ARM_REG_R1
        && ops[1].type == ARM_OP_MEM
        && !ops[1].subtracted
        && ops[1].mem.base == ARM_REG_PC
        && ops[1].mem.index == ARM_REG_INVALID)
        return (insn->address & ~3) + ops[1].mem.disp + 4;
    return -1;
}

static int IsWallyZigzagoon(const struct cs_insn * insn)
{
    int retval = IsWallyZigzagoon_1(insn);
    if (retval >= 0)
        return retval;
    return IsWallyZigzagoon_2(insn);
}

static int IsWallyRalts_1(const struct cs_insn * insn)
{
    static int to_return;
    static unsigned tmp_reg;
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov rX, SPECIES_RALTS / 2
    if (insn->id == ARM_INS_MOV
        && ops[0].type == ARM_OP_REG
        && ops[1].type == ARM_OP_IMM
        && ops[1].imm == SPECIES_RALTS / 2)
    {
        to_return = insn->address;
        tmp_reg = ops[0].reg;
    }
        // lsl rX, rY, 1
    else if (insn->id == ARM_INS_LSL
             && ops[0].type == ARM_OP_REG
             && ops[0].reg == ARM_REG_R1
             && ops[1].type == ARM_OP_REG
             && ops[1].reg == tmp_reg
             && ops[2].type == ARM_OP_IMM
             && ops[2].imm == 1
        )
        return to_return;

    return -1;
}

static int IsWallyRalts_2(const struct cs_insn * insn)
{
    cs_arm_op * ops = insn->detail->arm.operands;
    // ldr rX, =SPECIES_RALTS
    if (insn->id == ARM_INS_LDR
        && ops[0].type == ARM_OP_REG
        && ops[0].reg == ARM_REG_R1
        && ops[1].type == ARM_OP_MEM
        && !ops[1].subtracted
        && ops[1].mem.base == ARM_REG_PC
        && ops[1].mem.index == ARM_REG_INVALID)
        return (insn->address & ~3) + ops[1].mem.disp + 4;
    return -1;
}

static int IsWallyRalts(const struct cs_insn * insn)
{
    int retval = IsWallyRalts_1(insn);
    if (retval >= 0)
        return retval;
    return IsWallyRalts_2(insn);
}

/*
 * ---------------------------------------------------------
 * get_instr_addr(
 *   FILE * elfFile,
 *   const char * symname,
 *   int (*callback)(const struct cs_insn *)
 * )
 *
 * Disassembles the function of the provided name until the
 * callback returns a positive integer, then returns that
 * integer. If the end of the function is reached and the
 * callback never returns positive, -1 is returned instead.
 * The callback takes a single argument, a pointer to a
 * disassembled instruction. It then runs internal logic to
 * determine whether the instruction or sequence of in-
 * structions is what is desired, then returns the address
 * of that instruction.
 * ---------------------------------------------------------
 */

static int get_instr_addr(FILE * elfFile, const char * symname, int (*callback)(const struct cs_insn *))
{
    int retval = -1;
    Elf32_Sym * sym = GetSymbolByName(symname);
    Elf32_Shdr * section = GetSectionHeader(sym->st_shndx);
    fseek(elfFile, (sym->st_value & ~1) - section->sh_addr + section->sh_offset, SEEK_SET);
    unsigned char * data = malloc(sym->st_size);
    if (fread(data, 1, sym->st_size, elfFile) != sym->st_size)
        FATAL_ERROR("fread");
    struct cs_insn *insn;
    int count = cs_disasm(sCapstone, data, sym->st_size, sym->st_value & ~1, 0, &insn);
    for (int i = 0; i < count; i++) {
        int to_return = callback(&insn[i]);
        if (to_return >= 0) {
            retval = to_return;
            break;
        }
    }
    cs_free(insn, count);
    free(data);
    return retval;
}

int main(int argc, char ** argv)
{
    const char * romName = "Emerald (U)";
    const char * romCode = "BPEE";
    FILE * elfFile = NULL;
    FILE * outFile = NULL;

    // Argument parser
    for (int i = 1; i < argc; i++) {
        char * arg = argv[i];
        if (strcmp(arg, "--name") == 0) {
            i++;
            if (i == argc) {
                FATAL_ERROR("missing argument to --name\n");
            }
            romName = argv[i];
        } else if (strcmp(arg, "--code") == 0) {
            i++;
            if (i == argc) {
                FATAL_ERROR("missing argument to --code\n");
            }
            romCode = argv[i];
        } else if (arg[0] == '-') {
            FATAL_ERROR("unrecognized option: \"%s\"\n", arg);
        } else if (elfFile == NULL) {
            elfFile = fopen(arg, "rb");
            if (elfFile == NULL) {
                FATAL_ERROR("unable to open file \"%s\" for reading\n", arg);
            }
        } else if (outFile == NULL) {
            outFile = fopen(arg, "w");
            if (outFile == NULL) {
                FATAL_ERROR("unable to open file \"%s\" for writing\n", arg);
            }
        } else {
            FATAL_ERROR("usage: %s ELF OUTPUT [--name NAME] [--code CODE]\n", argv[0]);
        }
    }

    if (outFile == NULL) {
        FATAL_ERROR("usage: %s ELF OUTPUT [--name NAME] [--code CODE]\n", argv[0]);
    }

    // Load the ELF metadata
    InitElf(elfFile);
#ifdef _MSC_VER
#define print(format, ...) (fprintf(outFile, format, __VA_ARGS__))
#else
#define print(format, ...) (fprintf(outFile, format, ##__VA_ARGS__))
#endif
#define config_set(name, value) (print("%s=0x%X\n", (name), (value)))
#define sym_get(name) (GetSymbolByName((name))->st_value)
#define config_sym(name, symname) (config_set((name), sym_get(symname) & 0x1FFFFFF))

    // Initialize Capstone
    cs_open(CS_ARCH_ARM, CS_MODE_THUMB, &sCapstone);
    cs_option(sCapstone, CS_OPT_DETAIL, CS_OPT_ON);

    // Start writing the INI
    print("[%s]\n", romName);
    print("Game=%s\n", romCode);
    print("Version=0\n");
    print("Type=Em\n");
    print("TableFile=gba_english\n");

    // Find the first block after the ROM
    int shnum = GetSectionHeaderCount();
    uint32_t entry = GetEntryPoint();
    uint32_t end = entry;
    for (int i = 0; i < shnum; i++) {
        Elf32_Shdr * sec = GetSectionHeader(i);
        end = max(end, sec->sh_addr + sec->sh_size);
    }
    end -= entry;
    if (end & 0xFFFF) {
        end += 0x10000 - (end & 0xFFFF);
    }
    print("FreeSpace=0x%X\n", end);

    // Pokemon data
    print("PokemonCount=%d\n", NUM_SPECIES - 1);
    print("PokemonNameLength=%d\n", POKEMON_NAME_LENGTH + 1);
    config_sym("PokemonMovesets", "gLevelUpLearnsets");
    config_sym("EggMoves", "gEggMoves");
    config_sym("PokemonTMHMCompat", "gTMHMLearnsets");
    config_sym("PokemonEvolutions", "gEvolutionTable");
    config_sym("StarterPokemon", "sStarterMon");
    // This symbol is inside a C function, so we must take an assist from capstone.
    config_set("StarterItems", get_instr_addr(elfFile, "CB2_GiveStarter", IsLoadingStarterItems) & 0x1FFFFFF);
    config_sym("TrainerData", "gTrainers");
    Elf32_Sym * Em_gTrainers = GetSymbolByName("gTrainers");
    print("TrainerEntrySize=%d\n", Em_gTrainers->st_size / TRAINERS_COUNT);
    config_set("TrainerCount", TRAINERS_COUNT);
    config_sym("TrainerClassNames", "gTrainerClassNames");
    Elf32_Sym * Em_gTrainerClassNames = GetSymbolByName("gTrainerClassNames");
    print("TrainerClassCount=%d\n", TRAINER_CLASS_COUNT);
    print("TrainerClassNameLength=%d\n", Em_gTrainerClassNames->st_size / TRAINER_CLASS_COUNT);
    print("TrainerNameLength=%d\n", 16); // hardcoded for now
    print("DoublesTrainerClasses=[%d, %d, %d, %d, %d]\n", TRAINER_CLASS_SR_AND_JR, TRAINER_CLASS_TWINS, TRAINER_CLASS_YOUNG_COUPLE, TRAINER_CLASS_OLD_COUPLE, TRAINER_CLASS_SIS_AND_BRO); // hardcoded for now
    print("EliteFourIndices=[%d, %d, %d, %d, %d]\n", TRAINER_SIDNEY, TRAINER_PHOEBE, TRAINER_GLACIA, TRAINER_DRAKE, TRAINER_WALLACE); // hardcoded for now
    config_sym("MossdeepStevenTeamOffset", "sStevenMons");
    Elf32_Sym * Em_gItems = GetSymbolByName("gItems");
    print("ItemEntrySize=%d\n", Em_gItems->st_size / ITEMS_COUNT);
    print("ItemCount=%d\n", ITEMS_COUNT - 1);
    print("MoveCount=%d\n", MOVES_COUNT - 1);
    config_sym("MoveDescriptions", "gMoveDescriptionPointers");
    Elf32_Sym * Em_gMoveNames = GetSymbolByName("gMoveNames");
    print("MoveNameLength=%d\n", Em_gMoveNames->st_size / MOVES_COUNT);
    Elf32_Sym * Em_gAbilityNames = GetSymbolByName("gAbilityNames");
    print("AbilityNameLength=%d\n", Em_gAbilityNames->st_size / ABILITIES_COUNT);
    config_sym("TmMoves", "sUnusedData2");
    config_sym("TmMovesDuplicate", "sTMHMMoves");
    config_sym("MoveTutorData", "gTutorMoves");
    Elf32_Sym* Em_gTutorMoves = GetSymbolByName("gTutorMoves");
    print("MoveTutorMoves=%d\n", Em_gTutorMoves->st_size / 2);
    config_sym("ItemImages", "gItemIconTable");

    print("TmPals=[");
    char buffer[64];
    for (int i = 0; i < len(gTypeNames); i++) {
        sprintf(buffer, "gItemIconPalette_%sTMHM", gTypeNames[i]);
        if (i != 0)
            print(", ");
        print("0x%X", GetSymbolByName(buffer)->st_value & 0x1FFFFFF);
    }
    print("]\n");

    config_set("IntroCryOffset", get_instr_addr(elfFile, "Task_NewGameBirchSpeechSub_InitPokeBall", IsIntroLotadForCry) & 0x1FFFFFF);
    config_set("IntroSpriteOffset", get_instr_addr(elfFile, "NewGameBirchSpeech_CreateLotadSprite", IsIntroLotadForPic) & 0x1FFFFFF);
    print("ItemBallPic=%d\n", OBJ_EVENT_GFX_ITEM_BALL);
    print("TMBallPic=%d\n", OBJ_EVENT_GFX_UNUSED_NATU_DOLL);
    config_sym("TradeTableOffset", "sIngameTrades");
    Elf32_Sym * Em_gIngameTrades = GetSymbolByName("sIngameTrades");
    print("TradeTableSize=%d\n", Em_gIngameTrades->st_size / 60); // hardcoded for now
    print("TradesUnused=[]\n"); // so randomizer doesn't complain
    print("InstantTextTweak=instant_text/em_instant_text\n"); // so randomizer doesn't complain
    config_set("CatchingTutorialOpponentMonOffset", get_instr_addr(elfFile, "StartWallyTutorialBattle", IsWallyRalts) & 0x1FFFFFF);
    config_set("CatchingTutorialPlayerMonOffset", get_instr_addr(elfFile, "LoadWallyZigzagoon", IsWallyZigzagoon) & 0x1FFFFFF);
    config_sym("PCPotionOffset", "sNewGamePCItems");
    print("PickupTableStartLocator=0D000E0016000300560055\n"); // hardcoded
    Elf32_Sym * Em_gPickupItems = GetSymbolByName("sPickupItems");
    Elf32_Sym * Em_gRarePickupItems = GetSymbolByName("sRarePickupItems");
    print("PickupItemCount=%d\n", (Em_gPickupItems->st_size / 2) + (Em_gRarePickupItems->st_size / 2)); // hardcoded for now
    config_sym("TypeEffectivenessOffset", "gTypeEffectiveness");
    print("DeoxysStatPrefix=190A1E0A230A280A\n"); // hardcoded

    // These may need some fixing to support dynamic offsets.
    print("StaticPokemonSupport=1\n");
    for (int i = 0; i < len(gStaticPokemon); i++) {
        print("StaticPokemon{}={Species=[");
        for (int j = 0; j < 9; j++) {
            if (gStaticPokemon[i][j].speciesLabel == NULL) break;
            if (j != 0)
                print(", ");
            print("0x%X", (sym_get(gStaticPokemon[i][j].speciesLabel) & 0x1FFFFFF) + gStaticPokemon[i][j].speciesOffset);
        }
        print("]");
        for (int j = 0; j < 9; j++) {
            if (gStaticPokemon[i][j].levelLabel == NULL) break;
            print(", Level=[0x%X]", (sym_get(gStaticPokemon[i][j].levelLabel) & 0x1FFFFFF) + gStaticPokemon[i][j].levelOffset);
        }
        print("}");
        for (int j = 0; j < 9; j++) {
            if (gStaticPokemon[i][j].comment == NULL) break;
            print("%s\n", gStaticPokemon[i][j].comment);
        }
    }
    for (int i = 0; i < len(gRoamingPokemon); i++) {
        print("RoamingPokemon{}={Species=[");
        for (int j = 0; j < 9; j++) {
            if (gRoamingPokemon[i][j].speciesLabel == NULL) break;
            if (j != 0)
                print(", ");
            print("0x%X", (sym_get(gRoamingPokemon[i][j].speciesLabel) & 0x1FFFFFF) + gRoamingPokemon[i][j].speciesOffset);
        }
        print("]");
        for (int j = 0; j < 9; j++) {
            if (j == 0)
                print(", Level=[");
            else if (gRoamingPokemon[i][j].levelLabel == NULL) {
                print("]");
                break;
            }
            else
                print(", ");
            print("0x%X", (sym_get(gRoamingPokemon[i][j].levelLabel) & 0x1FFFFFF) + gRoamingPokemon[i][j].levelOffset);
        }
        print("}");
        for (int j = 0; j < 9; j++) {
            if (gRoamingPokemon[i][j].comment == NULL) break;
            if (j != 0)
                print(", ");
            print("%s\n", gRoamingPokemon[i][j].comment);
        }
    }

    print("StaticEggPokemonOffsets=[22]\n"); // index no of wynaut egg static
    print("StaticFirstBattleTweak=hardcoded_statics/em_firstbattle\n"); // hardcoded
    print("StaticFirstBattleSpeciesOffset=0xFE003C\n"); // hardcoded
    print("StaticFirstBattleLevelOffset=0xFE0008\n"); // hardcoded
    print("StaticFirstBattleOffset=25\n"); // hardcoded
    Elf32_Sym * Em_CreateInitialRoamerMon = GetSymbolByName("CreateInitialRoamerMon");
    print("CreateInitialRoamerMonFunctionStartOffset=0x%X\n", (Em_CreateInitialRoamerMon->st_value - 1) & 0x1FFFFFF);
    print("StaticSouthernIslandOffsets=[16, 17]\n"); // index nos of latios/latias statics

    for (int i = 0; i < len(gTMTexts); i++) {
        print("TMText[]=[%d,%d,%d,%d,0x%02X,%s]\n", gTMTexts[i].tmno, gTMTexts[i].mapgp, gTMTexts[i].mapno, gTMTexts[i].scriptno, gTMTexts[i].offset, gTMTexts[i].text);
    }
    for (int i = 0; i < len(gMoveTutorTexts); i++) {
        print("MoveTutorText[]=[%d,%d,%d,%d,0x%02X,%s]\n", gMoveTutorTexts[i].tmno, gMoveTutorTexts[i].mapgp, gMoveTutorTexts[i].mapno, gMoveTutorTexts[i].scriptno, gMoveTutorTexts[i].offset, gMoveTutorTexts[i].text);
    }

    print("SpecialMusicStatics=[%d,%d,%d,%d,%d,%d,%d]\n", 151, 249, 250, 382, 383, 384, 386); // hardcoded for now
    print("NewIndexToMusicTweak=musicfix/em_musicfix\n"); // hardcoded
    print("NewIndexToMusicPoolOffset=0xFE014C\n"); // hardcoded

    print("ShopItemOffsets=[");
    char buffer2[64];
    for (int i = 0; i < len(gPokeMarts); i++) {
        sprintf(buffer2, "%s", gPokeMarts[i]);
        if (i != 0)
            print(", ");
        print("0x%X", GetSymbolByName(buffer2)->st_value & 0x1FFFFFF);
    }
    print("]\n");

    print("SkipShops=[1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 19, 20, 21, 22, 23, 24, 25, 26]\n"); // hardcoded
    print("MainGameShops=[0, 4, 17, 18]\n"); // hardcoded
    config_sym("HiddenItemSparkleFlagScript", "EventScript_SetHiddenItemSparkleFlag");
    config_sym("ModernExpFlagScript", "EventScript_SetModernExpFlag");
    config_sym("EvoEveryLevelFlagScript", "EventScript_SetEvoEveryLevelFlag");
    print("CRC32=1F1C08FB\n"); // CRC32 of an official Emerald ROM. Unless you change it the rando will tell you that it's unofficial, but it doesn't matter,

    DestroyResources();
    fclose(outFile);
    fclose(elfFile);
    return 0;
}


/******************************************************************************
 * 
 * IMPORTANT!!
 * 
 * Binary patches are included in the randomizer program, so please use
 * hard-coded linker addresses to make sure the following symbols have their
 * addresses unchanged from vanilla Emerald:
 * 
 * src/pokemon.o(ewram_data)
 *         gEnemyParty                         - 0x02024744 (random statics)
 * 
 * gflib/text.o(.text)
 *         RunTextPrinters                     - 0x08004778 (instant text) // option removed from randomizer
 * 
 * src/battle_controllers.o(.text)
 *         SetUpBattleVarsAndBirchZigzagoon    - 0x0803269c (random statics)
 * 
 * src/pokemon.o(.text)
 *         CreateMon                           - 0x08067b4c (random statics)
 *         SetMonData                          - 0x0806acac (random statics)
 * 
 * src/battle_setup.o(.text)
 *         BattleSetup_StartLegendaryBattle    - 0x080b0934 (fix music) // option removed from randomizer
 * 
 * src/menu.o(.rodata)
 *         sTextSpeedFrameDelays               - 0x0860f094 (instant text) // option removed from randomizer
 * 
 * Also please make sure no data is written to the following addresses:
 * 
 * 0x08a00000 - 0x08a000df (instant text)     only 0x00 bytes // option removed from randomizer
 * 0x08fe0000 - 0x08fe0047 (random statics)   only 0xFF bytes
 * 0x08fe0100 - 0x08fe017f (fix music)        only 0xFF bytes // option removed from randomizer
 * 
******************************************************************************/

