const u16 gTutorMoves[TUTOR_MOVE_COUNT] =
{
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
    [TUTOR_MOVE_DYNAMIC_PUNCH] = MOVE_DYNAMIC_PUNCH,
    [TUTOR_MOVE_ROLLOUT] = MOVE_ROLLOUT,
    [TUTOR_MOVE_PSYCH_UP] = MOVE_PSYCH_UP,
    [TUTOR_MOVE_SNORE] = MOVE_SNORE,
    [TUTOR_MOVE_ICY_WIND] = MOVE_ICY_WIND,
    [TUTOR_MOVE_ENDURE] = MOVE_ENDURE,
    [TUTOR_MOVE_MUD_SLAP] = MOVE_MUD_SLAP,
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH,
    [TUTOR_MOVE_SWAGGER] = MOVE_SWAGGER,
    [TUTOR_MOVE_SLEEP_TALK] = MOVE_SLEEP_TALK,
    [TUTOR_MOVE_SWIFT] = MOVE_SWIFT,
    [TUTOR_MOVE_DEFENSE_CURL] = MOVE_DEFENSE_CURL,
    [TUTOR_MOVE_THUNDER_PUNCH] = MOVE_THUNDER_PUNCH,
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH,
    [TUTOR_MOVE_FURY_CUTTER] = MOVE_FURY_CUTTER,
};

#define TUTOR(move) (1u << (TUTOR_##move))

static const u32 sTutorLearnsets[] =
{
    [SPECIES_NONE]             = (0),

    [SPECIES_BULBASAUR]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_IVYSAUR]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_VENUSAUR]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CHARMANDER]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CHARMELEON]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CHARIZARD]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SQUIRTLE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_WARTORTLE]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_BLASTOISE]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_CATERPIE]         = (0),

    [SPECIES_METAPOD]          = (0),

    [SPECIES_BUTTERFREE]       = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_WEEDLE]           = (0),

    [SPECIES_KAKUNA]           = (0),

    [SPECIES_BEEDRILL]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_PIDGEY]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_PIDGEOTTO]        = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_PIDGEOT]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_RATTATA]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_RATICATE]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SPEAROW]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_FEAROW]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_EKANS]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ARBOK]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_PIKACHU]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_RAICHU]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SANDSHREW]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SANDSLASH]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_NIDORAN_F]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_NIDORINA]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_NIDOQUEEN]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_NIDORAN_M]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_NIDORINO]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_NIDOKING]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CLEFAIRY]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_CLEFABLE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_VULPIX]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_NINETALES]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_JIGGLYPUFF]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_WIGGLYTUFF]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_ZUBAT]            = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOLBAT]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_ODDISH]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GLOOM]            = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_VILEPLUME]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_PARAS]            = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_PARASECT]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_VENONAT]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_VENOMOTH]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_DIGLETT]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DUGTRIO]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MEOWTH]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_PERSIAN]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_PSYDUCK]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOLDUCK]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_MANKEY]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_PRIMEAPE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_GROWLITHE]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_ARCANINE]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_POLIWAG]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_POLIWHIRL]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_POLIWRATH]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_ABRA]             = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_KADABRA]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_ALAKAZAM]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MACHOP]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MACHOKE]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MACHAMP]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_BELLSPROUT]       = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_WEEPINBELL]       = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_VICTREEBEL]       = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_TENTACOOL]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_TENTACRUEL]       = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GEODUDE]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_GRAVELER]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_GOLEM]            = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_PONYTA]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_RAPIDASH]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SLOWPOKE]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SLOWBRO]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_MAGNEMITE]        = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MAGNETON]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_FARFETCHD]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_DODUO]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_DODRIO]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SEEL]             = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DEWGONG]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GRIMER]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MUK]              = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_SHELLDER]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_CLOYSTER]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_GASTLY]           = (TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_HAUNTER]          = (TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GENGAR]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_ONIX]             = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DROWZEE]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_HYPNO]            = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_KRABBY]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_KINGLER]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_VOLTORB]          = (TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_ELECTRODE]        = (TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_EXEGGCUTE]        = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_EXEGGUTOR]        = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CUBONE]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MAROWAK]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_HITMONLEE]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_HITMONCHAN]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_LICKITUNG]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_KOFFING]          = (TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_WEEZING]          = (TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_RHYHORN]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_RHYDON]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CHANSEY]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_TANGELA]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KANGASKHAN]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_HORSEA]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SEADRA]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOLDEEN]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SEAKING]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_STARYU]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_STARMIE]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MR_MIME]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_SCYTHER]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_JYNX]             = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ELECTABUZZ]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MAGMAR]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_PINSIR]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_TAUROS]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MAGIKARP]         = (0),

    [SPECIES_GYARADOS]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_LAPRAS]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DITTO]            = (0),

    [SPECIES_EEVEE]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_VAPOREON]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_JOLTEON]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_FLAREON]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_PORYGON]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_OMANYTE]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_OMASTAR]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KABUTO]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_KABUTOPS]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_AERODACTYL]       = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SNORLAX]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_ARTICUNO]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_ZAPDOS]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MOLTRES]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_DRATINI]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_DRAGONAIR]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_DRAGONITE]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_MEWTWO]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MEW]              = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CHIKORITA]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_BAYLEEF]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_MEGANIUM]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CYNDAQUIL]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_QUILAVA]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_TYPHLOSION]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_TOTODILE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CROCONAW]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_FERALIGATR]       = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SENTRET]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_FURRET]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_HOOTHOOT]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_NOCTOWL]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_LEDYBA]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LEDIAN]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SPINARAK]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ARIADOS]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CROBAT]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_CHINCHOU]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_LANTURN]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_PICHU]            = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_CLEFFA]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_IGGLYBUFF]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_TOGEPI]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_TOGETIC]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_NATU]             = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_XATU]             = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MAREEP]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_FLAAFFY]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_AMPHAROS]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_BELLOSSOM]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MARILL]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_AZUMARILL]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SUDOWOODO]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_POLITOED]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_HOPPIP]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SKIPLOOM]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_JUMPLUFF]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_AIPOM]            = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SUNKERN]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SUNFLORA]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_YANMA]            = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_WOOPER]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_QUAGSIRE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_ESPEON]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_UMBREON]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MURKROW]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SLOWKING]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_MISDREAVUS]       = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_UNOWN]            = (0),

    [SPECIES_WOBBUFFET]        = (0),

    [SPECIES_GIRAFARIG]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_PINECO]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_FORRETRESS]       = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_DUNSPARCE]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_GLIGAR]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_STEELIX]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SNUBBULL]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_GRANBULL]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_QWILFISH]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SCIZOR]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SHUCKLE]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_HERACROSS]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SNEASEL]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_TEDDIURSA]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_URSARING]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SLUGMA]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_MAGCARGO]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SWINUB]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_PILOSWINE]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_CORSOLA]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_REMORAID]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_OCTILLERY]        = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_DELIBIRD]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MANTINE]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SKARMORY]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_HOUNDOUR]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_HOUNDOOM]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_KINGDRA]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_PHANPY]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_DONPHAN]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_PORYGON2]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_STANTLER]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SMEARGLE]         = (0),

    [SPECIES_TYROGUE]          = (TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_HITMONTOP]        = (TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SMOOCHUM]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ELEKID]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MAGBY]            = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MILTANK]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_BLISSEY]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SOFT_BOILED)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_RAIKOU]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_ENTEI]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SUICUNE]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_LARVITAR]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_PUPITAR]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_TYRANITAR]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_LUGIA]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_HO_OH]            = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_CELEBI]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_TREECKO]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_GROVYLE]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SCEPTILE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_TORCHIC]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_COMBUSKEN]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_BLAZIKEN]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_MUDKIP]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_MARSHTOMP]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SWAMPERT]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_POOCHYENA]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_MIGHTYENA]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ZIGZAGOON]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_LINOONE]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_WURMPLE]          = (0),

    [SPECIES_SILCOON]          = (0),

    [SPECIES_BEAUTIFLY]        = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_CASCOON]          = (0),

    [SPECIES_DUSTOX]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_LOTAD]            = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_LOMBRE]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_LUDICOLO]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_SEEDOT]           = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_NUZLEAF]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SHIFTRY]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_NINCADA]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_NINJASK]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SHEDINJA]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_TAILLOW]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SWELLOW]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SHROOMISH]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_BRELOOM]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SPINDA]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_WINGULL]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_PELIPPER]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_SURSKIT]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MASQUERAIN]       = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_WAILMER]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_WAILORD]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SKITTY]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_DELCATTY]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_KECLEON]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_BALTOY]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CLAYDOL]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_NOSEPASS]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_TORKOAL]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SABLEYE]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_BARBOACH]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_WHISCASH]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_LUVDISC]          = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_CORPHISH]         = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CRAWDAUNT]        = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_FEEBAS]           = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MILOTIC]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_CARVANHA]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SHARPEDO]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_TRAPINCH]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_VIBRAVA]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_FLYGON]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_MAKUHITA]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_HARIYAMA]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_ELECTRIKE]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_MANECTRIC]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_NUMEL]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_CAMERUPT]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SPHEAL]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SEALEO]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_WALREIN]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_CACNEA]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CACTURNE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SNORUNT]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_GLALIE]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_LUNATONE]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SOLROCK]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_AZURILL]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_SPOINK]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_GRUMPIG]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_PLUSLE]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MINUN]            = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MAWILE]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MEDITITE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_MEDICHAM]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_SWABLU]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_ALTARIA]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_WYNAUT]           = (0),

    [SPECIES_DUSKULL]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_DUSCLOPS]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_ROSELIA]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SLAKOTH]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_VIGOROTH]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SLAKING]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_GULPIN]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_SWALOT]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_TROPIUS]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_WHISMUR]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_LOUDRED]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_EXPLOUD]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_CLAMPERL]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_HUNTAIL]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOREBYSS]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)),

    [SPECIES_ABSOL]            = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SHUPPET]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_BANETTE]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_SEVIPER]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_ZANGOOSE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_RELICANTH]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ARON]             = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_LAIRON]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_AGGRON]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_CASTFORM]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_VOLBEAT]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ILLUMISE]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LILEEP]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_CRADILY]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_ANORITH]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_ARMALDO]          = (TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_RALTS]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_KIRLIA]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_GARDEVOIR]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_BAGON]            = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SHELGON]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_SALAMENCE]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_BELDUM]           = (0),

    [SPECIES_METANG]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_METAGROSS]        = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_REGIROCK]         = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_REGICE]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_REGISTEEL]        = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_EXPLOSION)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_KYOGRE]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)),

    [SPECIES_GROUDON]          = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_SWORDS_DANCE)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_RAYQUAZA]         = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_LATIAS]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_LATIOS]           = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_FURY_CUTTER)),

    [SPECIES_JIRACHI]          = (TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_METRONOME)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_DEFENSE_CURL)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_DEOXYS]           = (TUTOR(MOVE_MEGA_PUNCH)
                                | TUTOR(MOVE_MEGA_KICK)
                                | TUTOR(MOVE_BODY_SLAM)
                                | TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_COUNTER)
                                | TUTOR(MOVE_SEISMIC_TOSS)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_THUNDER_WAVE)
                                | TUTOR(MOVE_ROCK_SLIDE)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_DYNAMIC_PUNCH)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_MUD_SLAP)
                                | TUTOR(MOVE_ICE_PUNCH)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_SWIFT)
                                | TUTOR(MOVE_THUNDER_PUNCH)
                                | TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_CHIMECHO]         = (TUTOR(MOVE_DOUBLE_EDGE)
                                | TUTOR(MOVE_MIMIC)
                                | TUTOR(MOVE_DREAM_EATER)
                                | TUTOR(MOVE_SUBSTITUTE)
                                | TUTOR(MOVE_ROLLOUT)
                                | TUTOR(MOVE_PSYCH_UP)
                                | TUTOR(MOVE_SNORE)
                                | TUTOR(MOVE_ICY_WIND)
                                | TUTOR(MOVE_ENDURE)
                                | TUTOR(MOVE_SWAGGER)
                                | TUTOR(MOVE_SLEEP_TALK)
                                | TUTOR(MOVE_DEFENSE_CURL)),
    [SPECIES_TURTWIG]         = (0),
    [SPECIES_GROTLE]         = (0),
    [SPECIES_TORTERRA]         = (0),
    [SPECIES_CHIMCHAR]         = (0),
    [SPECIES_MONFERNO]         = (0),
    [SPECIES_INFERNAPE]         = (0),
    [SPECIES_PIPLUP]         = (0),
    [SPECIES_PRINPLUP]         = (0),
    [SPECIES_EMPOLEON]         = (0),
    [SPECIES_STARLY]         = (0),
    [SPECIES_STARAVIA]         = (0),
    [SPECIES_STARAPTOR]         = (0),
    [SPECIES_BIDOOF]         = (0),
    [SPECIES_BIBAREL]         = (0),
    [SPECIES_KRICKETOT]         = (0),
    [SPECIES_KRICKETUNE]         = (0),
    [SPECIES_SHINX]         = (0),
    [SPECIES_LUXIO]         = (0),
    [SPECIES_LUXRAY]         = (0),
    [SPECIES_BUDEW]         = (0),
    [SPECIES_ROSERADE]         = (0),
    [SPECIES_CRANIDOS]         = (0),
    [SPECIES_RAMPARDOS]         = (0),
    [SPECIES_SHIELDON]         = (0),
    [SPECIES_BASTIODON]         = (0),
    [SPECIES_BURMY]         = (0),
    [SPECIES_WORMADAM]         = (0),
    [SPECIES_MOTHIM]         = (0),
    [SPECIES_COMBEE]         = (0),
    [SPECIES_VESPIQUEN]         = (0),
    [SPECIES_PACHIRISU]         = (0),
    [SPECIES_BUIZEL]         = (0),
    [SPECIES_FLOATZEL]         = (0),
    [SPECIES_CHERUBI]         = (0),
    [SPECIES_CHERRIM]         = (0),
    [SPECIES_SHELLOS]         = (0),
    [SPECIES_GASTRODON]         = (0),
    [SPECIES_AMBIPOM]         = (0),
    [SPECIES_DRIFLOON]         = (0),
    [SPECIES_DRIFBLIM]         = (0),
    [SPECIES_BUNEARY]         = (0),
    [SPECIES_LOPUNNY]         = (0),
    [SPECIES_MISMAGIUS]         = (0),
    [SPECIES_HONCHKROW]         = (0),
    [SPECIES_GLAMEOW]         = (0),
    [SPECIES_PURUGLY]         = (0),
    [SPECIES_CHINGLING]         = (0),
    [SPECIES_STUNKY]         = (0),
    [SPECIES_SKUNTANK]         = (0),
    [SPECIES_BRONZOR]         = (0),
    [SPECIES_BRONZONG]         = (0),
    [SPECIES_BONSLY]         = (0),
    [SPECIES_MIME_JR]         = (0),
    [SPECIES_HAPPINY]         = (0),
    [SPECIES_CHATOT]         = (0),
    [SPECIES_SPIRITOMB]         = (0),
    [SPECIES_GIBLE]         = (0),
    [SPECIES_GABITE]         = (0),
    [SPECIES_GARCHOMP]         = (0),
    [SPECIES_MUNCHLAX]         = (0),
    [SPECIES_RIOLU]         = (0),
    [SPECIES_LUCARIO]         = (0),
    [SPECIES_HIPPOPOTAS]         = (0),
    [SPECIES_HIPPOWDON]         = (0),
    [SPECIES_SKORUPI]         = (0),
    [SPECIES_DRAPION]         = (0),
    [SPECIES_CROAGUNK]         = (0),
    [SPECIES_TOXICROAK]         = (0),
    [SPECIES_CARNIVINE]         = (0),
    [SPECIES_FINNEON]         = (0),
    [SPECIES_LUMINEON]         = (0),
    [SPECIES_MANTYKE]         = (0),
    [SPECIES_SNOVER]         = (0),
    [SPECIES_ABOMASNOW]         = (0),
    [SPECIES_WEAVILE]         = (0),
    [SPECIES_MAGNEZONE]         = (0),
    [SPECIES_LICKILICKY]         = (0),
    [SPECIES_RHYPERIOR]         = (0),
    [SPECIES_TANGROWTH]         = (0),
    [SPECIES_ELECTIVIRE]         = (0),
    [SPECIES_MAGMORTAR]         = (0),
    [SPECIES_TOGEKISS]         = (0),
    [SPECIES_YANMEGA]         = (0),
    [SPECIES_LEAFEON]         = (0),
    [SPECIES_GLACEON]         = (0),
    [SPECIES_GLISCOR]         = (0),
    [SPECIES_MAMOSWINE]         = (0),
    [SPECIES_PORYGON_Z]         = (0),
    [SPECIES_GALLADE]         = (0),
    [SPECIES_PROBOPASS]         = (0),
    [SPECIES_DUSKNOIR]         = (0),
    [SPECIES_FROSLASS]         = (0),
    [SPECIES_ROTOM]         = (0),
    [SPECIES_UXIE]         = (0),
    [SPECIES_MESPRIT]         = (0),
    [SPECIES_AZELF]         = (0),
    [SPECIES_DIALGA]         = (0),
    [SPECIES_PALKIA]         = (0),
    [SPECIES_HEATRAN]         = (0),
    [SPECIES_REGIGIGAS]         = (0),
    [SPECIES_GIRATINA]         = (0),
    [SPECIES_CRESSELIA]         = (0),
    [SPECIES_PHIONE]         = (0),
    [SPECIES_MANAPHY]         = (0),
    [SPECIES_DARKRAI]         = (0),
    [SPECIES_SHAYMIN]         = (0),
    [SPECIES_ARCEUS]         = (0),
    [SPECIES_VICTINI]         = (0),
    [SPECIES_SNIVY]         = (0),
    [SPECIES_SERVINE]         = (0),
    [SPECIES_SERPERIOR]         = (0),
    [SPECIES_TEPIG]         = (0),
    [SPECIES_PIGNITE]         = (0),
    [SPECIES_EMBOAR]         = (0),
    [SPECIES_OSHAWOTT]         = (0),
    [SPECIES_DEWOTT]         = (0),
    [SPECIES_SAMUROTT]         = (0),
    [SPECIES_PATRAT]         = (0),
    [SPECIES_WATCHOG]         = (0),
    [SPECIES_LILLIPUP]         = (0),
    [SPECIES_HERDIER]         = (0),
    [SPECIES_STOUTLAND]         = (0),
    [SPECIES_PURRLOIN]         = (0),
    [SPECIES_LIEPARD]         = (0),
    [SPECIES_PANSAGE]         = (0),
    [SPECIES_SIMISAGE]         = (0),
    [SPECIES_PANSEAR]         = (0),
    [SPECIES_SIMISEAR]         = (0),
    [SPECIES_PANPOUR]         = (0),
    [SPECIES_SIMIPOUR]         = (0),
    [SPECIES_MUNNA]         = (0),
    [SPECIES_MUSHARNA]         = (0),
    [SPECIES_PIDOVE]         = (0),
    [SPECIES_TRANQUILL]         = (0),
    [SPECIES_UNFEZANT]         = (0),
    [SPECIES_BLITZLE]         = (0),
    [SPECIES_ZEBSTRIKA]         = (0),
    [SPECIES_ROGGENROLA]         = (0),
    [SPECIES_BOLDORE]         = (0),
    [SPECIES_GIGALITH]         = (0),
    [SPECIES_WOOBAT]         = (0),
    [SPECIES_SWOOBAT]         = (0),
    [SPECIES_DRILBUR]         = (0),
    [SPECIES_EXCADRILL]         = (0),
    [SPECIES_AUDINO]         = (0),
    [SPECIES_TIMBURR]         = (0),
    [SPECIES_GURDURR]         = (0),
    [SPECIES_CONKELDURR]         = (0),
    [SPECIES_TYMPOLE]         = (0),
    [SPECIES_PALPITOAD]         = (0),
    [SPECIES_SEISMITOAD]         = (0),
    [SPECIES_THROH]         = (0),
    [SPECIES_SAWK]         = (0),
    [SPECIES_SEWADDLE]         = (0),
    [SPECIES_SWADLOON]         = (0),
    [SPECIES_LEAVANNY]         = (0),
    [SPECIES_VENIPEDE]         = (0),
    [SPECIES_WHIRLIPEDE]         = (0),
    [SPECIES_SCOLIPEDE]         = (0),
    [SPECIES_COTTONEE]         = (0),
    [SPECIES_WHIMSICOTT]         = (0),
    [SPECIES_PETILIL]         = (0),
    [SPECIES_LILLIGANT]         = (0),
    [SPECIES_BASCULIN]         = (0),
    [SPECIES_SANDILE]         = (0),
    [SPECIES_KROKOROK]         = (0),
    [SPECIES_KROOKODILE]         = (0),
    [SPECIES_DARUMAKA]         = (0),
    [SPECIES_DARMANITAN]         = (0),
    [SPECIES_MARACTUS]         = (0),
    [SPECIES_DWEBBLE]         = (0),
    [SPECIES_CRUSTLE]         = (0),
    [SPECIES_SCRAGGY]         = (0),
    [SPECIES_SCRAFTY]         = (0),
    [SPECIES_SIGILYPH]         = (0),
    [SPECIES_YAMASK]         = (0),
    [SPECIES_COFAGRIGUS]         = (0),
    [SPECIES_TIRTOUGA]         = (0),
    [SPECIES_CARRACOSTA]         = (0),
    [SPECIES_ARCHEN]         = (0),
    [SPECIES_ARCHEOPS]         = (0),
    [SPECIES_TRUBBISH]         = (0),
    [SPECIES_GARBODOR]         = (0),
    [SPECIES_ZORUA]         = (0),
    [SPECIES_ZOROARK]         = (0),
    [SPECIES_MINCCINO]         = (0),
    [SPECIES_CINCCINO]         = (0),
    [SPECIES_GOTHITA]         = (0),
    [SPECIES_GOTHORITA]         = (0),
    [SPECIES_GOTHITELLE]         = (0),
    [SPECIES_SOLOSIS]         = (0),
    [SPECIES_DUOSION]         = (0),
    [SPECIES_REUNICLUS]         = (0),
    [SPECIES_DUCKLETT]         = (0),
    [SPECIES_SWANNA]         = (0),
    [SPECIES_VANILLITE]         = (0),
    [SPECIES_VANILLISH]         = (0),
    [SPECIES_VANILLUXE]         = (0),
    [SPECIES_DEERLING]         = (0),
    [SPECIES_SAWSBUCK]         = (0),
    [SPECIES_EMOLGA]         = (0),
    [SPECIES_KARRABLAST]         = (0),
    [SPECIES_ESCAVALIER]         = (0),
    [SPECIES_FOONGUS]         = (0),
    [SPECIES_AMOONGUSS]         = (0),
    [SPECIES_FRILLISH]         = (0),
    [SPECIES_JELLICENT]         = (0),
    [SPECIES_ALOMOMOLA]         = (0),
    [SPECIES_JOLTIK]         = (0),
    [SPECIES_GALVANTULA]         = (0),
    [SPECIES_FERROSEED]         = (0),
    [SPECIES_FERROTHORN]         = (0),
    [SPECIES_KLINK]         = (0),
    [SPECIES_KLANG]         = (0),
    [SPECIES_KLINKLANG]         = (0),
    [SPECIES_TYNAMO]         = (0),
    [SPECIES_EELEKTRIK]         = (0),
    [SPECIES_EELEKTROSS]         = (0),
    [SPECIES_ELGYEM]         = (0),
    [SPECIES_BEHEEYEM]         = (0),
    [SPECIES_LITWICK]         = (0),
    [SPECIES_LAMPENT]         = (0),
    [SPECIES_CHANDELURE]         = (0),
    [SPECIES_AXEW]         = (0),
    [SPECIES_FRAXURE]         = (0),
    [SPECIES_HAXORUS]         = (0),
    [SPECIES_CUBCHOO]         = (0),
    [SPECIES_BEARTIC]         = (0),
    [SPECIES_CRYOGONAL]         = (0),
    [SPECIES_SHELMET]         = (0),
    [SPECIES_ACCELGOR]         = (0),
    [SPECIES_STUNFISK]         = (0),
    [SPECIES_MIENFOO]         = (0),
    [SPECIES_MIENSHAO]         = (0),
    [SPECIES_DRUDDIGON]         = (0),
    [SPECIES_GOLETT]         = (0),
    [SPECIES_GOLURK]         = (0),
    [SPECIES_PAWNIARD]         = (0),
    [SPECIES_BISHARP]         = (0),
    [SPECIES_BOUFFALANT]         = (0),
    [SPECIES_RUFFLET]         = (0),
    [SPECIES_BRAVIARY]         = (0),
    [SPECIES_VULLABY]         = (0),
    [SPECIES_MANDIBUZZ]         = (0),
    [SPECIES_HEATMOR]         = (0),
    [SPECIES_DURANT]         = (0),
    [SPECIES_DEINO]         = (0),
    [SPECIES_ZWEILOUS]         = (0),
    [SPECIES_HYDREIGON]         = (0),
    [SPECIES_LARVESTA]         = (0),
    [SPECIES_VOLCARONA]         = (0),
    [SPECIES_COBALION]         = (0),
    [SPECIES_TERRAKION]         = (0),
    [SPECIES_VIRIZION]         = (0),
    [SPECIES_TORNADUS]         = (0),
    [SPECIES_THUNDURUS]         = (0),
    [SPECIES_RESHIRAM]         = (0),
    [SPECIES_ZEKROM]         = (0),
    [SPECIES_LANDORUS]         = (0),
    [SPECIES_KYUREM]         = (0),
    [SPECIES_KELDEO]         = (0),
    [SPECIES_MELOETTA]         = (0),
    [SPECIES_GENESECT]         = (0),
    [SPECIES_CHESPIN]         = (0),
    [SPECIES_QUILLADIN]         = (0),
    [SPECIES_CHESNAUGHT]         = (0),
    [SPECIES_FENNEKIN]         = (0),
    [SPECIES_BRAIXEN]         = (0),
    [SPECIES_DELPHOX]         = (0),
    [SPECIES_FROAKIE]         = (0),
    [SPECIES_FROGADIER]         = (0),
    [SPECIES_GRENINJA]         = (0),
    [SPECIES_BUNNELBY]         = (0),
    [SPECIES_DIGGERSBY]         = (0),
    [SPECIES_FLETCHLING]         = (0),
    [SPECIES_FLETCHINDER]         = (0),
    [SPECIES_TALONFLAME]         = (0),
    [SPECIES_SCATTERBUG]         = (0),
    [SPECIES_SPEWPA]         = (0),
    [SPECIES_VIVILLON]         = (0),
    [SPECIES_LITLEO]         = (0),
    [SPECIES_PYROAR]         = (0),
    [SPECIES_FLABEBE]         = (0),
    [SPECIES_FLOETTE]         = (0),
    [SPECIES_FLORGES]         = (0),
    [SPECIES_SKIDDO]         = (0),
    [SPECIES_GOGOAT]         = (0),
    [SPECIES_PANCHAM]         = (0),
    [SPECIES_PANGORO]         = (0),
    [SPECIES_FURFROU]         = (0),
    [SPECIES_ESPURR]         = (0),
    [SPECIES_MEOWSTIC]         = (0),
    [SPECIES_HONEDGE]         = (0),
    [SPECIES_DOUBLADE]         = (0),
    [SPECIES_AEGISLASH]         = (0),
    [SPECIES_SPRITZEE]         = (0),
    [SPECIES_AROMATISSE]         = (0),
    [SPECIES_SWIRLIX]         = (0),
    [SPECIES_SLURPUFF]         = (0),
    [SPECIES_INKAY]         = (0),
    [SPECIES_MALAMAR]         = (0),
    [SPECIES_BINACLE]         = (0),
    [SPECIES_BARBARACLE]         = (0),
    [SPECIES_SKRELP]         = (0),
    [SPECIES_DRAGALGE]         = (0),
    [SPECIES_CLAUNCHER]         = (0),
    [SPECIES_CLAWITZER]         = (0),
    [SPECIES_HELIOPTILE]         = (0),
    [SPECIES_HELIOLISK]         = (0),
    [SPECIES_TYRUNT]         = (0),
    [SPECIES_TYRANTRUM]         = (0),
    [SPECIES_AMAURA]         = (0),
    [SPECIES_AURORUS]         = (0),
    [SPECIES_SYLVEON]         = (0),
    [SPECIES_HAWLUCHA]         = (0),
    [SPECIES_DEDENNE]         = (0),
    [SPECIES_CARBINK]         = (0),
    [SPECIES_GOOMY]         = (0),
    [SPECIES_SLIGGOO]         = (0),
    [SPECIES_GOODRA]         = (0),
    [SPECIES_KLEFKI]         = (0),
    [SPECIES_PHANTUMP]         = (0),
    [SPECIES_TREVENANT]         = (0),
    [SPECIES_PUMPKABOO]         = (0),
    [SPECIES_GOURGEIST]         = (0),
    [SPECIES_BERGMITE]         = (0),
    [SPECIES_AVALUGG]         = (0),
    [SPECIES_NOIBAT]         = (0),
    [SPECIES_NOIVERN]         = (0),
    [SPECIES_XERNEAS]         = (0),
    [SPECIES_YVELTAL]         = (0),
    [SPECIES_ZYGARDE]         = (0),
    [SPECIES_DIANCIE]         = (0),
    [SPECIES_HOOPA]         = (0),
    [SPECIES_VOLCANION]         = (0),
    [SPECIES_ROWLET]         = (0),
    [SPECIES_DARTRIX]         = (0),
    [SPECIES_DECIDUEYE]         = (0),
    [SPECIES_LITTEN]         = (0),
    [SPECIES_TORRACAT]         = (0),
    [SPECIES_INCINEROAR]         = (0),
    [SPECIES_POPPLIO]         = (0),
    [SPECIES_BRIONNE]         = (0),
    [SPECIES_PRIMARINA]         = (0),
    [SPECIES_PIKIPEK]         = (0),
    [SPECIES_TRUMBEAK]         = (0),
    [SPECIES_TOUCANNON]         = (0),
    [SPECIES_YUNGOOS]         = (0),
    [SPECIES_GUMSHOOS]         = (0),
    [SPECIES_GRUBBIN]         = (0),
    [SPECIES_CHARJABUG]         = (0),
    [SPECIES_VIKAVOLT]         = (0),
    [SPECIES_CRABRAWLER]         = (0),
    [SPECIES_CRABOMINABLE]         = (0),
    [SPECIES_ORICORIO]         = (0),
    [SPECIES_CUTIEFLY]         = (0),
    [SPECIES_RIBOMBEE]         = (0),
    [SPECIES_ROCKRUFF]         = (0),
    [SPECIES_LYCANROC]         = (0),
    [SPECIES_WISHIWASHI]         = (0),
    [SPECIES_MAREANIE]         = (0),
    [SPECIES_TOXAPEX]         = (0),
    [SPECIES_MUDBRAY]         = (0),
    [SPECIES_MUDSDALE]         = (0),
    [SPECIES_DEWPIDER]         = (0),
    [SPECIES_ARAQUANID]         = (0),
    [SPECIES_FOMANTIS]         = (0),
    [SPECIES_LURANTIS]         = (0),
    [SPECIES_MORELULL]         = (0),
    [SPECIES_SHIINOTIC]         = (0),
    [SPECIES_SALANDIT]         = (0),
    [SPECIES_SALAZZLE]         = (0),
    [SPECIES_STUFFUL]         = (0),
    [SPECIES_BEWEAR]         = (0),
    [SPECIES_BOUNSWEET]         = (0),
    [SPECIES_STEENEE]         = (0),
    [SPECIES_TSAREENA]         = (0),
    [SPECIES_COMFEY]         = (0),
    [SPECIES_ORANGURU]         = (0),
    [SPECIES_PASSIMIAN]         = (0),
    [SPECIES_WIMPOD]         = (0),
    [SPECIES_GOLISOPOD]         = (0),
    [SPECIES_SANDYGAST]         = (0),
    [SPECIES_PALOSSAND]         = (0),
    [SPECIES_PYUKUMUKU]         = (0),
    [SPECIES_TYPE_NULL]         = (0),
    [SPECIES_SILVALLY]         = (0),
    [SPECIES_MINIOR]         = (0),
    [SPECIES_KOMALA]         = (0),
    [SPECIES_TURTONATOR]         = (0),
    [SPECIES_TOGEDEMARU]         = (0),
    [SPECIES_MIMIKYU]         = (0),
    [SPECIES_BRUXISH]         = (0),
    [SPECIES_DRAMPA]         = (0),
    [SPECIES_DHELMISE]         = (0),
    [SPECIES_JANGMO_O]         = (0),
    [SPECIES_HAKAMO_O]         = (0),
    [SPECIES_KOMMO_O]         = (0),
    [SPECIES_TAPU_KOKO]         = (0),
    [SPECIES_TAPU_LELE]         = (0),
    [SPECIES_TAPU_BULU]         = (0),
    [SPECIES_TAPU_FINI]         = (0),
    [SPECIES_COSMOG]         = (0),
    [SPECIES_COSMOEM]         = (0),
    [SPECIES_SOLGALEO]         = (0),
    [SPECIES_LUNALA]         = (0),
    [SPECIES_NIHILEGO]         = (0),
    [SPECIES_BUZZWOLE]         = (0),
    [SPECIES_PHEROMOSA]         = (0),
    [SPECIES_XURKITREE]         = (0),
    [SPECIES_CELESTEELA]         = (0),
    [SPECIES_KARTANA]         = (0),
    [SPECIES_GUZZLORD]         = (0),
    [SPECIES_NECROZMA]         = (0),
    [SPECIES_MAGEARNA]         = (0),
    [SPECIES_MARSHADOW]         = (0),
    [SPECIES_POIPOLE]         = (0),
    [SPECIES_NAGANADEL]         = (0),
    [SPECIES_STAKATAKA]         = (0),
    [SPECIES_BLACEPHALON]         = (0),
    [SPECIES_ZERAORA]         = (0),
    [SPECIES_MELTAN]         = (0),
    [SPECIES_MELMETAL]         = (0),
    [SPECIES_GROOKEY]         = (0),
    [SPECIES_THWACKEY]         = (0),
    [SPECIES_RILLABOOM]         = (0),
    [SPECIES_SCORBUNNY]         = (0),
    [SPECIES_RABOOT]         = (0),
    [SPECIES_CINDERACE]         = (0),
    [SPECIES_SOBBLE]         = (0),
    [SPECIES_DRIZZILE]         = (0),
    [SPECIES_INTELEON]         = (0),
    [SPECIES_SKWOVET]         = (0),
    [SPECIES_GREEDENT]         = (0),
    [SPECIES_ROOKIDEE]         = (0),
    [SPECIES_CORVISQUIRE]         = (0),
    [SPECIES_CORVIKNIGHT]         = (0),
    [SPECIES_BLIPBUG]         = (0),
    [SPECIES_DOTTLER]         = (0),
    [SPECIES_ORBEETLE]         = (0),
    [SPECIES_NICKIT]         = (0),
    [SPECIES_THIEVUL]         = (0),
    [SPECIES_GOSSIFLEUR]         = (0),
    [SPECIES_ELDEGOSS]         = (0),
    [SPECIES_WOOLOO]         = (0),
    [SPECIES_DUBWOOL]         = (0),
    [SPECIES_CHEWTLE]         = (0),
    [SPECIES_DREDNAW]         = (0),
    [SPECIES_YAMPER]         = (0),
    [SPECIES_BOLTUND]         = (0),
    [SPECIES_ROLYCOLY]         = (0),
    [SPECIES_CARKOL]         = (0),
    [SPECIES_COALOSSAL]         = (0),
    [SPECIES_APPLIN]         = (0),
    [SPECIES_FLAPPLE]         = (0),
    [SPECIES_APPLETUN]         = (0),
    [SPECIES_SILICOBRA]         = (0),
    [SPECIES_SANDACONDA]         = (0),
    [SPECIES_CRAMORANT]         = (0),
    [SPECIES_ARROKUDA]         = (0),
    [SPECIES_BARRASKEWDA]         = (0),
    [SPECIES_TOXEL]         = (0),
    [SPECIES_TOXTRICITY]         = (0),
    [SPECIES_SIZZLIPEDE]         = (0),
    [SPECIES_CENTISKORCH]         = (0),
    [SPECIES_CLOBBOPUS]         = (0),
    [SPECIES_GRAPPLOCT]         = (0),
    [SPECIES_SINISTEA]         = (0),
    [SPECIES_POLTEAGEIST]         = (0),
    [SPECIES_HATENNA]         = (0),
    [SPECIES_HATTREM]         = (0),
    [SPECIES_HATTERENE]         = (0),
    [SPECIES_IMPIDIMP]         = (0),
    [SPECIES_MORGREM]         = (0),
    [SPECIES_GRIMMSNARL]         = (0),
    [SPECIES_OBSTAGOON]         = (0),
    [SPECIES_PERRSERKER]         = (0),
    [SPECIES_CURSOLA]         = (0),
    [SPECIES_SIRFETCHD]         = (0),
    [SPECIES_MR_RIME]         = (0),
    [SPECIES_RUNERIGUS]         = (0),
    [SPECIES_MILCERY]         = (0),
    [SPECIES_ALCREMIE]         = (0),
    [SPECIES_FALINKS]         = (0),
    [SPECIES_PINCURCHIN]         = (0),
    [SPECIES_SNOM]         = (0),
    [SPECIES_FROSMOTH]         = (0),
    [SPECIES_STONJOURNER]         = (0),
    [SPECIES_EISCUE]         = (0),
    [SPECIES_INDEEDEE]         = (0),
    [SPECIES_MORPEKO]         = (0),
    [SPECIES_CUFANT]         = (0),
    [SPECIES_COPPERAJAH]         = (0),
    [SPECIES_DRACOZOLT]         = (0),
    [SPECIES_ARCTOZOLT]         = (0),
    [SPECIES_DRACOVISH]         = (0),
    [SPECIES_ARCTOVISH]         = (0),
    [SPECIES_DURALUDON]         = (0),
    [SPECIES_DREEPY]         = (0),
    [SPECIES_DRAKLOAK]         = (0),
    [SPECIES_DRAGAPULT]         = (0),
    [SPECIES_ZACIAN]         = (0),
    [SPECIES_ZAMAZENTA]         = (0),
    [SPECIES_ETERNATUS]         = (0),
    [SPECIES_KUBFU]         = (0),
    [SPECIES_URSHIFU]         = (0),
    [SPECIES_ZARUDE]         = (0),
    [SPECIES_REGIELEKI]         = (0),
    [SPECIES_REGIDRAGO]         = (0),
    [SPECIES_GLASTRIER]         = (0),
    [SPECIES_SPECTRIER]         = (0),
    [SPECIES_CALYREX]         = (0),
    [SPECIES_WYRDEER]         = (0),
    [SPECIES_KLEAVOR]         = (0),
    [SPECIES_URSALUNA]         = (0),
    [SPECIES_BASCULEGION]         = (0),
    [SPECIES_SNEASLER]         = (0),
    [SPECIES_OVERQWIL]         = (0),
    [SPECIES_ENAMORUS]         = (0),
    [SPECIES_SPRIGATITO]         = (0),
    [SPECIES_FLORAGATO]         = (0),
    [SPECIES_MEOWSCARADA]         = (0),
    [SPECIES_FUECOCO]         = (0),
    [SPECIES_CROCALOR]         = (0),
    [SPECIES_SKELEDIRGE]         = (0),
    [SPECIES_QUAXLY]         = (0),
    [SPECIES_QUAXWELL]         = (0),
    [SPECIES_QUAQUAVAL]         = (0),
    [SPECIES_LECHONK]         = (0),
    [SPECIES_OINKOLOGNE]         = (0),
    [SPECIES_TAROUNTULA]         = (0),
    [SPECIES_SPIDOPS]         = (0),
    [SPECIES_NYMBLE]         = (0),
    [SPECIES_LOKIX]         = (0),
    [SPECIES_PAWMI]         = (0),
    [SPECIES_PAWMO]         = (0),
    [SPECIES_PAWMOT]         = (0),
    [SPECIES_TANDEMAUS]         = (0),
    [SPECIES_MAUSHOLD]         = (0),
    [SPECIES_FIDOUGH]         = (0),
    [SPECIES_DACHSBUN]         = (0),
    [SPECIES_SMOLIV]         = (0),
    [SPECIES_DOLLIV]         = (0),
    [SPECIES_ARBOLIVA]         = (0),
    [SPECIES_SQUAWKABILLY]         = (0),
    [SPECIES_NACLI]         = (0),
    [SPECIES_NACLSTACK]         = (0),
    [SPECIES_GARGANACL]         = (0),
    [SPECIES_CHARCADET]         = (0),
    [SPECIES_ARMAROUGE]         = (0),
    [SPECIES_CERULEDGE]         = (0),
    [SPECIES_TADBULB]         = (0),
    [SPECIES_BELLIBOLT]         = (0),
    [SPECIES_WATTREL]         = (0),
    [SPECIES_KILOWATTREL]         = (0),
    [SPECIES_MASCHIFF]         = (0),
    [SPECIES_MABOSSTIFF]         = (0),
    [SPECIES_SHROODLE]         = (0),
    [SPECIES_GRAFAIAI]         = (0),
    [SPECIES_BRAMBLIN]         = (0),
    [SPECIES_BRAMBLEGHAST]         = (0),
    [SPECIES_TOEDSCOOL]         = (0),
    [SPECIES_TOEDSCRUEL]         = (0),
    [SPECIES_KLAWF]         = (0),
    [SPECIES_CAPSAKID]         = (0),
    [SPECIES_SCOVILLAIN]         = (0),
    [SPECIES_RELLOR]         = (0),
    [SPECIES_RABSCA]         = (0),
    [SPECIES_FLITTLE]         = (0),
    [SPECIES_ESPATHRA]         = (0),
    [SPECIES_TINKATINK]         = (0),
    [SPECIES_TINKATUFF]         = (0),
    [SPECIES_TINKATON]         = (0),
    [SPECIES_WIGLETT]         = (0),
    [SPECIES_WUGTRIO]         = (0),
    [SPECIES_BOMBIRDIER]         = (0),
    [SPECIES_FINIZEN]         = (0),
    [SPECIES_PALAFIN]         = (0),
    [SPECIES_VAROOM]         = (0),
    [SPECIES_REVAVROOM]         = (0),
    [SPECIES_CYCLIZAR]         = (0),
    [SPECIES_ORTHWORM]         = (0),
    [SPECIES_GLIMMET]         = (0),
    [SPECIES_GLIMMORA]         = (0),
    [SPECIES_GREAVARD]         = (0),
    [SPECIES_HOUNDSTONE]         = (0),
    [SPECIES_FLAMIGO]         = (0),
    [SPECIES_CETODDLE]         = (0),
    [SPECIES_CETITAN]         = (0),
    [SPECIES_VELUZA]         = (0),
    [SPECIES_DONDOZO]         = (0),
    [SPECIES_TATSUGIRI]         = (0),
    [SPECIES_ANNIHILAPE]         = (0),
    [SPECIES_CLODSIRE]         = (0),
    [SPECIES_FARIGIRAF]         = (0),
    [SPECIES_DUDUNSPARCE]         = (0),
    [SPECIES_KINGAMBIT]         = (0),
    [SPECIES_GREAT_TUSK]         = (0),
    [SPECIES_SCREAM_TAIL]         = (0),
    [SPECIES_BRUTE_BONNET]         = (0),
    [SPECIES_FLUTTER_MANE]         = (0),
    [SPECIES_SLITHER_WING]         = (0),
    [SPECIES_SANDY_SHOCKS]         = (0),
    [SPECIES_IRON_TREADS]         = (0),
    [SPECIES_IRON_BUNDLE]         = (0),
    [SPECIES_IRON_HANDS]         = (0),
    [SPECIES_IRON_JUGULIS]         = (0),
    [SPECIES_IRON_MOTH]         = (0),
    [SPECIES_IRON_THORNS]         = (0),
    [SPECIES_FRIGIBAX]         = (0),
    [SPECIES_ARCTIBAX]         = (0),
    [SPECIES_BAXCALIBUR]         = (0),
    [SPECIES_GIMMIGHOUL]         = (0),
    [SPECIES_GHOLDENGO]         = (0),
    [SPECIES_WO_CHIEN]         = (0),
    [SPECIES_CHIEN_PAO]         = (0),
    [SPECIES_TING_LU]         = (0),
    [SPECIES_CHI_YU]         = (0),
    [SPECIES_ROARING_MOON]         = (0),
    [SPECIES_IRON_VALIANT]         = (0),
    [SPECIES_KORAIDON]         = (0),
    [SPECIES_MIRAIDON]         = (0),
    [SPECIES_WALKING_WAKE]         = (0),
    [SPECIES_IRON_LEAVES]         = (0),
    [SPECIES_DIPPLIN]         = (0),
    [SPECIES_POLTCHAGEIST]         = (0),
    [SPECIES_SINISTCHA]         = (0),
    [SPECIES_OKIDOGI]         = (0),
    [SPECIES_MUNKIDORI]         = (0),
    [SPECIES_FEZANDIPITI]         = (0),
    [SPECIES_OGERPON]         = (0),
    [SPECIES_ARCHALUDON] = (0),
    [SPECIES_HYDRAPPLE] = (0),
    [SPECIES_GOUGING_FIRE] = (0),
    [SPECIES_RAGING_BOLT] = (0),
    [SPECIES_IRON_BOULDER] = (0),
    [SPECIES_IRON_CROWN] = (0),
    [SPECIES_TERAPAGOS] = (0),
    [SPECIES_PECHARUNT] = (0),
    [SPECIES_VENUSAUR_MEGA] = (0),
    [SPECIES_CHARIZARD_MEGA_X] = (0),
    [SPECIES_CHARIZARD_MEGA_Y] = (0),
    [SPECIES_BLASTOISE_MEGA] = (0),
    [SPECIES_BEEDRILL_MEGA] = (0),
    [SPECIES_PIDGEOT_MEGA] = (0),
    [SPECIES_ALAKAZAM_MEGA] = (0),
    [SPECIES_SLOWBRO_MEGA] = (0),
    [SPECIES_GENGAR_MEGA] = (0),
    [SPECIES_KANGASKHAN_MEGA] = (0),
    [SPECIES_PINSIR_MEGA] = (0),
    [SPECIES_GYARADOS_MEGA] = (0),
    [SPECIES_AERODACTYL_MEGA] = (0),
    [SPECIES_MEWTWO_MEGA_X] = (0),
    [SPECIES_MEWTWO_MEGA_Y] = (0),
    [SPECIES_AMPHAROS_MEGA] = (0),
    [SPECIES_STEELIX_MEGA] = (0),
    [SPECIES_SCIZOR_MEGA] = (0),
    [SPECIES_HERACROSS_MEGA] = (0),
    [SPECIES_HOUNDOOM_MEGA] = (0),
    [SPECIES_TYRANITAR_MEGA] = (0),
    [SPECIES_SCEPTILE_MEGA] = (0),
    [SPECIES_BLAZIKEN_MEGA] = (0),
    [SPECIES_SWAMPERT_MEGA] = (0),
    [SPECIES_GARDEVOIR_MEGA] = (0),
    [SPECIES_SABLEYE_MEGA] = (0),
    [SPECIES_MAWILE_MEGA] = (0),
    [SPECIES_AGGRON_MEGA] = (0),
    [SPECIES_MEDICHAM_MEGA] = (0),
    [SPECIES_MANECTRIC_MEGA] = (0),
    [SPECIES_SHARPEDO_MEGA] = (0),
    [SPECIES_CAMERUPT_MEGA] = (0),
    [SPECIES_ALTARIA_MEGA] = (0),
    [SPECIES_BANETTE_MEGA] = (0),
    [SPECIES_ABSOL_MEGA] = (0),
    [SPECIES_GLALIE_MEGA] = (0),
    [SPECIES_SALAMENCE_MEGA] = (0),
    [SPECIES_METAGROSS_MEGA] = (0),
    [SPECIES_LATIAS_MEGA] = (0),
    [SPECIES_LATIOS_MEGA] = (0),
    [SPECIES_LOPUNNY_MEGA] = (0),
    [SPECIES_GARCHOMP_MEGA] = (0),
    [SPECIES_LUCARIO_MEGA] = (0),
    [SPECIES_ABOMASNOW_MEGA] = (0),
    [SPECIES_GALLADE_MEGA] = (0),
    [SPECIES_AUDINO_MEGA] = (0),
    [SPECIES_DIANCIE_MEGA] = (0),
    [SPECIES_RAYQUAZA_MEGA] = (0),
    [SPECIES_KYOGRE_PRIMAL] = (0),
    [SPECIES_GROUDON_PRIMAL] = (0),
    [SPECIES_RATTATA_ALOLAN] = (0),
    [SPECIES_RATICATE_ALOLAN] = (0),
    [SPECIES_RAICHU_ALOLAN] = (0),
    [SPECIES_SANDSHREW_ALOLAN] = (0),
    [SPECIES_SANDSLASH_ALOLAN] = (0),
    [SPECIES_VULPIX_ALOLAN] = (0),
    [SPECIES_NINETALES_ALOLAN] = (0),
    [SPECIES_DIGLETT_ALOLAN] = (0),
    [SPECIES_DUGTRIO_ALOLAN] = (0),
    [SPECIES_MEOWTH_ALOLAN] = (0),
    [SPECIES_PERSIAN_ALOLAN] = (0),
    [SPECIES_GEODUDE_ALOLAN] = (0),
    [SPECIES_GRAVELER_ALOLAN] = (0),
    [SPECIES_GOLEM_ALOLAN] = (0),
    [SPECIES_GRIMER_ALOLAN] = (0),
    [SPECIES_MUK_ALOLAN] = (0),
    [SPECIES_EXEGGUTOR_ALOLAN] = (0),
    [SPECIES_MAROWAK_ALOLAN] = (0),
    [SPECIES_MEOWTH_GALARIAN] = (0),
    [SPECIES_PONYTA_GALARIAN] = (0),
    [SPECIES_RAPIDASH_GALARIAN] = (0),
    [SPECIES_SLOWPOKE_GALARIAN] = (0),
    [SPECIES_SLOWBRO_GALARIAN] = (0),
    [SPECIES_FARFETCHD_GALARIAN] = (0),
    [SPECIES_WEEZING_GALARIAN] = (0),
    [SPECIES_MR_MIME_GALARIAN] = (0),
    [SPECIES_ARTICUNO_GALARIAN] = (0),
    [SPECIES_ZAPDOS_GALARIAN] = (0),
    [SPECIES_MOLTRES_GALARIAN] = (0),
    [SPECIES_SLOWKING_GALARIAN] = (0),
    [SPECIES_CORSOLA_GALARIAN] = (0),
    [SPECIES_ZIGZAGOON_GALARIAN] = (0),
    [SPECIES_LINOONE_GALARIAN] = (0),
    [SPECIES_DARUMAKA_GALARIAN] = (0),
    [SPECIES_DARMANITAN_GALARIAN] = (0),
    [SPECIES_YAMASK_GALARIAN] = (0),
    [SPECIES_STUNFISK_GALARIAN] = (0),
    [SPECIES_GROWLITHE_HISUIAN] = (0),
    [SPECIES_ARCANINE_HISUIAN] = (0),
    [SPECIES_VOLTORB_HISUIAN] = (0),
    [SPECIES_ELECTRODE_HISUIAN] = (0),
    [SPECIES_TYPHLOSION_HISUIAN] = (0),
    [SPECIES_QWILFISH_HISUIAN] = (0),
    [SPECIES_SNEASEL_HISUIAN] = (0),
    [SPECIES_SAMUROTT_HISUIAN] = (0),
    [SPECIES_LILLIGANT_HISUIAN] = (0),
    [SPECIES_ZORUA_HISUIAN] = (0),
    [SPECIES_ZOROARK_HISUIAN] = (0),
    [SPECIES_BRAVIARY_HISUIAN] = (0),
    [SPECIES_SLIGGOO_HISUIAN] = (0),
    [SPECIES_GOODRA_HISUIAN] = (0),
    [SPECIES_AVALUGG_HISUIAN] = (0),
    [SPECIES_DECIDUEYE_HISUIAN] = (0),
    [SPECIES_TAUROS_PALDEAN] = (0),
    [SPECIES_WOOPER_PALDEAN] = (0),
    [SPECIES_PIKACHU_CAP] = (0),
    [SPECIES_PIKACHU_PARTNER] = (0),
    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] = (0),
    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] = (0),
    [SPECIES_EEVEE_PARTNER] = (0),
    [SPECIES_PICHU_SPIKY_EARED] = (0),
    [SPECIES_CASTFORM_SUNNY] = (0),
    [SPECIES_CASTFORM_RAINY] = (0),
    [SPECIES_CASTFORM_SNOWY] = (0),
    [SPECIES_DEOXYS_ATTACK] = (0),
    [SPECIES_DEOXYS_DEFENSE] = (0),
    [SPECIES_DEOXYS_SPEED] = (0),
    [SPECIES_BURMY_SANDY_CLOAK] = (0),
    [SPECIES_BURMY_TRASH_CLOAK] = (0),
    [SPECIES_WORMADAM_SANDY_CLOAK] = (0),
    [SPECIES_WORMADAM_TRASH_CLOAK] = (0),
    [SPECIES_CHERRIM_SUNSHINE] = (0),
    [SPECIES_ROTOM_HEAT] = (0),
    [SPECIES_ROTOM_WASH] = (0),
    [SPECIES_ROTOM_FROST] = (0),
    [SPECIES_ROTOM_FAN] = (0),
    [SPECIES_ROTOM_MOW] = (0),
    [SPECIES_DIALGA_ORIGIN] = (0),
    [SPECIES_PALKIA_ORIGIN] = (0),
    [SPECIES_GIRATINA_ORIGIN] = (0),
    [SPECIES_SHAYMIN_SKY] = (0),
    [SPECIES_BASCULIN_BLUE_STRIPED] = (0),
    [SPECIES_BASCULIN_WHITE_STRIPED] = (0),
    [SPECIES_DARMANITAN_ZEN_MODE] = (0),
    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] = (0),
    [SPECIES_TORNADUS_THERIAN] = (0),
    [SPECIES_THUNDURUS_THERIAN] = (0),
    [SPECIES_LANDORUS_THERIAN] = (0),
    [SPECIES_KYUREM_WHITE] = (0),
    [SPECIES_KYUREM_BLACK] = (0),
    [SPECIES_MELOETTA_PIROUETTE] = (0),
    [SPECIES_GRENINJA_ASH] = (0),
    [SPECIES_FLOETTE_ETERNAL_FLOWER] = (0),
    [SPECIES_MEOWSTIC_FEMALE] = (0),
    [SPECIES_AEGISLASH_BLADE] = (0),
    [SPECIES_PUMPKABOO_SMALL] = (0),
    [SPECIES_PUMPKABOO_LARGE] = (0),
    [SPECIES_PUMPKABOO_SUPER] = (0),
    [SPECIES_GOURGEIST_SMALL] = (0),
    [SPECIES_GOURGEIST_LARGE] = (0),
    [SPECIES_GOURGEIST_SUPER] = (0),
    [SPECIES_ZYGARDE_10] = (0),
    [SPECIES_ZYGARDE_COMPLETE] = (0),
    [SPECIES_HOOPA_UNBOUND] = (0),
    [SPECIES_ORICORIO_POM_POM] = (0),
    [SPECIES_ORICORIO_PAU] = (0),
    [SPECIES_ORICORIO_SENSU] = (0),
    [SPECIES_LYCANROC_MIDNIGHT] = (0),
    [SPECIES_LYCANROC_DUSK] = (0),
    [SPECIES_WISHIWASHI_SCHOOL] = (0),
    [SPECIES_MINIOR_CORE_RED] = (0),
    [SPECIES_NECROZMA_DUSK_MANE] = (0),
    [SPECIES_NECROZMA_DAWN_WINGS] = (0),
    [SPECIES_NECROZMA_ULTRA] = (0),
    [SPECIES_TOXTRICITY_LOW_KEY] = (0),
    [SPECIES_EISCUE_NOICE_FACE] = (0),
    [SPECIES_INDEEDEE_FEMALE] = (0),
    [SPECIES_MORPEKO_HANGRY] = (0),
    [SPECIES_ZACIAN_CROWNED_SWORD] = (0),
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] = (0),
    [SPECIES_ETERNATUS_ETERNAMAX] = (0),
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] = (0),
    [SPECIES_CALYREX_ICE_RIDER] = (0),
    [SPECIES_CALYREX_SHADOW_RIDER] = (0),
    [SPECIES_URSALUNA_BLOODMOON] = (0),
    [SPECIES_BASCULEGION_FEMALE] = (0),
    [SPECIES_ENAMORUS_THERIAN] = (0),
    [SPECIES_OINKOLOGNE_FEMALE] = (0),
    [SPECIES_PALAFIN_HERO] = (0),
    [SPECIES_GIMMIGHOUL_ROAMING] = (0),
    [SPECIES_OGERPON_WELLSPRING] = (0),
    [SPECIES_OGERPON_HEARTHFLAME] = (0),
    [SPECIES_OGERPON_CORNERSTONE] = (0),
    [SPECIES_TERAPAGOS_TERASTAL] = (0),
    [SPECIES_TERAPAGOS_STELLAR] = (0),
};
