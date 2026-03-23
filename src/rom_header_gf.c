#include "global.h"
#include "data.h"
#include "pokemon_icon.h"
#include "decoration.h"
#include "battle_main.h"
#include "item.h"
#include "pokeball.h"
#include "battle.h"
#include "battle_controllers.h"
#include "event_data.h"
#include "start_menu.h"
#include "battle_setup.h"
#include "evolution_scene.h"
#include "battle_message.h"
#include "menu.h"
#include "item_menu.h"
#include "pokemon_summary_screen.h"
#include "pokemon.h"
#include "starter_choose.h"
#include "party_menu.h"
#include "battle_scripts.h"
#include "constants/items.h"

// The purpose of this struct is for outside applications to be
// able to access parts of the ROM or its save file, like a public API.
// In vanilla, it was used by Colosseum and XD to access pokemon graphics.
// 
// If this struct is rearranged in any way, it defeats the purpose of 
// having it at all. Applications like PKHex or streaming HUDs may find
// these values useful, so there's some potential benefit to keeping it.
// If there's a compilation problem below, just comment out the assignment
// instead of changing this struct.
struct GFRomHeader
{
    u32 version;                                                                                // 0x100
    u32 language;                                                                               // 0x104
    u8 gameName[32];                                                                            // 0x108
    const struct CompressedSpriteSheet * monFrontPics;                                          // 0x128
    const struct CompressedSpriteSheet * monBackPics;                                           // 0x12c
    const struct CompressedSpritePalette * monNormalPalettes;                                   // 0x130
    const struct CompressedSpritePalette * monShinyPalettes;                                    // 0x134
    const u8 * const * monIcons;                                                                // 0x138
    const u8 * monIconPaletteIds;                                                               // 0x13c
    const struct SpritePalette * monIconPalettes;                                               // 0x140
    const u8 (* monSpeciesNames)[];                                                             // 0x144
    const u8 (* moveNames)[];                                                                   // 0x148
    const struct Decoration * decorations;                                                      // 0x14c
    u32 flagsOffset;                                                                            // 0x150
    u32 varsOffset;                                                                             // 0x154
    u32 pokedexOffset;                                                                          // 0x158
    u32 seen1Offset;                                                                            // 0x15c
    u32 seen2Offset;                                                                            // 0x160
    u32 pokedexVar;                                                                             // 0x164
    u32 pokedexFlag;                                                                            // 0x168
    u32 mysteryEventFlag;                                                                       // 0x16c
    u32 pokedexCount;                                                                           // 0x170
    u8 playerNameLength;                                                                        // 0x174
    u8 trainerNameLength;                                                                       // 0x175
    u8 pokemonNameLength1;                                                                      // 0x176
    u8 pokemonNameLength2;                                                                      // 0x177
    u8 unk5;                                                                                    // 0x178
    u8 unk6;                                                                                    // 0x179
    u8 unk7;                                                                                    // 0x17a
    u8 unk8;                                                                                    // 0x17b
    u8 unk9;                                                                                    // 0x17c
    u8 unk10;                                                                                   // 0x17d
    u8 unk11;                                                                                   // 0x17e
    u8 unk12;                                                                                   // 0x17f
    u8 unk13;                                                                                   // 0x180
    u8 unk14;                                                                                   // 0x181
    u8 unk15;                                                                                   // 0x182
    u8 unk16;                                                                                   // 0x183
    u8 unk17;                                                                                   // 0x184
    u32 saveBlock2Size;                                                                         // 0x188
    u32 saveBlock1Size;                                                                         // 0x18c
    u32 partyCountOffset;                                                                       // 0x190
    u32 partyOffset;                                                                            // 0x194
    u32 warpFlagsOffset;                                                                        // 0x198
    u32 trainerIdOffset;                                                                        // 0x19c
    u32 playerNameOffset;                                                                       // 0x1a0
    u32 playerGenderOffset;                                                                     // 0x1a4
    u32 frontierStatusOffset;                                                                   // 0x1a8
    u32 frontierStatusOffset2;                                                                  // 0x1ac
    u32 externalEventFlagsOffset;                                                               // 0x1b0
    u32 externalEventDataOffset;                                                                // 0x1b4
    u32 unk18;                                                                                  // 0x1b8
    const struct SpeciesInfo * speciesInfo;                                                     // 0x1bc
    const u8 (* abilityNames)[];                                                                // 0x1c0
    const u8 * const * abilityDescriptions;                                                     // 0x1c4
    const struct Item * items;                                                                  // 0x1c8
    const struct BattleMove * moves;                                                            // 0x1cc
    const struct CompressedSpriteSheet * ballGfx;                                               // 0x1d0
    const struct CompressedSpritePalette * ballPalettes;                                        // 0x1d4
    u32 gcnLinkFlagsOffset;                                                                     // 0x1d8
    u32 gameClearFlag;                                                                          // 0x1dc
    u32 ribbonFlag;                                                                             // 0x1e0
    u8 bagCountItems;                                                                           // 0x1e4
    u8 bagCountKeyItems;                                                                        // 0x1e5
    u8 bagCountPokeballs;                                                                       // 0x1e6
    u8 bagCountTMHMs;                                                                           // 0x1e7
    u8 bagCountBerries;                                                                         // 0x1e8
    u8 pcItemsCount;                                                                            // 0x1e9
    u32 pcItemsOffset;                                                                          // 0x1ec
    u32 giftRibbonsOffset;                                                                      // 0x1f0
    u32 enigmaBerryOffset;                                                                      // 0x1f4
    u32 enigmaBerrySize;                                                                        // 0x1f8
    const u8 * moveDescriptions;                                                                // 0x1fc
    u32 unk20;                                                                                  // 0x200
    // pointers below are to be read by nat dex tracker extension
    const u8 * header_sBattleBuffersTransferData;                                               // 0x204
    const u8 * header_gBattleTextBuff1;                                                         // 0x208
    const u32 * header_gBattleTypeFlags;                                                        // 0x20c
    const u8 * header_gBattleTerrain;                                                           // 0x210
    const u32 * header_gBattleControllerExecFlags;                                              // 0x214
    const u8 * header_gBattlersCount;                                                           // 0x218
    const u16 * header_gBattlerPartyIndexes;                                                    // 0x21c
    const u8 * header_gActionsByTurnOrder;                                                      // 0x220
    const u8 * header_gCurrentTurnActionNumber;                                                 // 0x224
    const struct BattlePokemon * header_gBattleMons;                                            // 0x228
    const s32 * header_gTakenDmg;                                                               // 0x22c
    const u8 * header_gBattlerAttacker;                                                         // 0x230
    const u8 * header_gBattlerTarget;                                                           // 0x234
    const u8 * const * header_gBattlescriptCurrInstr;                                           // 0x238
    const u16 * header_gLockedMoves;                                                            // 0x23c
    const u8 * header_gMoveResultFlags;                                                         // 0x240
    const u32 * header_gHitMarker;                                                              // 0x244
    const u16 * header_gSideStatuses;                                                           // 0x248
    const struct SideTimer * header_gSideTimers;                                                // 0x24c
    const u32 * header_gStatuses3;                                                              // 0x250
    const struct DisableStruct * header_gDisableStructs;                                        // 0x254
    const u16 * header_gPaydayMoney;                                                            // 0x258
    const u8 * header_gBattleCommunication;                                                     // 0x25c
    const u8 * header_gBattleOutcome;                                                           // 0x260
    const u16 * header_gBattleWeather;                                                          // 0x264
    const struct WishFutureKnock * header_gWishFutureKnock;                                     // 0x268
    const struct BattleScripting * header_gBattleScripting;                                     // 0x26c
    struct BattleStruct ** header_gBattleStruct;                                                // 0x270
    const u16 * header_gMoveToLearn;                                                            // 0x274
    const u8 * header_gPlayerPartyCount;                                                        // 0x278
    const struct Pokemon * header_gPlayerParty;                                                 // 0x27c
    const struct Pokemon * header_gEnemyParty;                                                  // 0x280
    const struct MapHeader * header_gMapHeader;                                                 // 0x284
    const u16 * header_gSpecialVar_Result;                                                      // 0x288
    const u8 * header_sSpecialFlags;                                                            // 0x28c
    const u8 * header_sSaveDialogTimer;                                                         // 0x290
    const u16 * header_gTrainerBattleOpponent_A;                                                // 0x294
    const u16 * header_gTrainerBattleOpponent_B;                                                // 0x298
    struct EvoInfo ** header_sEvoStructPtr;                                                     // 0x29c
    const u16 * header_sBattlerAbilities;                                                       // 0x2a0
    const u8 * header_sStartMenuWindowId;                                                       // 0x2a4
    const u16 * header_gSpecialVar_ItemId;                                                      // 0x2a8
    struct PokemonSummaryScreenData ** header_sMonSummaryScreen;                                // 0x2ac
    u32 registeredItemOffset;                                                                   // 0x2b0
    u32 gameStatsOffset;                                                                        // 0x2b4
    u32 badgeOffset;                                                                            // 0x2b8
    u32 bagItemsOffset;                                                                         // 0x2bc
    u32 bagKeyItemsOffset;                                                                      // 0x2c0
    u32 bagPokeBallsOffset;                                                                     // 0x2c4
    u32 bagTMHMOffset;                                                                          // 0x2c8
    u32 bagBerryOffset;                                                                         // 0x2cc
    u32 encryptionKeyOffset;                                                                    // 0x2d0
    // iwram
    void (**header_gBattleMainFunc)(void);                                                      // 0x2d4
    const struct BattleResults * header_gBattleResults;                                         // 0x2d8
    const u8 * header_gMultiUsePlayerCursor;                                                    // 0x2dc
    struct SaveBlock1 ** header_gSaveBlock1Ptr;                                                 // 0x2e0
    struct SaveBlock2 ** header_gSaveBlock2Ptr;                                                 // 0x2e4
    const struct Task * header_gTasks;                                                          // 0x2e8
    // rom
    void (*header_BattleIntroDrawPartySummaryScreens)(void);                                    // 0x2ec
    void (*header_BattleIntroRecordMonsToDex)(void);                                            // 0x2f0
    void (*header_HandleTurnActionSelectionState)(void);                                        // 0x2f4
    void (*header_ReturnFromBattleToOverworld)(void);                                           // 0x2f8
    u16 (*header_GetEvolutionTargetSpecies)(struct Pokemon *mon, u8 type, u16 evolutionItem);   // 0x2fc
    void (*header_Task_HandleConfirmStarterInput)(u8 taskId);                                   // 0x300
    void (*header_Task_EvolutionScene)(u8 taskId);                                              // 0x304
    const u32 (* header_gExperienceTables)[];                                                   // 0x308
    const u32 * const * header_gLevelUpLearnsets;                                               // 0x30c
    const u8 (* header_gTrainerClassNames)[];                                                   // 0x310
    const struct Trainer * header_gTrainers;                                                    // 0x314
    const u16 * header_sTMHMMoves;                                                              // 0x318
    // battle scripts
    const u8 * header_BattleScript_RanAwayUsingMonAbility;                                      // 0x31c
    const u8 * header_BattleScript_TryLearnMoveLoop;                                            // 0x320
    const u8 * header_BattleScript_LearnMoveReturn;                                             // 0x324
    const u8 * header_BattleScript_SnatchedMove;                                                // 0x328
    const u8 * header_BattleScript_FocusPunchSetUp;                                             // 0x32c
    const u8 * header_BattleScript_MoveUsedWokeUp;                                              // 0x330
    const u8 * header_BattleScript_MoveUsedIsFrozen;                                            // 0x334
    const u8 * header_BattleScript_MoveUsedUnfroze;                                             // 0x338
    const u8 * header_BattleScript_MoveUsedIsConfused;                                          // 0x33c
    const u8 * header_BattleScript_MoveUsedIsConfusedNoMore;                                    // 0x340
    const u8 * header_BattleScript_MoveUsedIsInLove;                                            // 0x344
    // ability battle scripts
    const u8 * header_BattleScript_CantMakeAsleep;                                              // 0x348
    const u8 * header_BattleScript_AbsorbUpdateHp;                                              // 0x34c
    const u8 * header_BattleScript_RestCantSleep;                                               // 0x350
    const u8 * header_BattleScript_EffectHealBell;                                              // 0x354
    const u8 * header_BattleScript_PerishSongNotAffected;                                       // 0x358
    const u8 * header_BattleScript_PrintAbilityMadeIneffective;                                 // 0x35c
    const u8 * header_BattleScript_LeechSeedTurnPrintAndUpdateHp;                               // 0x360
    const u8 * header_BattleScript_MoveEffectSleep;                                             // 0x364
    const u8 * header_BattleScript_MoveEffectPoison;                                            // 0x368
    const u8 * header_BattleScript_MoveEffectBurn;                                              // 0x36c
    const u8 * header_BattleScript_MoveEffectParalysis;                                         // 0x370
    const u8 * header_BattleScript_DrizzleActivates;                                            // 0x374
    const u8 * header_BattleScript_SpeedBoostActivates;                                         // 0x378
    const u8 * header_BattleScript_TraceActivates;                                              // 0x37c
    const u8 * header_BattleScript_RainDishActivates;                                           // 0x380
    const u8 * header_BattleScript_SandstreamActivates;                                         // 0x384
    const u8 * header_BattleScript_ShedSkinActivates;                                           // 0x388
    const u8 * header_BattleScript_IntimidateActivatesLoop;                                     // 0x38c
    const u8 * header_BattleScript_IntimidatePrevented_End;                                     // 0x390
    const u8 * header_BattleScript_DroughtActivates;                                            // 0x394
    const u8 * header_BattleScript_TookAttack;                                                  // 0x398
    const u8 * header_BattleScript_SturdyPreventsOHKO;                                          // 0x39c
    const u8 * header_BattleScript_DampStopsExplosion;                                          // 0x3a0
    const u8 * header_BattleScript_MoveHPDrain;                                                 // 0x3a4
    const u8 * header_BattleScript_MonMadeMoveUseless;                                          // 0x3a8
    const u8 * header_BattleScript_FlashFireBoost;                                              // 0x3ac
    const u8 * header_BattleScript_AbilityPreventsPhasingOut;                                   // 0x3b0
    const u8 * header_BattleScript_AbilityNoStatLoss;                                           // 0x3b4
    const u8 * header_BattleScript_BRNPrevention;                                               // 0x3b8
    const u8 * header_BattleScript_PRLZPrevention;                                              // 0x3bc
    const u8 * header_BattleScript_PSNPrevention;                                               // 0x3c0
    const u8 * header_BattleScript_ObliviousPreventsAttraction;                                 // 0x3c4
    const u8 * header_BattleScript_FlinchPrevention;                                            // 0x3c8
    const u8 * header_BattleScript_OwnTempoPrevents;                                            // 0x3cc
    const u8 * header_BattleScript_SoundproofProtected;                                         // 0x3d0
    const u8 * header_BattleScript_AbilityNoSpecificStatLoss;                                   // 0x3d4
    const u8 * header_BattleScript_StickyHoldActivates;                                         // 0x3d8
    const u8 * header_BattleScript_ColorChangeActivates;                                        // 0x3dc
    const u8 * header_BattleScript_RoughSkinActivates;                                          // 0x3e0
    const u8 * header_BattleScript_CuteCharmActivates;                                          // 0x3e4
    const u8 * header_BattleScript_MoveUsedLoafingAroundMsg;                                    // 0x3e8
    // program addresses
    u16 offsetStarterMonChoice;                                                                 // 0x3ec
    u16 offsetRepelStepCount;                                                                   // 0x3ee
    u16 offsetGrowthRateIndex;                                                                  // 0x3f0
    u16 offsetMapHeaderLayoutId;                                                                // 0x3f2
    u16 offsetPokemonGettingExp;                                                                // 0x3f4
    u16 offsetBattlePokemonStatStages;                                                          // 0x3f6
    u16 offsetBattlePokemonTypes;                                                               // 0x3f8
    u16 offsetBattlePokemonDoublesPartner;                                                      // 0x3fa
    u16 offsetBattleMoves;                                                                      // 0x3fc
    u16 offsetBattleMoveFlags;                                                                  // 0x3fe
    u16 offsetEvoInfoTaskId;                                                                    // 0x400
    u16 offsetTaskIsActive;                                                                     // 0x402
    u16 offsetTrainerFlagStart;                                                                 // 0x404
    u16 offsetSysFlagStart;                                                                     // 0x406
    u16 offsetSysFlagSafariMode;                                                                // 0x408
    u16 offsetBattleResultsCurrentTurn;                                                         // 0x40a
    u16 offsetBattleResultsEnemyMoveId;                                                         // 0x40c
    u16 offsetBattleResultsLastAttackerMove;                                                    // 0x40e
    u16 offsetBattleCommConfirmedCount;                                                         // 0x410
    u16 offsetBattleCommLevitate;                                                               // 0x412
    u16 offsetPokemonSubstruct;                                                                 // 0x414
    u16 offsetPokemonStatus;                                                                    // 0x416
    u16 offsetPokemonStatsLvCurHp;                                                              // 0x418
    u16 offsetPokemonStatsMaxHpAtk;                                                             // 0x41a
    u16 offsetPokemonStatsDefSpe;                                                               // 0x41c
    u16 offsetPokemonStatsSpaSpd;                                                               // 0x41e
    u16 offsetRivalName;                                                                        // 0x420
    u16 offsetOptionsButtonMode;                                                                // 0x422
    u16 offsetPokedexOwned;                                                                     // 0x424
    u16 offsetPokedexSeen;                                                                      // 0x426
    u16 sizeofBaseStatsPokemon;                                                                 // 0x428
    u16 sizeofExpTablePokemon;                                                                  // 0x42a
    u16 sizeofExpTableLevel;                                                                    // 0x42c
    u16 sizeofTrainer;                                                                          // 0x42e
    u16 sizeofTrainerName;                                                                      // 0x430
    u16 sizeofTrainerClass;                                                                     // 0x432
    u16 sizeofMaxTrainerItems;                                                                  // 0x434
    u16 sizeofBattlePokemon;                                                                    // 0x436
    u16 sizeofBattleMove;                                                                       // 0x438
    u16 sizeofTaskStruct;                                                                       // 0x43a
    u16 sizeofTMHMMoveId;                                                                       // 0x43c
    u16 sizeofGameStat;                                                                         // 0x43e
    u16 sizeofLastAttackerMove;                                                                 // 0x440
    u16 sizeofPokemonStruct;                                                                    // 0x442
    // program values
    u16 shinyOdds;                                                                              // 0x444
    u8 buttonModeLR;                                                                            // 0x446
    // battle details screen addresses
    u16 offsetBattleMonsStatus2;                                                                // 0x448
    u16 offsetBattleStructWrappedBy;                                                            // 0x44a
    u16 sizeofStatus3;                                                                          // 0x44c
    u16 sizeofSideStatuses;                                                                     // 0x44e
    u16 sizeofSideTimers;                                                                       // 0x450
    u16 sizeofDisableStruct;                                                                    // 0x452
    u16 offsetTimerReflect;                                                                     // 0x454
    u16 offsetTimerLightScreen;                                                                 // 0x456
    u16 offsetTimerSpikes;                                                                      // 0x458
    u16 offsetTimerSafeguard;                                                                   // 0x45a
    u16 offsetTimerMist;                                                                        // 0x45c
    u16 offsetWishStructFutureCounter;                                                          // 0x45e
    u16 offsetWishStructFutureSource;                                                           // 0x460
    u16 offsetWishStructWishCounter;                                                            // 0x462
    u16 offsetWishStructWishSource;                                                             // 0x464
    u16 offsetWishStructKnockOff;                                                               // 0x466
    // pokemon data addresses
    u16 offsetBaseStats;                                                                        // 0x468
    u16 offsetTypes;                                                                            // 0x46a
    u16 offsetCatchRate;                                                                        // 0x46c
    u16 offsetExpYield;                                                                         // 0x46e
    u16 offsetGenderRatio;                                                                      // 0x470
    u16 offsetBaseFriendship;                                                                   // 0x472
    u16 offsetAbilities;                                                                        // 0x474
    u16 offsetLevelUpMoveId;                                                                    // 0x476
    u16 offsetLevelUpMoveLv;                                                                    // 0x478
    u16 sizeofExpYield;                                                                         // 0x47a
    u16 sizeofAbilityInBytes;                                                                   // 0x47c
    u16 sizeofLevelUpLearnset;                                                                  // 0x47e
    u16 sizeofLevelUpMove;                                                                      // 0x480
    u16 sizeofLevelUpMoveId;                                                                    // 0x482
    u16 sizeofLevelUpMoveLv;                                                                    // 0x484
    u32 endFlagLevelUp;                                                                         // 0x488
    // nat dex rom version
    u8 romVersionMajor;                                                                         // 0x48c
    u8 romVersionMinor;                                                                         // 0x48d
    u8 romVersionPatch;                                                                         // 0x48e
    u32 romVersionBuild;                                                                        // 0x490
    // program addresses - trainers
    u16 offsetTrainerClass;                                                                     // 0x494
    u16 offsetTrainerGender;                                                                    // 0x496
    u16 offsetTrainerPic;                                                                       // 0x498
    u16 offsetTrainerName;                                                                      // 0x49a
    u16 offsetTrainerItems;                                                                     // 0x49c
    u16 offsetTrainerDoubleBattle;                                                              // 0x49e
    u16 offsetTrainerFlagsAI;                                                                   // 0x4a0
    u16 offsetTrainerPartySize;                                                                 // 0x4a2
    u16 offsetTrainerPartyPtr;                                                                  // 0x4a4
    u16 offsetTrainerMonLevel;                                                                  // 0x4a6
    u16 offsetTrainerMonSpecies;                                                                // 0x4a8
    u16 offsetTrainerMonItem;                                                                   // 0x4aa
    u16 offsetTrainerMonNoItemMove1;                                                            // 0x4ac
    u16 offsetTrainerMonItemMove1;                                                              // 0x4ae
    u16 sizeofTrainerMonWithDefaultMoves;                                                       // 0x4b0
    u16 sizeofTrainerMonWithCustomMoves;                                                        // 0x4b2
    u16 sizeofTrainerItem;                                                                      // 0x4b4
    u16 sizeofTrainerMonCustomMove;                                                             // 0x4b6
    // misc data
    u16 itemCount;                                                                              // 0x4b8
};

// This seems to need to be in the text section for some reason.
// To avoid a changed section attributes warning it's put in a special .text.consts section.
__attribute__((section(".text.consts")))
static const struct GFRomHeader sGFRomHeader = {
    .version = GAME_VERSION,
    .language = GAME_LANGUAGE,
    .gameName = "pokemon emerald version",
    .monFrontPics = gMonFrontPicTable,
    .monBackPics = gMonBackPicTable,
    .monNormalPalettes = gMonPaletteTable,
    .monShinyPalettes = gMonShinyPaletteTable,
    .monIcons = gMonIconTable,
    .monIconPaletteIds = gMonIconPaletteIndices,
    .monIconPalettes = gMonIconPaletteTable,
    .monSpeciesNames = gSpeciesNames,
    .moveNames = gMoveNames,
    .decorations = gDecorations,
    .flagsOffset = offsetof(struct SaveBlock1, flags),
    .varsOffset = offsetof(struct SaveBlock1, vars),
    .pokedexOffset = offsetof(struct SaveBlock2, pokedex),
    .seen1Offset = offsetof(struct SaveBlock1, seen1),
    .seen2Offset = offsetof(struct SaveBlock1, seen2),
    .pokedexVar = VAR_NATIONAL_DEX - VARS_START,
    .pokedexFlag = FLAG_RECEIVED_POKEDEX_FROM_BIRCH,
    .mysteryEventFlag = FLAG_SYS_MYSTERY_EVENT_ENABLE,
    .pokedexCount = NATIONAL_DEX_COUNT,
    .playerNameLength = PLAYER_NAME_LENGTH,
    .trainerNameLength = TRAINER_NAME_LENGTH,
    .pokemonNameLength1 = POKEMON_NAME_LENGTH,
    .pokemonNameLength2 = POKEMON_NAME_LENGTH,
    // Two of the below 12s are likely move/ability name length, given their presence in this header
    .unk5 = 12,
    .unk6 = 12,
    .unk7 = 6,
    .unk8 = 12,
    .unk9 = 6,
    .unk10 = 16,
    .unk11 = 18,
    .unk12 = 12,
    .unk13 = 15,
    .unk14 = 11,
    .unk15 = 1,
    .unk16 = 8,
    .unk17 = 12,
    .saveBlock2Size = sizeof(struct SaveBlock2),
    .saveBlock1Size = sizeof(struct SaveBlock1),
    .partyCountOffset = offsetof(struct SaveBlock1, playerPartyCount),
    .partyOffset = offsetof(struct SaveBlock1, playerParty),
    .warpFlagsOffset = offsetof(struct SaveBlock2, specialSaveWarpFlags),
    .trainerIdOffset = offsetof(struct SaveBlock2, playerTrainerId),
    .playerNameOffset = offsetof(struct SaveBlock2, playerName),
    .playerGenderOffset = offsetof(struct SaveBlock2, playerGender),
    .frontierStatusOffset = offsetof(struct SaveBlock2, frontier.challengeStatus),
    .frontierStatusOffset2 = offsetof(struct SaveBlock2, frontier.challengeStatus),
    .externalEventFlagsOffset = offsetof(struct SaveBlock1, externalEventFlags),
    .externalEventDataOffset = offsetof(struct SaveBlock1, externalEventData),
    .unk18 = 0x00000000,
    .speciesInfo = gSpeciesInfo,
    .abilityNames = gAbilityNames,
    .abilityDescriptions = gAbilityDescriptionPointers,
    .items = gItems,
    .moves = gBattleMoves,
    .ballGfx = gBallSpriteSheets,
    .ballPalettes = gBallSpritePalettes,
    .gcnLinkFlagsOffset = offsetof(struct SaveBlock2, gcnLinkFlags),
    .gameClearFlag = FLAG_SYS_GAME_CLEAR,
    .ribbonFlag = FLAG_SYS_RIBBON_GET,
    .bagCountItems = BAG_ITEMS_COUNT,
    .bagCountKeyItems = BAG_KEYITEMS_COUNT,
    .bagCountPokeballs = BAG_POKEBALLS_COUNT,
    .bagCountTMHMs = BAG_TMHM_COUNT,
    .bagCountBerries = BAG_BERRIES_COUNT,
    .pcItemsCount = PC_ITEMS_COUNT,
    .pcItemsOffset = offsetof(struct SaveBlock1, pcItems),
    .giftRibbonsOffset = offsetof(struct SaveBlock1, giftRibbons),
    .enigmaBerryOffset = offsetof(struct SaveBlock1, enigmaBerry),
    .enigmaBerrySize = sizeof(struct EnigmaBerry),
    .moveDescriptions = NULL,
    .unk20 = 0x00000000, // 0xFFFFFFFF in FRLG
    // pointers below are to be read by nat dex tracker extension
    .header_sBattleBuffersTransferData =                    sBattleBuffersTransferData,
    .header_gBattleTextBuff1 =                              gBattleTextBuff1,
    .header_gBattleTypeFlags =                              &gBattleTypeFlags,
    .header_gBattleTerrain =                                &gBattleTerrain,
    .header_gBattleControllerExecFlags =                    &gBattleControllerExecFlags,
    .header_gBattlersCount =                                &gBattlersCount,
    .header_gBattlerPartyIndexes =                          gBattlerPartyIndexes,
    .header_gActionsByTurnOrder =                           gActionsByTurnOrder,
    .header_gCurrentTurnActionNumber =                      &gCurrentTurnActionNumber,
    .header_gBattleMons =                                   gBattleMons,
    .header_gTakenDmg =                                     gTakenDmg,
    .header_gBattlerAttacker =                              &gBattlerAttacker,
    .header_gBattlerTarget =                                &gBattlerTarget,
    .header_gBattlescriptCurrInstr =                        &gBattlescriptCurrInstr,
    .header_gLockedMoves =                                  gLockedMoves,
    .header_gMoveResultFlags =                              &gMoveResultFlags,
    .header_gHitMarker =                                    &gHitMarker,
    .header_gSideStatuses =                                 gSideStatuses,
    .header_gSideTimers =                                   gSideTimers,
    .header_gStatuses3 =                                    gStatuses3,
    .header_gDisableStructs =                               gDisableStructs,
    .header_gPaydayMoney =                                  &gPaydayMoney,
    .header_gBattleCommunication =                          gBattleCommunication,
    .header_gBattleOutcome =                                &gBattleOutcome,
    .header_gBattleWeather =                                &gBattleWeather,
    .header_gWishFutureKnock =                              &gWishFutureKnock,
    .header_gBattleScripting =                              &gBattleScripting,
    .header_gBattleStruct =                                 &gBattleStruct,
    .header_gMoveToLearn =                                  &gMoveToLearn,
    .header_gPlayerPartyCount =                             &gPlayerPartyCount,
    .header_gPlayerParty =                                  gPlayerParty,
    .header_gEnemyParty =                                   gEnemyParty,
    .header_gMapHeader =                                    &gMapHeader,
    .header_gSpecialVar_Result =                            &gSpecialVar_Result,
    .header_sSpecialFlags =                                 sSpecialFlags,
    .header_sSaveDialogTimer =                              &sSaveDialogTimer,
    .header_gTrainerBattleOpponent_A =                      &gTrainerBattleOpponent_A,
    .header_gTrainerBattleOpponent_B =                      &gTrainerBattleOpponent_B,
    .header_sEvoStructPtr =                                 &sEvoStructPtr,
    .header_sBattlerAbilities =                             sBattlerAbilities,
    .header_sStartMenuWindowId =                            &sStartMenuWindowId,
    .header_gSpecialVar_ItemId =                            &gSpecialVar_ItemId,
    .header_sMonSummaryScreen =                             &sMonSummaryScreen,
    .registeredItemOffset =                                 offsetof(struct SaveBlock1, registeredItem),
    .gameStatsOffset =                                      offsetof(struct SaveBlock1, gameStats),
    .badgeOffset =                                          (offsetof(struct SaveBlock1, flags) + (FLAG_BADGE01_GET / 8)),
    .bagItemsOffset =                                       offsetof(struct SaveBlock1, bagPocket_Items),
    .bagKeyItemsOffset =                                    offsetof(struct SaveBlock1, bagPocket_KeyItems),
    .bagPokeBallsOffset =                                   offsetof(struct SaveBlock1, bagPocket_PokeBalls),
    .bagTMHMOffset =                                        offsetof(struct SaveBlock1, bagPocket_TMHM),
    .bagBerryOffset =                                       offsetof(struct SaveBlock1, bagPocket_Berries),
    .encryptionKeyOffset =                                  offsetof(struct SaveBlock2, encryptionKey),
    // iwram
    .header_gBattleMainFunc =                               &gBattleMainFunc,
    .header_gBattleResults =                                &gBattleResults,
    .header_gMultiUsePlayerCursor =                         &gMultiUsePlayerCursor,
    .header_gSaveBlock1Ptr =                                &gSaveBlock1Ptr,
    .header_gSaveBlock2Ptr =                                &gSaveBlock2Ptr,
    .header_gTasks =                                        gTasks,
    // rom
    .header_BattleIntroDrawPartySummaryScreens =            BattleIntroDrawPartySummaryScreens,
    .header_BattleIntroRecordMonsToDex =                    BattleIntroRecordMonsToDex,
    .header_HandleTurnActionSelectionState =                HandleTurnActionSelectionState,
    .header_ReturnFromBattleToOverworld =                   ReturnFromBattleToOverworld,
    .header_GetEvolutionTargetSpecies =                     GetEvolutionTargetSpecies,
    .header_Task_HandleConfirmStarterInput =                Task_HandleConfirmStarterInput,
    .header_Task_EvolutionScene =                           Task_EvolutionScene,
    .header_gExperienceTables =                             gExperienceTables,
    .header_gLevelUpLearnsets =                             gLevelUpLearnsets,
    .header_gTrainerClassNames =                            gTrainerClassNames,
    .header_gTrainers =                                     gTrainers,
    .header_sTMHMMoves =                                    sTMHMMoves,
    // battle scripts
    .header_BattleScript_RanAwayUsingMonAbility =           BattleScript_RanAwayUsingMonAbility,
    .header_BattleScript_TryLearnMoveLoop =                 BattleScript_TryLearnMoveLoop,
    .header_BattleScript_LearnMoveReturn =                  BattleScript_LearnMoveReturn,
    .header_BattleScript_SnatchedMove =                     BattleScript_SnatchedMove,
    .header_BattleScript_FocusPunchSetUp =                  BattleScript_FocusPunchSetUp,
    .header_BattleScript_MoveUsedWokeUp =                   BattleScript_MoveUsedWokeUp,
    .header_BattleScript_MoveUsedIsFrozen =                 BattleScript_MoveUsedIsFrozen,
    .header_BattleScript_MoveUsedUnfroze =                  BattleScript_MoveUsedUnfroze,
    .header_BattleScript_MoveUsedIsConfused =               BattleScript_MoveUsedIsConfused,
    .header_BattleScript_MoveUsedIsConfusedNoMore =         BattleScript_MoveUsedIsConfusedNoMore,
    .header_BattleScript_MoveUsedIsInLove =                 BattleScript_MoveUsedIsInLove,
    // ability battle scripts
    .header_BattleScript_CantMakeAsleep =                   BattleScript_CantMakeAsleep,
    .header_BattleScript_AbsorbUpdateHp =                   BattleScript_AbsorbUpdateHp,
    .header_BattleScript_RestCantSleep =                    BattleScript_RestCantSleep,
    .header_BattleScript_EffectHealBell =                   BattleScript_EffectHealBell,
    .header_BattleScript_PerishSongNotAffected =            BattleScript_PerishSongNotAffected,
    .header_BattleScript_PrintAbilityMadeIneffective =      BattleScript_PrintAbilityMadeIneffective,
    .header_BattleScript_LeechSeedTurnPrintAndUpdateHp =    BattleScript_LeechSeedTurnPrintAndUpdateHp,
    .header_BattleScript_MoveEffectSleep =                  BattleScript_MoveEffectSleep,
    .header_BattleScript_MoveEffectPoison =                 BattleScript_MoveEffectPoison,
    .header_BattleScript_MoveEffectBurn =                   BattleScript_MoveEffectBurn,
    .header_BattleScript_MoveEffectParalysis =              BattleScript_MoveEffectParalysis,
    .header_BattleScript_DrizzleActivates =                 BattleScript_DrizzleActivates,
    .header_BattleScript_SpeedBoostActivates =              BattleScript_SpeedBoostActivates,
    .header_BattleScript_TraceActivates =                   BattleScript_TraceActivates,
    .header_BattleScript_RainDishActivates =                BattleScript_RainDishActivates,
    .header_BattleScript_SandstreamActivates =              BattleScript_SandstreamActivates,
    .header_BattleScript_ShedSkinActivates =                BattleScript_ShedSkinActivates,
    .header_BattleScript_IntimidateActivatesLoop =          BattleScript_IntimidateActivatesLoop,
    .header_BattleScript_IntimidatePrevented_End =          BattleScript_IntimidatePrevented_End,
    .header_BattleScript_DroughtActivates =                 BattleScript_DroughtActivates,
    .header_BattleScript_TookAttack =                       BattleScript_TookAttack,
    .header_BattleScript_SturdyPreventsOHKO =               BattleScript_SturdyPreventsOHKO,
    .header_BattleScript_DampStopsExplosion =               BattleScript_DampStopsExplosion,
    .header_BattleScript_MoveHPDrain =                      BattleScript_MoveHPDrain,
    .header_BattleScript_MonMadeMoveUseless =               BattleScript_MonMadeMoveUseless,
    .header_BattleScript_FlashFireBoost =                   BattleScript_FlashFireBoost,
    .header_BattleScript_AbilityPreventsPhasingOut =        BattleScript_AbilityPreventsPhasingOut,
    .header_BattleScript_AbilityNoStatLoss =                BattleScript_AbilityNoStatLoss,
    .header_BattleScript_BRNPrevention =                    BattleScript_BRNPrevention,
    .header_BattleScript_PRLZPrevention =                   BattleScript_PRLZPrevention,
    .header_BattleScript_PSNPrevention =                    BattleScript_PSNPrevention,
    .header_BattleScript_ObliviousPreventsAttraction =      BattleScript_ObliviousPreventsAttraction,
    .header_BattleScript_FlinchPrevention =                 BattleScript_FlinchPrevention,
    .header_BattleScript_OwnTempoPrevents =                 BattleScript_OwnTempoPrevents,
    .header_BattleScript_SoundproofProtected =              BattleScript_SoundproofProtected,
    .header_BattleScript_AbilityNoSpecificStatLoss =        BattleScript_AbilityNoSpecificStatLoss,
    .header_BattleScript_StickyHoldActivates =              BattleScript_StickyHoldActivates,
    .header_BattleScript_ColorChangeActivates =             BattleScript_ColorChangeActivates,
    .header_BattleScript_RoughSkinActivates =               BattleScript_RoughSkinActivates,
    .header_BattleScript_CuteCharmActivates =               BattleScript_CuteCharmActivates,
    .header_BattleScript_MoveUsedLoafingAroundMsg =         BattleScript_MoveUsedLoafingAroundMsg,
    // program addresses
    .offsetStarterMonChoice =                               (VAR_STARTER_MON - VARS_START) * 2,
    .offsetRepelStepCount =                                 (VAR_REPEL_STEP_COUNT - VARS_START) * 2,
    .offsetGrowthRateIndex =                                offsetof(struct SpeciesInfo, growthRate),
    .offsetMapHeaderLayoutId =                              offsetof(struct MapHeader, mapLayoutId),
    .offsetPokemonGettingExp =                              offsetof(struct BattleStruct, expGetterMonId),
    .offsetBattlePokemonStatStages =                        offsetof(struct BattlePokemon, statStages),
    .offsetBattlePokemonTypes =                             offsetof(struct BattlePokemon, type1),
    .offsetBattlePokemonDoublesPartner =                    sizeof(struct BattlePokemon) * 2,
    .offsetBattleMoves =                                    offsetof(struct BattleMove, power),
    .offsetBattleMoveFlags =                                offsetof(struct BattleMove, priority) + 1,
    .offsetEvoInfoTaskId =                                  offsetof(struct EvoInfo, evoTaskId),
    .offsetTaskIsActive =                                   offsetof(struct Task, isActive),
    .offsetTrainerFlagStart =                               TRAINER_FLAGS_START,
    .offsetSysFlagStart =                                   SYSTEM_FLAGS,
    .offsetSysFlagSafariMode =                              FLAG_SYS_SAFARI_MODE - SYSTEM_FLAGS,
    .offsetBattleResultsCurrentTurn =                       offsetof(struct BattleResults, battleTurnCounter),
    .offsetBattleResultsEnemyMoveId =                       offsetof(struct BattleResults, lastUsedMoveOpponent),
    .offsetBattleResultsLastAttackerMove =                  offsetof(struct BattleResults, lastUsedMovePlayer),
    .offsetBattleCommConfirmedCount =                       ACTIONS_CONFIRMED_COUNT,
    .offsetBattleCommLevitate =                             MISS_TYPE,
    .offsetPokemonSubstruct =                               offsetof(struct BoxPokemon, secure.substructs),
    .offsetPokemonStatus =                                  offsetof(struct Pokemon, status),
    .offsetPokemonStatsLvCurHp =                            offsetof(struct Pokemon, level),
    .offsetPokemonStatsMaxHpAtk =                           offsetof(struct Pokemon, maxHP),
    .offsetPokemonStatsDefSpe =                             offsetof(struct Pokemon, defense),
    .offsetPokemonStatsSpaSpd =                             offsetof(struct Pokemon, spAttack),
    .offsetRivalName = 0,                                   // only in FireRed
    .offsetOptionsButtonMode =                              offsetof(struct SaveBlock2, optionsButtonMode),
    .offsetPokedexOwned =                                   offsetof(struct Pokedex, owned),
    .offsetPokedexSeen =                                    offsetof(struct Pokedex, seen),
    .sizeofBaseStatsPokemon =                               sizeof(struct SpeciesInfo),
    .sizeofExpTablePokemon =                                sizeof(gExperienceTables[0]),
    .sizeofExpTableLevel =                                  sizeof(gExperienceTables[0][0]),
    .sizeofTrainer =                                        sizeof(struct Trainer),
    .sizeofTrainerName =                                    sizeof(gTrainers->trainerName),
    .sizeofTrainerClass =                                   sizeof(gTrainerClassNames[0]),
    .sizeofMaxTrainerItems =                                MAX_TRAINER_ITEMS,
    .sizeofBattlePokemon =                                  sizeof(struct BattlePokemon),
    .sizeofBattleMove =                                     sizeof(struct BattleMove),
    .sizeofTaskStruct =                                     sizeof(struct Task),
    .sizeofTMHMMoveId =                                     sizeof(sTMHMMoves[0]),
    .sizeofGameStat =                                       sizeof(gSaveBlock1Ptr->gameStats[0]),
    .sizeofLastAttackerMove =                               sizeof(gBattleResults.lastUsedMovePlayer),
    .sizeofPokemonStruct =                                  sizeof(struct Pokemon),
    // program values
    .shinyOdds =                                            SHINY_ODDS,
    .buttonModeLR =                                         OPTIONS_BUTTON_MODE_LR,
    // battle details screen addresses
    .offsetBattleMonsStatus2 =                              offsetof(struct BattlePokemon, status2),
    .offsetBattleStructWrappedBy =                          offsetof(struct BattleStruct, wrappedBy),
    .sizeofStatus3 =                                        sizeof(gStatuses3[0]),
    .sizeofSideStatuses =                                   sizeof(gSideStatuses[0]),
    .sizeofSideTimers =                                     sizeof(struct SideTimer),
    .sizeofDisableStruct =                                  sizeof(struct DisableStruct),
    .offsetTimerReflect =                                   offsetof(struct SideTimer, reflectTimer),
    .offsetTimerLightScreen =                               offsetof(struct SideTimer, lightscreenTimer),
    .offsetTimerSpikes =                                    offsetof(struct SideTimer, spikesAmount),
    .offsetTimerSafeguard =                                 offsetof(struct SideTimer, safeguardTimer),
    .offsetTimerMist =                                      offsetof(struct SideTimer, mistTimer),
    .offsetWishStructFutureCounter =                        offsetof(struct WishFutureKnock, futureSightCounter),
    .offsetWishStructFutureSource =                         offsetof(struct WishFutureKnock, futureSightAttacker),
    .offsetWishStructWishCounter =                          offsetof(struct WishFutureKnock, wishCounter),
    .offsetWishStructWishSource =                           offsetof(struct WishFutureKnock, wishMonId),
    .offsetWishStructKnockOff =                             offsetof(struct WishFutureKnock, knockedOffMons),
    // pokemon data addresses
    .offsetBaseStats =                                      offsetof(struct SpeciesInfo, baseHP),
    .offsetTypes =                                          offsetof(struct SpeciesInfo, types),
    .offsetCatchRate =                                      offsetof(struct SpeciesInfo, catchRate),
    .offsetExpYield =                                       offsetof(struct SpeciesInfo, expYield),
    .offsetGenderRatio =                                    offsetof(struct SpeciesInfo, genderRatio),
    .offsetBaseFriendship =                                 offsetof(struct SpeciesInfo, friendship),
    .offsetAbilities =                                      offsetof(struct SpeciesInfo, abilities),
    .offsetLevelUpMoveId =                                  0,  // hardcoded
    .offsetLevelUpMoveLv =                                  16, // hardcoded
    .sizeofExpYield =                                       sizeof(gSpeciesInfo->expYield),
    .sizeofAbilityInBytes =                                 sizeof(gSpeciesInfo->abilities[0]),
    .sizeofLevelUpLearnset =                                sizeof(gLevelUpLearnsets[0]),
    .sizeofLevelUpMove =                                    sizeof(struct LevelUpMove),
    .sizeofLevelUpMoveId =                                  16, // hardcoded
    .sizeofLevelUpMoveLv =                                  16, // hardcoded
    .endFlagLevelUp =                                       LEVEL_UP_END,
    // nat dex rom version
    .romVersionMajor =                                      NATDEX_VERSION_MAJOR,
    .romVersionMinor =                                      NATDEX_VERSION_MINOR,
    .romVersionPatch =                                      NATDEX_VERSION_PATCH,
    .romVersionBuild =                                      NATDEX_VERSION_BUILD,
    // program addresses - trainers
    .offsetTrainerClass =                                   offsetof(struct Trainer, trainerClass),
    .offsetTrainerGender =                                  offsetof(struct Trainer, encounterMusic_gender),
    .offsetTrainerPic =                                     offsetof(struct Trainer, trainerPic),
    .offsetTrainerName =                                    offsetof(struct Trainer, trainerName),
    .offsetTrainerItems =                                   offsetof(struct Trainer, items),
    .offsetTrainerDoubleBattle =                            offsetof(struct Trainer, doubleBattle),
    .offsetTrainerFlagsAI =                                 offsetof(struct Trainer, aiFlags),
    .offsetTrainerPartySize =                               offsetof(struct Trainer, partySize),
    .offsetTrainerPartyPtr =                                offsetof(struct Trainer, party),
    .offsetTrainerMonLevel =                                offsetof(struct TrainerMonNoItemDefaultMoves, lvl),
    .offsetTrainerMonSpecies =                              offsetof(struct TrainerMonNoItemDefaultMoves, species),
    .offsetTrainerMonItem =                                 offsetof(struct TrainerMonItemDefaultMoves, heldItem),
    .offsetTrainerMonNoItemMove1 =                          offsetof(struct TrainerMonNoItemCustomMoves, moves),
    .offsetTrainerMonItemMove1 =                            offsetof(struct TrainerMonItemCustomMoves, moves),
    .sizeofTrainerMonWithDefaultMoves =                     sizeof(struct TrainerMonItemDefaultMoves),
    .sizeofTrainerMonWithCustomMoves =                      sizeof(struct TrainerMonItemCustomMoves),
    .sizeofTrainerItem =                                    sizeof(gTrainerMonItemCustomMoves->heldItem),
    .sizeofTrainerMonCustomMove =                           sizeof(gTrainerMonItemCustomMoves->moves[0]),
    // misc data
    .itemCount =                                            ITEMS_COUNT,
};
