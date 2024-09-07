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
    [SPECIES_NONE]                        = (0),

    [SPECIES_BULBASAUR]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_IVYSAUR]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VENUSAUR]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CHARMANDER]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CHARMELEON]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CHARIZARD]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SQUIRTLE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WARTORTLE]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BLASTOISE]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CATERPIE]                    = (0),

    [SPECIES_METAPOD]                     = (0),

    [SPECIES_BUTTERFREE]                  = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WEEDLE]                      = (0),

    [SPECIES_KAKUNA]                      = (0),

    [SPECIES_BEEDRILL]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PIDGEY]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PIDGEOTTO]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PIDGEOT]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RATTATA]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RATICATE]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SPEAROW]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FEAROW]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_EKANS]                       = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ARBOK]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PIKACHU]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RAICHU]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SANDSHREW]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SANDSLASH]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NIDORAN_F]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NIDORINA]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NIDOQUEEN]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NIDORAN_M]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NIDORINO]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NIDOKING]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CLEFAIRY]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CLEFABLE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VULPIX]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NINETALES]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_JIGGLYPUFF]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WIGGLYTUFF]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ZUBAT]                       = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GOLBAT]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ODDISH]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GLOOM]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VILEPLUME]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PARAS]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PARASECT]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VENONAT]                     = (TUTOR(MOVE_MIMIC)),

    [SPECIES_VENOMOTH]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DIGLETT]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DUGTRIO]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MEOWTH]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PERSIAN]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PSYDUCK]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GOLDUCK]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MANKEY]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PRIMEAPE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GROWLITHE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ARCANINE]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_POLIWAG]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_POLIWHIRL]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_POLIWRATH]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ABRA]                        = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KADABRA]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ALAKAZAM]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MACHOP]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MACHOKE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MACHAMP]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BELLSPROUT]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WEEPINBELL]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VICTREEBEL]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TENTACOOL]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TENTACRUEL]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GEODUDE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GRAVELER]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GOLEM]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PONYTA]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RAPIDASH]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SLOWPOKE]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SLOWBRO]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGNEMITE]                   = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGNETON]                    = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FARFETCHD]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DODUO]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DODRIO]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SEEL]                        = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DEWGONG]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GRIMER]                      = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MUK]                         = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHELLDER]                    = (TUTOR(MOVE_MIMIC)),

    [SPECIES_CLOYSTER]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GASTLY]                      = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HAUNTER]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GENGAR]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ONIX]                        = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DROWZEE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HYPNO]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KRABBY]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KINGLER]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VOLTORB]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ELECTRODE]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_EXEGGCUTE]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_EXEGGUTOR]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CUBONE]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAROWAK]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HITMONLEE]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HITMONCHAN]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LICKITUNG]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KOFFING]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WEEZING]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RHYHORN]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RHYDON]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CHANSEY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TANGELA]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KANGASKHAN]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HORSEA]                      = (TUTOR(MOVE_MIMIC)),

    [SPECIES_SEADRA]                      = (TUTOR(MOVE_MIMIC)),

    [SPECIES_GOLDEEN]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SEAKING]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_STARYU]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_STARMIE]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MR_MIME]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SCYTHER]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_JYNX]                        = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ELECTABUZZ]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGMAR]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PINSIR]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TAUROS]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGIKARP]                    = (0),

    [SPECIES_GYARADOS]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LAPRAS]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DITTO]                       = (0),

    [SPECIES_EEVEE]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VAPOREON]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_JOLTEON]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FLAREON]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PORYGON]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_OMANYTE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_OMASTAR]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KABUTO]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KABUTOPS]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_AERODACTYL]                  = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SNORLAX]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ARTICUNO]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ZAPDOS]                      = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MOLTRES]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DRATINI]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DRAGONAIR]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DRAGONITE]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MEWTWO]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MEW]                         = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CHIKORITA]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BAYLEEF]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MEGANIUM]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CYNDAQUIL]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_QUILAVA]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TYPHLOSION]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TOTODILE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CROCONAW]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FERALIGATR]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SENTRET]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FURRET]                      = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HOOTHOOT]                    = (TUTOR(MOVE_MIMIC)),

    [SPECIES_NOCTOWL]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LEDYBA]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LEDIAN]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SPINARAK]                    = (TUTOR(MOVE_MIMIC)),

    [SPECIES_ARIADOS]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CROBAT]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CHINCHOU]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LANTURN]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PICHU]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CLEFFA]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_IGGLYBUFF]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TOGEPI]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TOGETIC]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NATU]                        = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_XATU]                        = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAREEP]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FLAAFFY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_AMPHAROS]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BELLOSSOM]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MARILL]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_AZUMARILL]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SUDOWOODO]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_POLITOED]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HOPPIP]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SKIPLOOM]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_JUMPLUFF]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_AIPOM]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SUNKERN]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SUNFLORA]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_YANMA]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WOOPER]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_QUAGSIRE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ESPEON]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_UMBREON]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MURKROW]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SLOWKING]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MISDREAVUS]                  = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_UNOWN]                       = (0),

    [SPECIES_WOBBUFFET]                   = (TUTOR(MOVE_COUNTER)),

    [SPECIES_GIRAFARIG]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PINECO]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FORRETRESS]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DUNSPARCE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GLIGAR]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_STEELIX]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SNUBBULL]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GRANBULL]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_QWILFISH]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SCIZOR]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHUCKLE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HERACROSS]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SNEASEL]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TEDDIURSA]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_URSARING]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SLUGMA]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGCARGO]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SWINUB]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PILOSWINE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CORSOLA]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_REMORAID]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_OCTILLERY]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DELIBIRD]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MANTINE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SKARMORY]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HOUNDOUR]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HOUNDOOM]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KINGDRA]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PHANPY]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DONPHAN]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PORYGON2]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_STANTLER]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SMEARGLE]                    = (0),

    [SPECIES_TYROGUE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HITMONTOP]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SMOOCHUM]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ELEKID]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGBY]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MILTANK]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BLISSEY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RAIKOU]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ENTEI]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SUICUNE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LARVITAR]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PUPITAR]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TYRANITAR]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LUGIA]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HO_OH]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CELEBI]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_OLD_UNOWN_B]                 = (0),
    [SPECIES_OLD_UNOWN_C]                 = (0),
    [SPECIES_OLD_UNOWN_D]                 = (0),
    [SPECIES_OLD_UNOWN_E]                 = (0),
    [SPECIES_OLD_UNOWN_F]                 = (0),
    [SPECIES_OLD_UNOWN_G]                 = (0),
    [SPECIES_OLD_UNOWN_H]                 = (0),
    [SPECIES_OLD_UNOWN_I]                 = (0),
    [SPECIES_OLD_UNOWN_J]                 = (0),
    [SPECIES_OLD_UNOWN_K]                 = (0),
    [SPECIES_OLD_UNOWN_L]                 = (0),
    [SPECIES_OLD_UNOWN_M]                 = (0),
    [SPECIES_OLD_UNOWN_N]                 = (0),
    [SPECIES_OLD_UNOWN_O]                 = (0),
    [SPECIES_OLD_UNOWN_P]                 = (0),
    [SPECIES_OLD_UNOWN_Q]                 = (0),
    [SPECIES_OLD_UNOWN_R]                 = (0),
    [SPECIES_OLD_UNOWN_S]                 = (0),
    [SPECIES_OLD_UNOWN_T]                 = (0),
    [SPECIES_OLD_UNOWN_U]                 = (0),
    [SPECIES_OLD_UNOWN_V]                 = (0),
    [SPECIES_OLD_UNOWN_W]                 = (0),
    [SPECIES_OLD_UNOWN_X]                 = (0),
    [SPECIES_OLD_UNOWN_Y]                 = (0),
    [SPECIES_OLD_UNOWN_Z]                 = (0),

    [SPECIES_TREECKO]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GROVYLE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SCEPTILE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TORCHIC]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_COMBUSKEN]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BLAZIKEN]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MUDKIP]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MARSHTOMP]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SWAMPERT]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_POOCHYENA]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MIGHTYENA]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ZIGZAGOON]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LINOONE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WURMPLE]                     = (0),

    [SPECIES_SILCOON]                     = (0),

    [SPECIES_BEAUTIFLY]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CASCOON]                     = (0),

    [SPECIES_DUSTOX]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LOTAD]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LOMBRE]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LUDICOLO]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SEEDOT]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NUZLEAF]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHIFTRY]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NINCADA]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NINJASK]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHEDINJA]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TAILLOW]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SWELLOW]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHROOMISH]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BRELOOM]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SPINDA]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WINGULL]                     = (TUTOR(MOVE_MIMIC)),

    [SPECIES_PELIPPER]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SURSKIT]                     = (TUTOR(MOVE_MIMIC)),

    [SPECIES_MASQUERAIN]                  = (TUTOR(MOVE_MIMIC)),

    [SPECIES_WAILMER]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WAILORD]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SKITTY]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DELCATTY]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KECLEON]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BALTOY]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CLAYDOL]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NOSEPASS]                    = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TORKOAL]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SABLEYE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BARBOACH]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WHISCASH]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LUVDISC]                     = (TUTOR(MOVE_MIMIC)),

    [SPECIES_CORPHISH]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CRAWDAUNT]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FEEBAS]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MILOTIC]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CARVANHA]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHARPEDO]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TRAPINCH]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VIBRAVA]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FLYGON]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAKUHITA]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HARIYAMA]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ELECTRIKE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MANECTRIC]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NUMEL]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CAMERUPT]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SPHEAL]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SEALEO]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WALREIN]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CACNEA]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CACTURNE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SNORUNT]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GLALIE]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LUNATONE]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SOLROCK]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_AZURILL]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SPOINK]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GRUMPIG]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PLUSLE]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MINUN]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAWILE]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MEDITITE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MEDICHAM]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SWABLU]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ALTARIA]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WYNAUT]                      = (TUTOR(MOVE_COUNTER)),

    [SPECIES_DUSKULL]                     = (TUTOR(MOVE_MIMIC)),

    [SPECIES_DUSCLOPS]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ROSELIA]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SLAKOTH]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VIGOROTH]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SLAKING]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GULPIN]                      = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SWALOT]                      = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TROPIUS]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_WHISMUR]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LOUDRED]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_EXPLOUD]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CLAMPERL]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HUNTAIL]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GOREBYSS]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ABSOL]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHUPPET]                     = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BANETTE]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SEVIPER]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ZANGOOSE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RELICANTH]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ARON]                        = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LAIRON]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_AGGRON]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CASTFORM]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_VOLBEAT]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ILLUMISE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LILEEP]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CRADILY]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ANORITH]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ARMALDO]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RALTS]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KIRLIA]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GARDEVOIR]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BAGON]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SHELGON]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SALAMENCE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BELDUM]                      = (0),

    [SPECIES_METANG]                      = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_METAGROSS]                   = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_REGIROCK]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_REGICE]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_REGISTEEL]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KYOGRE]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GROUDON]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RAYQUAZA]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LATIAS]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LATIOS]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_JIRACHI]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DEOXYS]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CHIMECHO]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TURTWIG]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GROTLE]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TORTERRA]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CHIMCHAR]                    = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_MONFERNO]                    = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_INFERNAPE]                   = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_PIPLUP]                      = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PRINPLUP]                    = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_EMPOLEON]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_STARLY]                      = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_STARAVIA]                    = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_STARAPTOR]                   = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BIDOOF]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BIBAREL]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KRICKETOT]                   = (0),

    [SPECIES_KRICKETUNE]                  = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHINX]                       = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LUXIO]                       = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LUXRAY]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUDEW]                       = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ROSERADE]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CRANIDOS]                    = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_RAMPARDOS]                   = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SHIELDON]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_BASTIODON]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_BURMY]                       = (0),

    [SPECIES_WORMADAM]                    = (0),

    [SPECIES_MOTHIM]                      = (0),

    [SPECIES_COMBEE]                      = (0),

    [SPECIES_VESPIQUEN]                   = (0),

    [SPECIES_PACHIRISU]                   = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUIZEL]                      = (TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_FLOATZEL]                    = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CHERUBI]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CHERRIM]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SHELLOS]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_GASTRODON]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_AMBIPOM]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DRIFLOON]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRIFBLIM]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUNEARY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LOPUNNY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MISMAGIUS]                   = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HONCHKROW]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GLAMEOW]                     = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PURUGLY]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CHINGLING]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_STUNKY]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SKUNTANK]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BRONZOR]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_BRONZONG]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_BONSLY]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MIME_JR]                     = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HAPPINY]                     = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHATOT]                      = (TUTOR(MOVE_MIMIC)),

    [SPECIES_SPIRITOMB]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_GIBLE]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GABITE]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GARCHOMP]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_MUNCHLAX]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_RIOLU]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_LUCARIO]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_HIPPOPOTAS]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_HIPPOWDON]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SKORUPI]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRAPION]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CROAGUNK]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_TOXICROAK]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_CARNIVINE]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FINNEON]                     = (0),

    [SPECIES_LUMINEON]                    = (0),

    [SPECIES_MANTYKE]                     = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SNOVER]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ABOMASNOW]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_WEAVILE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGNEZONE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LICKILICKY]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RHYPERIOR]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TANGROWTH]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ELECTIVIRE]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAGMORTAR]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_TOGEKISS]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_YANMEGA]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_LEAFEON]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GLACEON]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GLISCOR]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAMOSWINE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PORYGON_Z]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_GALLADE]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_PROBOPASS]                   = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DUSKNOIR]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_FROSLASS]                    = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ROTOM]                       = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_UXIE]                        = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MESPRIT]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_AZELF]                       = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DIALGA]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PALKIA]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HEATRAN]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_REGIGIGAS]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GIRATINA]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CRESSELIA]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PHIONE]                      = (0),

    [SPECIES_MANAPHY]                     = (0),

    [SPECIES_DARKRAI]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SHAYMIN]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ARCEUS]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VICTINI]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SNIVY]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SERVINE]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SERPERIOR]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TEPIG]                       = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PIGNITE]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_EMBOAR]                      = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_OSHAWOTT]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DEWOTT]                      = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SAMUROTT]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_PATRAT]                      = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WATCHOG]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LILLIPUP]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HERDIER]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_STOUTLAND]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PURRLOIN]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LIEPARD]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PANSAGE]                     = (0),

    [SPECIES_SIMISAGE]                    = (0),

    [SPECIES_PANSEAR]                     = (TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_SIMISEAR]                    = (TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_PANPOUR]                     = (TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_SIMIPOUR]                    = (TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_MUNNA]                       = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MUSHARNA]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PIDOVE]                      = (0),

    [SPECIES_TRANQUILL]                   = (0),

    [SPECIES_UNFEZANT]                    = (0),

    [SPECIES_BLITZLE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ZEBSTRIKA]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROGGENROLA]                  = (0),

    [SPECIES_BOLDORE]                     = (0),

    [SPECIES_GIGALITH]                    = (0),

    [SPECIES_WOOBAT]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SWOOBAT]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRILBUR]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_EXCADRILL]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_AUDINO]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TIMBURR]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_GURDURR]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_CONKELDURR]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_TYMPOLE]                     = (0),

    [SPECIES_PALPITOAD]                   = (0),

    [SPECIES_SEISMITOAD]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK)),

    [SPECIES_THROH]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_SAWK]                        = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_SEWADDLE]                    = (0),

    [SPECIES_SWADLOON]                    = (0),

    [SPECIES_LEAVANNY]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VENIPEDE]                    = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_WHIRLIPEDE]                  = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SCOLIPEDE]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_COTTONEE]                    = (0),

    [SPECIES_WHIMSICOTT]                  = (0),

    [SPECIES_PETILIL]                     = (0),

    [SPECIES_LILLIGANT]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BASCULIN]                    = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SANDILE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_KROKOROK]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_KROOKODILE]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_DARUMAKA]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK)),

    [SPECIES_DARMANITAN]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_MARACTUS]                    = (0),

    [SPECIES_DWEBBLE]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_CRUSTLE]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_SCRAGGY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SCRAFTY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SIGILYPH]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_YAMASK]                      = (0),

    [SPECIES_COFAGRIGUS]                  = (0),

    [SPECIES_TIRTOUGA]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CARRACOSTA]                  = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ARCHEN]                      = (0),

    [SPECIES_ARCHEOPS]                    = (0),

    [SPECIES_TRUBBISH]                    = (0),

    [SPECIES_GARBODOR]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ZORUA]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_ZOROARK]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_MINCCINO]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CINCCINO]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GOTHITA]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GOTHORITA]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GOTHITELLE]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SOLOSIS]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUOSION]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_REUNICLUS]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUCKLETT]                    = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SWANNA]                      = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_VANILLITE]                   = (0),

    [SPECIES_VANILLISH]                   = (0),

    [SPECIES_VANILLUXE]                   = (0),

    [SPECIES_DEERLING]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SAWSBUCK]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EMOLGA]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KARRABLAST]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_ESCAVALIER]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_FOONGUS]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_AMOONGUSS]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_FRILLISH]                    = (0),

    [SPECIES_JELLICENT]                   = (0),

    [SPECIES_ALOMOMOLA]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_JOLTIK]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GALVANTULA]                  = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FERROSEED]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FERROTHORN]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KLINK]                       = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KLANG]                       = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KLINKLANG]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TYNAMO]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EELEKTRIK]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EELEKTROSS]                  = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ELGYEM]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BEHEEYEM]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LITWICK]                     = (0),

    [SPECIES_LAMPENT]                     = (0),

    [SPECIES_CHANDELURE]                  = (0),

    [SPECIES_AXEW]                        = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_FRAXURE]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_HAXORUS]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_CUBCHOO]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_BEARTIC]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CRYOGONAL]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_SHELMET]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ACCELGOR]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_STUNFISK]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MIENFOO]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK)),

    [SPECIES_MIENSHAO]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DRUDDIGON]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_GOLETT]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GOLURK]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PAWNIARD]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BISHARP]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BOUFFALANT]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_RUFFLET]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BRAVIARY]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_VULLABY]                     = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_MANDIBUZZ]                   = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_HEATMOR]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_DURANT]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DEINO]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ZWEILOUS]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HYDREIGON]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LARVESTA]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_VOLCARONA]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_COBALION]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TERRAKION]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_VIRIZION]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TORNADUS]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_THUNDURUS]                   = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_RESHIRAM]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ZEKROM]                      = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LANDORUS]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_KYUREM]                      = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_KELDEO]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_MELOETTA]                    = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GENESECT]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHESPIN]                     = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_QUILLADIN]                   = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CHESNAUGHT]                  = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_FENNEKIN]                    = (0),

    [SPECIES_BRAIXEN]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_DELPHOX]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FROAKIE]                     = (TUTOR(MOVE_COUNTER)),

    [SPECIES_FROGADIER]                   = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_GRENINJA]                    = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_BUNNELBY]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DIGGERSBY]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_FLETCHLING]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_FLETCHINDER]                 = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TALONFLAME]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SCATTERBUG]                  = (0),

    [SPECIES_SPEWPA]                      = (0),

    [SPECIES_VIVILLON]                    = (0),

    [SPECIES_LITLEO]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PYROAR]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_FLABEBE]                     = (0),

    [SPECIES_FLOETTE]                     = (0),

    [SPECIES_FLORGES]                     = (0),

    [SPECIES_SKIDDO]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GOGOAT]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PANCHAM]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_PANGORO]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_FURFROU]                     = (TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ESPURR]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MEOWSTIC]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HONEDGE]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DOUBLADE]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AEGISLASH]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SPRITZEE]                    = (0),

    [SPECIES_AROMATISSE]                  = (0),

    [SPECIES_SWIRLIX]                     = (0),

    [SPECIES_SLURPUFF]                    = (0),

    [SPECIES_INKAY]                       = (0),

    [SPECIES_MALAMAR]                     = (0),

    [SPECIES_BINACLE]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BARBARACLE]                  = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKRELP]                      = (0),

    [SPECIES_DRAGALGE]                    = (0),

    [SPECIES_CLAUNCHER]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CLAWITZER]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_HELIOPTILE]                  = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HELIOLISK]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TYRUNT]                      = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_TYRANTRUM]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_AMAURA]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_AURORUS]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SYLVEON]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_HAWLUCHA]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_DEDENNE]                     = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CARBINK]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GOOMY]                       = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_SLIGGOO]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_GOODRA]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_KLEFKI]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PHANTUMP]                    = (0),

    [SPECIES_TREVENANT]                   = (0),

    [SPECIES_PUMPKABOO]                   = (0),

    [SPECIES_GOURGEIST]                   = (0),

    [SPECIES_BERGMITE]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_AVALUGG]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_NOIBAT]                      = (0),

    [SPECIES_NOIVERN]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_XERNEAS]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_YVELTAL]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ZYGARDE]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_DIANCIE]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_HOOPA]                       = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VOLCANION]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ROWLET]                      = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DARTRIX]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DECIDUEYE]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LITTEN]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TORRACAT]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_INCINEROAR]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_POPPLIO]                     = (0),

    [SPECIES_BRIONNE]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_PRIMARINA]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_PIKIPEK]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TRUMBEAK]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TOUCANNON]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_YUNGOOS]                     = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GUMSHOOS]                    = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GRUBBIN]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHARJABUG]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VIKAVOLT]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CRABRAWLER]                  = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CRABOMINABLE]                = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ORICORIO]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CUTIEFLY]                    = (0),

    [SPECIES_RIBOMBEE]                    = (0),

    [SPECIES_ROCKRUFF]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_LYCANROC]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_WISHIWASHI]                  = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_MAREANIE]                    = (0),

    [SPECIES_TOXAPEX]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_MUDBRAY]                     = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_MUDSDALE]                    = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_DEWPIDER]                    = (0),

    [SPECIES_ARAQUANID]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_FOMANTIS]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LURANTIS]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MORELULL]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SHIINOTIC]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SALANDIT]                    = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SALAZZLE]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_STUFFUL]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BEWEAR]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BOUNSWEET]                   = (0),

    [SPECIES_STEENEE]                     = (0),

    [SPECIES_TSAREENA]                    = (TUTOR(MOVE_MEGA_KICK)),

    [SPECIES_COMFEY]                      = (0),

    [SPECIES_ORANGURU]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_PASSIMIAN]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_WIMPOD]                      = (0),

    [SPECIES_GOLISOPOD]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SANDYGAST]                   = (0),

    [SPECIES_PALOSSAND]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_PYUKUMUKU]                   = (TUTOR(MOVE_COUNTER)),

    [SPECIES_TYPE_NULL]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SILVALLY]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MINIOR]                      = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_KOMALA]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TURTONATOR]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_TOGEDEMARU]                  = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MIMIKYU]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BRUXISH]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRAMPA]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DHELMISE]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_JANGMO_O]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_HAKAMO_O]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_KOMMO_O]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_TAPU_KOKO]                   = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TAPU_LELE]                   = (0),

    [SPECIES_TAPU_BULU]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TAPU_FINI]                   = (TUTOR(MOVE_ICE_PUNCH)),

    [SPECIES_COSMOG]                      = (0),

    [SPECIES_COSMOEM]                     = (0),

    [SPECIES_SOLGALEO]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_LUNALA]                      = (0),

    [SPECIES_NIHILEGO]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUZZWOLE]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_PHEROMOSA]                   = (0),

    [SPECIES_XURKITREE]                   = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CELESTEELA]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_KARTANA]                     = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GUZZLORD]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_NECROZMA]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_MAGEARNA]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MARSHADOW]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_POIPOLE]                     = (0),

    [SPECIES_NAGANADEL]                   = (0),

    [SPECIES_STAKATAKA]                   = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BLACEPHALON]                 = (TUTOR(MOVE_FIRE_PUNCH)),

    [SPECIES_ZERAORA]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MELTAN]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MELMETAL]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GROOKEY]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_THWACKEY]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_RILLABOOM]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SCORBUNNY]                   = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_RABOOT]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_CINDERACE]                   = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_SOBBLE]                      = (0),

    [SPECIES_DRIZZILE]                    = (0),

    [SPECIES_INTELEON]                    = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKWOVET]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_GREEDENT]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_ROOKIDEE]                    = (0),

    [SPECIES_CORVISQUIRE]                 = (0),

    [SPECIES_CORVIKNIGHT]                 = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BLIPBUG]                     = (0),

    [SPECIES_DOTTLER]                     = (0),

    [SPECIES_ORBEETLE]                    = (0),

    [SPECIES_NICKIT]                      = (0),

    [SPECIES_THIEVUL]                     = (0),

    [SPECIES_GOSSIFLEUR]                  = (0),

    [SPECIES_ELDEGOSS]                    = (0),

    [SPECIES_WOOLOO]                      = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUBWOOL]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHEWTLE]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_DREDNAW]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_YAMPER]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BOLTUND]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROLYCOLY]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CARKOL]                      = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_COALOSSAL]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_APPLIN]                      = (0),

    [SPECIES_FLAPPLE]                     = (0),

    [SPECIES_APPLETUN]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_SILICOBRA]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_SANDACONDA]                  = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CRAMORANT]                   = (0),

    [SPECIES_ARROKUDA]                    = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BARRASKEWDA]                 = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TOXEL]                       = (0),

    [SPECIES_TOXTRICITY]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SIZZLIPEDE]                  = (0),

    [SPECIES_CENTISKORCH]                 = (0),

    [SPECIES_CLOBBOPUS]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_GRAPPLOCT]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_SINISTEA]                    = (0),

    [SPECIES_POLTEAGEIST]                 = (0),

    [SPECIES_HATENNA]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HATTREM]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HATTERENE]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_IMPIDIMP]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MORGREM]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GRIMMSNARL]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_OBSTAGOON]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PERRSERKER]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CURSOLA]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_SIRFETCHD]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_MR_RIME]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_RUNERIGUS]                   = (0),

    [SPECIES_MILCERY]                     = (0),

    [SPECIES_ALCREMIE]                    = (0),

    [SPECIES_FALINKS]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_PINCURCHIN]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SNOM]                        = (0),

    [SPECIES_FROSMOTH]                    = (0),

    [SPECIES_STONJOURNER]                 = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_EISCUE]                      = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_INDEEDEE]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_MORPEKO]                     = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CUFANT]                      = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_COPPERAJAH]                  = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DRACOZOLT]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ARCTOZOLT]                   = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRACOVISH]                   = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ARCTOVISH]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_DURALUDON]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DREEPY]                      = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRAKLOAK]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRAGAPULT]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ZACIAN]                      = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ZAMAZENTA]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ETERNATUS]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_KUBFU]                       = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_URSHIFU]                     = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_ZARUDE]                      = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_REGIELEKI]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_REGIDRAGO]                   = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_GLASTRIER]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SPECTRIER]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CALYREX]                     = (0),

    [SPECIES_WYRDEER]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KLEAVOR]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_URSALUNA]                    = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BASCULEGION]                 = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SNEASLER]                    = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_OVERQWIL]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ENAMORUS]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_SPRIGATITO]                  = (0),

    [SPECIES_FLORAGATO]                   = (TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MEOWSCARADA]                 = (TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FUECOCO]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CROCALOR]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_SKELEDIRGE]                  = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_QUAXLY]                      = (0),

    [SPECIES_QUAXWELL]                    = (0),

    [SPECIES_QUAQUAVAL]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_LECHONK]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_OINKOLOGNE]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TAROUNTULA]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_SPIDOPS]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_NYMBLE]                      = (TUTOR(MOVE_COUNTER)),

    [SPECIES_LOKIX]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_PAWMI]                       = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PAWMO]                       = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PAWMOT]                      = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TANDEMAUS]                   = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAUSHOLD]                    = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FIDOUGH]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DACHSBUN]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SMOLIV]                      = (0),

    [SPECIES_DOLLIV]                      = (0),

    [SPECIES_ARBOLIVA]                    = (0),

    [SPECIES_SQUAWKABILLY]                = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_NACLI]                       = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_NACLSTACK]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GARGANACL]                   = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CHARCADET]                   = (0),

    [SPECIES_ARMAROUGE]                   = (0),

    [SPECIES_CERULEDGE]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TADBULB]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BELLIBOLT]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_WATTREL]                     = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KILOWATTREL]                 = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MASCHIFF]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_MABOSSTIFF]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SHROODLE]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GRAFAIAI]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BRAMBLIN]                    = (0),

    [SPECIES_BRAMBLEGHAST]                = (0),

    [SPECIES_TOEDSCOOL]                   = (0),

    [SPECIES_TOEDSCRUEL]                  = (0),

    [SPECIES_KLAWF]                       = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CAPSAKID]                    = (0),

    [SPECIES_SCOVILLAIN]                  = (0),

    [SPECIES_RELLOR]                      = (0),

    [SPECIES_RABSCA]                      = (0),

    [SPECIES_FLITTLE]                     = (0),

    [SPECIES_ESPATHRA]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TINKATINK]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TINKATUFF]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TINKATON]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_WIGLETT]                     = (0),

    [SPECIES_WUGTRIO]                     = (0),

    [SPECIES_BOMBIRDIER]                  = (0),

    [SPECIES_FINIZEN]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_PALAFIN]                     = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_VAROOM]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_REVAVROOM]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CYCLIZAR]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ORTHWORM]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GLIMMET]                     = (0),

    [SPECIES_GLIMMORA]                    = (0),

    [SPECIES_GREAVARD]                    = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_HOUNDSTONE]                  = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_FLAMIGO]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK)),

    [SPECIES_CETODDLE]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CETITAN]                     = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_VELUZA]                      = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DONDOZO]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TATSUGIRI]                   = (TUTOR(MOVE_COUNTER)),

    [SPECIES_ANNIHILAPE]                  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_CLODSIRE]                    = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_FARIGIRAF]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DUDUNSPARCE]                 = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_KINGAMBIT]                   = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GREAT_TUSK]                  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SCREAM_TAIL]                 = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BRUTE_BONNET]                = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_FLUTTER_MANE]                = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SLITHER_WING]                = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SANDY_SHOCKS]                = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_IRON_TREADS]                 = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_IRON_BUNDLE]                 = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_IRON_HANDS]                  = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_IRON_JUGULIS]                = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_IRON_MOTH]                   = (0),

    [SPECIES_IRON_THORNS]                 = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FRIGIBAX]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ARCTIBAX]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_BAXCALIBUR]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GIMMIGHOUL]                  = (0),

    [SPECIES_GHOLDENGO]                   = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_WO_CHIEN]                    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_CHIEN_PAO]                   = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TING_LU]                     = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CHI_YU]                      = (0),

    [SPECIES_ROARING_MOON]                = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_IRON_VALIANT]                = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KORAIDON]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_MIRAIDON]                    = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_WALKING_WAKE]                = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_IRON_LEAVES]                 = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DIPPLIN]                     = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_POLTCHAGEIST]                = (0),

    [SPECIES_SINISTCHA]                   = (0),

    [SPECIES_OKIDOGI]                     = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_MUNKIDORI]                   = (0),

    [SPECIES_FEZANDIPITI]                 = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_OGERPON]                     = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_ARCHALUDON]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HYDRAPPLE]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_GOUGING_FIRE]                = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_RAGING_BOLT]                 = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_IRON_BOULDER]                = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_IRON_CROWN]                  = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TERAPAGOS]                   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PECHARUNT]                   = (0),

    [SPECIES_VENUSAUR_MEGA]               = (0),

    [SPECIES_CHARIZARD_MEGA_X]            = (0),

    [SPECIES_CHARIZARD_MEGA_Y]            = (0),

    [SPECIES_BLASTOISE_MEGA]              = (0),

    [SPECIES_BEEDRILL_MEGA]               = (0),

    [SPECIES_PIDGEOT_MEGA]                = (0),

    [SPECIES_ALAKAZAM_MEGA]               = (0),

    [SPECIES_SLOWBRO_MEGA]                = (0),

    [SPECIES_GENGAR_MEGA]                 = (0),

    [SPECIES_KANGASKHAN_MEGA]             = (0),

    [SPECIES_PINSIR_MEGA]                 = (0),

    [SPECIES_GYARADOS_MEGA]               = (0),

    [SPECIES_AERODACTYL_MEGA]             = (0),

    [SPECIES_MEWTWO_MEGA_X]               = (0),

    [SPECIES_MEWTWO_MEGA_Y]               = (0),

    [SPECIES_AMPHAROS_MEGA]               = (0),

    [SPECIES_STEELIX_MEGA]                = (0),

    [SPECIES_SCIZOR_MEGA]                 = (0),

    [SPECIES_HERACROSS_MEGA]              = (0),

    [SPECIES_HOUNDOOM_MEGA]               = (0),

    [SPECIES_TYRANITAR_MEGA]              = (0),

    [SPECIES_SCEPTILE_MEGA]               = (0),

    [SPECIES_BLAZIKEN_MEGA]               = (0),

    [SPECIES_SWAMPERT_MEGA]               = (0),

    [SPECIES_GARDEVOIR_MEGA]              = (0),

    [SPECIES_SABLEYE_MEGA]                = (0),

    [SPECIES_MAWILE_MEGA]                 = (0),

    [SPECIES_AGGRON_MEGA]                 = (0),

    [SPECIES_MEDICHAM_MEGA]               = (0),

    [SPECIES_MANECTRIC_MEGA]              = (0),

    [SPECIES_SHARPEDO_MEGA]               = (0),

    [SPECIES_CAMERUPT_MEGA]               = (0),

    [SPECIES_ALTARIA_MEGA]                = (0),

    [SPECIES_BANETTE_MEGA]                = (0),

    [SPECIES_ABSOL_MEGA]                  = (0),

    [SPECIES_GLALIE_MEGA]                 = (0),

    [SPECIES_SALAMENCE_MEGA]              = (0),

    [SPECIES_METAGROSS_MEGA]              = (0),

    [SPECIES_LATIAS_MEGA]                 = (0),

    [SPECIES_LATIOS_MEGA]                 = (0),

    [SPECIES_LOPUNNY_MEGA]                = (0),

    [SPECIES_GARCHOMP_MEGA]               = (0),

    [SPECIES_LUCARIO_MEGA]                = (0),

    [SPECIES_ABOMASNOW_MEGA]              = (0),

    [SPECIES_GALLADE_MEGA]                = (0),

    [SPECIES_AUDINO_MEGA]                 = (0),

    [SPECIES_DIANCIE_MEGA]                = (0),

    [SPECIES_RAYQUAZA_MEGA]               = (0),

    [SPECIES_KYOGRE_PRIMAL]               = (0),

    [SPECIES_GROUDON_PRIMAL]              = (0),

    [SPECIES_RATTATA_ALOLAN]              = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_RATICATE_ALOLAN]             = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_RAICHU_ALOLAN]               = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_SANDSHREW_ALOLAN]            = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_SANDSLASH_ALOLAN]            = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS)),

    [SPECIES_VULPIX_ALOLAN]               = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_NINETALES_ALOLAN]            = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DIGLETT_ALOLAN]              = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_DUGTRIO_ALOLAN]              = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_MEOWTH_ALOLAN]               = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PERSIAN_ALOLAN]              = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GEODUDE_ALOLAN]              = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GRAVELER_ALOLAN]             = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GOLEM_ALOLAN]                = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GRIMER_ALOLAN]               = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_MUK_ALOLAN]                  = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_EXEGGUTOR_ALOLAN]            = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MAROWAK_ALOLAN]              = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MEOWTH_GALARIAN]             = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PONYTA_GALARIAN]             = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_RAPIDASH_GALARIAN]           = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_SLOWPOKE_GALARIAN]           = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SLOWBRO_GALARIAN]            = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FARFETCHD_GALARIAN]          = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_WEEZING_GALARIAN]            = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_MR_MIME_GALARIAN]            = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_ARTICUNO_GALARIAN]           = (0),

    [SPECIES_ZAPDOS_GALARIAN]             = (TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_MOLTRES_GALARIAN]            = (0),

    [SPECIES_SLOWKING_GALARIAN]           = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CORSOLA_GALARIAN]            = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ZIGZAGOON_GALARIAN]          = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LINOONE_GALARIAN]            = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DARUMAKA_GALARIAN]           = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK)),

    [SPECIES_DARMANITAN_GALARIAN]         = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_YAMASK_GALARIAN]             = (0),

    [SPECIES_STUNFISK_GALARIAN]           = (TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GROWLITHE_HISUIAN]           = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ARCANINE_HISUIAN]            = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_VOLTORB_HISUIAN]             = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ELECTRODE_HISUIAN]           = (TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TYPHLOSION_HISUIAN]          = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_QWILFISH_HISUIAN]            = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SNEASEL_HISUIAN]             = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_SAMUROTT_HISUIAN]            = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_LILLIGANT_HISUIAN]           = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK)),

    [SPECIES_ZORUA_HISUIAN]               = (0),

    [SPECIES_ZOROARK_HISUIAN]             = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_BRAVIARY_HISUIAN]            = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_SLIGGOO_HISUIAN]             = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_GOODRA_HISUIAN]              = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_AVALUGG_HISUIAN]             = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DECIDUEYE_HISUIAN]           = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TAUROS_PALDEAN]              = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_WOOPER_PALDEAN]              = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_PIKACHU_CAP]                 = (0),

    [SPECIES_PIKACHU_PARTNER]             = (0),

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED]  = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED]   = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_EEVEE_PARTNER]               = (0),

    [SPECIES_PICHU_SPIKY_EARED]           = (0),

    [SPECIES_CASTFORM_SUNNY]              = (0),

    [SPECIES_CASTFORM_RAINY]              = (0),

    [SPECIES_CASTFORM_SNOWY]              = (0),

    [SPECIES_DEOXYS_ATTACK]               = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DEOXYS_DEFENSE]              = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_DEOXYS_SPEED]                = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_THUNDER_WAVE),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BURMY_SANDY_CLOAK]           = (0),

    [SPECIES_BURMY_TRASH_CLOAK]           = (0),

    [SPECIES_WORMADAM_SANDY_CLOAK]        = (0),

    [SPECIES_WORMADAM_TRASH_CLOAK]        = (0),

    [SPECIES_CHERRIM_SUNSHINE]            = (0),

    [SPECIES_ROTOM_HEAT]                  = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_WASH]                  = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_FROST]                 = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_FAN]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_MOW]                   = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DIALGA_ORIGIN]               = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PALKIA_ORIGIN]               = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GIRATINA_ORIGIN]             = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SHAYMIN_SKY]                 = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BASCULIN_BLUE_STRIPED]       = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_BASCULIN_WHITE_STRIPED]      = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_DARMANITAN_ZEN_MODE]         = (0),

    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN]= (0),

    [SPECIES_TORNADUS_THERIAN]            = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_THUNDURUS_THERIAN]           = (TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LANDORUS_THERIAN]            = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_KYUREM_WHITE]                = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_KYUREM_BLACK]                = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_MELOETTA_PIROUETTE]          = (0),

    [SPECIES_GRENINJA_ASH]                = (TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_FLOETTE_ETERNAL_FLOWER]      = (0),

    [SPECIES_MEOWSTIC_FEMALE]             = (TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_AEGISLASH_BLADE]             = (0),

    [SPECIES_PUMPKABOO_SMALL]             = (0),

    [SPECIES_PUMPKABOO_LARGE]             = (0),

    [SPECIES_PUMPKABOO_SUPER]             = (0),

    [SPECIES_GOURGEIST_SMALL]             = (0),

    [SPECIES_GOURGEIST_LARGE]             = (0),

    [SPECIES_GOURGEIST_SUPER]             = (0),

    [SPECIES_ZYGARDE_10]                  = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ZYGARDE_COMPLETE]            = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_HOOPA_UNBOUND]               = (TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ORICORIO_POM_POM]            = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ORICORIO_PAU]                = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ORICORIO_SENSU]              = (TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LYCANROC_MIDNIGHT]           = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_LYCANROC_DUSK]               = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_WISHIWASHI_SCHOOL]           = (0),

    [SPECIES_MINIOR_CORE_RED]             = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_NECROZMA_DUSK_MANE]          = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_NECROZMA_DAWN_WINGS]         = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_NECROZMA_ULTRA]              = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_TOXTRICITY_LOW_KEY]          = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EISCUE_NOICE_FACE]           = (0),

    [SPECIES_INDEEDEE_FEMALE]             = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_MORPEKO_HANGRY]              = (0),

    [SPECIES_ZACIAN_CROWNED_SWORD]        = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ZAMAZENTA_CROWNED_SHIELD]    = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_ETERNATUS_ETERNAMAX]         = (0),

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE]  = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_CALYREX_ICE_RIDER]           = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_CALYREX_SHADOW_RIDER]        = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_URSALUNA_BLOODMOON]          = (TUTOR(MOVE_MEGA_PUNCH),
                                             TUTOR(MOVE_FIRE_PUNCH),
                                             TUTOR(MOVE_ICE_PUNCH),
                                             TUTOR(MOVE_THUNDER_PUNCH),
                                             TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_MEGA_KICK),
                                             TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE),
                                             TUTOR(MOVE_COUNTER),
                                             TUTOR(MOVE_SEISMIC_TOSS),
                                             TUTOR(MOVE_MIMIC)),

    [SPECIES_BASCULEGION_FEMALE]          = (TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_ENAMORUS_THERIAN]            = (TUTOR(MOVE_BODY_SLAM)),

    [SPECIES_OINKOLOGNE_FEMALE]           = (TUTOR(MOVE_BODY_SLAM),
                                             TUTOR(MOVE_DOUBLE_EDGE)),

    [SPECIES_PALAFIN_HERO]                = (0),

    [SPECIES_GIMMIGHOUL_ROAMING]          = (0),

    [SPECIES_OGERPON_WELLSPRING]          = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_OGERPON_HEARTHFLAME]         = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_OGERPON_CORNERSTONE]         = (TUTOR(MOVE_SWORDS_DANCE),
                                             TUTOR(MOVE_COUNTER)),

    [SPECIES_TERAPAGOS_TERASTAL]          = (0),

    [SPECIES_TERAPAGOS_STELLAR]           = (0),
};
