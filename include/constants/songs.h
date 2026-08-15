#ifndef GUARD_CONSTANTS_SONGS_H
#define GUARD_CONSTANTS_SONGS_H

#include "config/music_expansion_v3.h"

// Original JP names listed on right, along with any additional notes

    #define MUS_DUMMY                   0 // MUS_DUMMY
#if MUX_SE_USE_ITEM == TRUE
    #define SE_USE_ITEM                 1 // SE_KAIFUKU
#endif
#if MUX_SE_PC_LOGIN == TRUE
    #define SE_PC_LOGIN                 2 // SE_PC_LOGIN
#endif
#if MUX_SE_PC_OFF == TRUE
    #define SE_PC_OFF                   3 // SE_PC_OFF
#endif
#if MUX_SE_PC_ON == TRUE
    #define SE_PC_ON                    4 // SE_PC_ON
#endif
#if MUX_SE_SELECT == TRUE
    #define SE_SELECT                   5 // SE_SELECT
#endif
#if MUX_SE_WIN_OPEN == TRUE
    #define SE_WIN_OPEN                 6 // SE_WIN_OPEN
#endif
#if MUX_SE_WALL_HIT == TRUE
    #define SE_WALL_HIT                 7 // SE_WALL_HIT
#endif
#if MUX_SE_DOOR == TRUE
    #define SE_DOOR                     8 // SE_DOOR
#endif
#if MUX_SE_EXIT == TRUE
    #define SE_EXIT                     9 // SE_KAIDAN
#endif
#if MUX_SE_LEDGE == TRUE
    #define SE_LEDGE                    10 // SE_DANSA
#endif
#if MUX_SE_BIKE_BELL == TRUE
    #define SE_BIKE_BELL                11 // SE_JITENSYA
#endif
#if MUX_SE_NOT_EFFECTIVE == TRUE
    #define SE_NOT_EFFECTIVE            12 // SE_KOUKA_L
#endif
#if MUX_SE_EFFECTIVE == TRUE
    #define SE_EFFECTIVE                13 // SE_KOUKA_M
#endif
#if MUX_SE_SUPER_EFFECTIVE == TRUE
    #define SE_SUPER_EFFECTIVE          14 // SE_KOUKA_H
#endif
#if MUX_SE_BALL_OPEN == TRUE
    #define SE_BALL_OPEN                15 // SE_BOWA2
#endif
#if MUX_SE_FAINT == TRUE
    #define SE_FAINT                    16 // SE_POKE_DEAD
#endif
#if MUX_SE_FLEE == TRUE
    #define SE_FLEE                     17 // SE_NIGERU
#endif
#if MUX_SE_SLIDING_DOOR == TRUE
    #define SE_SLIDING_DOOR             18 // SE_JIDO_DOA
#endif
#if MUX_SE_SHIP == TRUE
    #define SE_SHIP                     19 // SE_NAMINORI
#endif
#if MUX_SE_BANG == TRUE
    #define SE_BANG                     20 // SE_BAN
#endif
#if MUX_SE_PIN == TRUE
    #define SE_PIN                      21 // SE_PIN (General "good", commonly for "!")
#endif
#if MUX_SE_BOO == TRUE
    #define SE_BOO                      22 // SE_BOO (General "bad")
#endif
#if MUX_SE_BALL == TRUE
    #define SE_BALL                     23 // SE_BOWA (Giving Poké Ball to nurse, Poké Ball shake, etc)
#endif
#if MUX_SE_CONTEST_PLACE == TRUE
    #define SE_CONTEST_PLACE            24 // SE_JYUNI
#endif
#if MUX_SE_A == TRUE
    #define SE_A                        25 // SE_A (Bard sounds)
#endif
#if MUX_SE_I == TRUE
    #define SE_I                        26 // SE_I
#endif
#if MUX_SE_U == TRUE
    #define SE_U                        27 // SE_U
#endif
#if MUX_SE_E == TRUE
    #define SE_E                        28 // SE_E
#endif
#if MUX_SE_O == TRUE
    #define SE_O                        29 // SE_O
#endif
#if MUX_SE_N == TRUE
    #define SE_N                        30 // SE_N
#endif
#if MUX_SE_SUCCESS == TRUE
    #define SE_SUCCESS                  31 // SE_SEIKAI
#endif
#if MUX_SE_FAILURE == TRUE
    #define SE_FAILURE                  32 // SE_HAZURE
#endif
#if MUX_SE_EXP == TRUE
    #define SE_EXP                      33 // SE_EXP
#endif
#if MUX_SE_BIKE_HOP == TRUE
    #define SE_BIKE_HOP                 34 // SE_JITE_PYOKO
#endif
#if MUX_SE_SWITCH == TRUE
    #define SE_SWITCH                   35 // SE_MU_PACHI
#endif
#if MUX_SE_CLICK == TRUE
    #define SE_CLICK                    36 // SE_TK_KASYA
#endif
#if MUX_SE_FU_ZAKU == TRUE
    #define SE_FU_ZAKU                  37 // SE_FU_ZAKU (Unknown purpose, unused)
#endif
#if MUX_SE_CONTEST_CONDITION_LOSE == TRUE
    #define SE_CONTEST_CONDITION_LOSE   38 // SE_FU_ZAKU2
#endif
#if MUX_SE_LAVARIDGE_FALL_WARP == TRUE
    #define SE_LAVARIDGE_FALL_WARP      39 // SE_FU_ZUZUZU
#endif
#if MUX_SE_ICE_STAIRS == TRUE
    #define SE_ICE_STAIRS               40 // SE_RU_GASHIN
#endif
#if MUX_SE_ICE_BREAK == TRUE
    #define SE_ICE_BREAK                41 // SE_RU_GASYAN
#endif
#if MUX_SE_ICE_CRACK == TRUE
    #define SE_ICE_CRACK                42 // SE_RU_BARI
#endif
#if MUX_SE_FALL == TRUE
    #define SE_FALL                     43 // SE_RU_HYUU
#endif
#if MUX_SE_UNLOCK == TRUE
    #define SE_UNLOCK                   44 // SE_KI_GASYAN
#endif
#if MUX_SE_WARP_IN == TRUE
    #define SE_WARP_IN                  45 // SE_TK_WARPIN
#endif
#if MUX_SE_WARP_OUT == TRUE
    #define SE_WARP_OUT                 46 // SE_TK_WARPOUT
#endif
#if MUX_SE_REPEL == TRUE
    #define SE_REPEL                    47 // SE_TU_SAA
#endif
#if MUX_SE_ROTATING_GATE == TRUE
    #define SE_ROTATING_GATE            48 // SE_HI_TURUN
#endif
#if MUX_SE_TRUCK_MOVE == TRUE
    #define SE_TRUCK_MOVE               49 // SE_TRACK_MOVE
#endif
#if MUX_SE_TRUCK_STOP == TRUE
    #define SE_TRUCK_STOP               50 // SE_TRACK_STOP
#endif
#if MUX_SE_TRUCK_UNLOAD == TRUE
    #define SE_TRUCK_UNLOAD             51 // SE_TRACK_HAIKI
#endif
#if MUX_SE_TRUCK_DOOR == TRUE
    #define SE_TRUCK_DOOR               52 // SE_TRACK_DOOR
#endif
#if MUX_SE_BERRY_BLENDER == TRUE
    #define SE_BERRY_BLENDER            53 // SE_MOTER
#endif
#if MUX_SE_CARD == TRUE
    #define SE_CARD                     54 // SE_CARD (Unused, different from the RS card SE)
#endif
#if MUX_SE_SAVE == TRUE
    #define SE_SAVE                     55 // SE_SAVE
#endif
#if MUX_SE_BALL_BOUNCE_1 == TRUE
    #define SE_BALL_BOUNCE_1            56 // SE_KON
#endif
#if MUX_SE_BALL_BOUNCE_2 == TRUE
    #define SE_BALL_BOUNCE_2            57 // SE_KON2
#endif
#if MUX_SE_BALL_BOUNCE_3 == TRUE
    #define SE_BALL_BOUNCE_3            58 // SE_KON3
#endif
#if MUX_SE_BALL_BOUNCE_4 == TRUE
    #define SE_BALL_BOUNCE_4            59 // SE_KON4
#endif
#if MUX_SE_BALL_TRADE == TRUE
    #define SE_BALL_TRADE               60 // SE_SUIKOMU
#endif
#if MUX_SE_BALL_THROW == TRUE
    #define SE_BALL_THROW               61 // SE_NAGERU
#endif
#if MUX_SE_NOTE_C == TRUE
    #define SE_NOTE_C                   62 // SE_TOY_C
#endif
#if MUX_SE_NOTE_D == TRUE
    #define SE_NOTE_D                   63 // SE_TOY_D
#endif
#if MUX_SE_NOTE_E == TRUE
    #define SE_NOTE_E                   64 // SE_TOY_E
#endif
#if MUX_SE_NOTE_F == TRUE
    #define SE_NOTE_F                   65 // SE_TOY_F
#endif
#if MUX_SE_NOTE_G == TRUE
    #define SE_NOTE_G                   66 // SE_TOY_G
#endif
#if MUX_SE_NOTE_A == TRUE
    #define SE_NOTE_A                   67 // SE_TOY_A
#endif
#if MUX_SE_NOTE_B == TRUE
    #define SE_NOTE_B                   68 // SE_TOY_B
#endif
#if MUX_SE_NOTE_C_HIGH == TRUE
    #define SE_NOTE_C_HIGH              69 // SE_TOY_C1
#endif
#if MUX_SE_PUDDLE == TRUE
    #define SE_PUDDLE                   70 // SE_MIZU
#endif
#if MUX_SE_BRIDGE_WALK == TRUE
    #define SE_BRIDGE_WALK              71 // SE_HASHI
#endif
#if MUX_SE_ITEMFINDER == TRUE
    #define SE_ITEMFINDER               72 // SE_DAUGI
#endif
#if MUX_SE_DING_DONG == TRUE
    #define SE_DING_DONG                73 // SE_PINPON
#endif
#if MUX_SE_BALLOON_RED == TRUE
    #define SE_BALLOON_RED              74 // SE_FUUSEN1
#endif
#if MUX_SE_BALLOON_BLUE == TRUE
    #define SE_BALLOON_BLUE             75 // SE_FUUSEN2
#endif
#if MUX_SE_BALLOON_YELLOW == TRUE
    #define SE_BALLOON_YELLOW           76 // SE_FUUSEN3
#endif
#if MUX_SE_BREAKABLE_DOOR == TRUE
    #define SE_BREAKABLE_DOOR           77 // SE_TOY_KABE
#endif
#if MUX_SE_MUD_BALL == TRUE
    #define SE_MUD_BALL                 78 // SE_TOY_DANGO
#endif
#if MUX_SE_FIELD_POISON == TRUE
    #define SE_FIELD_POISON             79 // SE_DOKU
#endif
#if MUX_SE_ESCALATOR == TRUE
    #define SE_ESCALATOR                80 // SE_ESUKA
#endif
#if MUX_SE_THUNDERSTORM == TRUE
    #define SE_THUNDERSTORM             81 // SE_T_AME
#endif
#if MUX_SE_THUNDERSTORM_STOP == TRUE
    #define SE_THUNDERSTORM_STOP        82 // SE_T_AME_E
#endif
#if MUX_SE_DOWNPOUR == TRUE
    #define SE_DOWNPOUR                 83 // SE_T_OOAME
#endif
#if MUX_SE_DOWNPOUR_STOP == TRUE
    #define SE_DOWNPOUR_STOP            84 // SE_T_OOAME_E
#endif
#if MUX_SE_RAIN == TRUE
    #define SE_RAIN                     85 // SE_T_KOAME
#endif
#if MUX_SE_RAIN_STOP == TRUE
    #define SE_RAIN_STOP                86 // SE_T_KOAME_E
#endif
#if MUX_SE_THUNDER == TRUE
    #define SE_THUNDER                  87 // SE_T_KAMI
#endif
#if MUX_SE_THUNDER2 == TRUE
    #define SE_THUNDER2                 88 // SE_T_KAMI2
#endif
#if MUX_SE_ELEVATOR == TRUE
    #define SE_ELEVATOR                 89 // SE_ELEBETA
#endif
#if MUX_SE_LOW_HEALTH == TRUE
    #define SE_LOW_HEALTH               90 // SE_HINSI
#endif
#if MUX_SE_EXP_MAX == TRUE
    #define SE_EXP_MAX                  91 // SE_EXPMAX
#endif
#if MUX_SE_ROULETTE_BALL == TRUE
    #define SE_ROULETTE_BALL            92 // SE_TAMAKORO
#endif
#if MUX_SE_ROULETTE_BALL2 == TRUE
    #define SE_ROULETTE_BALL2           93 // SE_TAMAKORO_E
#endif
#if MUX_SE_TAILLOW_WING_FLAP == TRUE
    #define SE_TAILLOW_WING_FLAP        94 // SE_BASABASA
#endif
#if MUX_SE_SHOP == TRUE
    #define SE_SHOP                     95 // SE_REGI
#endif
#if MUX_SE_CONTEST_HEART == TRUE
    #define SE_CONTEST_HEART            96 // SE_C_GAJI
#endif
#if MUX_SE_CONTEST_CURTAIN_RISE == TRUE
    #define SE_CONTEST_CURTAIN_RISE     97 // SE_C_MAKU_U
#endif
#if MUX_SE_CONTEST_CURTAIN_FALL == TRUE
    #define SE_CONTEST_CURTAIN_FALL     98 // SE_C_MAKU_D
#endif
#if MUX_SE_CONTEST_ICON_CHANGE == TRUE
    #define SE_CONTEST_ICON_CHANGE      99 // SE_C_PASI
#endif
#if MUX_SE_CONTEST_ICON_CLEAR == TRUE
    #define SE_CONTEST_ICON_CLEAR       100 // SE_C_SYU
#endif
#if MUX_SE_CONTEST_MONS_TURN == TRUE
    #define SE_CONTEST_MONS_TURN        101 // SE_C_PIKON
#endif
#if MUX_SE_SHINY == TRUE
    #define SE_SHINY                    102 // SE_REAPOKE
#endif
#if MUX_SE_INTRO_BLAST == TRUE
    #define SE_INTRO_BLAST              103 // SE_OP_BASYU
#endif
#if MUX_SE_MUGSHOT == TRUE
    #define SE_MUGSHOT                  104 // SE_BT_START
#endif
#if MUX_SE_APPLAUSE == TRUE
    #define SE_APPLAUSE                 105 // SE_DENDOU
#endif
#if MUX_SE_VEND == TRUE
    #define SE_VEND                     106 // SE_JIHANKI
#endif
#if MUX_SE_ORB == TRUE
    #define SE_ORB                      107 // SE_TAMA
#endif
#if MUX_SE_DEX_SCROLL == TRUE
    #define SE_DEX_SCROLL               108 // SE_Z_SCROLL
#endif
#if MUX_SE_DEX_PAGE == TRUE
    #define SE_DEX_PAGE                 109 // SE_Z_PAGE
#endif
#if MUX_SE_POKENAV_ON == TRUE
    #define SE_POKENAV_ON               110 // SE_PN_ON
#endif
#if MUX_SE_POKENAV_OFF == TRUE
    #define SE_POKENAV_OFF              111 // SE_PN_OFF
#endif
#if MUX_SE_DEX_SEARCH == TRUE
    #define SE_DEX_SEARCH               112 // SE_Z_SEARCH
#endif
#if MUX_SE_EGG_HATCH == TRUE
    #define SE_EGG_HATCH                113 // SE_TAMAGO
#endif
#if MUX_SE_BALL_TRAY_ENTER == TRUE
    #define SE_BALL_TRAY_ENTER          114 // SE_TB_START
#endif
#if MUX_SE_BALL_TRAY_BALL == TRUE
    #define SE_BALL_TRAY_BALL           115 // SE_TB_KON
#endif
#if MUX_SE_BALL_TRAY_EXIT == TRUE
    #define SE_BALL_TRAY_EXIT           116 // SE_TB_KARA
#endif
#if MUX_SE_GLASS_FLUTE == TRUE
    #define SE_GLASS_FLUTE              117 // SE_BIDORO
#endif

    // Move SFX
#if MUX_SE_M_THUNDERBOLT == TRUE
    #define SE_M_THUNDERBOLT            118 // SE_W085
#endif
#if MUX_SE_M_THUNDERBOLT2 == TRUE
    #define SE_M_THUNDERBOLT2           119 // SE_W085B
#endif
#if MUX_SE_M_HARDEN == TRUE
    #define SE_M_HARDEN                 120 // SE_W231
#endif
#if MUX_SE_M_NIGHTMARE == TRUE
    #define SE_M_NIGHTMARE              121 // SE_W171
#endif
#if MUX_SE_M_VITAL_THROW == TRUE
    #define SE_M_VITAL_THROW            122 // SE_W233
#endif
#if MUX_SE_M_VITAL_THROW2 == TRUE
    #define SE_M_VITAL_THROW2           123 // SE_W233B
#endif
#if MUX_SE_M_BUBBLE == TRUE
    #define SE_M_BUBBLE                 124 // SE_W145
#endif
#if MUX_SE_M_BUBBLE2 == TRUE
    #define SE_M_BUBBLE2                125 // SE_W145B
#endif
#if MUX_SE_M_BUBBLE3 == TRUE
    #define SE_M_BUBBLE3                126 // SE_W145C
#endif
#if MUX_SE_M_RAIN_DANCE == TRUE
    #define SE_M_RAIN_DANCE             127 // SE_W240
#endif
#if MUX_SE_M_CUT == TRUE
    #define SE_M_CUT                    128 // SE_W015
#endif
#if MUX_SE_M_STRING_SHOT == TRUE
    #define SE_M_STRING_SHOT            129 // SE_W081
#endif
#if MUX_SE_M_STRING_SHOT2 == TRUE
    #define SE_M_STRING_SHOT2           130 // SE_W081B
#endif
#if MUX_SE_M_ROCK_THROW == TRUE
    #define SE_M_ROCK_THROW             131 // SE_W088
#endif
#if MUX_SE_M_GUST == TRUE
    #define SE_M_GUST                   132 // SE_W016
#endif
#if MUX_SE_M_GUST2 == TRUE
    #define SE_M_GUST2                  133 // SE_W016B
#endif
#if MUX_SE_M_DOUBLE_SLAP == TRUE
    #define SE_M_DOUBLE_SLAP            134 // SE_W003
#endif
#if MUX_SE_M_DOUBLE_TEAM == TRUE
    #define SE_M_DOUBLE_TEAM            135 // SE_W104
#endif
#if MUX_SE_M_RAZOR_WIND == TRUE
    #define SE_M_RAZOR_WIND             136 // SE_W013
#endif
#if MUX_SE_M_ICY_WIND == TRUE
    #define SE_M_ICY_WIND               137 // SE_W196
#endif
#if MUX_SE_M_THUNDER_WAVE == TRUE
    #define SE_M_THUNDER_WAVE           138 // SE_W086
#endif
#if MUX_SE_M_COMET_PUNCH == TRUE
    #define SE_M_COMET_PUNCH            139 // SE_W004
#endif
#if MUX_SE_M_MEGA_KICK == TRUE
    #define SE_M_MEGA_KICK              140 // SE_W025
#endif
#if MUX_SE_M_MEGA_KICK2 == TRUE
    #define SE_M_MEGA_KICK2             141 // SE_W025B
#endif
#if MUX_SE_M_CRABHAMMER == TRUE
    #define SE_M_CRABHAMMER             142 // SE_W152
#endif
#if MUX_SE_M_JUMP_KICK == TRUE
    #define SE_M_JUMP_KICK              143 // SE_W026
#endif
#if MUX_SE_M_FLAME_WHEEL == TRUE
    #define SE_M_FLAME_WHEEL            144 // SE_W172
#endif
#if MUX_SE_M_FLAME_WHEEL2 == TRUE
    #define SE_M_FLAME_WHEEL2           145 // SE_W172B
#endif
#if MUX_SE_M_FLAMETHROWER == TRUE
    #define SE_M_FLAMETHROWER           146 // SE_W053
#endif
#if MUX_SE_M_FIRE_PUNCH == TRUE
    #define SE_M_FIRE_PUNCH             147 // SE_W007
#endif
#if MUX_SE_M_TOXIC == TRUE
    #define SE_M_TOXIC                  148 // SE_W092
#endif
#if MUX_SE_M_SACRED_FIRE == TRUE
    #define SE_M_SACRED_FIRE            149 // SE_W221
#endif
#if MUX_SE_M_SACRED_FIRE2 == TRUE
    #define SE_M_SACRED_FIRE2           150 // SE_W221B
#endif
#if MUX_SE_M_EMBER == TRUE
    #define SE_M_EMBER                  151 // SE_W052
#endif
#if MUX_SE_M_TAKE_DOWN == TRUE
    #define SE_M_TAKE_DOWN              152 // SE_W036
#endif
#if MUX_SE_M_BLIZZARD == TRUE
    #define SE_M_BLIZZARD               153 // SE_W059
#endif
#if MUX_SE_M_BLIZZARD2 == TRUE
    #define SE_M_BLIZZARD2              154 // SE_W059B
#endif
#if MUX_SE_M_SCRATCH == TRUE
    #define SE_M_SCRATCH                155 // SE_W010
#endif
#if MUX_SE_M_VICEGRIP == TRUE
    #define SE_M_VICEGRIP               156 // SE_W011
#endif
#if MUX_SE_M_WING_ATTACK == TRUE
    #define SE_M_WING_ATTACK            157 // SE_W017
#endif
#if MUX_SE_M_FLY == TRUE
    #define SE_M_FLY                    158 // SE_W019
#endif
#if MUX_SE_M_SAND_ATTACK == TRUE
    #define SE_M_SAND_ATTACK            159 // SE_W028
#endif
#if MUX_SE_M_RAZOR_WIND2 == TRUE
    #define SE_M_RAZOR_WIND2            160 // SE_W013B
#endif
#if MUX_SE_M_BITE == TRUE
    #define SE_M_BITE                   161 // SE_W044
#endif
#if MUX_SE_M_HEADBUTT == TRUE
    #define SE_M_HEADBUTT               162 // SE_W029
#endif
#if MUX_SE_M_SURF == TRUE
    #define SE_M_SURF                   163 // SE_W057
#endif
#if MUX_SE_M_HYDRO_PUMP == TRUE
    #define SE_M_HYDRO_PUMP             164 // SE_W056
#endif
#if MUX_SE_M_WHIRLPOOL == TRUE
    #define SE_M_WHIRLPOOL              165 // SE_W250
#endif
#if MUX_SE_M_HORN_ATTACK == TRUE
    #define SE_M_HORN_ATTACK            166 // SE_W030
#endif
#if MUX_SE_M_TAIL_WHIP == TRUE
    #define SE_M_TAIL_WHIP              167 // SE_W039
#endif
#if MUX_SE_M_MIST == TRUE
    #define SE_M_MIST                   168 // SE_W054
#endif
#if MUX_SE_M_POISON_POWDER == TRUE
    #define SE_M_POISON_POWDER          169 // SE_W077
#endif
#if MUX_SE_M_BIND == TRUE
    #define SE_M_BIND                   170 // SE_W020
#endif
#if MUX_SE_M_DRAGON_RAGE == TRUE
    #define SE_M_DRAGON_RAGE            171 // SE_W082
#endif
#if MUX_SE_M_SING == TRUE
    #define SE_M_SING                   172 // SE_W047
#endif
#if MUX_SE_M_PERISH_SONG == TRUE
    #define SE_M_PERISH_SONG            173 // SE_W195
#endif
#if MUX_SE_M_PAY_DAY == TRUE
    #define SE_M_PAY_DAY                174 // SE_W006
#endif
#if MUX_SE_M_DIG == TRUE
    #define SE_M_DIG                    175 // SE_W091
#endif
#if MUX_SE_M_DIZZY_PUNCH == TRUE
    #define SE_M_DIZZY_PUNCH            176 // SE_W146
#endif
#if MUX_SE_M_SELF_DESTRUCT == TRUE
    #define SE_M_SELF_DESTRUCT          177 // SE_W120
#endif
#if MUX_SE_M_EXPLOSION == TRUE
    #define SE_M_EXPLOSION              178 // SE_W153
#endif
#if MUX_SE_M_ABSORB_2 == TRUE
    #define SE_M_ABSORB_2               179 // SE_W071B
#endif
#if MUX_SE_M_ABSORB == TRUE
    #define SE_M_ABSORB                 180 // SE_W071
#endif
#if MUX_SE_M_SCREECH == TRUE
    #define SE_M_SCREECH                181 // SE_W103
#endif
#if MUX_SE_M_BUBBLE_BEAM == TRUE
    #define SE_M_BUBBLE_BEAM            182 // SE_W062
#endif
#if MUX_SE_M_BUBBLE_BEAM2 == TRUE
    #define SE_M_BUBBLE_BEAM2           183 // SE_W062B
#endif
#if MUX_SE_M_SUPERSONIC == TRUE
    #define SE_M_SUPERSONIC             184 // SE_W048
#endif
#if MUX_SE_M_BELLY_DRUM == TRUE
    #define SE_M_BELLY_DRUM             185 // SE_W187
#endif
#if MUX_SE_M_METRONOME == TRUE
    #define SE_M_METRONOME              186 // SE_W118
#endif
#if MUX_SE_M_BONEMERANG == TRUE
    #define SE_M_BONEMERANG             187 // SE_W155
#endif
#if MUX_SE_M_LICK == TRUE
    #define SE_M_LICK                   188 // SE_W122
#endif
#if MUX_SE_M_PSYBEAM == TRUE
    #define SE_M_PSYBEAM                189 // SE_W060
#endif
#if MUX_SE_M_FAINT_ATTACK == TRUE
    #define SE_M_FAINT_ATTACK           190 // SE_W185
#endif
#if MUX_SE_M_SWORDS_DANCE == TRUE
    #define SE_M_SWORDS_DANCE           191 // SE_W014
#endif
#if MUX_SE_M_LEER == TRUE
    #define SE_M_LEER                   192 // SE_W043
#endif
#if MUX_SE_M_SWAGGER == TRUE
    #define SE_M_SWAGGER                193 // SE_W207
#endif
#if MUX_SE_M_SWAGGER2 == TRUE
    #define SE_M_SWAGGER2               194 // SE_W207B
#endif
#if MUX_SE_M_HEAL_BELL == TRUE
    #define SE_M_HEAL_BELL              195 // SE_W215
#endif
#if MUX_SE_M_CONFUSE_RAY == TRUE
    #define SE_M_CONFUSE_RAY            196 // SE_W109
#endif
#if MUX_SE_M_SNORE == TRUE
    #define SE_M_SNORE                  197 // SE_W173
#endif
#if MUX_SE_M_BRICK_BREAK == TRUE
    #define SE_M_BRICK_BREAK            198 // SE_W280
#endif
#if MUX_SE_M_GIGA_DRAIN == TRUE
    #define SE_M_GIGA_DRAIN             199 // SE_W202
#endif
#if MUX_SE_M_PSYBEAM2 == TRUE
    #define SE_M_PSYBEAM2               200 // SE_W060B
#endif
#if MUX_SE_M_SOLAR_BEAM == TRUE
    #define SE_M_SOLAR_BEAM             201 // SE_W076
#endif
#if MUX_SE_M_PETAL_DANCE == TRUE
    #define SE_M_PETAL_DANCE            202 // SE_W080
#endif
#if MUX_SE_M_TELEPORT == TRUE
    #define SE_M_TELEPORT               203 // SE_W100
#endif
#if MUX_SE_M_MINIMIZE == TRUE
    #define SE_M_MINIMIZE               204 // SE_W107
#endif
#if MUX_SE_M_SKETCH == TRUE
    #define SE_M_SKETCH                 205 // SE_W166
#endif
#if MUX_SE_M_SWIFT == TRUE
    #define SE_M_SWIFT                  206 // SE_W129
#endif
#if MUX_SE_M_REFLECT == TRUE
    #define SE_M_REFLECT                207 // SE_W115
#endif
#if MUX_SE_M_BARRIER == TRUE
    #define SE_M_BARRIER                208 // SE_W112
#endif
#if MUX_SE_M_DETECT == TRUE
    #define SE_M_DETECT                 209 // SE_W197
#endif
#if MUX_SE_M_LOCK_ON == TRUE
    #define SE_M_LOCK_ON                210 // SE_W199
#endif
#if MUX_SE_M_MOONLIGHT == TRUE
    #define SE_M_MOONLIGHT              211 // SE_W236
#endif
#if MUX_SE_M_CHARM == TRUE
    #define SE_M_CHARM                  212 // SE_W204
#endif
#if MUX_SE_M_CHARGE == TRUE
    #define SE_M_CHARGE                 213 // SE_W268
#endif
#if MUX_SE_M_STRENGTH == TRUE
    #define SE_M_STRENGTH               214 // SE_W070
#endif
#if MUX_SE_M_HYPER_BEAM == TRUE
    #define SE_M_HYPER_BEAM             215 // SE_W063
#endif
#if MUX_SE_M_WATERFALL == TRUE
    #define SE_M_WATERFALL              216 // SE_W127
#endif
#if MUX_SE_M_REVERSAL == TRUE
    #define SE_M_REVERSAL               217 // SE_W179
#endif
#if MUX_SE_M_ACID_ARMOR == TRUE
    #define SE_M_ACID_ARMOR             218 // SE_W151
#endif
#if MUX_SE_M_SANDSTORM == TRUE
    #define SE_M_SANDSTORM              219 // SE_W201
#endif
#if MUX_SE_M_TRI_ATTACK == TRUE
    #define SE_M_TRI_ATTACK             220 // SE_W161
#endif
#if MUX_SE_M_TRI_ATTACK2 == TRUE
    #define SE_M_TRI_ATTACK2            221 // SE_W161B
#endif
#if MUX_SE_M_ENCORE == TRUE
    #define SE_M_ENCORE                 222 // SE_W227
#endif
#if MUX_SE_M_ENCORE2 == TRUE
    #define SE_M_ENCORE2                223 // SE_W227B
#endif
#if MUX_SE_M_BATON_PASS == TRUE
    #define SE_M_BATON_PASS             224 // SE_W226
#endif
#if MUX_SE_M_MILK_DRINK == TRUE
    #define SE_M_MILK_DRINK             225 // SE_W208
#endif
#if MUX_SE_M_ATTRACT == TRUE
    #define SE_M_ATTRACT                226 // SE_W213
#endif
#if MUX_SE_M_ATTRACT2 == TRUE
    #define SE_M_ATTRACT2               227 // SE_W213B
#endif
#if MUX_SE_M_MORNING_SUN == TRUE
    #define SE_M_MORNING_SUN            228 // SE_W234
#endif
#if MUX_SE_M_FLATTER == TRUE
    #define SE_M_FLATTER                229 // SE_W260
#endif
#if MUX_SE_M_SAND_TOMB == TRUE
    #define SE_M_SAND_TOMB              230 // SE_W328
#endif
#if MUX_SE_M_GRASSWHISTLE == TRUE
    #define SE_M_GRASSWHISTLE           231 // SE_W320
#endif
#if MUX_SE_M_SPIT_UP == TRUE
    #define SE_M_SPIT_UP                232 // SE_W255
#endif
#if MUX_SE_M_DIVE == TRUE
    #define SE_M_DIVE                   233 // SE_W291
#endif
#if MUX_SE_M_EARTHQUAKE == TRUE
    #define SE_M_EARTHQUAKE             234 // SE_W089
#endif
#if MUX_SE_M_TWISTER == TRUE
    #define SE_M_TWISTER                235 // SE_W239
#endif
#if MUX_SE_M_SWEET_SCENT == TRUE
    #define SE_M_SWEET_SCENT            236 // SE_W230
#endif
#if MUX_SE_M_YAWN == TRUE
    #define SE_M_YAWN                   237 // SE_W281
#endif
#if MUX_SE_M_SKY_UPPERCUT == TRUE
    #define SE_M_SKY_UPPERCUT           238 // SE_W327
#endif
#if MUX_SE_M_STAT_INCREASE == TRUE
    #define SE_M_STAT_INCREASE          239 // SE_W287
#endif
#if MUX_SE_M_HEAT_WAVE == TRUE
    #define SE_M_HEAT_WAVE              240 // SE_W257
#endif
#if MUX_SE_M_UPROAR == TRUE
    #define SE_M_UPROAR                 241 // SE_W253
#endif
#if MUX_SE_M_HAIL == TRUE
    #define SE_M_HAIL                   242 // SE_W258
#endif
#if MUX_SE_M_COSMIC_POWER == TRUE
    #define SE_M_COSMIC_POWER           243 // SE_W322
#endif
#if MUX_SE_M_TEETER_DANCE == TRUE
    #define SE_M_TEETER_DANCE           244 // SE_W298
#endif
#if MUX_SE_M_STAT_DECREASE == TRUE
    #define SE_M_STAT_DECREASE          245 // SE_W287B
#endif
#if MUX_SE_M_HAZE == TRUE
    #define SE_M_HAZE                   246 // SE_W114
#endif
#if MUX_SE_M_HYPER_BEAM2 == TRUE
    #define SE_M_HYPER_BEAM2            247 // SE_W063B
#endif

    // FRLG SFX
#if MUX_SE_RG_DOOR == TRUE
    #define SE_RG_DOOR                  248 // SE_RG_W_DOOR
#endif
#if MUX_SE_RG_CARD_FLIP == TRUE
    #define SE_RG_CARD_FLIP             249 // SE_RG_CARD1
#endif
#if MUX_SE_RG_CARD_FLIPPING == TRUE
    #define SE_RG_CARD_FLIPPING         250 // SE_RG_CARD2
#endif
#if MUX_SE_RG_CARD_OPEN == TRUE
    #define SE_RG_CARD_OPEN             251 // SE_RG_CARD3
#endif
#if MUX_SE_RG_BAG_CURSOR == TRUE
    #define SE_RG_BAG_CURSOR            252 // SE_RG_BAG1
#endif
#if MUX_SE_RG_BAG_POCKET == TRUE
    #define SE_RG_BAG_POCKET            253 // SE_RG_BAG2
#endif
#if MUX_SE_RG_BALL_CLICK == TRUE
    #define SE_RG_BALL_CLICK            254 // SE_RG_GETTING
#endif
#if MUX_SE_RG_SHOP == TRUE
    #define SE_RG_SHOP                  255 // SE_RG_SHOP
#endif
#if MUX_SE_RG_SS_ANNE_HORN == TRUE
    #define SE_RG_SS_ANNE_HORN          256 // SE_RG_KITEKI
#endif
#if MUX_SE_RG_HELP_OPEN == TRUE
    #define SE_RG_HELP_OPEN             257 // SE_RG_HELP_OP
#endif
#if MUX_SE_RG_HELP_CLOSE == TRUE
    #define SE_RG_HELP_CLOSE            258 // SE_RG_HELP_CL
#endif
#if MUX_SE_RG_HELP_ERROR == TRUE
    #define SE_RG_HELP_ERROR            259 // SE_RG_HELP_NG
#endif
#if MUX_SE_RG_DEOXYS_MOVE == TRUE
    #define SE_RG_DEOXYS_MOVE           260 // SE_RG_DEOMOV
#endif
#if MUX_SE_RG_POKE_JUMP_SUCCESS == TRUE
    #define SE_RG_POKE_JUMP_SUCCESS     261 // SE_RG_EXCELLENT
#endif
#if MUX_SE_RG_POKE_JUMP_FAILURE == TRUE
    #define SE_RG_POKE_JUMP_FAILURE     262 // SE_RG_NAWAMISS
#endif

    // New Emerald SFX
#if MUX_SE_POKENAV_CALL == TRUE
    #define SE_POKENAV_CALL             263 // SE_TOREEYE
#endif
#if MUX_SE_POKENAV_HANG_UP == TRUE
    #define SE_POKENAV_HANG_UP          264 // SE_TOREOFF
#endif
#if MUX_SE_ARENA_TIMEUP1 == TRUE
    #define SE_ARENA_TIMEUP1            265 // SE_HANTEI1
#endif
#if MUX_SE_ARENA_TIMEUP2 == TRUE
    #define SE_ARENA_TIMEUP2            266 // SE_HANTEI2
#endif
#if MUX_SE_PIKE_CURTAIN_CLOSE == TRUE
    #define SE_PIKE_CURTAIN_CLOSE       267 // SE_CURTAIN
#endif
#if MUX_SE_PIKE_CURTAIN_OPEN == TRUE
    #define SE_PIKE_CURTAIN_OPEN        268 // SE_CURTAIN1
#endif
#if MUX_SE_SUDOWOODO_SHAKE == TRUE
    #define SE_SUDOWOODO_SHAKE          269 // SE_USSOKI
#endif

// Music
#if MUX_MUS_LITTLEROOT_TEST == TRUE
    #define MUS_LITTLEROOT_TEST         270 // MUS_TETSUJI          // Unused, likely a test track.
#endif
#if MUX_MUS_GSC_ROUTE38 == TRUE
    #define MUS_GSC_ROUTE38             271 // MUS_FIELD13          // Unused, likely a test track.
#endif
#if MUX_MUS_CAUGHT == TRUE
    #define MUS_CAUGHT                  272 // MUS_KACHI22
#endif
#if MUX_MUS_VICTORY_WILD == TRUE
    #define MUS_VICTORY_WILD            273 // MUS_KACHI2
#endif
#if MUX_MUS_VICTORY_GYM_LEADER == TRUE
    #define MUS_VICTORY_GYM_LEADER      274 // MUS_KACHI3           // Also used in Frontier Brain victories.
#endif
#if MUX_MUS_VICTORY_LEAGUE == TRUE
    #define MUS_VICTORY_LEAGUE          275 // MUS_KACHI5
#endif
#if MUX_MUS_C_COMM_CENTER == TRUE
    #define MUS_C_COMM_CENTER           276 // MUS_PCC              // Unused, likely a test track.
#endif
#if MUX_MUS_GSC_PEWTER == TRUE
    #define MUS_GSC_PEWTER              277 // MUS_NIBI             // Used in unused Contest Halls.
#endif
#if MUX_MUS_C_VS_LEGEND_BEAST == TRUE
    #define MUS_C_VS_LEGEND_BEAST       278 // MUS_SUIKUN           // Unused, likely a test track.
#endif
#if MUX_MUS_ROUTE101 == TRUE
    #define MUS_ROUTE101                279 // MUS_DOORO1           // Also used in Routes 102 and 103.
#endif
#if MUX_MUS_ROUTE110 == TRUE
    #define MUS_ROUTE110                280 // MUS_DOORO_X1         // Also used in Routes 112, 114, 117, 111's non-desert section and 118's west half.
#endif
#if MUX_MUS_ROUTE120 == TRUE
    #define MUS_ROUTE120                281 // MUS_DOORO_X3         // Also used in Routes 121, 124, 125, 126, 127 and 128.
#endif
#if MUX_MUS_PETALBURG == TRUE
    #define MUS_PETALBURG               282 // MUS_MACHI_S2         // Also used in Mr. Briney's House and Pretty Petal Flower Shop.
#endif
#if MUX_MUS_OLDALE == TRUE
    #define MUS_OLDALE                  283 // MUS_MACHI_S4         // Also used in Lavaridge Town.
#endif
#if MUX_MUS_GYM == TRUE
    #define MUS_GYM                     284 // MUS_GIM
#endif
#if MUX_MUS_SURF == TRUE
    #define MUS_SURF                    285 // MUS_NAMINORI
#endif
#if MUX_MUS_PETALBURG_WOODS == TRUE
    #define MUS_PETALBURG_WOODS         286 // MUS_DAN01            // Also used in Artisan Cave, Fiery Path, Granite Cave, Jagged Pass, Marine Cave, Rusturf Tunnel, Scorched Slab and Terra Cave.
#endif
#if MUX_MUS_LEVEL_UP == TRUE
    #define MUS_LEVEL_UP                287 // MUS_FANFA1
#endif
#if MUX_MUS_HEAL == TRUE
    #define MUS_HEAL                    288 // MUS_ME_ASA
#endif
#if MUX_MUS_OBTAIN_BADGE == TRUE
    #define MUS_OBTAIN_BADGE            289 // MUS_ME_BACHI
#endif
#if MUX_MUS_OBTAIN_ITEM == TRUE
    #define MUS_OBTAIN_ITEM             290 // MUS_FANFA4
#endif
#if MUX_MUS_EVOLVED == TRUE
    #define MUS_EVOLVED                 291 // MUS_FANFA5           // Also used in egg hatching, trades and upon catching.
#endif
#if MUX_MUS_OBTAIN_TMHM == TRUE
    #define MUS_OBTAIN_TMHM             292 // MUS_ME_WAZA
#endif
#if MUX_MUS_LILYCOVE_MUSEUM == TRUE
    #define MUS_LILYCOVE_MUSEUM         293 // MUS_BIJYUTU          // Also used in the Battle Frontier's Ranking Hall.
#endif
#if MUX_MUS_ROUTE122 == TRUE
    #define MUS_ROUTE122                294 // MUS_DOORO_X4         // Also used in Route 123 and Birch's intro speech.
#endif
#if MUX_MUS_OCEANIC_MUSEUM == TRUE
    #define MUS_OCEANIC_MUSEUM          295 // MUS_FUNE_KAN
#endif
#if MUX_MUS_EVOLUTION_INTRO == TRUE
    #define MUS_EVOLUTION_INTRO         296 // MUS_ME_SHINKA        // Also used in egg hatching.
#endif
#if MUX_MUS_EVOLUTION == TRUE
    #define MUS_EVOLUTION               297 // MUS_SHINKA           // Also used in egg hatching and trades.
#endif
#if MUX_MUS_MOVE_DELETED == TRUE
    #define MUS_MOVE_DELETED            298 // MUS_ME_WASURE
#endif
#if MUX_MUS_ENCOUNTER_GIRL == TRUE
    #define MUS_ENCOUNTER_GIRL          299 // MUS_SYOUJOEYE
#endif
#if MUX_MUS_ENCOUNTER_MALE == TRUE
    #define MUS_ENCOUNTER_MALE          300 // MUS_BOYEYE
#endif
#if MUX_MUS_ABANDONED_SHIP == TRUE
    #define MUS_ABANDONED_SHIP          301 // MUS_DAN02            // Also used in Faraway and Southern Islands.
#endif
#if MUX_MUS_FORTREE == TRUE
    #define MUS_FORTREE                 302 // MUS_MACHI_S3         // Also used in Secret Bases and the Safari Zone's entrance.
#endif
#if MUX_MUS_BIRCH_LAB == TRUE
    #define MUS_BIRCH_LAB               303 // MUS_ODAMAKI
#endif
#if MUX_MUS_B_TOWER_RS == TRUE
    #define MUS_B_TOWER_RS              304 // MUS_B_TOWER          // Used in Battle Tents, Trainer Hill and Battle Frontier's lounges and Exchange Service Corner.
#endif
#if MUX_MUS_ENCOUNTER_SWIMMER == TRUE
    #define MUS_ENCOUNTER_SWIMMER       305 // MUS_SWIMEYE
#endif
#if MUX_MUS_CAVE_OF_ORIGIN == TRUE
    #define MUS_CAVE_OF_ORIGIN          306 // MUS_DAN03            // Also used in Meteor Falls.
#endif
#if MUX_MUS_OBTAIN_BERRY == TRUE
    #define MUS_OBTAIN_BERRY            307 // MUS_ME_KINOMI
#endif
#if MUX_MUS_AWAKEN_LEGEND == TRUE
    #define MUS_AWAKEN_LEGEND           308 // MUS_ME_TAMA
#endif
#if MUX_MUS_SLOTS_JACKPOT == TRUE
    #define MUS_SLOTS_JACKPOT           309 // MUS_ME_B_BIG         // Also used in the Roulette.
#endif
#if MUX_MUS_SLOTS_WIN == TRUE
    #define MUS_SLOTS_WIN               310 // MUS_ME_B_SMALL       // Also used in the Roulette.
#endif
#if MUX_MUS_TOO_BAD == TRUE
    #define MUS_TOO_BAD                 311 // MUS_ME_ZANNEN
#endif
#if MUX_MUS_ROULETTE == TRUE
    #define MUS_ROULETTE                312 // MUS_BD_TIME
#endif
#if MUX_MUS_LINK_CONTEST_P1 == TRUE
    #define MUS_LINK_CONTEST_P1         313 // MUS_TEST1
#endif
#if MUX_MUS_LINK_CONTEST_P2 == TRUE
    #define MUS_LINK_CONTEST_P2         314 // MUS_TEST2
#endif
#if MUX_MUS_LINK_CONTEST_P3 == TRUE
    #define MUS_LINK_CONTEST_P3         315 // MUS_TEST3
#endif
#if MUX_MUS_LINK_CONTEST_P4 == TRUE
    #define MUS_LINK_CONTEST_P4         316 // MUS_TEST4
#endif
#if MUX_MUS_ENCOUNTER_RICH == TRUE
    #define MUS_ENCOUNTER_RICH          317 // MUS_TEST
#endif
#if MUX_MUS_VERDANTURF == TRUE
    #define MUS_VERDANTURF              318 // MUS_GOMACHI0
#endif
#if MUX_MUS_RUSTBORO == TRUE
    #define MUS_RUSTBORO                319 // MUS_GOTOWN           // Also used in Mauville City, Mossdeep City, Daycare, Weather Institute and several Route houses.
#endif
#if MUX_MUS_POKE_CENTER == TRUE
    #define MUS_POKE_CENTER             320 // MUS_POKECEN          // Also used in the Pokémon League's lobby.
#endif
#if MUX_MUS_ROUTE104 == TRUE
    #define MUS_ROUTE104                321 // MUS_NEXTROAD         // Also used in Routes 105, 106, 107, 108, 109, 115 and 116.
#endif
#if MUX_MUS_ROUTE119 == TRUE
    #define MUS_ROUTE119                322 // MUS_GRANROAD         // Also used in Routes 129, 130, 131, 132, 133, 134 and 118's east half.
#endif
#if MUX_MUS_CYCLING == TRUE
    #define MUS_CYCLING                 323 // MUS_CYCLING
#endif
#if MUX_MUS_POKE_MART == TRUE
    #define MUS_POKE_MART               324 // MUS_FRIENDLY         // Also used in Lilycove's Department Store.
#endif
#if MUX_MUS_LITTLEROOT == TRUE
    #define MUS_LITTLEROOT              325 // MUS_MISHIRO
#endif
#if MUX_MUS_MT_CHIMNEY == TRUE
    #define MUS_MT_CHIMNEY              326 // MUS_TOZAN            // Also used in Desert Underpass, Mirage Tower, Seafloor Cavern and Sky Pillar.
#endif
#if MUX_MUS_ENCOUNTER_FEMALE == TRUE
    #define MUS_ENCOUNTER_FEMALE        327 // MUS_GIRLEYE
#endif
#if MUX_MUS_LILYCOVE == TRUE
    #define MUS_LILYCOVE                328 // MUS_MINAMO           // Also used in Pacifidlog Town and the Diving Treasure Hunter's house.
#endif
#if MUX_MUS_DESERT == TRUE
    #define MUS_DESERT                  329 // MUS_ASHROAD
#endif
#if MUX_MUS_HELP == TRUE
    #define MUS_HELP                    330 // MUS_EVENT0
#endif
#if MUX_MUS_UNDERWATER == TRUE
    #define MUS_UNDERWATER              331 // MUS_DEEPDEEP
#endif
#if MUX_MUS_VICTORY_TRAINER == TRUE
    #define MUS_VICTORY_TRAINER         332 // MUS_KACHI1
#endif
#if MUX_MUS_TITLE == TRUE
    #define MUS_TITLE                   333 // MUS_TITLE3
#endif
#if MUX_MUS_INTRO == TRUE
    #define MUS_INTRO                   334 // MUS_DEMO1
#endif
#if MUX_MUS_ENCOUNTER_MAY == TRUE
    #define MUS_ENCOUNTER_MAY           335 // MUS_GIRL_SUP
#endif
#if MUX_MUS_ENCOUNTER_INTENSE == TRUE
    #define MUS_ENCOUNTER_INTENSE       336 // MUS_HAGESHII
#endif
#if MUX_MUS_ENCOUNTER_COOL == TRUE
    #define MUS_ENCOUNTER_COOL          337 // MUS_KAKKOII
#endif
#if MUX_MUS_ROUTE113 == TRUE
    #define MUS_ROUTE113                338 // MUS_KAZANBAI
#endif
#if MUX_MUS_ENCOUNTER_AQUA == TRUE
    #define MUS_ENCOUNTER_AQUA          339 // MUS_AQA_0
#endif
#if MUX_MUS_FOLLOW_ME == TRUE
    #define MUS_FOLLOW_ME               340 // MUS_TSURETEK
#endif
#if MUX_MUS_ENCOUNTER_BRENDAN == TRUE
    #define MUS_ENCOUNTER_BRENDAN       341 // MUS_BOY_SUP
#endif
#if MUX_MUS_EVER_GRANDE == TRUE
    #define MUS_EVER_GRANDE             342 // MUS_RAINBOW          // Also used in link rooms.
#endif
#if MUX_MUS_ENCOUNTER_SUSPICIOUS == TRUE
    #define MUS_ENCOUNTER_SUSPICIOUS    343 // MUS_AYASII
#endif
#if MUX_MUS_VICTORY_AQUA_MAGMA == TRUE
    #define MUS_VICTORY_AQUA_MAGMA      344 // MUS_KACHI4
#endif
#if MUX_MUS_CABLE_CAR == TRUE
    #define MUS_CABLE_CAR               345 // MUS_ROPEWAY
#endif
#if MUX_MUS_GAME_CORNER == TRUE
    #define MUS_GAME_CORNER             346 // MUS_CASINO
#endif
#if MUX_MUS_DEWFORD == TRUE
    #define MUS_DEWFORD                 347 // MUS_HIGHTOWN         // Also used in Route 109's Seashore house.
#endif
#if MUX_MUS_SAFARI_ZONE == TRUE
    #define MUS_SAFARI_ZONE             348 // MUS_SAFARI
#endif
#if MUX_MUS_VICTORY_ROAD == TRUE
    #define MUS_VICTORY_ROAD            349 // MUS_C_ROAD           // Also used in Pokémon League's E4/Champion rooms and halls.
#endif
#if MUX_MUS_AQUA_MAGMA_HIDEOUT == TRUE
    #define MUS_AQUA_MAGMA_HIDEOUT      350 // MUS_AJITO
#endif
#if MUX_MUS_SAILING == TRUE
    #define MUS_SAILING                 351 // MUS_M_BOAT
#endif
#if MUX_MUS_MT_PYRE == TRUE
    #define MUS_MT_PYRE                 352 // MUS_M_DUNGON         // Also used in New Mauville and Shoal Cave.
#endif
#if MUX_MUS_SLATEPORT == TRUE
    #define MUS_SLATEPORT               353 // MUS_FINECITY         // Also used in Cycling Road's entrances.
#endif
#if MUX_MUS_MT_PYRE_EXTERIOR == TRUE
    #define MUS_MT_PYRE_EXTERIOR        354 // MUS_MACHUPI
#endif
#if MUX_MUS_SCHOOL == TRUE
    #define MUS_SCHOOL                  355 // MUS_P_SCHOOL
#endif
#if MUX_MUS_HALL_OF_FAME == TRUE
    #define MUS_HALL_OF_FAME            356 // MUS_DENDOU
#endif
#if MUX_MUS_FALLARBOR == TRUE
    #define MUS_FALLARBOR               357 // MUS_TONEKUSA         // Also used in Route 114's houses.
#endif
#if MUX_MUS_SEALED_CHAMBER == TRUE
    #define MUS_SEALED_CHAMBER          358 // MUS_MABOROSI         // Also used in Ancient Tomb, Desert Ruins and Island Cave.
#endif
#if MUX_MUS_CONTEST_WINNER == TRUE
    #define MUS_CONTEST_WINNER          359 // MUS_CON_FAN
#endif
#if MUX_MUS_CONTEST == TRUE
    #define MUS_CONTEST                 360 // MUS_CONTEST0
#endif
#if MUX_MUS_ENCOUNTER_MAGMA == TRUE
    #define MUS_ENCOUNTER_MAGMA         361 // MUS_MGM0
#endif
#if MUX_MUS_INTRO_BATTLE == TRUE
    #define MUS_INTRO_BATTLE            362 // MUS_T_BATTLE
#endif
#if MUX_MUS_ABNORMAL_WEATHER == TRUE
    #define MUS_ABNORMAL_WEATHER        363 // MUS_OOAME            // Replaces MUS_WEATHER_KYOGRE from R/S.
#endif
#if MUX_MUS_WEATHER_GROUDON == TRUE
    #define MUS_WEATHER_GROUDON         364 // MUS_HIDERI           // Unused, from R/S.
#endif
#if MUX_MUS_SOOTOPOLIS == TRUE
    #define MUS_SOOTOPOLIS              365 // MUS_RUNECITY
#endif
#if MUX_MUS_CONTEST_RESULTS == TRUE
    #define MUS_CONTEST_RESULTS         366 // MUS_CON_K
#endif
#if MUX_MUS_HALL_OF_FAME_ROOM == TRUE
    #define MUS_HALL_OF_FAME_ROOM       367 // MUS_EIKOU_R
#endif
#if MUX_MUS_TRICK_HOUSE == TRUE
    #define MUS_TRICK_HOUSE             368 // MUS_KARAKURI
#endif
#if MUX_MUS_ENCOUNTER_TWINS == TRUE
    #define MUS_ENCOUNTER_TWINS         369 // MUS_HUTAGO
#endif
#if MUX_MUS_ENCOUNTER_ELITE_FOUR == TRUE
    #define MUS_ENCOUNTER_ELITE_FOUR    370 // MUS_SITENNOU
#endif
#if MUX_MUS_ENCOUNTER_HIKER == TRUE
    #define MUS_ENCOUNTER_HIKER         371 // MUS_YAMA_EYE
#endif
#if MUX_MUS_CONTEST_LOBBY == TRUE
    #define MUS_CONTEST_LOBBY           372 // MUS_CONLOBBY
#endif
#if MUX_MUS_ENCOUNTER_INTERVIEWER == TRUE
    #define MUS_ENCOUNTER_INTERVIEWER   373 // MUS_INTER_V          // Also used during Petalburg City report at the beginning of the game.
#endif
#if MUX_MUS_ENCOUNTER_CHAMPION == TRUE
    #define MUS_ENCOUNTER_CHAMPION      374 // MUS_DAIGO
#endif
#if MUX_MUS_CREDITS == TRUE
    #define MUS_CREDITS                 375 // MUS_THANKFOR
#endif
#if MUX_MUS_END == TRUE
    #define MUS_END                     376 // MUS_END
#endif
#if MUX_MUS_B_FRONTIER == TRUE
    #define MUS_B_FRONTIER              377 // MUS_B_FRONTIER
#endif
#if MUX_MUS_B_ARENA == TRUE
    #define MUS_B_ARENA                 378 // MUS_B_ARENA
#endif
#if MUX_MUS_OBTAIN_B_POINTS == TRUE
    #define MUS_OBTAIN_B_POINTS         379 // MUS_ME_POINTGET
#endif
#if MUX_MUS_REGISTER_MATCH_CALL == TRUE
    #define MUS_REGISTER_MATCH_CALL     380 // MUS_ME_TORE_EYE
#endif
#if MUX_MUS_B_PYRAMID == TRUE
    #define MUS_B_PYRAMID               381 // MUS_PYRAMID
#endif
#if MUX_MUS_B_PYRAMID_TOP == TRUE
    #define MUS_B_PYRAMID_TOP           382 // MUS_PYRAMID_TOP
#endif
#if MUX_MUS_B_PALACE == TRUE
    #define MUS_B_PALACE                383 // MUS_B_PALACE
#endif
#if MUX_MUS_RAYQUAZA_APPEARS == TRUE
    #define MUS_RAYQUAZA_APPEARS        384 // MUS_REKKUU_KOURIN
#endif
#if MUX_MUS_B_TOWER == TRUE
    #define MUS_B_TOWER                 385 // MUS_SATTOWER
#endif
#if MUX_MUS_OBTAIN_SYMBOL == TRUE
    #define MUS_OBTAIN_SYMBOL           386 // MUS_ME_SYMBOLGET
#endif
#if MUX_MUS_B_DOME == TRUE
    #define MUS_B_DOME                  387 // MUS_B_DOME
#endif
#if MUX_MUS_B_PIKE == TRUE
    #define MUS_B_PIKE                  388 // MUS_B_TUBE
#endif
#if MUX_MUS_B_FACTORY == TRUE
    #define MUS_B_FACTORY               389 // MUS_B_FACTORY
#endif
#if MUX_MUS_VS_RAYQUAZA == TRUE
    #define MUS_VS_RAYQUAZA             390 // MUS_VS_REKKU         // Identical to MUS_VS_KYOGRE_GROUDON.
#endif
#if MUX_MUS_VS_FRONTIER_BRAIN == TRUE
    #define MUS_VS_FRONTIER_BRAIN       391 // MUS_VS_FRONT
#endif
#if MUX_MUS_VS_MEW == TRUE
    #define MUS_VS_MEW                  392 // MUS_VS_MEW
#endif
#if MUX_MUS_B_DOME_LOBBY == TRUE
    #define MUS_B_DOME_LOBBY            393 // MUS_B_DOME1
#endif
#if MUX_MUS_VS_WILD == TRUE
    #define MUS_VS_WILD                 394 // MUS_BATTLE27
#endif
#if MUX_MUS_VS_AQUA_MAGMA == TRUE
    #define MUS_VS_AQUA_MAGMA           395 // MUS_BATTLE31
#endif
#if MUX_MUS_VS_TRAINER == TRUE
    #define MUS_VS_TRAINER              396 // MUS_BATTLE20
#endif
#if MUX_MUS_VS_GYM_LEADER == TRUE
    #define MUS_VS_GYM_LEADER           397 // MUS_BATTLE32
#endif
#if MUX_MUS_VS_CHAMPION == TRUE
    #define MUS_VS_CHAMPION             398 // MUS_BATTLE33
#endif
#if MUX_MUS_VS_REGI == TRUE
    #define MUS_VS_REGI                 399 // MUS_BATTLE36
#endif
#if MUX_MUS_VS_KYOGRE_GROUDON == TRUE
    #define MUS_VS_KYOGRE_GROUDON       400 // MUS_BATTLE34
#endif
#if MUX_MUS_VS_RIVAL == TRUE
    #define MUS_VS_RIVAL                401 // MUS_BATTLE35
#endif
#if MUX_MUS_VS_ELITE_FOUR == TRUE
    #define MUS_VS_ELITE_FOUR           402 // MUS_BATTLE38
#endif
#if MUX_MUS_VS_AQUA_MAGMA_LEADER == TRUE
    #define MUS_VS_AQUA_MAGMA_LEADER    403 // MUS_BATTLE30
#endif

// FRLG Music
#if MUX_MUS_RG_FOLLOW_ME == TRUE
    #define MUS_RG_FOLLOW_ME            404 // MUS_RG_ANNAI
#endif
#if MUX_MUS_RG_GAME_CORNER == TRUE
    #define MUS_RG_GAME_CORNER          405 // MUS_RG_SLOT
#endif
#if MUX_MUS_RG_ROCKET_HIDEOUT == TRUE
    #define MUS_RG_ROCKET_HIDEOUT       406 // MUS_RG_AJITO
#endif
#if MUX_MUS_RG_GYM == TRUE
    #define MUS_RG_GYM                  407 // MUS_RG_GYM
#endif
#if MUX_MUS_RG_JIGGLYPUFF == TRUE
    #define MUS_RG_JIGGLYPUFF           408 // MUS_RG_PURIN
#endif
#if MUX_MUS_RG_INTRO_FIGHT == TRUE
    #define MUS_RG_INTRO_FIGHT          409 // MUS_RG_DEMO
#endif
#if MUX_MUS_RG_TITLE == TRUE
    #define MUS_RG_TITLE                410 // MUS_RG_TITLE
#endif
#if MUX_MUS_RG_CINNABAR == TRUE
    #define MUS_RG_CINNABAR             411 // MUS_RG_GUREN
#endif
#if MUX_MUS_RG_LAVENDER == TRUE
    #define MUS_RG_LAVENDER             412 // MUS_RG_SHION
#endif
#if MUX_MUS_RG_HEAL == TRUE
    #define MUS_RG_HEAL                 413 // MUS_RG_KAIHUKU
#endif
#if MUX_MUS_RG_CYCLING == TRUE
    #define MUS_RG_CYCLING              414 // MUS_RG_CYCLING
#endif
#if MUX_MUS_RG_ENCOUNTER_ROCKET == TRUE
    #define MUS_RG_ENCOUNTER_ROCKET     415 // MUS_RG_ROCKET
#endif
#if MUX_MUS_RG_ENCOUNTER_GIRL == TRUE
    #define MUS_RG_ENCOUNTER_GIRL       416 // MUS_RG_SHOUJO
#endif
#if MUX_MUS_RG_ENCOUNTER_BOY == TRUE
    #define MUS_RG_ENCOUNTER_BOY        417 // MUS_RG_SHOUNEN
#endif
#if MUX_MUS_RG_HALL_OF_FAME == TRUE
    #define MUS_RG_HALL_OF_FAME         418 // MUS_RG_DENDOU
#endif
#if MUX_MUS_RG_VIRIDIAN_FOREST == TRUE
    #define MUS_RG_VIRIDIAN_FOREST      419 // MUS_RG_T_MORI
#endif
#if MUX_MUS_RG_MT_MOON == TRUE
    #define MUS_RG_MT_MOON              420 // MUS_RG_OTSUKIMI
#endif
#if MUX_MUS_RG_POKE_MANSION == TRUE
    #define MUS_RG_POKE_MANSION         421 // MUS_RG_POKEYASHI
#endif
#if MUX_MUS_RG_CREDITS == TRUE
    #define MUS_RG_CREDITS              422 // MUS_RG_ENDING
#endif
#if MUX_MUS_RG_ROUTE1 == TRUE
    #define MUS_RG_ROUTE1               423 // MUS_RG_LOAD01
#endif
#if MUX_MUS_RG_ROUTE24 == TRUE
    #define MUS_RG_ROUTE24              424 // MUS_RG_OPENING
#endif
#if MUX_MUS_RG_ROUTE3 == TRUE
    #define MUS_RG_ROUTE3               425 // MUS_RG_LOAD02
#endif
#if MUX_MUS_RG_ROUTE11 == TRUE
    #define MUS_RG_ROUTE11              426 // MUS_RG_LOAD03
#endif
#if MUX_MUS_RG_VICTORY_ROAD == TRUE
    #define MUS_RG_VICTORY_ROAD         427 // MUS_RG_CHAMP_R
#endif
#if MUX_MUS_RG_VS_GYM_LEADER == TRUE
    #define MUS_RG_VS_GYM_LEADER        428 // MUS_RG_VS_GYM
#endif
#if MUX_MUS_RG_VS_TRAINER == TRUE
    #define MUS_RG_VS_TRAINER           429 // MUS_RG_VS_TORE
#endif
#if MUX_MUS_RG_VS_WILD == TRUE
    #define MUS_RG_VS_WILD              430 // MUS_RG_VS_YASEI
#endif
#if MUX_MUS_RG_VS_CHAMPION == TRUE
    #define MUS_RG_VS_CHAMPION          431 // MUS_RG_VS_LAST
#endif
#if MUX_MUS_RG_PALLET == TRUE
    #define MUS_RG_PALLET               432 // MUS_RG_MASARA
#endif
#if MUX_MUS_RG_OAK_LAB == TRUE
    #define MUS_RG_OAK_LAB              433 // MUS_RG_KENKYU
#endif
#if MUX_MUS_RG_OAK == TRUE
    #define MUS_RG_OAK                  434 // MUS_RG_OHKIDO
#endif
#if MUX_MUS_RG_POKE_CENTER == TRUE
    #define MUS_RG_POKE_CENTER          435 // MUS_RG_POKECEN
#endif
#if MUX_MUS_RG_SS_ANNE == TRUE
    #define MUS_RG_SS_ANNE              436 // MUS_RG_SANTOAN
#endif
#if MUX_MUS_RG_SURF == TRUE
    #define MUS_RG_SURF                 437 // MUS_RG_NAMINORI
#endif
#if MUX_MUS_RG_POKE_TOWER == TRUE
    #define MUS_RG_POKE_TOWER           438 // MUS_RG_P_TOWER
#endif
#if MUX_MUS_RG_SILPH == TRUE
    #define MUS_RG_SILPH                439 // MUS_RG_SHIRUHU
#endif
#if MUX_MUS_RG_FUCHSIA == TRUE
    #define MUS_RG_FUCHSIA              440 // MUS_RG_HANADA
#endif
#if MUX_MUS_RG_CELADON == TRUE
    #define MUS_RG_CELADON              441 // MUS_RG_TAMAMUSI
#endif
#if MUX_MUS_RG_VICTORY_TRAINER == TRUE
    #define MUS_RG_VICTORY_TRAINER      442 // MUS_RG_WIN_TRE       // Identical to MUS_VICTORY_TRAINER.
#endif
#if MUX_MUS_RG_VICTORY_WILD == TRUE
    #define MUS_RG_VICTORY_WILD         443 // MUS_RG_WIN_YASEI     // Identical to MUS_VICTORY_WILD.
#endif
#if MUX_MUS_RG_VICTORY_GYM_LEADER == TRUE
    #define MUS_RG_VICTORY_GYM_LEADER   444 // MUS_RG_WIN_GYM       // Identical to MUS_VICTORY_GYM_LEADER.
#endif
#if MUX_MUS_RG_VERMILLION == TRUE
    #define MUS_RG_VERMILLION           445 // MUS_RG_KUCHIBA
#endif
#if MUX_MUS_RG_PEWTER == TRUE
    #define MUS_RG_PEWTER               446 // MUS_RG_NIBI
#endif
#if MUX_MUS_RG_ENCOUNTER_RIVAL == TRUE
    #define MUS_RG_ENCOUNTER_RIVAL      447 // MUS_RG_RIVAL1
#endif
#if MUX_MUS_RG_RIVAL_EXIT == TRUE
    #define MUS_RG_RIVAL_EXIT           448 // MUS_RG_RIVAL2
#endif
#if MUX_MUS_RG_DEX_RATING == TRUE
    #define MUS_RG_DEX_RATING           449 // MUS_RG_FAN2
#endif
#if MUX_MUS_RG_OBTAIN_KEY_ITEM == TRUE
    #define MUS_RG_OBTAIN_KEY_ITEM      450 // MUS_RG_FAN5
#endif
#if MUX_MUS_RG_CAUGHT_INTRO == TRUE
    #define MUS_RG_CAUGHT_INTRO         451 // MUS_RG_FAN6
#endif
#if MUX_MUS_RG_PHOTO == TRUE
    #define MUS_RG_PHOTO                452 // MUS_ME_RG_PHOTO
#endif
#if MUX_MUS_RG_GAME_FREAK == TRUE
    #define MUS_RG_GAME_FREAK           453 // MUS_RG_TITLEROG
#endif
#if MUX_MUS_RG_CAUGHT == TRUE
    #define MUS_RG_CAUGHT               454 // MUS_RG_GET_YASEI
#endif
#if MUX_MUS_RG_NEW_GAME_INSTRUCT == TRUE
    #define MUS_RG_NEW_GAME_INSTRUCT    455 // MUS_RG_SOUSA
#endif
#if MUX_MUS_RG_NEW_GAME_INTRO == TRUE
    #define MUS_RG_NEW_GAME_INTRO       456 // MUS_RG_SEKAIKAN
#endif
#if MUX_MUS_RG_NEW_GAME_EXIT == TRUE
    #define MUS_RG_NEW_GAME_EXIT        457 // MUS_RG_SEIBETU
#endif
#if MUX_MUS_RG_POKE_JUMP == TRUE
    #define MUS_RG_POKE_JUMP            458 // MUS_RG_JUMP
#endif
#if MUX_MUS_RG_UNION_ROOM == TRUE
    #define MUS_RG_UNION_ROOM           459 // MUS_RG_UNION
#endif
#if MUX_MUS_RG_NET_CENTER == TRUE
    #define MUS_RG_NET_CENTER           460 // MUS_RG_NETWORK
#endif
#if MUX_MUS_RG_MYSTERY_GIFT == TRUE
    #define MUS_RG_MYSTERY_GIFT         461 // MUS_RG_OKURIMONO
#endif
#if MUX_MUS_RG_BERRY_PICK == TRUE
    #define MUS_RG_BERRY_PICK           462 // MUS_RG_KINOMIKUI
#endif
#if MUX_MUS_RG_SEVII_CAVE == TRUE
    #define MUS_RG_SEVII_CAVE           463 // MUS_RG_NANADUNGEON   // Identical to MUS_RG_MT_MOON.
#endif
#if MUX_MUS_RG_TEACHY_TV_SHOW == TRUE
    #define MUS_RG_TEACHY_TV_SHOW       464 // MUS_RG_OSHIE_TV      // Identical to MUS_RG_FOLLOW_ME.
#endif
#if MUX_MUS_RG_SEVII_ROUTE == TRUE
    #define MUS_RG_SEVII_ROUTE          465 // MUS_RG_NANASHIMA
#endif
#if MUX_MUS_RG_SEVII_DUNGEON == TRUE
    #define MUS_RG_SEVII_DUNGEON        466 // MUS_RG_NANAISEKI     // Identical to MUS_RG_VIRIDIAN_FOREST.
#endif
#if MUX_MUS_RG_SEVII_123 == TRUE
    #define MUS_RG_SEVII_123            467 // MUS_RG_NANA123       // Identical to MUS_RG_PEWTER
#endif
#if MUX_MUS_RG_SEVII_45 == TRUE
    #define MUS_RG_SEVII_45             468 // MUS_RG_NANA45
#endif
#if MUX_MUS_RG_SEVII_67 == TRUE
    #define MUS_RG_SEVII_67             469 // MUS_RG_NANA67
#endif
#if MUX_MUS_RG_POKE_FLUTE == TRUE
    #define MUS_RG_POKE_FLUTE           470 // MUS_RG_POKEFUE
#endif
#if MUX_MUS_RG_VS_DEOXYS == TRUE
    #define MUS_RG_VS_DEOXYS            471 // MUS_RG_VS_DEO
#endif
#if MUX_MUS_RG_VS_MEWTWO == TRUE
    #define MUS_RG_VS_MEWTWO            472 // MUS_RG_VS_MYU2
#endif
#if MUX_MUS_RG_VS_LEGEND == TRUE
    #define MUS_RG_VS_LEGEND            473 // MUS_RG_VS_DEN
#endif
#if MUX_MUS_RG_ENCOUNTER_GYM_LEADER == TRUE
    #define MUS_RG_ENCOUNTER_GYM_LEADER 474 // MUS_RG_EXEYE
#endif
#if MUX_MUS_RG_ENCOUNTER_DEOXYS == TRUE
    #define MUS_RG_ENCOUNTER_DEOXYS     475 // MUS_RG_DEOEYE
#endif
#if MUX_MUS_RG_TRAINER_TOWER == TRUE
    #define MUS_RG_TRAINER_TOWER        476 // MUS_RG_T_TOWER
#endif
#if MUX_MUS_RG_SLOW_PALLET == TRUE
    #define MUS_RG_SLOW_PALLET          477 // MUS_RG_SLOWMASARA
#endif
#if MUX_MUS_RG_TEACHY_TV_MENU == TRUE
    #define MUS_RG_TEACHY_TV_MENU       478 // MUS_RG_TVNOIZE
#endif

// These PH_* constants are phoneme sounds used by the "bard" NPC (see src/bard_music.c and src/mauville_old_man.c).
// Each comes in a triplet of PH_*_BLEND, PH_*_HELD, and PH_*_SOLO, and the name of each triplet incorporates the English phonetic sound it represents.
#if MUX_ENABLE_BARD_PHONEMES == TRUE
    #define PH_TRAP_BLEND               479
    #define PH_TRAP_HELD                480
    #define PH_TRAP_SOLO                481
    #define PH_FACE_BLEND               482
    #define PH_FACE_HELD                483
    #define PH_FACE_SOLO                484
    #define PH_CLOTH_BLEND              485
    #define PH_CLOTH_HELD               486
    #define PH_CLOTH_SOLO               487
    #define PH_DRESS_BLEND              488
    #define PH_DRESS_HELD               489
    #define PH_DRESS_SOLO               490
    #define PH_FLEECE_BLEND             491
    #define PH_FLEECE_HELD              492
    #define PH_FLEECE_SOLO              493
    #define PH_KIT_BLEND                494
    #define PH_KIT_HELD                 495
    #define PH_KIT_SOLO                 496
    #define PH_PRICE_BLEND              497
    #define PH_PRICE_HELD               498
    #define PH_PRICE_SOLO               499
    #define PH_LOT_BLEND                500
    #define PH_LOT_HELD                 501
    #define PH_LOT_SOLO                 502
    #define PH_GOAT_BLEND               503
    #define PH_GOAT_HELD                504
    #define PH_GOAT_SOLO                505
    #define PH_THOUGHT_BLEND            506
    #define PH_THOUGHT_HELD             507
    #define PH_THOUGHT_SOLO             508
    #define PH_CHOICE_BLEND             509
    #define PH_CHOICE_HELD              510
    #define PH_CHOICE_SOLO              511
    #define PH_MOUTH_BLEND              512
    #define PH_MOUTH_HELD               513
    #define PH_MOUTH_SOLO               514
    #define PH_FOOT_BLEND               515
    #define PH_FOOT_HELD                516
    #define PH_FOOT_SOLO                517
    #define PH_GOOSE_BLEND              518
    #define PH_GOOSE_HELD               519
    #define PH_GOOSE_SOLO               520
    #define PH_STRUT_BLEND              521
    #define PH_STRUT_HELD               522
    #define PH_STRUT_SOLO               523
    #define PH_CURE_BLEND               524
    #define PH_CURE_HELD                525
    #define PH_CURE_SOLO                526
    #define PH_NURSE_BLEND              527
    #define PH_NURSE_HELD               528
    #define PH_NURSE_SOLO               529

    #define FIRST_PHONEME_SONG          PH_TRAP_BLEND
    #define LAST_PHONEME_SONG           PH_NURSE_SOLO
    #define NUM_PHONEME_SONGS           (LAST_PHONEME_SONG - FIRST_PHONEME_SONG + 1)
    #define PHONEME_ID(song)            ((song) - FIRST_PHONEME_SONG)
    #define PHONEME_ID_NONE             0xFF
#endif

#define MUS_ROUTE118                0x7FFF  // Map is split into 2 music sections. controlled by GetCurrLocationDefaultMusic().

#define MUS_NONE                    0xFFFF

#endif  // GUARD_CONSTANTS_SONGS_H
