#ifndef MUX_SAMPLE_DECLARATIONS_H
#define MUX_SAMPLE_DECLARATIONS_H

#ifndef TRUE
    #define TRUE 1
    #define FALSE 0
#endif

#include "config/music_expansion_v3.h"

#if MUX_SE_USE_ITEM == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_PC_LOGIN == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_PC_OFF == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_PC_ON == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_SELECT == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_WIN_OPEN == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_WALL_HIT == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_DOOR == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_EXIT == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_LEDGE == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BIKE_BELL == TRUE
    #undef MUX_SMP_BICYCLE_BELL                                   // bicycle bell
        #define MUX_SMP_BICYCLE_BELL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOT_EFFECTIVE == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_EFFECTIVE == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_SUPER_EFFECTIVE == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BALL_OPEN == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_FAINT == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_FLEE == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_SLIDING_DOOR == TRUE
    #undef MUX_SMP_BICYCLE_BELL                                   // bicycle bell
        #define MUX_SMP_BICYCLE_BELL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_SHIP == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BANG == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_PIN == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BOO == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BALL == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_CONTEST_PLACE == TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_A == TRUE
    #undef MUX_SMP_UNKNOWN_12                                     // voice a
        #define MUX_SMP_UNKNOWN_12 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_I == TRUE
    #undef MUX_SMP_UNKNOWN_13                                     // voice i
        #define MUX_SMP_UNKNOWN_13 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_U == TRUE
    #undef MUX_SMP_UNKNOWN_14                                     // voice u
        #define MUX_SMP_UNKNOWN_14 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_E == TRUE
    #undef MUX_SMP_UNKNOWN_15                                     // voice e
        #define MUX_SMP_UNKNOWN_15 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_O == TRUE
    #undef MUX_SMP_UNKNOWN_16                                     // voice o
        #define MUX_SMP_UNKNOWN_16 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_N == TRUE
    #undef MUX_SMP_UNKNOWN_17                                     // voice n
        #define MUX_SMP_UNKNOWN_17 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_SUCCESS == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_FAILURE == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_EXP == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BIKE_HOP == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_SWITCH == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_CLICK == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_FU_ZAKU == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_CONTEST_CONDITION_LOSE == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_LAVARIDGE_FALL_WARP == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_ICE_STAIRS == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_ICE_BREAK == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_ICE_CRACK == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_FALL == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_UNLOCK == TRUE
    #undef MUX_SMP_UNKNOWN_1                                      // door
        #define MUX_SMP_UNKNOWN_1 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_WARP_IN == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_WARP_OUT == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_REPEL == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_ROTATING_GATE == TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_TRUCK_MOVE == TRUE
    #undef MUX_SMP_UNKNOWN_2                                      // truck
        #define MUX_SMP_UNKNOWN_2 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_TRUCK_STOP == TRUE
    #undef MUX_SMP_UNKNOWN_2                                      // truck
        #define MUX_SMP_UNKNOWN_2 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_TRUCK_UNLOAD == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_TRUCK_DOOR == TRUE
    #undef MUX_SMP_UNKNOWN_1                                      // door
        #define MUX_SMP_UNKNOWN_1 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BERRY_BLENDER == TRUE
    #undef MUX_SMP_UNKNOWN_3                                      // motor
        #define MUX_SMP_UNKNOWN_3 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_CARD == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_SAVE == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_BOUNCE_1 == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_BOUNCE_2 == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_BOUNCE_3 == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_BOUNCE_4 == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_TRADE == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BALL_THROW == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_C == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_D == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_E == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_F == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_G == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_A == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_B == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_NOTE_C_HIGH == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_PUDDLE == TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BRIDGE_WALK == TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_ITEMFINDER == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_DING_DONG == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_BALLOON_RED == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALLOON_BLUE == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALLOON_YELLOW == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BREAKABLE_DOOR == TRUE
    #undef MUX_SMP_UNKNOWN_9                                      // bomb
        #define MUX_SMP_UNKNOWN_9 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_MUD_BALL == TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_FIELD_POISON == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_ESCALATOR == TRUE
    #undef MUX_SMP_UNKNOWN_8                                      // creak
        #define MUX_SMP_UNKNOWN_8 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_THUNDERSTORM == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_THUNDERSTORM_STOP == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_DOWNPOUR == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_DOWNPOUR_STOP == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_RAIN == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_RAIN_STOP == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_THUNDER == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_THUNDER2 == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_ELEVATOR == TRUE
    #undef MUX_SMP_UNKNOWN_8                                      // creak
        #define MUX_SMP_UNKNOWN_8 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_LOW_HEALTH == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_EXP_MAX == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_ROULETTE_BALL == TRUE
    #undef MUX_SMP_UNKNOWN_11                                     // ball roll
        #define MUX_SMP_UNKNOWN_11 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_ROULETTE_BALL2 == TRUE
    #undef MUX_SMP_UNKNOWN_11                                     // ball roll
        #define MUX_SMP_UNKNOWN_11 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_TAILLOW_WING_FLAP == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_SHOP == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_CONTEST_HEART == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_CONTEST_CURTAIN_RISE == TRUE
    #undef MUX_SMP_UNKNOWN_3                                      // motor
        #define MUX_SMP_UNKNOWN_3 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_CONTEST_CURTAIN_FALL == TRUE
    #undef MUX_SMP_UNKNOWN_3                                      // motor
        #define MUX_SMP_UNKNOWN_3 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_CONTEST_ICON_CHANGE == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_CONTEST_ICON_CLEAR == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_CONTEST_MONS_TURN == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_SHINY == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_INTRO_BLAST == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_MUGSHOT == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_APPLAUSE == TRUE
    #undef MUX_SMP_UNKNOWN_10                                     // crowd
        #define MUX_SMP_UNKNOWN_10 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_VEND == TRUE
    #undef MUX_SMP_UNKNOWN_1                                      // door
        #define MUX_SMP_UNKNOWN_1 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_ORB == TRUE
    #undef MUX_SMP_UNKNOWN_3                                      // motor
        #define MUX_SMP_UNKNOWN_3 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_DEX_SCROLL == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_DEX_PAGE == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_POKENAV_ON == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_POKENAV_OFF == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_DEX_SEARCH == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_EGG_HATCH == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_TRAY_ENTER == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_TRAY_BALL == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_BALL_TRAY_EXIT == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_GLASS_FLUTE == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_THUNDERBOLT == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_THUNDERBOLT2 == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HARDEN == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_NIGHTMARE == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_VITAL_THROW == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_VITAL_THROW2 == TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BUBBLE == TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BUBBLE2 == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BUBBLE3 == TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_RAIN_DANCE == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_CUT == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_STRING_SHOT == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_STRING_SHOT2 == TRUE
    #undef MUX_SMP_UNKNOWN_2                                      // truck
        #define MUX_SMP_UNKNOWN_2 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ROCK_THROW == TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_GUST == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_GUST2 == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_DOUBLE_SLAP == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_DOUBLE_TEAM == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_RAZOR_WIND == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ICY_WIND == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_THUNDER_WAVE == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_COMET_PUNCH == TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_MEGA_KICK == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_MEGA_KICK2 == TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_CRABHAMMER == TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_JUMP_KICK == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_FLAME_WHEEL == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_FLAME_WHEEL2 == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_FLAMETHROWER == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_FIRE_PUNCH == TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TOXIC == TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SACRED_FIRE == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SACRED_FIRE2 == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_EMBER == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TAKE_DOWN == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BLIZZARD == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BLIZZARD2 == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SCRATCH == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_VICEGRIP == TRUE
    #undef MUX_SMP_UNKNOWN_1                                      // door
        #define MUX_SMP_UNKNOWN_1 TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_WING_ATTACK == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_FLY == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SAND_ATTACK == TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_RAZOR_WIND2 == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BITE == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HEADBUTT == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SURF == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HYDRO_PUMP == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_WHIRLPOOL == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HORN_ATTACK == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TAIL_WHIP == TRUE
    #undef MUX_SMP_UNKNOWN_3                                      // motor
        #define MUX_SMP_UNKNOWN_3 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_MIST == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_POISON_POWDER == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BIND == TRUE
    #undef MUX_SMP_UNKNOWN_8                                      // creak
        #define MUX_SMP_UNKNOWN_8 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_DRAGON_RAGE == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SING == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_PERISH_SONG == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_PAY_DAY == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_DIG == TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_DIZZY_PUNCH == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SELF_DESTRUCT == TRUE
    #undef MUX_SMP_UNKNOWN_9                                      // bomb
        #define MUX_SMP_UNKNOWN_9 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_EXPLOSION == TRUE
    #undef MUX_SMP_UNKNOWN_9                                      // bomb
        #define MUX_SMP_UNKNOWN_9 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ABSORB_2 == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ABSORB == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_8                                      // creak
        #define MUX_SMP_UNKNOWN_8 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SCREECH == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BUBBLE_BEAM == TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BUBBLE_BEAM2 == TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SUPERSONIC == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BELLY_DRUM == TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_METRONOME == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BONEMERANG == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_LICK == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_PSYBEAM == TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_FAINT_ATTACK == TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SWORDS_DANCE == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_LEER == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SWAGGER == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SWAGGER2 == TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HEAL_BELL == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_CONFUSE_RAY == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SNORE == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_SMP_UNKNOWN_8                                      // creak
        #define MUX_SMP_UNKNOWN_8 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BRICK_BREAK == TRUE
    #undef MUX_SMP_UNKNOWN_9                                      // bomb
        #define MUX_SMP_UNKNOWN_9 TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_GIGA_DRAIN == TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_PSYBEAM2 == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SOLAR_BEAM == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_PETAL_DANCE == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TELEPORT == TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_MINIMIZE == TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SKETCH == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_SMP_UNKNOWN_8                                      // creak
        #define MUX_SMP_UNKNOWN_8 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SWIFT == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_REFLECT == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BARRIER == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_DETECT == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_LOCK_ON == TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_MOONLIGHT == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_CHARM == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_CHARGE == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_STRENGTH == TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HYPER_BEAM == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_WATERFALL == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_REVERSAL == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ACID_ARMOR == TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SANDSTORM == TRUE
    #undef MUX_SMP_UNKNOWN_SYNTH_SNARE                            // bang
        #define MUX_SMP_UNKNOWN_SYNTH_SNARE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TRI_ATTACK == TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TRI_ATTACK2 == TRUE
    #undef MUX_SMP_UNKNOWN_4                                      // thunder
        #define MUX_SMP_UNKNOWN_4 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ENCORE == TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ENCORE2 == TRUE
    #undef MUX_SMP_UNKNOWN_10                                     // crowd
        #define MUX_SMP_UNKNOWN_10 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_BATON_PASS == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_MILK_DRINK == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ATTRACT == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_ATTRACT2 == TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_MORNING_SUN == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_FLATTER == TRUE
    #undef MUX_SMP_UNKNOWN_9                                      // bomb
        #define MUX_SMP_UNKNOWN_9 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SAND_TOMB == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_GRASSWHISTLE == TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SPIT_UP == TRUE
    #undef MUX_SMP_UNUSED_SC55_TOM                                // tom
        #define MUX_SMP_UNUSED_SC55_TOM TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_DIVE == TRUE
    #undef MUX_SMP_UNKNOWN_7                                      // wave
        #define MUX_SMP_UNKNOWN_7 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_EARTHQUAKE == TRUE
    #undef MUX_SMP_UNKNOWN_5                                      // rock
        #define MUX_SMP_UNKNOWN_5 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TWISTER == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SWEET_SCENT == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_YAWN == TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_SKY_UPPERCUT == TRUE
    #undef MUX_SMP_SC88PRO_WIND                                   // wind
        #define MUX_SMP_SC88PRO_WIND TRUE
    #undef MUX_SMP_UNKNOWN_9                                      // bomb
        #define MUX_SMP_UNKNOWN_9 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_STAT_INCREASE == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HEAT_WAVE == TRUE
    #undef MUX_SMP_UNKNOWN_6                                      // fire
        #define MUX_SMP_UNKNOWN_6 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_UPROAR == TRUE
    #undef MUX_SMP_UNKNOWN_10                                     // crowd
        #define MUX_SMP_UNKNOWN_10 TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HAIL == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_COSMIC_POWER == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_TEETER_DANCE == TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_STAT_DECREASE == TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HAZE == TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_M_HYPER_BEAM2 == TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_RG_DOOR == TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_CARD_FLIP == TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_CARD_FLIPPING == TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_CARD_OPEN == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_BAG_CURSOR == TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI                      // wood attack 1
        #define MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_BAG_POCKET == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_BALL_CLICK == TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_SHOP == TRUE
    #undef MUX_SMP_REGISTER_NOISE                                 // shop
        #define MUX_SMP_REGISTER_NOISE TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_SS_ANNE_HORN == TRUE
    #undef MUX_SMP_UNKNOWN_18                                     // ship horn
        #define MUX_SMP_UNKNOWN_18 TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_HELP_OPEN == TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_HELP_CLOSE == TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_HELP_ERROR == TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_DEOXYS_MOVE == TRUE
    #undef MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE                      // harmonics
        #define MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_RG_POKE_JUMP_SUCCESS == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RS_SFX_2
        #define MUX_GRP_RS_SFX_2 TRUE
#endif

#if MUX_SE_RG_POKE_JUMP_FAILURE == TRUE
    #undef MUX_GRP_RS_SFX_1
        #define MUX_GRP_RS_SFX_1 TRUE
#endif

#if MUX_SE_POKENAV_CALL == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_POKENAV_HANG_UP == TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI                      // wood attack 1
        #define MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_ARENA_TIMEUP1 == TRUE
    #undef MUX_SMP_SC88PRO_TAIKO                                  // taiko
        #define MUX_SMP_SC88PRO_TAIKO TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_ARENA_TIMEUP2 == TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI                      // wood attack 1
        #define MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI TRUE
    #undef MUX_SMP_SC88PRO_TAIKO                                  // taiko
        #define MUX_SMP_SC88PRO_TAIKO TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_PIKE_CURTAIN_CLOSE == TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_PIKE_CURTAIN_OPEN == TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_SE_SUDOWOODO_SHAKE == TRUE
    #undef MUX_GRP_FRLG_SFX
        #define MUX_GRP_FRLG_SFX TRUE
#endif

#if MUX_MUS_LITTLEROOT_TEST == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_LITTLEROOT_TEST
        #define MUX_GRP_LITTLEROOT_TEST TRUE
#endif

#if MUX_MUS_GSC_ROUTE38 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
#endif

#if MUX_MUS_CAUGHT == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_VICTORY_WILD
        #define MUX_GRP_VICTORY_WILD TRUE
#endif

#if MUX_MUS_VICTORY_WILD == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_VICTORY_WILD
        #define MUX_GRP_VICTORY_WILD TRUE
#endif

#if MUX_MUS_VICTORY_GYM_LEADER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_VICTORY_GYM_LEADER
        #define MUX_GRP_VICTORY_GYM_LEADER TRUE
#endif

#if MUX_MUS_VICTORY_LEAGUE == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_VICTORY_LEAGUE
        #define MUX_GRP_VICTORY_LEAGUE TRUE
#endif

#if MUX_MUS_C_COMM_CENTER == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
#endif

#if MUX_MUS_GSC_PEWTER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
#endif

#if MUX_MUS_C_VS_LEGEND_BEAST == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
#endif

#if MUX_MUS_ROUTE101 == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ROUTE101
        #define MUX_GRP_ROUTE101 TRUE
#endif

#if MUX_MUS_ROUTE110 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_ROUTE110
        #define MUX_GRP_ROUTE110 TRUE
#endif

#if MUX_MUS_ROUTE120 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_ROUTE120
        #define MUX_GRP_ROUTE120 TRUE
#endif

#if MUX_MUS_PETALBURG == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_PETALBURG
        #define MUX_GRP_PETALBURG TRUE
#endif

#if MUX_MUS_OLDALE == TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_OLDALE
        #define MUX_GRP_OLDALE TRUE
#endif

#if MUX_MUS_GYM == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_GRP_GYM
        #define MUX_GRP_GYM TRUE
#endif

#if MUX_MUS_SURF == TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_SURF
        #define MUX_GRP_SURF TRUE
#endif

#if MUX_MUS_PETALBURG_WOODS == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_PETALBURG_WOODS
        #define MUX_GRP_PETALBURG_WOODS TRUE
#endif

#if MUX_MUS_LEVEL_UP == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_HEAL == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_OBTAIN_BADGE == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_OBTAIN_ITEM == TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_EVOLVED == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_OBTAIN_TMHM == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_LILYCOVE_MUSEUM == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_LILYCOVE_MUSEUM
        #define MUX_GRP_LILYCOVE_MUSEUM TRUE
#endif

#if MUX_MUS_ROUTE122 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ROUTE122
        #define MUX_GRP_ROUTE122 TRUE
#endif

#if MUX_MUS_OCEANIC_MUSEUM == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_OCEANIC_MUSEUM
        #define MUX_GRP_OCEANIC_MUSEUM TRUE
#endif

#if MUX_MUS_EVOLUTION_INTRO == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_GRP_EVOLUTION
        #define MUX_GRP_EVOLUTION TRUE
#endif

#if MUX_MUS_EVOLUTION == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_EVOLUTION
        #define MUX_GRP_EVOLUTION TRUE
#endif

#if MUX_MUS_MOVE_DELETED == TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_ENCOUNTER_GIRL == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_ENCOUNTER_GIRL
        #define MUX_GRP_ENCOUNTER_GIRL TRUE
#endif

#if MUX_MUS_ENCOUNTER_MALE == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_ENCOUNTER_MALE
        #define MUX_GRP_ENCOUNTER_MALE TRUE
#endif

#if MUX_MUS_ABANDONED_SHIP == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_GRP_ABANDONED_SHIP
        #define MUX_GRP_ABANDONED_SHIP TRUE
#endif

#if MUX_MUS_FORTREE == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_FORTREE
        #define MUX_GRP_FORTREE TRUE
#endif

#if MUX_MUS_BIRCH_LAB == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_BIRCH_LAB
        #define MUX_GRP_BIRCH_LAB TRUE
#endif

#if MUX_MUS_B_TOWER_RS == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_B_TOWER_RS
        #define MUX_GRP_B_TOWER_RS TRUE
#endif

#if MUX_MUS_ENCOUNTER_SWIMMER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_ENCOUNTER_SWIMMER
        #define MUX_GRP_ENCOUNTER_SWIMMER TRUE
#endif

#if MUX_MUS_CAVE_OF_ORIGIN == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_GRP_CAVE_OF_ORIGIN
        #define MUX_GRP_CAVE_OF_ORIGIN TRUE
#endif

#if MUX_MUS_OBTAIN_BERRY == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_AWAKEN_LEGEND == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_SLOTS_JACKPOT == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_SLOTS_WIN == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_TOO_BAD == TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_TRINITY_30303_MEGA_BASS                        // mega bass
        #define MUX_SMP_TRINITY_30303_MEGA_BASS TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_FANFARE
        #define MUX_GRP_FANFARE TRUE
#endif

#if MUX_MUS_ROULETTE == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_ROULETTE
        #define MUX_GRP_ROULETTE TRUE
#endif

#if MUX_MUS_LINK_CONTEST_P1 == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_LINK_CONTEST_P1
        #define MUX_GRP_LINK_CONTEST_P1 TRUE
#endif

#if MUX_MUS_LINK_CONTEST_P2 == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_LINK_CONTEST_P2
        #define MUX_GRP_LINK_CONTEST_P2 TRUE
#endif

#if MUX_MUS_LINK_CONTEST_P3 == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_LINK_CONTEST_P3
        #define MUX_GRP_LINK_CONTEST_P3 TRUE
#endif

#if MUX_MUS_LINK_CONTEST_P4 == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_GRP_LINK_CONTEST_P4
        #define MUX_GRP_LINK_CONTEST_P4 TRUE
#endif

#if MUX_MUS_ENCOUNTER_RICH == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ENCOUNTER_RICH
        #define MUX_GRP_ENCOUNTER_RICH TRUE
#endif

#if MUX_MUS_VERDANTURF == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_VERDANTURF
        #define MUX_GRP_VERDANTURF TRUE
#endif

#if MUX_MUS_RUSTBORO == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RUSTBORO
        #define MUX_GRP_RUSTBORO TRUE
#endif

#if MUX_MUS_POKE_CENTER == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_POKE_CENTER
        #define MUX_GRP_POKE_CENTER TRUE
#endif

#if MUX_MUS_ROUTE104 == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_ROUTE104
        #define MUX_GRP_ROUTE104 TRUE
#endif

#if MUX_MUS_ROUTE119 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_ROUTE119
        #define MUX_GRP_ROUTE119 TRUE
#endif

#if MUX_MUS_CYCLING == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_CYCLING
        #define MUX_GRP_CYCLING TRUE
#endif

#if MUX_MUS_POKE_MART == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_POKE_MART
        #define MUX_GRP_POKE_MART TRUE
#endif

#if MUX_MUS_LITTLEROOT == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_LITTLEROOT
        #define MUX_GRP_LITTLEROOT TRUE
#endif

#if MUX_MUS_MT_CHIMNEY == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_MT_CHIMNEY
        #define MUX_GRP_MT_CHIMNEY TRUE
#endif

#if MUX_MUS_ENCOUNTER_FEMALE == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ENCOUNTER_FEMALE
        #define MUX_GRP_ENCOUNTER_FEMALE TRUE
#endif

#if MUX_MUS_LILYCOVE == TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_LILYCOVE
        #define MUX_GRP_LILYCOVE TRUE
#endif

#if MUX_MUS_DESERT == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_ROUTE111
        #define MUX_GRP_ROUTE111 TRUE
#endif

#if MUX_MUS_HELP == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_HELP
        #define MUX_GRP_HELP TRUE
#endif

#if MUX_MUS_UNDERWATER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_SMP_SC88PRO_BUBBLES                                // bubble
        #define MUX_SMP_SC88PRO_BUBBLES TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_UNDERWATER
        #define MUX_GRP_UNDERWATER TRUE
#endif

#if MUX_MUS_VICTORY_TRAINER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_VICTORY_TRAINER
        #define MUX_GRP_VICTORY_TRAINER TRUE
#endif

#if MUX_MUS_TITLE == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_TITLE
        #define MUX_GRP_TITLE TRUE
#endif

#if MUX_MUS_INTRO == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_INTRO
        #define MUX_GRP_INTRO TRUE
#endif

#if MUX_MUS_ENCOUNTER_MAY == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ENCOUNTER_MAY
        #define MUX_GRP_ENCOUNTER_MAY TRUE
#endif

#if MUX_MUS_ENCOUNTER_INTENSE == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_GRP_ENCOUNTER_INTENSE
        #define MUX_GRP_ENCOUNTER_INTENSE TRUE
#endif

#if MUX_MUS_ENCOUNTER_COOL == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_GRP_ENCOUNTER_COOL
        #define MUX_GRP_ENCOUNTER_COOL TRUE
#endif

#if MUX_MUS_ROUTE113 == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ROUTE113
        #define MUX_GRP_ROUTE113 TRUE
#endif

#if MUX_MUS_ENCOUNTER_AQUA == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_GRP_ENCOUNTER_AQUA
        #define MUX_GRP_ENCOUNTER_AQUA TRUE
#endif

#if MUX_MUS_FOLLOW_ME == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_GRP_FOLLOW_ME
        #define MUX_GRP_FOLLOW_ME TRUE
#endif

#if MUX_MUS_ENCOUNTER_BRENDAN == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_ENCOUNTER_BRENDAN
        #define MUX_GRP_ENCOUNTER_BRENDAN TRUE
#endif

#if MUX_MUS_EVER_GRANDE == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_EVER_GRANDE
        #define MUX_GRP_EVER_GRANDE TRUE
#endif

#if MUX_MUS_ENCOUNTER_SUSPICIOUS == TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_ENCOUNTER_SUSPICIOUS
        #define MUX_GRP_ENCOUNTER_SUSPICIOUS TRUE
#endif

#if MUX_MUS_VICTORY_AQUA_MAGMA == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_VICTORY_AQUA_MAGMA
        #define MUX_GRP_VICTORY_AQUA_MAGMA TRUE
#endif

#if MUX_MUS_CABLE_CAR == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_CABLE_CAR
        #define MUX_GRP_CABLE_CAR TRUE
#endif

#if MUX_MUS_GAME_CORNER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_GAME_CORNER
        #define MUX_GRP_GAME_CORNER TRUE
#endif

#if MUX_MUS_DEWFORD == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_DEWFORD
        #define MUX_GRP_DEWFORD TRUE
#endif

#if MUX_MUS_SAFARI_ZONE == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_GRP_SAFARI_ZONE
        #define MUX_GRP_SAFARI_ZONE TRUE
#endif

#if MUX_MUS_VICTORY_ROAD == TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_VICTORY_ROAD
        #define MUX_GRP_VICTORY_ROAD TRUE
#endif

#if MUX_MUS_AQUA_MAGMA_HIDEOUT == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_GRP_AQUA_MAGMA_HIDEOUT
        #define MUX_GRP_AQUA_MAGMA_HIDEOUT TRUE
#endif

#if MUX_MUS_SAILING == TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_SAILING
        #define MUX_GRP_SAILING TRUE
#endif

#if MUX_MUS_MT_PYRE == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_MT_PYRE
        #define MUX_GRP_MT_PYRE TRUE
#endif

#if MUX_MUS_SLATEPORT == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_SLATEPORT
        #define MUX_GRP_SLATEPORT TRUE
#endif

#if MUX_MUS_MT_PYRE_EXTERIOR == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_MT_PYRE_EXTERIOR
        #define MUX_GRP_MT_PYRE_EXTERIOR TRUE
#endif

#if MUX_MUS_SCHOOL == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_GRP_SCHOOL
        #define MUX_GRP_SCHOOL TRUE
#endif

#if MUX_MUS_HALL_OF_FAME == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_HALL_OF_FAME
        #define MUX_GRP_HALL_OF_FAME TRUE
#endif

#if MUX_MUS_FALLARBOR == TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_FALLARBOR
        #define MUX_GRP_FALLARBOR TRUE
#endif

#if MUX_MUS_SEALED_CHAMBER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_SEALED_CHAMBER
        #define MUX_GRP_SEALED_CHAMBER TRUE
#endif

#if MUX_MUS_CONTEST_WINNER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_CONTEST_WINNER
        #define MUX_GRP_CONTEST_WINNER TRUE
#endif

#if MUX_MUS_CONTEST == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_CONTEST
        #define MUX_GRP_CONTEST TRUE
#endif

#if MUX_MUS_ENCOUNTER_MAGMA == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_ENCOUNTER_MAGMA
        #define MUX_GRP_ENCOUNTER_MAGMA TRUE
#endif

#if MUX_MUS_INTRO_BATTLE == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_CLOSE_HIHAT                            // close hi-hat
        #define MUX_SMP_UNKNOWN_CLOSE_HIHAT TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_INTRO_BATTLE
        #define MUX_GRP_INTRO_BATTLE TRUE
#endif

#if MUX_MUS_ABNORMAL_WEATHER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ABNORMAL_WEATHER
        #define MUX_GRP_ABNORMAL_WEATHER TRUE
#endif

#if MUX_MUS_WEATHER_GROUDON == TRUE
    #undef MUX_GRP_WEATHER_GROUDON
        #define MUX_GRP_WEATHER_GROUDON TRUE
#endif

#if MUX_MUS_SOOTOPOLIS == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_SOOTOPOLIS
        #define MUX_GRP_SOOTOPOLIS TRUE
#endif

#if MUX_MUS_CONTEST_RESULTS == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_CONTEST_RESULTS
        #define MUX_GRP_CONTEST_RESULTS TRUE
#endif

#if MUX_MUS_HALL_OF_FAME_ROOM == TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_HALL_OF_FAME_ROOM
        #define MUX_GRP_HALL_OF_FAME_ROOM TRUE
#endif

#if MUX_MUS_TRICK_HOUSE == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_TRICK_HOUSE
        #define MUX_GRP_TRICK_HOUSE TRUE
#endif

#if MUX_MUS_ENCOUNTER_TWINS == TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_ENCOUNTER_TWINS
        #define MUX_GRP_ENCOUNTER_TWINS TRUE
#endif

#if MUX_MUS_ENCOUNTER_ELITE_FOUR == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_GRP_ENCOUNTER_ELITE_FOUR
        #define MUX_GRP_ENCOUNTER_ELITE_FOUR TRUE
#endif

#if MUX_MUS_ENCOUNTER_HIKER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_ENCOUNTER_HIKER
        #define MUX_GRP_ENCOUNTER_HIKER TRUE
#endif

#if MUX_MUS_CONTEST_LOBBY == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_CONTEST_LOBBY
        #define MUX_GRP_CONTEST_LOBBY TRUE
#endif

#if MUX_MUS_ENCOUNTER_INTERVIEWER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_ENCOUNTER_INTERVIEWER
        #define MUX_GRP_ENCOUNTER_INTERVIEWER TRUE
#endif

#if MUX_MUS_ENCOUNTER_CHAMPION == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_ENCOUNTER_CHAMPION
        #define MUX_GRP_ENCOUNTER_CHAMPION TRUE
#endif

#if MUX_MUS_CREDITS == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_CREDITS
        #define MUX_GRP_CREDITS TRUE
#endif

#if MUX_MUS_END == TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_END
        #define MUX_GRP_END TRUE
#endif

#if MUX_MUS_B_FRONTIER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_B_FRONTIER
        #define MUX_GRP_B_FRONTIER TRUE
#endif

#if MUX_MUS_B_ARENA == TRUE
    #undef MUX_SMP_SC88PRO_TAIKO                                  // taiko
        #define MUX_SMP_SC88PRO_TAIKO TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_HYOUSHIGI                      // wood attack 2
        #define MUX_SMP_ETHNIC_FLAVOURS_HYOUSHIGI TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI                      // wood attack 1
        #define MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_UNKNOWN_KOTO_HIGH                              // koto c5
        #define MUX_SMP_UNKNOWN_KOTO_HIGH TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SD90_CLASSICAL_SHAKUHACHI                      // shakuhachi
        #define MUX_SMP_SD90_CLASSICAL_SHAKUHACHI TRUE
    #undef MUX_SMP_UNKNOWN_KOTO_LOW                               // koto c4
        #define MUX_SMP_UNKNOWN_KOTO_LOW TRUE
    #undef MUX_GRP_B_ARENA
        #define MUX_GRP_B_ARENA TRUE
#endif

#if MUX_MUS_OBTAIN_B_POINTS == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_GRP_B_FRONTIER
        #define MUX_GRP_B_FRONTIER TRUE
#endif

#if MUX_MUS_REGISTER_MATCH_CALL == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SD90_COWBELL                                   // cowbell
        #define MUX_SMP_SD90_COWBELL TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_GRP_REGISTER_MATCH_CALL
        #define MUX_GRP_REGISTER_MATCH_CALL TRUE
#endif

#if MUX_MUS_B_PYRAMID == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_COWBELL                                   // cowbell
        #define MUX_SMP_SD90_COWBELL TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_B_PYRAMID
        #define MUX_GRP_B_PYRAMID TRUE
#endif

#if MUX_MUS_B_PYRAMID_TOP == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS                     // orchestral choir
        #define MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS TRUE
    #undef MUX_GRP_B_PYRAMID_TOP
        #define MUX_GRP_B_PYRAMID_TOP TRUE
#endif

#if MUX_MUS_B_PALACE == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TAIKO                                  // taiko
        #define MUX_SMP_SC88PRO_TAIKO TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_HEART_OF_ASIA_GAMELAN                          // gamelan
        #define MUX_SMP_HEART_OF_ASIA_GAMELAN TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_B_PALACE
        #define MUX_GRP_B_PALACE TRUE
#endif

#if MUX_MUS_RAYQUAZA_APPEARS == TRUE
    #undef MUX_SMP_SC88PRO_CHURCH_ORGAN3_LOW                      // pipe organ 1
        #define MUX_SMP_SC88PRO_CHURCH_ORGAN3_LOW TRUE
    #undef MUX_SMP_SC88PRO_CHURCH_ORGAN3_HIGH                     // pipe organ 2
        #define MUX_SMP_SC88PRO_CHURCH_ORGAN3_HIGH TRUE
    #undef MUX_GRP_RAYQUAZA_APPEARS
        #define MUX_GRP_RAYQUAZA_APPEARS TRUE
#endif

#if MUX_MUS_B_TOWER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_B_TOWER
        #define MUX_GRP_B_TOWER TRUE
#endif

#if MUX_MUS_OBTAIN_SYMBOL == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_GRP_B_FRONTIER
        #define MUX_GRP_B_FRONTIER TRUE
#endif

#if MUX_MUS_B_DOME == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW           // distortion guitar c3
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW TRUE
    #undef MUX_GRP_B_DOME
        #define MUX_GRP_B_DOME TRUE
#endif

#if MUX_MUS_B_PIKE == TRUE
    #undef MUX_SMP_SC88PRO_TAIKO                                  // taiko
        #define MUX_SMP_SC88PRO_TAIKO TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_UNKNOWN_FEMALE_VOICE                           // voice huu
        #define MUX_SMP_UNKNOWN_FEMALE_VOICE TRUE
    #undef MUX_GRP_B_PIKE
        #define MUX_GRP_B_PIKE TRUE
#endif

#if MUX_MUS_B_FACTORY == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_B_FACTORY
        #define MUX_GRP_B_FACTORY TRUE
#endif

#if MUX_MUS_VS_RAYQUAZA == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_GRP_VS_RAYQUAZA
        #define MUX_GRP_VS_RAYQUAZA TRUE
#endif

#if MUX_MUS_VS_FRONTIER_BRAIN == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_FRONTIER_BRAIN
        #define MUX_GRP_VS_FRONTIER_BRAIN TRUE
#endif

#if MUX_MUS_VS_MEW == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_GRP_VS_MEW
        #define MUX_GRP_VS_MEW TRUE
#endif

#if MUX_MUS_B_DOME_LOBBY == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_GRP_B_DOME
        #define MUX_GRP_B_DOME TRUE
#endif

#if MUX_MUS_VS_WILD == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_WILD
        #define MUX_GRP_VS_WILD TRUE
#endif

#if MUX_MUS_VS_AQUA_MAGMA == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_AQUA_MAGMA
        #define MUX_GRP_VS_AQUA_MAGMA TRUE
#endif

#if MUX_MUS_VS_TRAINER == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI_WITH_SNARE                     // timpani/snare
        #define MUX_SMP_SC88PRO_TIMPANI_WITH_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_TRAINER
        #define MUX_GRP_VS_TRAINER TRUE
#endif

#if MUX_MUS_VS_GYM_LEADER == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_GYM_LEADER
        #define MUX_GRP_VS_GYM_LEADER TRUE
#endif

#if MUX_MUS_VS_CHAMPION == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_VS_CHAMPION
        #define MUX_GRP_VS_CHAMPION TRUE
#endif

#if MUX_MUS_VS_REGI == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_UNUSED_SC55_TOM                                // tom
        #define MUX_SMP_UNUSED_SC55_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_TRINITY_BIG_BONED                              // big boned
        #define MUX_SMP_TRINITY_BIG_BONED TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_REGI
        #define MUX_GRP_VS_REGI TRUE
#endif

#if MUX_MUS_VS_KYOGRE_GROUDON == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_GRP_VS_KYOGRE_GROUDON
        #define MUX_GRP_VS_KYOGRE_GROUDON TRUE
#endif

#if MUX_MUS_VS_RIVAL == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_RIVAL
        #define MUX_GRP_VS_RIVAL TRUE
#endif

#if MUX_MUS_VS_ELITE_FOUR == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_VS_ELITE_FOUR
        #define MUX_GRP_VS_ELITE_FOUR TRUE
#endif

#if MUX_MUS_VS_AQUA_MAGMA_LEADER == TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SC88PRO_SLAP_BASS                              // slap bass
        #define MUX_SMP_SC88PRO_SLAP_BASS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_GRP_VS_AQUA_MAGMA_LEADER
        #define MUX_GRP_VS_AQUA_MAGMA_LEADER TRUE
#endif

#if MUX_MUS_RG_FOLLOW_ME == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_STEINWAY_B_PIANO                               // steinway piano
        #define MUX_SMP_STEINWAY_B_PIANO TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_RG_FOLLOW_ME
        #define MUX_GRP_RG_FOLLOW_ME TRUE
#endif

#if MUX_MUS_RG_GAME_CORNER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_GAME_CORNER
        #define MUX_GRP_RG_GAME_CORNER TRUE
#endif

#if MUX_MUS_RG_ROCKET_HIDEOUT == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_WHISTLE                         // whistle
        #define MUX_SMP_SD90_CLASSICAL_WHISTLE TRUE
    #undef MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE                      // harmonics
        #define MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE TRUE
    #undef MUX_GRP_RG_ROCKET_HIDEOUT
        #define MUX_GRP_RG_ROCKET_HIDEOUT TRUE
#endif

#if MUX_MUS_RG_GYM == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_GRP_RG_GYM
        #define MUX_GRP_RG_GYM TRUE
#endif

#if MUX_MUS_RG_JIGGLYPUFF == TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_GRP_RG_JIGGLYPUFF
        #define MUX_GRP_RG_JIGGLYPUFF TRUE
#endif

#if MUX_MUS_RG_INTRO_FIGHT == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW           // distortion guitar c3
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW TRUE
    #undef MUX_GRP_RG_INTRO_FIGHT
        #define MUX_GRP_RG_INTRO_FIGHT TRUE
#endif

#if MUX_MUS_RG_TITLE == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_TITLE
        #define MUX_GRP_RG_TITLE TRUE
#endif

#if MUX_MUS_RG_CINNABAR == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_GRP_RG_CINNABAR
        #define MUX_GRP_RG_CINNABAR TRUE
#endif

#if MUX_MUS_RG_LAVENDER == TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_SC88PRO_TAIKO                                  // taiko
        #define MUX_SMP_SC88PRO_TAIKO TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_KOTSUZUMI                      // tsuzumi
        #define MUX_SMP_ETHNIC_FLAVOURS_KOTSUZUMI TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_ATARIGANE                      // kane
        #define MUX_SMP_ETHNIC_FLAVOURS_ATARIGANE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_SMP_SD90_CLASSICAL_WHISTLE                         // whistle
        #define MUX_SMP_SD90_CLASSICAL_WHISTLE TRUE
    #undef MUX_GRP_RG_LAVENDER
        #define MUX_GRP_RG_LAVENDER TRUE
#endif

#if MUX_MUS_RG_HEAL == TRUE
    #undef MUX_GRP_RG_HEAL
        #define MUX_GRP_RG_HEAL TRUE
#endif

#if MUX_MUS_RG_CYCLING == TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_CYCLING
        #define MUX_GRP_RG_CYCLING TRUE
#endif

#if MUX_MUS_RG_ENCOUNTER_ROCKET == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SD90_COWBELL                                   // cowbell
        #define MUX_SMP_SD90_COWBELL TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_RG_ENCOUNTER_ROCKET
        #define MUX_GRP_RG_ENCOUNTER_ROCKET TRUE
#endif

#if MUX_MUS_RG_ENCOUNTER_GIRL == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_GRP_RG_ENCOUNTER_GIRL
        #define MUX_GRP_RG_ENCOUNTER_GIRL TRUE
#endif

#if MUX_MUS_RG_ENCOUNTER_BOY == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_RG_ENCOUNTER_BOY
        #define MUX_GRP_RG_ENCOUNTER_BOY TRUE
#endif

#if MUX_MUS_RG_HALL_OF_FAME == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_RG_HALL_OF_FAME
        #define MUX_GRP_RG_HALL_OF_FAME TRUE
#endif

#if MUX_MUS_RG_VIRIDIAN_FOREST == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_STEINWAY_B_PIANO                               // steinway piano
        #define MUX_SMP_STEINWAY_B_PIANO TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_WHISTLE                         // whistle
        #define MUX_SMP_SD90_CLASSICAL_WHISTLE TRUE
    #undef MUX_GRP_RG_VIRIDIAN_FOREST
        #define MUX_GRP_RG_VIRIDIAN_FOREST TRUE
#endif

#if MUX_MUS_RG_MT_MOON == TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_GRP_RG_MT_MOON
        #define MUX_GRP_RG_MT_MOON TRUE
#endif

#if MUX_MUS_RG_POKE_MANSION == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_SQUARE_WAVE                            // psg plus
        #define MUX_SMP_SC88PRO_SQUARE_WAVE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_RG_POKE_MANSION
        #define MUX_GRP_RG_POKE_MANSION TRUE
#endif

#if MUX_MUS_RG_CREDITS == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_GLOCKENSPIEL                           // glockenspiel
        #define MUX_SMP_SC88PRO_GLOCKENSPIEL TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OBOE                            // oboe c4
        #define MUX_SMP_SD90_CLASSICAL_OBOE TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_CREDITS
        #define MUX_GRP_RG_CREDITS TRUE
#endif

#if MUX_MUS_RG_ROUTE1 == TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_STEINWAY_B_PIANO                               // steinway piano
        #define MUX_SMP_STEINWAY_B_PIANO TRUE
    #undef MUX_SMP_SD90_CLASSICAL_WHISTLE                         // whistle
        #define MUX_SMP_SD90_CLASSICAL_WHISTLE TRUE
    #undef MUX_GRP_RG_ROUTE1
        #define MUX_GRP_RG_ROUTE1 TRUE
#endif

#if MUX_MUS_RG_ROUTE24 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_ROUTE24
        #define MUX_GRP_RG_ROUTE24 TRUE
#endif

#if MUX_MUS_RG_ROUTE3 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_ROUTE3
        #define MUX_GRP_RG_ROUTE3 TRUE
#endif

#if MUX_MUS_RG_ROUTE11 == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_ROUTE11
        #define MUX_GRP_RG_ROUTE11 TRUE
#endif

#if MUX_MUS_RG_VICTORY_ROAD == TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_VICTORY_ROAD
        #define MUX_GRP_RG_VICTORY_ROAD TRUE
#endif

#if MUX_MUS_RG_VS_GYM_LEADER == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH                // electric piano c5
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW           // distortion guitar c3
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW TRUE
    #undef MUX_GRP_RG_VS_GYM_LEADER
        #define MUX_GRP_RG_VS_GYM_LEADER TRUE
#endif

#if MUX_MUS_RG_VS_TRAINER == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_COWBELL                                   // cowbell
        #define MUX_SMP_SD90_COWBELL TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW           // distortion guitar c3
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW TRUE
    #undef MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE                      // harmonics
        #define MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE TRUE
    #undef MUX_GRP_RG_VS_TRAINER
        #define MUX_GRP_RG_VS_TRAINER TRUE
#endif

#if MUX_MUS_RG_VS_WILD == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_GRP_RG_VS_WILD
        #define MUX_GRP_RG_VS_WILD TRUE
#endif

#if MUX_MUS_RG_VS_CHAMPION == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE                      // harmonics
        #define MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS                     // orchestral choir
        #define MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW           // distortion guitar c3
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW TRUE
    #undef MUX_GRP_RG_VS_CHAMPION
        #define MUX_GRP_RG_VS_CHAMPION TRUE
#endif

#if MUX_MUS_RG_PALLET == TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH                // electric piano c5
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_PALLET
        #define MUX_GRP_RG_PALLET TRUE
#endif

#if MUX_MUS_RG_OAK_LAB == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_OAK_LAB
        #define MUX_GRP_RG_OAK_LAB TRUE
#endif

#if MUX_MUS_RG_OAK == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_OAK
        #define MUX_GRP_RG_OAK TRUE
#endif

#if MUX_MUS_RG_POKE_CENTER == TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH                // electric piano c5
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_POKE_CENTER
        #define MUX_GRP_RG_POKE_CENTER TRUE
#endif

#if MUX_MUS_RG_SS_ANNE == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH                // electric piano c5
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_UNKNOWN_18                                     // ship horn
        #define MUX_SMP_UNKNOWN_18 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_SS_ANNE
        #define MUX_GRP_RG_SS_ANNE TRUE
#endif

#if MUX_MUS_RG_SURF == TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH                // electric piano c5
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_SURF
        #define MUX_GRP_RG_SURF TRUE
#endif

#if MUX_MUS_RG_POKE_TOWER == TRUE
    #undef MUX_SMP_UNUSED_HEART_OF_ASIA_INDIAN_DRUM               // indian drum
        #define MUX_SMP_UNUSED_HEART_OF_ASIA_INDIAN_DRUM TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_ATARIGANE                      // kane
        #define MUX_SMP_ETHNIC_FLAVOURS_ATARIGANE TRUE
    #undef MUX_SMP_SC88PRO_TAIKO                                  // taiko
        #define MUX_SMP_SC88PRO_TAIKO TRUE
    #undef MUX_SMP_ETHNIC_FLAVOURS_KOTSUZUMI                      // tsuzumi
        #define MUX_SMP_ETHNIC_FLAVOURS_KOTSUZUMI TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_SMP_SD90_ENHANCED_DELAY_SHAKU                      // bamboo flute
        #define MUX_SMP_SD90_ENHANCED_DELAY_SHAKU TRUE
    #undef MUX_SMP_SD90_CLASSICAL_WHISTLE                         // whistle
        #define MUX_SMP_SD90_CLASSICAL_WHISTLE TRUE
    #undef MUX_GRP_RG_POKE_TOWER
        #define MUX_GRP_RG_POKE_TOWER TRUE
#endif

#if MUX_MUS_RG_SILPH == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE                      // harmonics
        #define MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW           // distortion guitar c3
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW TRUE
    #undef MUX_GRP_RG_SILPH
        #define MUX_GRP_RG_SILPH TRUE
#endif

#if MUX_MUS_RG_FUCHSIA == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SD90_COWBELL                                   // cowbell
        #define MUX_SMP_SD90_COWBELL TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SD90_OPEN_TRIANGLE                             // triangle
        #define MUX_SMP_SD90_OPEN_TRIANGLE TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_ACCORDION                              // accordion
        #define MUX_SMP_SC88PRO_ACCORDION TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_GRP_RG_FUCHSIA
        #define MUX_GRP_RG_FUCHSIA TRUE
#endif

#if MUX_MUS_RG_CELADON == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SD90_COWBELL                                   // cowbell
        #define MUX_SMP_SD90_COWBELL TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_CELADON
        #define MUX_GRP_RG_CELADON TRUE
#endif

#if MUX_MUS_RG_VICTORY_TRAINER == TRUE
    #undef MUX_SMP_SC88PRO_RND_KICK                               // bass drum
        #define MUX_SMP_SC88PRO_RND_KICK TRUE
    #undef MUX_SMP_SC88PRO_RND_SNARE                              // snare
        #define MUX_SMP_SC88PRO_RND_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_UNKNOWN_OPEN_HIHAT                             // open hi-hat
        #define MUX_SMP_UNKNOWN_OPEN_HIHAT TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_RG_VICTORY_TRAINER
        #define MUX_GRP_RG_VICTORY_TRAINER TRUE
#endif

#if MUX_MUS_RG_VICTORY_WILD == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_VICTORY_WILD
        #define MUX_GRP_RG_VICTORY_WILD TRUE
#endif

#if MUX_MUS_RG_VICTORY_GYM_LEADER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIZZICATO_STRINGS                      // pizzicato
        #define MUX_SMP_SC88PRO_PIZZICATO_STRINGS TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_VICTORY_GYM_LEADER
        #define MUX_GRP_RG_VICTORY_GYM_LEADER TRUE
#endif

#if MUX_MUS_RG_VERMILLION == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_VERMILLION
        #define MUX_GRP_RG_VERMILLION TRUE
#endif

#if MUX_MUS_RG_PEWTER == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_PEWTER
        #define MUX_GRP_RG_PEWTER TRUE
#endif

#if MUX_MUS_RG_ENCOUNTER_RIVAL == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_RG_ENCOUNTER_RIVAL
        #define MUX_GRP_RG_ENCOUNTER_RIVAL TRUE
#endif

#if MUX_MUS_RG_RIVAL_EXIT == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_GRP_RG_ENCOUNTER_RIVAL
        #define MUX_GRP_RG_ENCOUNTER_RIVAL TRUE
#endif

#if MUX_MUS_RG_DEX_RATING == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_RG_DEX_RATING
        #define MUX_GRP_RG_DEX_RATING TRUE
#endif

#if MUX_MUS_RG_OBTAIN_KEY_ITEM == TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_RG_OBTAIN_KEY_ITEM
        #define MUX_GRP_RG_OBTAIN_KEY_ITEM TRUE
#endif

#if MUX_MUS_RG_CAUGHT_INTRO == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_JINGLE_BELL                            // suzu
        #define MUX_SMP_SC88PRO_JINGLE_BELL TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_CAUGHT_INTRO
        #define MUX_GRP_RG_CAUGHT_INTRO TRUE
#endif

#if MUX_MUS_RG_PHOTO == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SC88PRO_TR909_HAND_CLAP                        // hand clap
        #define MUX_SMP_SC88PRO_TR909_HAND_CLAP TRUE
    #undef MUX_GRP_RG_PHOTO
        #define MUX_GRP_RG_PHOTO TRUE
#endif

#if MUX_MUS_RG_GAME_FREAK == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_HARP                                   // harp
        #define MUX_SMP_SC88PRO_HARP TRUE
    #undef MUX_GRP_RG_GAME_FREAK
        #define MUX_GRP_RG_GAME_FREAK TRUE
#endif

#if MUX_MUS_RG_CAUGHT == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TAMBOURINE                             // tambourine
        #define MUX_SMP_SC88PRO_TAMBOURINE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_VICTORY_WILD
        #define MUX_GRP_RG_VICTORY_WILD TRUE
#endif

#if MUX_MUS_RG_NEW_GAME_INSTRUCT == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_GRP_RG_NEW_GAME
        #define MUX_GRP_RG_NEW_GAME TRUE
#endif

#if MUX_MUS_RG_NEW_GAME_INTRO == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_39                                // tuba c2
        #define MUX_SMP_SC88PRO_TUBA_39 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_GRP_RG_NEW_GAME
        #define MUX_GRP_RG_NEW_GAME TRUE
#endif

#if MUX_MUS_RG_NEW_GAME_EXIT == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TUBA_51                                // tuba c3
        #define MUX_SMP_SC88PRO_TUBA_51 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_NEW_GAME
        #define MUX_GRP_RG_NEW_GAME TRUE
#endif

#if MUX_MUS_RG_POKE_JUMP == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_GAME_CORNER
        #define MUX_GRP_RG_GAME_CORNER TRUE
#endif

#if MUX_MUS_RG_UNION_ROOM == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_GAME_CORNER
        #define MUX_GRP_RG_GAME_CORNER TRUE
#endif

#if MUX_MUS_RG_NET_CENTER == TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH                // electric piano c5
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_POKE_CENTER
        #define MUX_GRP_RG_POKE_CENTER TRUE
#endif

#if MUX_MUS_RG_MYSTERY_GIFT == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_GRP_RG_MYSTERY_GIFT
        #define MUX_GRP_RG_MYSTERY_GIFT TRUE
#endif

#if MUX_MUS_RG_BERRY_PICK == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_GRP_RG_GAME_CORNER
        #define MUX_GRP_RG_GAME_CORNER TRUE
#endif

#if MUX_MUS_RG_SEVII_CAVE == TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_GRP_RG_MT_MOON
        #define MUX_GRP_RG_MT_MOON TRUE
#endif

#if MUX_MUS_RG_TEACHY_TV_SHOW == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_STEINWAY_B_PIANO                               // steinway piano
        #define MUX_SMP_STEINWAY_B_PIANO TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_GRP_RG_FOLLOW_ME
        #define MUX_GRP_RG_FOLLOW_ME TRUE
#endif

#if MUX_MUS_RG_SEVII_ROUTE == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_SEVII_ROUTE
        #define MUX_GRP_RG_SEVII_ROUTE TRUE
#endif

#if MUX_MUS_RG_SEVII_DUNGEON == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_MUTE_HIGH_CONGA                        // high conga
        #define MUX_SMP_SC88PRO_MUTE_HIGH_CONGA TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_STEINWAY_B_PIANO                               // steinway piano
        #define MUX_SMP_STEINWAY_B_PIANO TRUE
    #undef MUX_SMP_SC88PRO_XYLOPHONE                              // xylophone
        #define MUX_SMP_SC88PRO_XYLOPHONE TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_60                             // trumpet c4
        #define MUX_SMP_SC88PRO_TRUMPET_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_WHISTLE                         // whistle
        #define MUX_SMP_SD90_CLASSICAL_WHISTLE TRUE
    #undef MUX_GRP_RG_VIRIDIAN_FOREST
        #define MUX_GRP_RG_VIRIDIAN_FOREST TRUE
#endif

#if MUX_MUS_RG_SEVII_123 == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_72                              // piano c5
        #define MUX_SMP_SC88PRO_PIANO1_72 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_84                              // piano c7
        #define MUX_SMP_SC88PRO_PIANO1_84 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_PEWTER
        #define MUX_GRP_RG_PEWTER TRUE
#endif

#if MUX_MUS_RG_SEVII_45 == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_SEVII_45
        #define MUX_GRP_RG_SEVII_45 TRUE
#endif

#if MUX_MUS_RG_SEVII_67 == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_ORGAN2                                 // percussive organ
        #define MUX_SMP_SC88PRO_ORGAN2 TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_GRP_RG_SEVII_67
        #define MUX_GRP_RG_SEVII_67 TRUE
#endif

#if MUX_MUS_RG_POKE_FLUTE == TRUE
    #undef MUX_SMP_SC88PRO_FLUTE                                  // flute
        #define MUX_SMP_SC88PRO_FLUTE TRUE
    #undef MUX_SMP_SD90_ENHANCED_DELAY_SHAKU                      // bamboo flute
        #define MUX_SMP_SD90_ENHANCED_DELAY_SHAKU TRUE
    #undef MUX_GRP_RG_POKE_TOWER
        #define MUX_GRP_RG_POKE_TOWER TRUE
#endif

#if MUX_MUS_RG_VS_DEOXYS == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH          // distortion guitar c4
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH TRUE
    #undef MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE                      // harmonics
        #define MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS                     // orchestral choir
        #define MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW           // distortion guitar c3
        #define MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW TRUE
    #undef MUX_SMP_SD90_CLASSICAL_WHISTLE                         // whistle
        #define MUX_SMP_SD90_CLASSICAL_WHISTLE TRUE
    #undef MUX_GRP_RG_VS_DEOXYS
        #define MUX_GRP_RG_VS_DEOXYS TRUE
#endif

#if MUX_MUS_RG_VS_MEWTWO == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_VS_WILD
        #define MUX_GRP_RG_VS_WILD TRUE
#endif

#if MUX_MUS_RG_VS_LEGEND == TRUE
    #undef MUX_SMP_SC88PRO_OPEN_LOW_CONGA                         // low conga
        #define MUX_SMP_SC88PRO_OPEN_LOW_CONGA TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_DANCE_DRUMS_RIDE_BELL                          // ride bell
        #define MUX_SMP_DANCE_DRUMS_RIDE_BELL TRUE
    #undef MUX_SMP_TRINITY_CYMBAL_CRASH                           // splash
        #define MUX_SMP_TRINITY_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR                // overdriven guitar
        #define MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FINGERED_BASS                          // electric bass
        #define MUX_SMP_SC88PRO_FINGERED_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_72                         // french horn c5
        #define MUX_SMP_SC88PRO_FRENCH_HORN_72 TRUE
    #undef MUX_GRP_RG_VS_WILD
        #define MUX_GRP_RG_VS_WILD TRUE
#endif

#if MUX_MUS_RG_ENCOUNTER_GYM_LEADER == TRUE
    #undef MUX_SMP_DRUM_AND_PERCUSSION_KICK                       // power kick
        #define MUX_SMP_DRUM_AND_PERCUSSION_KICK TRUE
    #undef MUX_SMP_SD90_SOLO_SNARE                                // rimshot
        #define MUX_SMP_SD90_SOLO_SNARE TRUE
    #undef MUX_SMP_SD90_AMBIENT_TOM                               // tom1
        #define MUX_SMP_SD90_AMBIENT_TOM TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_FRETLESS_BASS                          // fretless bass
        #define MUX_SMP_SC88PRO_FRETLESS_BASS TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_ENCOUNTER_BOY
        #define MUX_GRP_RG_ENCOUNTER_BOY TRUE
#endif

#if MUX_MUS_RG_ENCOUNTER_DEOXYS == TRUE
    #undef MUX_SMP_SC88PRO_TUBULAR_BELL                           // tubular bells
        #define MUX_SMP_SC88PRO_TUBULAR_BELL TRUE
    #undef MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE                      // harmonics
        #define MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE TRUE
    #undef MUX_SMP_SC88PRO_SYNTH_BASS                             // synth bass
        #define MUX_SMP_SC88PRO_SYNTH_BASS TRUE
    #undef MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS                     // orchestral choir
        #define MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS TRUE
    #undef MUX_GRP_RG_ENCOUNTER_DEOXYS
        #define MUX_GRP_RG_ENCOUNTER_DEOXYS TRUE
#endif

#if MUX_MUS_RG_TRAINER_TOWER == TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_SNARE                        // orchestral snare
        #define MUX_SMP_SC88PRO_ORCHESTRA_SNARE TRUE
    #undef MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH                 // cymbal
        #define MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH TRUE
    #undef MUX_SMP_SC88PRO_TIMPANI                                // timpani
        #define MUX_SMP_SC88PRO_TIMPANI TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_60                     // strings c4
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_84                     // strings c6
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_72                             // trumpet c5
        #define MUX_SMP_SC88PRO_TRUMPET_72 TRUE
    #undef MUX_SMP_SC88PRO_TRUMPET_84                             // trumpet c6
        #define MUX_SMP_SC88PRO_TRUMPET_84 TRUE
    #undef MUX_SMP_SC88PRO_FRENCH_HORN_60                         // french horn c4
        #define MUX_SMP_SC88PRO_FRENCH_HORN_60 TRUE
    #undef MUX_GRP_RG_GYM
        #define MUX_GRP_RG_GYM TRUE
#endif

#if MUX_MUS_RG_SLOW_PALLET == TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW                 // electric piano c4
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW TRUE
    #undef MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH                // electric piano c5
        #define MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH TRUE
    #undef MUX_SMP_SC88PRO_NYLON_STR_GUITAR                       // acoustic guitar
        #define MUX_SMP_SC88PRO_NYLON_STR_GUITAR TRUE
    #undef MUX_SMP_SC88PRO_STRING_ENSEMBLE_72                     // strings c5
        #define MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 TRUE
    #undef MUX_GRP_RG_PALLET
        #define MUX_GRP_RG_PALLET TRUE
#endif

#if MUX_MUS_RG_TEACHY_TV_MENU == TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_48                              // piano c3
        #define MUX_SMP_SC88PRO_PIANO1_48 TRUE
    #undef MUX_SMP_SC88PRO_PIANO1_60                              // piano c4
        #define MUX_SMP_SC88PRO_PIANO1_60 TRUE
    #undef MUX_GRP_RG_TEACHY_TV_MENU
        #define MUX_GRP_RG_TEACHY_TV_MENU TRUE
#endif

#if MUX_ENABLE_BARD_PHONEMES == TRUE
    #undef MUX_SMP_PHONEMES                                       // all 51 english bard phonemes
        #define MUX_SMP_PHONEMES TRUE
    #undef MUX_GRP_BARD
        #define MUX_GRP_BARD TRUE
#endif

#endif // MUX_SAMPLE_DECLARATIONS_H
