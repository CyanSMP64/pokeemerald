#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(BULBASAUR,
    MOVE_PETAL_DANCE,
    MOVE_TOXIC),

    egg_moves(CHARMANDER,
    MOVE_BITE,
    MOVE_COUNTER,
    MOVE_IRON_TAIL),

    egg_moves(SQUIRTLE,
    MOVE_MIST),

    egg_moves(PIDGEY,
    MOVE_STEEL_WING),

    egg_moves(RATTATA,
    MOVE_BITE,
    MOVE_COUNTER),

    egg_moves(RATTATA_ALOLAN,
    MOVE_COUNTER,
    MOVE_SNATCH),

    egg_moves(SPEAROW,
    MOVE_RAZOR_WIND,
    MOVE_WHIRLWIND,
    MOVE_STEEL_WING),

    egg_moves(EKANS,
    MOVE_SNATCH),

    egg_moves(SANDSHREW,
    MOVE_COUNTER,
    MOVE_MUD_SLAP),

    egg_moves(SANDSHREW_ALOLAN,
    MOVE_COUNTER),

    egg_moves(NIDORAN_F,
    MOVE_TAKE_DOWN,
    MOVE_SUPERSONIC,
    MOVE_DISABLE,
    MOVE_COUNTER),

    egg_moves(NIDORAN_M,
    MOVE_HORN_DRILL,
    MOVE_TAKE_DOWN,
    MOVE_THRASH,
    MOVE_SUPERSONIC,
    MOVE_DISABLE,
    MOVE_COUNTER),

    egg_moves(VULPIX,
    MOVE_ROAR,
    MOVE_SECRET_POWER),

    egg_moves(VULPIX_ALOLAN,
    MOVE_ROAR,
    MOVE_SECRET_POWER),

    egg_moves(ZUBAT,
    MOVE_GUST,
    MOVE_WING_ATTACK,
    MOVE_WHIRLWIND),

    egg_moves(ODDISH,
    MOVE_LEECH_SEED,
    MOVE_RAZOR_LEAF,
    MOVE_SECRET_POWER),

    egg_moves(PARAS,
    MOVE_PSYBEAM,
    MOVE_COUNTER,
    MOVE_LEECH_SEED,
    MOVE_ENDURE),

    egg_moves(VENONAT,
    MOVE_SECRET_POWER),

    egg_moves(DIGLETT,
    MOVE_HEADBUTT),

    egg_moves(DIGLETT_ALOLAN,
    MOVE_HEADBUTT,
    MOVE_THRASH),

    egg_moves(MEOWTH,
    MOVE_TAIL_WHIP,
    MOVE_SNATCH),

    egg_moves(MEOWTH_ALOLAN,
    MOVE_SNATCH),

    egg_moves(MEOWTH_GALARIAN,
    MOVE_DOUBLE_EDGE),

    egg_moves(PSYDUCK,
    MOVE_PSYBEAM,
    MOVE_SECRET_POWER),

    egg_moves(MANKEY,
    MOVE_COUNTER),

    egg_moves(GROWLITHE,
    MOVE_DOUBLE_KICK,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE),

    egg_moves(GROWLITHE_HISUIAN,
    MOVE_DOUBLE_KICK,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE),

    egg_moves(POLIWAG,
    MOVE_MIST,
    MOVE_WATER_PULSE),

    egg_moves(ABRA,
    MOVE_FIRE_PUNCH,
    MOVE_ICE_PUNCH,
    MOVE_THUNDER_PUNCH),

    egg_moves(MACHOP,
    MOVE_FIRE_PUNCH,
    MOVE_ICE_PUNCH,
    MOVE_THUNDER_PUNCH,
    MOVE_ROLLING_KICK,
    MOVE_SUBMISSION,
    MOVE_COUNTER),

    egg_moves(TENTACOOL,
    MOVE_AURORA_BEAM),

    egg_moves(GEODUDE,
    MOVE_MEGA_PUNCH,
    MOVE_DYNAMIC_PUNCH),

    egg_moves(GEODUDE_ALOLAN,
    MOVE_COUNTER,
    MOVE_ENDURE),

    egg_moves(PONYTA,
    MOVE_DOUBLE_KICK,
    MOVE_HORN_DRILL,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE,
    MOVE_LOW_KICK),

    egg_moves(PONYTA_GALARIAN,
    MOVE_DOUBLE_KICK,
    MOVE_HORN_DRILL,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE),

    egg_moves(SLOWPOKE,
    MOVE_STOMP),

    egg_moves(SLOWPOKE_GALARIAN,
    MOVE_STOMP),

    egg_moves(MAGNEMITE,
    MOVE_EXPLOSION),

    egg_moves(FARFETCHD,
    MOVE_GUST,
    MOVE_MUD_SLAP),

    egg_moves(FARFETCHD_GALARIAN,
    MOVE_DOUBLE_EDGE,
    MOVE_COUNTER),

    egg_moves(DODUO,
    MOVE_WHIRLWIND),

    egg_moves(SEEL,
    MOVE_HORN_DRILL,
    MOVE_DISABLE),

    egg_moves(SHELLDER,
    MOVE_TWINEEDLE,
    MOVE_BUBBLE_BEAM,
    MOVE_WATER_PULSE),

    egg_moves(GASTLY,
    MOVE_DISABLE,
    MOVE_TOXIC),

    egg_moves(ONIX,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(DROWZEE,
    MOVE_FIRE_PUNCH,
    MOVE_ICE_PUNCH,
    MOVE_THUNDER_PUNCH,
    MOVE_SECRET_POWER),

    egg_moves(KRABBY,
    MOVE_SLAM),

    egg_moves(VOLTORB_HISUIAN,
    MOVE_LEECH_SEED),

    egg_moves(EXEGGCUTE,
    MOVE_POISON_POWDER,
    MOVE_STUN_SPORE,
    MOVE_SLEEP_POWDER),

    egg_moves(CUBONE,
    MOVE_DOUBLE_KICK,
    MOVE_LEER),

    egg_moves(LICKITUNG,
    MOVE_BODY_SLAM,
    MOVE_THRASH,
    MOVE_SNORE),

    egg_moves(RHYHORN,
    MOVE_COUNTER),

    egg_moves(TANGELA,
    MOVE_MEGA_DRAIN,
    MOVE_LEECH_SEED),

    egg_moves(KANGASKHAN,
    MOVE_STOMP,
    MOVE_DOUBLE_EDGE,
    MOVE_DISABLE,
    MOVE_COUNTER),

    egg_moves(HORSEA,
    MOVE_RAZOR_WIND,
    MOVE_DISABLE,
    MOVE_AURORA_BEAM,
    MOVE_DRAGON_RAGE),

    egg_moves(GOLDEEN,
    MOVE_BODY_SLAM,
    MOVE_HYDRO_PUMP,
    MOVE_PSYBEAM,
    MOVE_MUD_SLAP),

    egg_moves(MR_MIME,
    MOVE_MIMIC,
    MOVE_ICY_WIND),

    egg_moves(SCYTHER,
    MOVE_RAZOR_WIND,
    MOVE_COUNTER),

    egg_moves(PINSIR,
    MOVE_FURY_ATTACK,
    MOVE_THRASH),

    egg_moves(LAPRAS,
    MOVE_HORN_DRILL),

    egg_moves(EEVEE,
    MOVE_DOUBLE_KICK,
    MOVE_MUD_SLAP),

    egg_moves(OMANYTE,
    MOVE_SLAM,
    MOVE_BITE,
    MOVE_SUPERSONIC,
    MOVE_BUBBLE_BEAM,
    MOVE_AURORA_BEAM,
    MOVE_WATER_PULSE),

    egg_moves(KABUTO,
    MOVE_TAKE_DOWN,
    MOVE_BUBBLE_BEAM,
    MOVE_AURORA_BEAM,
    MOVE_MEGA_DRAIN,
    MOVE_ICY_WIND),

    egg_moves(AERODACTYL,
    MOVE_WHIRLWIND),

    egg_moves(SNORLAX,
    MOVE_DOUBLE_EDGE),

    egg_moves(DRATINI,
    MOVE_SUPERSONIC,
    MOVE_MIST,
    MOVE_WATER_PULSE),

    egg_moves(CHIKORITA,
    MOVE_VINE_WHIP,
    MOVE_COUNTER),

    egg_moves(CYNDAQUIL,
    MOVE_DOUBLE_KICK),

    egg_moves(TOTODILE,
    MOVE_COUNTER),

    egg_moves(HOOTHOOT,
    MOVE_WING_ATTACK,
    MOVE_WHIRLWIND,
    MOVE_SUPERSONIC),

    egg_moves(LEDYBA,
    MOVE_PSYBEAM,
    MOVE_COUNTER,
    MOVE_ENDURE,
    MOVE_FOCUS_PUNCH),

    egg_moves(SPINARAK,
    MOVE_TWINEEDLE,
    MOVE_SONIC_BOOM,
    MOVE_DISABLE),

    egg_moves(CHINCHOU,
    MOVE_MIST,
    MOVE_PSYBEAM,
    MOVE_WATER_PULSE),

    egg_moves(PICHU,
    MOVE_DOUBLE_SLAP),

    egg_moves(IGGLYBUFF,
    MOVE_ROLLOUT),

    egg_moves(TOGEPI,
    MOVE_PECK,
    MOVE_SECRET_POWER,
    MOVE_AERIAL_ACE),

    egg_moves(NATU,
    MOVE_DRILL_PECK),

    egg_moves(MAREEP,
    MOVE_TAKE_DOWN),

    egg_moves(SUDOWOODO,
    MOVE_ROLLOUT),

    egg_moves(AIPOM,
    MOVE_DOUBLE_SLAP,
    MOVE_SLAM,
    MOVE_COUNTER,
    MOVE_IRON_TAIL),

    egg_moves(SUNKERN,
    MOVE_LEECH_SEED),

    egg_moves(YANMA,
    MOVE_WHIRLWIND,
    MOVE_DOUBLE_EDGE,
    MOVE_SECRET_POWER),

    egg_moves(WOOPER,
    MOVE_DOUBLE_KICK,
    MOVE_COUNTER),

    egg_moves(WOOPER_PALDEAN,
    MOVE_DOUBLE_KICK,
    MOVE_MIST,
    MOVE_COUNTER),

    egg_moves(MURKROW,
    MOVE_WHIRLWIND,
    MOVE_DRILL_PECK),

    egg_moves(GIRAFARIG,
    MOVE_RAZOR_WIND,
    MOVE_DOUBLE_KICK,
    MOVE_TAKE_DOWN,
    MOVE_SECRET_POWER),

    egg_moves(PINECO,
    MOVE_PIN_MISSILE,
    MOVE_COUNTER,
    MOVE_SWIFT),

    egg_moves(DUNSPARCE,
    MOVE_HEADBUTT,
    MOVE_BITE,
    MOVE_SECRET_POWER),

    egg_moves(GLIGAR,
    MOVE_RAZOR_WIND,
    MOVE_WING_ATTACK,
    MOVE_DOUBLE_EDGE,
    MOVE_COUNTER),

    egg_moves(SNUBBULL,
    MOVE_COUNTER,
    MOVE_MIMIC,
    MOVE_SNORE),

    egg_moves(QWILFISH,
    MOVE_SUPERSONIC,
    MOVE_BUBBLE_BEAM,
    MOVE_WATER_PULSE),

    egg_moves(QWILFISH_HISUIAN,
    MOVE_SUPERSONIC,
    MOVE_BUBBLE_BEAM,
    MOVE_WATER_PULSE),

    egg_moves(SHUCKLE,
    MOVE_ACID,
    MOVE_DEFENSE_CURL,
    MOVE_MUD_SLAP),

    egg_moves(HERACROSS,
    MOVE_DOUBLE_EDGE,
    MOVE_SEISMIC_TOSS),

    egg_moves(SNEASEL,
    MOVE_BITE,
    MOVE_COUNTER),

    egg_moves(SNEASEL_HISUIAN,
    MOVE_COUNTER),

    egg_moves(TEDDIURSA,
    MOVE_DOUBLE_EDGE,
    MOVE_COUNTER,
    MOVE_SEISMIC_TOSS,
    MOVE_FURY_CUTTER),

    egg_moves(SLUGMA,
    MOVE_ROLLOUT),

    egg_moves(SWINUB,
    MOVE_DOUBLE_EDGE,
    MOVE_BITE),

    egg_moves(CORSOLA,
    MOVE_MIST,
    MOVE_WATER_PULSE),

    egg_moves(CORSOLA_GALARIAN,
    MOVE_WATER_PULSE),

    egg_moves(REMORAID,
    MOVE_SUPERSONIC,
    MOVE_AURORA_BEAM,
    MOVE_SNORE),

    egg_moves(DELIBIRD,
    MOVE_AURORA_BEAM,
    MOVE_COUNTER),

    egg_moves(MANTINE,
    MOVE_SLAM,
    MOVE_HYDRO_PUMP),

    egg_moves(SKARMORY,
    MOVE_WHIRLWIND),

    egg_moves(HOUNDOUR,
    MOVE_COUNTER,
    MOVE_FIRE_SPIN),

    egg_moves(PHANPY,
    MOVE_BODY_SLAM,
    MOVE_COUNTER,
    MOVE_SNORE),

    egg_moves(STANTLER,
    MOVE_DOUBLE_KICK,
    MOVE_THRASH,
    MOVE_BITE,
    MOVE_DISABLE),

    egg_moves(TYROGUE,
    MOVE_COUNTER),

    egg_moves(SMOOCHUM,
    MOVE_ICE_PUNCH),

    egg_moves(ELEKID,
    MOVE_KARATE_CHOP,
    MOVE_ROLLING_KICK,
    MOVE_DYNAMIC_PUNCH,
    MOVE_FOCUS_PUNCH),

    egg_moves(MAGBY,
    MOVE_KARATE_CHOP,
    MOVE_DYNAMIC_PUNCH,
    MOVE_FOCUS_PUNCH),

    egg_moves(MILTANK,
    MOVE_DOUBLE_EDGE,
    MOVE_SEISMIC_TOSS,
    MOVE_FOCUS_PUNCH),

    egg_moves(LARVITAR,
    MOVE_STOMP),

    egg_moves(TREECKO,
    MOVE_RAZOR_WIND,
    MOVE_DOUBLE_KICK,
    MOVE_ABSORB,
    MOVE_LEECH_SEED),

    egg_moves(TORCHIC,
    MOVE_PECK,
    MOVE_COUNTER),

    egg_moves(MUDKIP,
    MOVE_STOMP,
    MOVE_BITE,
    MOVE_COUNTER,
    MOVE_MUD_SLAP),

    egg_moves(POOCHYENA,
    MOVE_SNATCH),

    egg_moves(ZIGZAGOON,
    MOVE_MUD_SLAP),

    egg_moves(LOTAD,
    MOVE_COUNTER,
    MOVE_RAZOR_LEAF),

    egg_moves(SEEDOT,
    MOVE_RAZOR_WIND,
    MOVE_TAKE_DOWN,
    MOVE_LEECH_SEED),

    egg_moves(TAILLOW,
    MOVE_WHIRLWIND,
    MOVE_SUPERSONIC,
    MOVE_STEEL_WING),

    egg_moves(WINGULL,
    MOVE_GUST,
    MOVE_AERIAL_ACE),

    egg_moves(RALTS,
    MOVE_DISABLE),

    egg_moves(SURSKIT,
    MOVE_HYDRO_PUMP,
    MOVE_PSYBEAM),

    egg_moves(NINCADA,
    MOVE_GUST),

    egg_moves(SLAKOTH,
    MOVE_BODY_SLAM,
    MOVE_SNORE),

    egg_moves(WHISMUR,
    MOVE_WHIRLWIND,
    MOVE_TAKE_DOWN,
    MOVE_SNORE),

    egg_moves(MAKUHITA,
    MOVE_COUNTER,
    MOVE_DYNAMIC_PUNCH),

    egg_moves(AZURILL,
    MOVE_SING,
    MOVE_SUPERSONIC),

    egg_moves(NOSEPASS,
    MOVE_DOUBLE_EDGE,
    MOVE_ROLLOUT),

    egg_moves(SABLEYE,
    MOVE_TORMENT),

    egg_moves(MAWILE,
    MOVE_SLAM,
    MOVE_SEISMIC_TOSS),

    egg_moves(ARON,
    MOVE_STOMP,
    MOVE_BODY_SLAM,
    MOVE_MUD_SLAP),

    egg_moves(MEDITITE,
    MOVE_FIRE_PUNCH,
    MOVE_ICE_PUNCH,
    MOVE_THUNDER_PUNCH,
    MOVE_DYNAMIC_PUNCH,
    MOVE_SECRET_POWER),

    egg_moves(ELECTRIKE,
    MOVE_HEADBUTT),

    egg_moves(PLUSLE,
    MOVE_SING),

    egg_moves(MINUN,
    MOVE_SING),

    egg_moves(VOLBEAT,
    MOVE_COUNTER,
    MOVE_SEISMIC_TOSS,
    MOVE_SWAGGER),

    egg_moves(ILLUMISE,
    MOVE_GROWTH,
    MOVE_ATTRACT),

    egg_moves(ROSELIA,
    MOVE_RAZOR_LEAF,
    MOVE_SLEEP_POWDER),

    egg_moves(GULPIN,
    MOVE_MUD_SLAP),

    egg_moves(CARVANHA,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE,
    MOVE_HYDRO_PUMP,
    MOVE_WATER_PULSE),

    egg_moves(WAILMER,
    MOVE_BODY_SLAM,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE,
    MOVE_DEFENSE_CURL,
    MOVE_SNORE,
    MOVE_ROLLOUT),

    egg_moves(NUMEL,
    MOVE_STOMP,
    MOVE_BODY_SLAM,
    MOVE_GROWTH,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(SPOINK,
    MOVE_WHIRLWIND),

    egg_moves(SPINDA,
    MOVE_DISABLE,
    MOVE_ICY_WIND,
    MOVE_WATER_PULSE),

    egg_moves(TRAPINCH,
    MOVE_GUST,
    MOVE_FURY_CUTTER),

    egg_moves(CACNEA,
    MOVE_DISABLE,
    MOVE_ACID,
    MOVE_COUNTER),

    egg_moves(ZANGOOSE,
    MOVE_RAZOR_WIND),

    egg_moves(SEVIPER,
    MOVE_BODY_SLAM),

    egg_moves(BARBOACH,
    MOVE_TAKE_DOWN,
    MOVE_THRASH),

    egg_moves(LILEEP,
    MOVE_BIND,
    MOVE_MEGA_DRAIN),

    egg_moves(ANORITH,
    MOVE_SAND_ATTACK,
    MOVE_WATER_PULSE),

    egg_moves(FEEBAS,
    MOVE_MIST),

    egg_moves(CASTFORM,
    MOVE_DISABLE),

    egg_moves(KECLEON,
    MOVE_DISABLE,
    MOVE_SKILL_SWAP,
    MOVE_SNATCH),

    egg_moves(SHUPPET,
    MOVE_DISABLE),

    egg_moves(TROPIUS,
    MOVE_RAZOR_WIND,
    MOVE_SLAM,
    MOVE_HEADBUTT,
    MOVE_LEECH_SEED),

    egg_moves(ABSOL,
    MOVE_DOUBLE_EDGE,
    MOVE_BITE),

    egg_moves(SNORUNT,
    MOVE_DISABLE,
    MOVE_ROLLOUT),

    egg_moves(SPHEAL,
    MOVE_ROLLOUT,
    MOVE_WATER_PULSE),

    egg_moves(CLAMPERL,
    MOVE_BODY_SLAM,
    MOVE_SUPERSONIC,
    MOVE_ENDURE,
    MOVE_WATER_PULSE),

    egg_moves(RELICANTH,
    MOVE_SNORE,
    MOVE_MUD_SLAP),

    egg_moves(LUVDISC,
    MOVE_SUPERSONIC),

    egg_moves(BAGON,
    MOVE_THRASH,
    MOVE_DRAGON_RAGE,
    MOVE_DEFENSE_CURL),

    egg_moves(TURTWIG,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE,
    MOVE_GROWTH),

    egg_moves(CHIMCHAR,
    MOVE_FIRE_PUNCH,
    MOVE_THUNDER_PUNCH,
    MOVE_DOUBLE_KICK,
    MOVE_SUBMISSION,
    MOVE_COUNTER),

    egg_moves(PIPLUP,
    MOVE_SUPERSONIC,
    MOVE_SNORE),

    egg_moves(STARLY,
    MOVE_SAND_ATTACK,
    MOVE_FURY_ATTACK,
    MOVE_DOUBLE_EDGE),

    egg_moves(BIDOOF,
    MOVE_DOUBLE_EDGE,
    MOVE_DEFENSE_CURL,
    MOVE_ENDURE,
    MOVE_ROLLOUT,
    MOVE_SLEEP_TALK),

    egg_moves(SHINX,
    MOVE_DOUBLE_KICK,
    MOVE_TAKE_DOWN,
    MOVE_SHOCK_WAVE),

    egg_moves(BUDEW,
    MOVE_PIN_MISSILE,
    MOVE_RAZOR_LEAF,
    MOVE_SLEEP_POWDER),

    egg_moves(CRANIDOS,
    MOVE_WHIRLWIND,
    MOVE_STOMP,
    MOVE_THRASH),

    egg_moves(SHIELDON,
    MOVE_HEADBUTT,
    MOVE_COUNTER),

    egg_moves(PACHIRISU,
    MOVE_TAIL_WHIP,
    MOVE_BITE,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(BUIZEL,
    MOVE_DOUBLE_SLAP,
    MOVE_HEADBUTT,
    MOVE_MUD_SLAP,
    MOVE_FURY_CUTTER),

    egg_moves(CHERUBI,
    MOVE_RAZOR_LEAF,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(SHELLOS,
    MOVE_MIST,
    MOVE_COUNTER),

    egg_moves(DRIFLOON,
    MOVE_DISABLE),

    egg_moves(BUNEARY,
    MOVE_FIRE_PUNCH,
    MOVE_ICE_PUNCH,
    MOVE_THUNDER_PUNCH,
    MOVE_LOW_KICK,
    MOVE_FOCUS_PUNCH),

    egg_moves(GLAMEOW,
    MOVE_SAND_ATTACK,
    MOVE_TAIL_WHIP,
    MOVE_BITE,
    MOVE_SNATCH),

    egg_moves(CHINGLING,
    MOVE_DISABLE),

    egg_moves(STUNKY,
    MOVE_DOUBLE_EDGE,
    MOVE_LEER),

    egg_moves(BONSLY,
    MOVE_HEADBUTT,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(MIME_JR,
    MOVE_MIMIC,
    MOVE_ICY_WIND),

    egg_moves(HAPPINY,
    MOVE_SEISMIC_TOSS),

    egg_moves(CHATOT,
    MOVE_SUPERSONIC,
    MOVE_STEEL_WING,
    MOVE_SLEEP_TALK),

    egg_moves(SPIRITOMB,
    MOVE_DISABLE),

    egg_moves(GIBLE,
    MOVE_THRASH,
    MOVE_DOUBLE_EDGE),

    egg_moves(MUNCHLAX,
    MOVE_DOUBLE_EDGE,
    MOVE_COUNTER),

    egg_moves(RIOLU,
    MOVE_BITE),

    egg_moves(HIPPOPOTAS,
    MOVE_WHIRLWIND),

    egg_moves(SKORUPI,
    MOVE_WHIRLWIND,
    MOVE_SAND_ATTACK,
    MOVE_TWINEEDLE),

    egg_moves(CROAGUNK,
    MOVE_HEADBUTT,
    MOVE_COUNTER,
    MOVE_DYNAMIC_PUNCH),

    egg_moves(CARNIVINE,
    MOVE_SLAM,
    MOVE_LEECH_SEED,
    MOVE_RAZOR_LEAF,
    MOVE_STUN_SPORE,
    MOVE_SLEEP_POWDER),

    egg_moves(FINNEON,
    MOVE_PSYBEAM,
    MOVE_AURORA_BEAM),

    egg_moves(MANTYKE,
    MOVE_SLAM,
    MOVE_HYDRO_PUMP),

    egg_moves(SNOVER,
    MOVE_STOMP,
    MOVE_DOUBLE_EDGE,
    MOVE_LEECH_SEED,
    MOVE_GROWTH),

    egg_moves(SNIVY,
    MOVE_IRON_TAIL),

    egg_moves(TEPIG,
    MOVE_THRASH),

    egg_moves(LILLIPUP,
    MOVE_MUD_SLAP),

    egg_moves(PATRAT,
    MOVE_IRON_TAIL,
    MOVE_BULLET_SEED),

    egg_moves(PURRLOIN,
    MOVE_DOUBLE_TEAM),

    egg_moves(PANSAGE,
    MOVE_LOW_KICK,
    MOVE_BULLET_SEED),

    egg_moves(PANSEAR,
    MOVE_FIRE_PUNCH,
    MOVE_LOW_KICK,
    MOVE_FIRE_SPIN,
    MOVE_SLEEP_TALK),

    egg_moves(PANPOUR,
    MOVE_HYDRO_PUMP,
    MOVE_LOW_KICK),

    egg_moves(MUNNA,
    MOVE_SONIC_BOOM,
    MOVE_SECRET_POWER),

    egg_moves(BLITZLE,
    MOVE_DOUBLE_KICK,
    MOVE_SAND_ATTACK,
    MOVE_SNATCH),

    egg_moves(ROGGENROLA,
    MOVE_TAKE_DOWN),

    egg_moves(WOOBAT,
    MOVE_SUPERSONIC),

    egg_moves(DRILBUR,
    MOVE_SUBMISSION),

    egg_moves(TIMBURR,
    MOVE_COMET_PUNCH,
    MOVE_COUNTER),

    egg_moves(TYMPOLE,
    MOVE_MIST,
    MOVE_TOXIC,
    MOVE_MUD_SLAP,
    MOVE_WATER_PULSE),

    egg_moves(SEWADDLE,
    MOVE_RAZOR_WIND,
    MOVE_SNORE),

    egg_moves(VENIPEDE,
    MOVE_TWINEEDLE,
    MOVE_BITE,
    MOVE_FURY_CUTTER),

    egg_moves(BASCULIN,
    MOVE_BUBBLE_BEAM),

    egg_moves(BASCULIN_BLUE_STRIPED,
    MOVE_BUBBLE_BEAM),

    egg_moves(BASCULIN_WHITE_STRIPED,
    MOVE_BUBBLE_BEAM),

    egg_moves(SANDILE,
    MOVE_DOUBLE_EDGE,
    MOVE_COUNTER),

    egg_moves(DARUMAKA,
    MOVE_TAKE_DOWN,
    MOVE_FOCUS_PUNCH,
    MOVE_SNATCH),

    egg_moves(DARUMAKA_GALARIAN,
    MOVE_TAKE_DOWN,
    MOVE_FOCUS_PUNCH),

    egg_moves(DWEBBLE,
    MOVE_COUNTER),

    egg_moves(SCRAGGY,
    MOVE_COUNTER),

    egg_moves(TIRTOUGA,
    MOVE_SLAM,
    MOVE_BODY_SLAM,
    MOVE_ROLLOUT,
    MOVE_WATER_PULSE),

    egg_moves(ARCHEN,
    MOVE_BITE,
    MOVE_DOUBLE_TEAM),

    egg_moves(TRUBBISH,
    MOVE_SAND_ATTACK,
    MOVE_ROLLOUT),

    egg_moves(ZORUA,
    MOVE_COUNTER,
    MOVE_SNATCH),

    egg_moves(MINCCINO,
    MOVE_TAIL_WHIP),

    egg_moves(GOTHITA,
    MOVE_TORMENT),

    egg_moves(SOLOSIS,
    MOVE_SECRET_POWER),

    egg_moves(DUCKLETT,
    MOVE_GUST,
    MOVE_STEEL_WING,
    MOVE_DIVE),

    egg_moves(VANILLITE,
    MOVE_EXPLOSION),

    egg_moves(DEERLING,
    MOVE_HEADBUTT,
    MOVE_SLEEP_TALK),

    egg_moves(EMOLGA,
    MOVE_SHOCK_WAVE),

    egg_moves(KARRABLAST,
    MOVE_COUNTER),

    egg_moves(FOONGUS,
    MOVE_POISON_POWDER,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(FRILLISH,
    MOVE_MIST,
    MOVE_BUBBLE_BEAM),

    egg_moves(ALOMOMOLA,
    MOVE_MIST,
    MOVE_ENDURE),

    egg_moves(JOLTIK,
    MOVE_POISON_STING,
    MOVE_DOUBLE_TEAM),

    egg_moves(FERROSEED,
    MOVE_LEECH_SEED,
    MOVE_TOXIC),

    egg_moves(ELGYEM,
    MOVE_DISABLE,
    MOVE_PSYCH_UP),

    egg_moves(AXEW,
    MOVE_RAZOR_WIND,
    MOVE_COUNTER,
    MOVE_IRON_TAIL),

    egg_moves(CUBCHOO,
    MOVE_FOCUS_PUNCH),

    egg_moves(CRYOGONAL,
    MOVE_EXPLOSION),

    egg_moves(SHELMET,
    MOVE_DOUBLE_EDGE),

    egg_moves(STUNFISK_GALARIAN,
    MOVE_BIND,
    MOVE_COUNTER),

    egg_moves(MIENFOO,
    MOVE_FOCUS_PUNCH),

    egg_moves(DRUDDIGON,
    MOVE_SNATCH),

    egg_moves(PAWNIARD,
    MOVE_HEADBUTT),

    egg_moves(BOUFFALANT,
    MOVE_STOMP,
    MOVE_HEADBUTT,
    MOVE_MUD_SLAP),

    egg_moves(RUFFLET,
    MOVE_ROCK_SMASH),

    egg_moves(VULLABY,
    MOVE_TOXIC),

    egg_moves(HEATMOR,
    MOVE_BODY_SLAM),

    egg_moves(LARVESTA,
    MOVE_THRASH,
    MOVE_ABSORB),

    egg_moves(FROAKIE,
    MOVE_COUNTER),

    egg_moves(BUNNELBY,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(FLETCHLING,
    MOVE_SNATCH),

    egg_moves(SCATTERBUG,
    MOVE_POISON_POWDER),

    egg_moves(LITLEO,
    MOVE_FIRE_SPIN,
    MOVE_SNATCH),

    egg_moves(SKIDDO,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(PANCHAM,
    MOVE_SEISMIC_TOSS),

    egg_moves(FURFROU,
    MOVE_MIMIC),

    egg_moves(SPRITZEE,
    MOVE_DISABLE),

    egg_moves(INKAY,
    MOVE_DISABLE),

    egg_moves(BINACLE,
    MOVE_SAND_ATTACK),

    egg_moves(CLAUNCHER,
    MOVE_BUBBLE_BEAM),

    egg_moves(AMAURA,
    MOVE_TAKE_DOWN),

    egg_moves(GOOMY,
    MOVE_COUNTER),

    egg_moves(PHANTUMP,
    MOVE_DISABLE),

    egg_moves(PUMPKABOO,
    MOVE_DISABLE),

    egg_moves(PUMPKABOO_SMALL,
    MOVE_DISABLE),

    egg_moves(PUMPKABOO_LARGE,
    MOVE_DISABLE),

    egg_moves(PUMPKABOO_SUPER,
    MOVE_DISABLE),

    egg_moves(BERGMITE,
    MOVE_MIST),

    egg_moves(NOIBAT,
    MOVE_SNATCH),

    egg_moves(ROWLET,
    MOVE_DOUBLE_TEAM),

    egg_moves(CRABRAWLER,
    MOVE_FOCUS_PUNCH),

    egg_moves(ORICORIO,
    MOVE_ATTRACT,
    MOVE_SAFEGUARD),

    egg_moves(ORICORIO_POM_POM,
    MOVE_ATTRACT,
    MOVE_SAFEGUARD),

    egg_moves(ORICORIO_PAU,
    MOVE_ATTRACT,
    MOVE_SAFEGUARD),

    egg_moves(ORICORIO_SENSU,
    MOVE_ATTRACT,
    MOVE_SAFEGUARD),

    egg_moves(ROCKRUFF,
    MOVE_THRASH),

    egg_moves(WISHIWASHI,
    MOVE_TAKE_DOWN,
    MOVE_MIST,
    MOVE_WATER_PULSE),

    egg_moves(MUDBRAY,
    MOVE_DOUBLE_EDGE,
    MOVE_ROAR),

    egg_moves(MORELULL,
    MOVE_LEECH_SEED,
    MOVE_GROWTH,
    MOVE_POISON_POWDER),
    MOVE_STUN_SPORE,

    egg_moves(SALANDIT,
    MOVE_SAND_ATTACK,
    MOVE_MUD_SLAP,
    MOVE_SNATCH),

    egg_moves(STUFFUL,
    MOVE_ICE_PUNCH,
    MOVE_THUNDER_PUNCH,
    MOVE_STOMP,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(ORANGURU,
    MOVE_DREAM_EATER),

    egg_moves(PASSIMIAN,
    MOVE_COUNTER,
    MOVE_SEISMIC_TOSS),

    egg_moves(WIMPOD,
    MOVE_ROLLOUT),

    egg_moves(PYUKUMUKU,
    MOVE_SWAGGER),

    egg_moves(KOMALA,
    MOVE_SING),

    egg_moves(TOGEDEMARU,
    MOVE_TWINEEDLE),

    egg_moves(BRUXISH,
    MOVE_WATER_PULSE),

    egg_moves(DRAMPA,
    MOVE_RAZOR_WIND,
    MOVE_MIST),

    egg_moves(JANGMO_O,
    MOVE_COUNTER,
    MOVE_FOCUS_PUNCH),

    egg_moves(GROOKEY,
    MOVE_STRENGTH,
    MOVE_LEECH_SEED,
    MOVE_GROWTH),

    egg_moves(SCORBUNNY,
    MOVE_SAND_ATTACK),

    egg_moves(SOBBLE,
    MOVE_MIST,
    MOVE_DOUBLE_TEAM),

    egg_moves(SKWOVET,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(ROOKIDEE,
    MOVE_SAND_ATTACK,
    MOVE_ROCK_SMASH),

    egg_moves(BLIPBUG,
    MOVE_SUPERSONIC),

    egg_moves(NICKIT,
    MOVE_TORMENT),

    egg_moves(GOSSIFLEUR,
    MOVE_LEECH_SEED,
    MOVE_GROWTH,
    MOVE_POISON_POWDER,
    MOVE_STUN_SPORE,
    MOVE_SLEEP_POWDER),

    egg_moves(WOOLOO,
    MOVE_STOMP,
    MOVE_COUNTER,
    MOVE_SWAGGER),

    egg_moves(YAMPER,
    MOVE_SAND_ATTACK,
    MOVE_DOUBLE_EDGE),

    egg_moves(ROLYCOLY,
    MOVE_EXPLOSION,
    MOVE_MUD_SLAP),

    egg_moves(APPLIN,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(SILICOBRA,
    MOVE_MUD_SLAP),

    egg_moves(CRAMORANT,
    MOVE_AERIAL_ACE),

    egg_moves(ARROKUDA,
    MOVE_THRASH),

    egg_moves(SIZZLIPEDE,
    MOVE_DEFENSE_CURL,
    MOVE_ROLLOUT),

    egg_moves(CLOBBOPUS,
    MOVE_SEISMIC_TOSS),

    egg_moves(EISCUE,
    MOVE_DOUBLE_EDGE),

    egg_moves(INDEEDEE,
    MOVE_PSYCH_UP),

    egg_moves(INDEEDEE_FEMALE,
    MOVE_PSYCH_UP),

    egg_moves(MORPEKO,
    MOVE_SWAGGER),

    egg_moves(CUFANT,
    MOVE_WHIRLWIND,
    MOVE_SLAM,
    MOVE_DOUBLE_EDGE,
    MOVE_DEFENSE_CURL,
    MOVE_SWAGGER),

    egg_moves(DREEPY,
    MOVE_DISABLE,
    MOVE_DOUBLE_TEAM),

    egg_moves(SPRIGATITO,
    MOVE_LEECH_SEED),

    egg_moves(NYMBLE,
    MOVE_COUNTER),

    egg_moves(TANDEMAUS,
    MOVE_BITE),

    egg_moves(SQUAWKABILLY,
    MOVE_DOUBLE_EDGE),

    egg_moves(CHARCADET,
    MOVE_DISABLE),

    egg_moves(SHROODLE,
    MOVE_TOXIC,
    MOVE_SWAGGER),

    egg_moves(BRAMBLIN,
    MOVE_LEECH_SEED),

    egg_moves(TOEDSCOOL,
    MOVE_LEECH_SEED,
    MOVE_TOXIC),

    egg_moves(CAPSAKID,
    MOVE_LEECH_SEED,
    MOVE_ROLLOUT),

    egg_moves(FINIZEN,
    MOVE_COUNTER),

    egg_moves(VAROOM,
    MOVE_TOXIC,
    MOVE_TORMENT),

    egg_moves(CYCLIZAR,
    MOVE_IRON_TAIL),

    egg_moves(GLIMMET,
    MOVE_TOXIC,
    MOVE_EXPLOSION),

    egg_moves(GREAVARD,
    MOVE_DISABLE),

    egg_moves(FLAMIGO,
    MOVE_DOUBLE_TEAM),

    egg_moves(VELUZA,
    MOVE_THRASH),

    egg_moves(DONDOZO,
    MOVE_THRASH),

    egg_moves(TATSUGIRI,
    MOVE_COUNTER),

    EGG_MOVES_TERMINATOR
};
