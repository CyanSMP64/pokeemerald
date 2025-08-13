#ifndef GUARD_BATTLE_MESSAGE_H
#define GUARD_BATTLE_MESSAGE_H

#define TEXT_BUFF_ARRAY_COUNT   18

// for 0xFD
#define B_TXT_BUFF1 0x0
#define B_TXT_BUFF2 0x1
#define B_TXT_COPY_VAR_1 0x2
#define B_TXT_COPY_VAR_2 0x3
#define B_TXT_COPY_VAR_3 0x4
#define B_TXT_PLAYER_MON1_NAME 0x5
#define B_TXT_OPPONENT_MON1_NAME 0x6
#define B_TXT_PLAYER_MON2_NAME 0x7
#define B_TXT_OPPONENT_MON2_NAME 0x8
#define B_TXT_LINK_PLAYER_MON1_NAME 0x9
#define B_TXT_LINK_OPPONENT_MON1_NAME 0xA
#define B_TXT_LINK_PLAYER_MON2_NAME 0xB
#define B_TXT_LINK_OPPONENT_MON2_NAME 0xC
#define B_TXT_ATK_NAME_WITH_PREFIX_MON1 0xD
#define B_TXT_ATK_PARTNER_NAME 0xE
#define B_TXT_ATK_NAME_WITH_PREFIX 0xF
#define B_TXT_DEF_NAME_WITH_PREFIX 0x10
#define B_TXT_EFF_NAME_WITH_PREFIX 0x11 // EFF = short for gEffectBank
#define B_TXT_ACTIVE_NAME_WITH_PREFIX 0x12
#define B_TXT_SCR_ACTIVE_NAME_WITH_PREFIX 0x13
#define B_TXT_CURRENT_MOVE 0x14
#define B_TXT_LAST_MOVE 0x15
#define B_TXT_LAST_ITEM 0x16
#define B_TXT_LAST_ABILITY 0x17
#define B_TXT_ATK_ABILITY 0x18
#define B_TXT_DEF_ABILITY 0x19
#define B_TXT_SCR_ACTIVE_ABILITY 0x1A
#define B_TXT_EFF_ABILITY 0x1B
#define B_TXT_TRAINER1_CLASS 0x1C
#define B_TXT_TRAINER1_NAME 0x1D
#define B_TXT_LINK_PLAYER_NAME 0x1E
#define B_TXT_LINK_PARTNER_NAME 0x1F
#define B_TXT_LINK_OPPONENT1_NAME 0x20
#define B_TXT_LINK_OPPONENT2_NAME 0x21
#define B_TXT_LINK_SCR_TRAINER_NAME 0x22
#define B_TXT_PLAYER_NAME 0x23
#define B_TXT_TRAINER1_LOSE_TEXT 0x24
#define B_TXT_TRAINER1_WIN_TEXT 0x25
#define B_TXT_26 0x26
#define B_TXT_PC_CREATOR_NAME 0x27
#define B_TXT_ATK_PREFIX1 0x28
#define B_TXT_DEF_PREFIX1 0x29
#define B_TXT_ATK_PREFIX2 0x2A
#define B_TXT_DEF_PREFIX2 0x2B
#define B_TXT_ATK_PREFIX3 0x2C
#define B_TXT_DEF_PREFIX3 0x2D
#define B_TXT_TRAINER2_CLASS 0x2E
#define B_TXT_TRAINER2_NAME 0x2F
#define B_TXT_TRAINER2_LOSE_TEXT 0x30
#define B_TXT_TRAINER2_WIN_TEXT 0x31
#define B_TXT_PARTNER_CLASS 0x32
#define B_TXT_PARTNER_NAME 0x33
#define B_TXT_BUFF3 0x34
#define B_TXT_ATK_NAME_WITH_PREFIX_LOWER 0x35
#define B_TXT_DEF_NAME_WITH_PREFIX_LOWER 0x36
#define B_TXT_EFF_NAME_WITH_PREFIX_LOWER 0x37 // EFF = short for gEffectBank
#define B_TXT_ACTIVE_NAME_WITH_PREFIX_LOWER 0x38
#define B_TXT_SCR_ACTIVE_NAME_WITH_PREFIX_LOWER 0x39
#define B_TXT_ABILITY_NAME_WITH_PREFIX 0x3a
#define B_TXT_ABILITY_NAME_WITH_PREFIX_LOWER 0x3b
#define B_TXT_A_AN_ITEM_GRAMMAR 0x3c

// for B_TXT_BUFF1, B_TXT_BUFF2 and B_TXT_BUFF3

#define B_BUFF_STRING                   0
#define B_BUFF_NUMBER                   1
#define B_BUFF_MOVE                     2
#define B_BUFF_TYPE                     3
#define B_BUFF_MON_NICK_WITH_PREFIX     4
#define B_BUFF_STAT                     5
#define B_BUFF_SPECIES                  6
#define B_BUFF_MON_NICK                 7
#define B_BUFF_NEGATIVE_FLAVOR          8
#define B_BUFF_ABILITY                  9
#define B_BUFF_ITEM                     10
#define B_BUFF_TYPE2                    11
#define B_BUFF_MON_NICK_WITH_PREFIX_LOWER 12

#define B_BUFF_PLACEHOLDER_BEGIN        0xFD
#define B_BUFF_EOS                      0xFF

#define PREPARE_FLAVOR_BUFFER(textVar, flavorId)                            \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_NEGATIVE_FLAVOR;                                    \
    textVar[2] = flavorId;                                                  \
    textVar[3] = B_BUFF_EOS;                                                \
}

#define PREPARE_STAT_BUFFER(textVar, statId)                                \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_STAT;                                               \
    textVar[2] = statId;                                                    \
    textVar[3] = B_BUFF_EOS;                                                \
}

#define PREPARE_ABILITY_BUFFER(textVar, abilityId)                          \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_ABILITY;                                            \
    textVar[2] = abilityId;                                                 \
    textVar[3] = (abilityId & 0xFF00) >> 8;                                 \
    textVar[4] = B_BUFF_EOS;                                                \
}

#define PREPARE_TYPE_BUFFER(textVar, typeId)                                \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_TYPE;                                               \
    textVar[2] = typeId;                                                    \
    textVar[3] = B_BUFF_EOS;                                                \
}

#define PREPARE_TYPE2_BUFFER(textVar, typeId)                               \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_TYPE2;                                              \
    textVar[2] = typeId;                                                    \
    textVar[3] = B_BUFF_EOS;                                                \
}

#define PREPARE_BYTE_NUMBER_BUFFER(textVar, maxDigits, number)  \
{                                                               \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                      \
    textVar[1] = B_BUFF_NUMBER;                                 \
    textVar[2] = 1;                                             \
    textVar[3] = maxDigits;                                     \
    textVar[4] = (number);                                      \
    textVar[5] = B_BUFF_EOS;                                    \
}

#define PREPARE_HWORD_NUMBER_BUFFER(textVar, maxDigits, number)             \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_NUMBER;                                             \
    textVar[2] = 2;                                                         \
    textVar[3] = maxDigits;                                                 \
    textVar[4] = (number);                                                  \
    textVar[5] = (number & 0x0000FF00) >> 8;                                \
    textVar[6] = B_BUFF_EOS;                                                \
}

#define PREPARE_WORD_NUMBER_BUFFER(textVar, maxDigits, number)  \
{                                                               \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                      \
    textVar[1] = B_BUFF_NUMBER;                                 \
    textVar[2] = 4;                                             \
    textVar[3] = maxDigits;                                     \
    textVar[4] = (number);                                      \
    textVar[5] = (number & 0x0000FF00) >> 8;                    \
    textVar[6] = (number & 0x00FF0000) >> 16;                   \
    textVar[7] = (number & 0xFF000000) >> 24;                   \
    textVar[8] = B_BUFF_EOS;                                    \
}

#define PREPARE_STRING_BUFFER(textVar, stringId)                \
{                                                               \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                      \
    textVar[1] = B_BUFF_STRING;                                 \
    textVar[2] = (stringId & 0xFF);                             \
    textVar[3] = (stringId & 0xFF00) >> 8;                      \
    textVar[4] = B_BUFF_EOS;                                    \
}

#define PREPARE_MOVE_BUFFER(textVar, move)                      \
{                                                               \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                      \
    textVar[1] = B_BUFF_MOVE;                                   \
    textVar[2] = (move & 0xFF);                                 \
    textVar[3] = (move & 0xFF00) >> 8;                          \
    textVar[4] = B_BUFF_EOS;                                    \
}

#define PREPARE_ITEM_BUFFER(textVar, item)                      \
{                                                               \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                      \
    textVar[1] = B_BUFF_ITEM;                                   \
    textVar[2] = item;                                          \
    textVar[3] = (item & 0xFF00) >> 8;                          \
    textVar[4] = B_BUFF_EOS;                                    \
}

#define PREPARE_SPECIES_BUFFER(textVar, species)                \
{                                                               \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                      \
    textVar[1] = B_BUFF_SPECIES;                                \
    textVar[2] = species;                                       \
    textVar[3] = (species & 0xFF00) >> 8;                       \
    textVar[4] = B_BUFF_EOS;                                    \
}

#define PREPARE_MON_NICK_WITH_PREFIX_BUFFER(textVar, battler, partyId)      \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_MON_NICK_WITH_PREFIX;                               \
    textVar[2] = battler;                                                   \
    textVar[3] = partyId;                                                   \
    textVar[4] = B_BUFF_EOS;                                                \
}

#define PREPARE_MON_NICK_WITH_PREFIX_LOWER_BUFFER(textVar, battler, partyId) \
{                                                                           \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                                  \
    textVar[1] = B_BUFF_MON_NICK_WITH_PREFIX_LOWER;                         \
    textVar[2] = battler;                                                   \
    textVar[3] = partyId;                                                   \
    textVar[4] = B_BUFF_EOS;                                                \
}

#define PREPARE_MON_NICK_BUFFER(textVar, battler, partyId)      \
{                                                               \
    textVar[0] = B_BUFF_PLACEHOLDER_BEGIN;                      \
    textVar[1] = B_BUFF_MON_NICK;                               \
    textVar[2] = battler;                                       \
    textVar[3] = partyId;                                       \
    textVar[4] = B_BUFF_EOS;                                    \
}

struct BattleMsgData
{
    u16 currentMove;
    u16 originallyUsedMove;
    u16 lastItem;
    u16 lastAbility;
    u8 scrActive;
    u8 bakScriptPartyIdx;
    u8 hpScale;
    u8 itemEffectBattler;
    u8 moveType;
    u16 abilities[MAX_BATTLERS_COUNT];
    u8 textBuffs[3][TEXT_BUFF_ARRAY_COUNT];
};

void BufferStringBattle(u16 stringID);
u32 BattleStringExpandPlaceholdersToDisplayedString(const u8 *src);
u32 BattleStringExpandPlaceholders(const u8 *src, u8 *dst);
void BattlePutTextOnWindow(const u8 *text, u8 windowId);
void SetPpNumbersPaletteInMoveSelection(void);
u8 GetCurrentPpToMaxPpState(u8 currentPp, u8 maxPp);

extern struct BattleMsgData *gBattleMsgDataPtr;
extern u16 sBattlerAbilities[MAX_BATTLERS_COUNT];

extern const u8 *const gBattleStringsTable[];
extern const u8 *const gStatNamesTable[];
extern const u8 *const gPokeblockWasTooXStringTable[];
extern const u8 *const gRefereeStringsTable[];
extern const u8 *const gRoundsStringTable[];

extern const u8 gText_PkmnIsEvolving[];
extern const u8 gText_CongratsPkmnEvolved[];
extern const u8 gText_PkmnStoppedEvolving[];
extern const u8 gText_EllipsisQuestionMark[];
extern const u8 gText_WhatWillPkmnDo[];
extern const u8 gText_WhatWillPkmnDo2[];
extern const u8 gText_WhatWillWallyDo[];
extern const u8 gText_LinkStandby[];
extern const u8 gText_BattleMenu[];
extern const u8 gText_SafariZoneMenu[];
extern const u8 gText_MoveInterfacePP[];
extern const u8 gText_MoveInterfaceType[];
extern const u8 gText_MoveInterfacePpType[];
extern const u8 gText_MoveInterfaceDynamicColors[];
extern const u8 gText_WhichMoveToForget4[];
extern const u8 gText_BattleYesNoChoice[];
extern const u8 gText_BattleSwitchWhich[];
extern const u8 gText_BattleSwitchWhich2[];
extern const u8 gText_BattleSwitchWhich3[];
extern const u8 gText_BattleSwitchWhich4[];
extern const u8 gText_BattleSwitchWhich5[];
extern const u8 gText_SafariBalls[];
extern const u8 gText_SafariBallLeft[];
extern const u8 gText_Sleep[];
extern const u8 gText_Poison[];
extern const u8 gText_Burn[];
extern const u8 gText_Paralysis[];
extern const u8 gText_Ice[];
extern const u8 gText_Confusion[];
extern const u8 gText_Love[];
extern const u8 gText_SpaceAndSpace[];
extern const u8 gText_CommaSpace[];
extern const u8 gText_Space2[];
extern const u8 gText_LineBreak[];
extern const u8 gText_NewLine[];
extern const u8 gText_Are[];
extern const u8 gText_Are2[];
extern const u8 gText_BadEgg[];

extern const u8 gText_BattleNameWally[];
extern const u8 gText_BattleNameBrock[];
extern const u8 gText_BattleNameMisty[];
extern const u8 gText_BattleNameSurge[];
extern const u8 gText_BattleNameErika[];
extern const u8 gText_BattleNameKoga[];
extern const u8 gText_BattleNameSabrina[];
extern const u8 gText_BattleNameBlaine[];
extern const u8 gText_BattleNameGiovanni[];
extern const u8 gText_BattleNameJanine[];
extern const u8 gText_BattleNameLorelei[];
extern const u8 gText_BattleNameBruno[];
extern const u8 gText_BattleNameAgatha[];
extern const u8 gText_BattleNameBlue[];
extern const u8 gText_BattleNameGary[];
extern const u8 gText_BattleNameFart[];
extern const u8 gText_BattleNameJoey[];
extern const u8 gText_BattleNameFalkner[];
extern const u8 gText_BattleNameBugsy[];
extern const u8 gText_BattleNameWhitney[];
extern const u8 gText_BattleNameMorty[];
extern const u8 gText_BattleNameChuck[];
extern const u8 gText_BattleNameJasmine[];
extern const u8 gText_BattleNamePryce[];
extern const u8 gText_BattleNameClair[];
extern const u8 gText_BattleNameWill[];
extern const u8 gText_BattleNameKaren[];
extern const u8 gText_BattleNameSilver[];
extern const u8 gText_BattleNameProton[];
extern const u8 gText_BattleNamePetrel[];
extern const u8 gText_BattleNameAriana[];
extern const u8 gText_BattleNameArcher[];
extern const u8 gText_BattleNameJessie[];
extern const u8 gText_BattleNameJames[];
extern const u8 gText_BattleNameRed[];
extern const u8 gText_BattleNameLance[];
extern const u8 gText_BattleNameMay[];
extern const u8 gText_BattleNameBrendan[];
extern const u8 gText_BattleNameRoxanne[];
extern const u8 gText_BattleNameBrawly[];
extern const u8 gText_BattleNameWattson[];
extern const u8 gText_BattleNameFlannery[];
extern const u8 gText_BattleNameNorman[];
extern const u8 gText_BattleNameWinona[];
extern const u8 gText_BattleNameLiza[];
extern const u8 gText_BattleNameTate[];
extern const u8 gText_BattleNameTateAndLiza[];
extern const u8 gText_BattleNameLizaAndTate[];
extern const u8 gText_BattleNameJuan[];
extern const u8 gText_BattleNameMatt[];
extern const u8 gText_BattleNameShelly[];
extern const u8 gText_BattleNameCourtney[];
extern const u8 gText_BattleNameTabitha[];
extern const u8 gText_BattleNameArchie[];
extern const u8 gText_BattleNameMaxie[];
extern const u8 gText_BattleNameSidney[];
extern const u8 gText_BattleNamePhoebe[];
extern const u8 gText_BattleNameGlacia[];
extern const u8 gText_BattleNameDrake[];
extern const u8 gText_BattleNameWallace[];
extern const u8 gText_BattleNameSteven[];
extern const u8 gText_BattleNameNoland[];
extern const u8 gText_BattleNameGreta[];
extern const u8 gText_BattleNameTucker[];
extern const u8 gText_BattleNameLucy[];
extern const u8 gText_BattleNameSpenser[];
extern const u8 gText_BattleNameBrandon[];
extern const u8 gText_BattleNameAnabel[];
extern const u8 gText_BattleNameBarry[];
extern const u8 gText_BattleNameMars[];
extern const u8 gText_BattleNameJupiter[];
extern const u8 gText_BattleNameSaturn[];
extern const u8 gText_BattleNameCharon[];
extern const u8 gText_BattleNameCyrus[];
extern const u8 gText_BattleNameRoark[];
extern const u8 gText_BattleNameGardenia[];
extern const u8 gText_BattleNameMaylene[];
extern const u8 gText_BattleNameWake[];
extern const u8 gText_BattleNameFantina[];
extern const u8 gText_BattleNameByron[];
extern const u8 gText_BattleNameCandice[];
extern const u8 gText_BattleNameVolkner[];
extern const u8 gText_BattleNameAaron[];
extern const u8 gText_BattleNameBertha[];
extern const u8 gText_BattleNameFlint[];
extern const u8 gText_BattleNameLucian[];
extern const u8 gText_BattleNameCynthia[];
extern const u8 gText_BattleNamePalmer[];
extern const u8 gText_BattleNameThorton[];
extern const u8 gText_BattleNameDahlia[];
extern const u8 gText_BattleNameDarach[];
extern const u8 gText_BattleNameArgenta[];
extern const u8 gText_BattleNameCheren[];
extern const u8 gText_BattleNameBianca[];
extern const u8 gText_BattleNameRood[];
extern const u8 gText_BattleNameZinzolin[];
extern const u8 gText_BattleNameGorm[];
extern const u8 gText_BattleNameBronius[];
extern const u8 gText_BattleNameGiallo[];
extern const u8 gText_BattleNameRyoku[];
extern const u8 gText_BattleNameShadow[];
extern const u8 gText_BattleNameAnthea[];
extern const u8 gText_BattleNameConcordia[];
extern const u8 gText_BattleNameN[];
extern const u8 gText_BattleNameGhetsis[];
extern const u8 gText_BattleNameDenis[];
extern const u8 gText_BattleNameDennis[];
extern const u8 gText_BattleNameCilan[];
extern const u8 gText_BattleNameChili[];
extern const u8 gText_BattleNameCress[];
extern const u8 gText_BattleNameLenora[];
extern const u8 gText_BattleNameBurgh[];
extern const u8 gText_BattleNameElesa[];
extern const u8 gText_BattleNameClay[];
extern const u8 gText_BattleNameSkyla[];
extern const u8 gText_BattleNameBrycen[];
extern const u8 gText_BattleNameDrayden[];
extern const u8 gText_BattleNameRoxie[];
extern const u8 gText_BattleNameMarlon[];
extern const u8 gText_BattleNameIris[];
extern const u8 gText_BattleNameShauntal[];
extern const u8 gText_BattleNameGrimsley[];
extern const u8 gText_BattleNameMarshal[];
extern const u8 gText_BattleNameCaitlin[];
extern const u8 gText_BattleNameAlder[];
extern const u8 gText_BattleNameBenga[];
extern const u8 gText_BattleNameIngo[];
extern const u8 gText_BattleNameEmmet[];
extern const u8 gText_BattleNameHugh[];
extern const u8 gText_BattleNameColress[];
extern const u8 gText_BattleNamePreston[];
extern const u8 gText_BattleNameSalty[];
extern const u8 gText_BattleNameDialga[];

extern const u8 gText_Win[];
extern const u8 gText_Loss[];
extern const u8 gText_Draw[];
extern const u8 gText_StatRose[];
extern const u8 gText_DefendersStatRose[];
extern const u8 gText_PkmnGettingPumped[];
extern const u8 gText_PkmnShroudedInMist[];
extern const u8 gText_PkmnsXPreventsSwitching[];
extern const u8 gText_TheGreatNewHope[];
extern const u8 gText_WillChampionshipDreamComeTrue[];
extern const u8 gText_AFormerChampion[];
extern const u8 gText_ThePreviousChampion[];
extern const u8 gText_TheUnbeatenChampion[];
extern const u8 gText_PlayerMon1Name[];
extern const u8 gText_Vs[];
extern const u8 gText_OpponentMon1Name[];
extern const u8 gText_Mind[];
extern const u8 gText_Skill[];
extern const u8 gText_Body[];
extern const u8 gText_Judgment[];
extern const u8 gText_EmptyString3[];
extern const u8 gText_RecordBattleToPass[];
extern const u8 gText_BattleRecordedOnPass[];
extern const u8 gText_BattleTourney[];

extern const u16 gMissStringIds[];
extern const u16 gTrappingMoves[];

#endif // GUARD_BATTLE_MESSAGE_H
