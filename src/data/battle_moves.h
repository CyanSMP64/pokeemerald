const struct BattleMove gBattleMoves[MOVES_COUNT] =
{
    [MOVE_NONE] =
    {
        .effect = EFFECT_HIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POUND] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_KARATE_CHOP] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 50,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DOUBLE_SLAP] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_COMET_PUNCH] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MEGA_PUNCH] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_PAY_DAY] =
    {
        .effect = EFFECT_PAY_DAY,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FIRE_PUNCH] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ICE_PUNCH] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_THUNDER_PUNCH] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 75,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SCRATCH] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_VICE_GRIP] =
    {
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_GUILLOTINE] =
    {
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_RAZOR_WIND] =
    {
        .effect = EFFECT_RAZOR_WIND,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SWORDS_DANCE] =
    {
        .effect = EFFECT_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CUT] =
    {
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_GUST] =
    {
        .effect = EFFECT_GUST,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_WING_ATTACK] =
    {
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_WHIRLWIND] =
    {
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLY] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_BIND] =
    {
        .effect = EFFECT_TRAP,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SLAM] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_VINE_WHIP] =
    {
        .effect = EFFECT_HIT,
        .power = 45,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_STOMP] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DOUBLE_KICK] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 30,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MEGA_KICK] =
    {
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_JUMP_KICK] =
    {
        .effect = EFFECT_RECOIL_IF_MISS,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ROLLING_KICK] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SAND_ATTACK] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEADBUTT] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_HORN_ATTACK] =
    {
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FURY_ATTACK] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_HORN_DRILL] =
    {
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TACKLE] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_BODY_SLAM] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 85,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_WRAP] =
    {
        .effect = EFFECT_TRAP,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TAKE_DOWN] =
    {
        .effect = EFFECT_RECOIL,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_THRASH] =
    {
        .effect = EFFECT_RAMPAGE,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DOUBLE_EDGE] =
    {
        .effect = EFFECT_DOUBLE_EDGE,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TAIL_WHIP] =
    {
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POISON_STING] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 15,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TWINEEDLE] =
    {
        .effect = EFFECT_TWINEEDLE,
        .power = 25,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_PIN_MISSILE] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_LEER] =
    {
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BITE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_GROWL] =
    {
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROAR] =
    {
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SING] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SUPERSONIC] =
    {
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SONIC_BOOM] =
    {
        .effect = EFFECT_SONICBOOM,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_DISABLE] =
    {
        .effect = EFFECT_DISABLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ACID] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_EMBER] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 40,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_FLAMETHROWER] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_MIST] =
    {
        .effect = EFFECT_MIST,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WATER_GUN] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_HYDRO_PUMP] =
    {
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_WATER,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SURF] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_ICE_BEAM] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .power = 90,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BLIZZARD] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .power = 110,
        .type = TYPE_ICE,
        .accuracy = 70,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_PSYBEAM] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 65,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BUBBLE_BEAM] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_AURORA_BEAM] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_HYPER_BEAM] =
    {
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_PECK] =
    {
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DRILL_PECK] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SUBMISSION] =
    {
        .effect = EFFECT_RECOIL,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_LOW_KICK] =
    {
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_COUNTER] =
    {
        .effect = EFFECT_COUNTER,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SEISMIC_TOSS] =
    {
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_STRENGTH] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ABSORB] =
    {
        .effect = EFFECT_ABSORB,
        .power = 20,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_MEGA_DRAIN] =
    {
        .effect = EFFECT_ABSORB,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_LEECH_SEED] =
    {
        .effect = EFFECT_LEECH_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GROWTH] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RAZOR_LEAF] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 55,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SOLAR_BEAM] =
    {
        .effect = EFFECT_SOLAR_BEAM,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_POISON_POWDER] =
    {
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 75,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STUN_SPORE] =
    {
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SLEEP_POWDER] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PETAL_DANCE] =
    {
        .effect = EFFECT_RAMPAGE,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_STRING_SHOT] =
    {
        .effect = EFFECT_SPEED_DOWN,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_RAGE] =
    {
        .effect = EFFECT_DRAGON_RAGE,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_FIRE_SPIN] =
    {
        .effect = EFFECT_TRAP,
        .power = 35,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_THUNDER_SHOCK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 40,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_THUNDERBOLT] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_THUNDER_WAVE] =
    {
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THUNDER] =
    {
        .effect = EFFECT_THUNDER,
        .power = 110,
        .type = TYPE_ELECTRIC,
        .accuracy = 70,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_ROCK_THROW] =
    {
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_EARTHQUAKE] =
    {
        .effect = EFFECT_EARTHQUAKE,
        .power = 100,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FISSURE] =
    {
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DIG] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TOXIC] =
    {
        .effect = EFFECT_TOXIC,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CONFUSION] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 50,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_PSYCHIC] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_HYPNOSIS] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 60,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MEDITATE] =
    {
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AGILITY] =
    {
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_QUICK_ATTACK] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_RAGE] =
    {
        .effect = EFFECT_RAGE,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TELEPORT] =
    {
        .effect = EFFECT_TELEPORT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = -6,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NIGHT_SHADE] =
    {
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_MIMIC] =
    {
        .effect = EFFECT_MIMIC,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SCREECH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DOUBLE_TEAM] =
    {
        .effect = EFFECT_EVASION_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RECOVER] =
    {
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HARDEN] =
    {
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MINIMIZE] =
    {
        .effect = EFFECT_MINIMIZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SMOKESCREEN] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CONFUSE_RAY] =
    {
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WITHDRAW] =
    {
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DEFENSE_CURL] =
    {
        .effect = EFFECT_DEFENSE_CURL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BARRIER] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LIGHT_SCREEN] =
    {
        .effect = EFFECT_LIGHT_SCREEN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HAZE] =
    {
        .effect = EFFECT_HAZE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_REFLECT] =
    {
        .effect = EFFECT_REFLECT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FOCUS_ENERGY] =
    {
        .effect = EFFECT_FOCUS_ENERGY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BIDE] =
    {
        .effect = EFFECT_BIDE,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_METRONOME] =
    {
        .effect = EFFECT_METRONOME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MIRROR_MOVE] =
    {
        .effect = EFFECT_MIRROR_MOVE,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SELF_DESTRUCT] =
    {
        .effect = EFFECT_EXPLOSION,
        .power = 200,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_EGG_BOMB] =
    {
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_LICK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 30,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SMOG] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 30,
        .type = TYPE_POISON,
        .accuracy = 70,
        .pp = 20,
        .secondaryEffectChance = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SLUDGE] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BONE_CLUB] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FIRE_BLAST] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 110,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_WATERFALL] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_CLAMP] =
    {
        .effect = EFFECT_TRAP,
        .power = 35,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SWIFT] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SKULL_BASH] =
    {
        .effect = EFFECT_SKULL_BASH,
        .power = 130,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SPIKE_CANNON] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_CONSTRICT] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_AMNESIA] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_KINESIS] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 80,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SOFT_BOILED] =
    {
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HI_JUMP_KICK] =
    {
        .effect = EFFECT_RECOIL_IF_MISS,
        .power = 130,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_GLARE] =
    {
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DREAM_EATER] =
    {
        .effect = EFFECT_DREAM_EATER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_POISON_GAS] =
    {
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BARRAGE] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_LEECH_LIFE] =
    {
        .effect = EFFECT_ABSORB,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_LOVELY_KISS] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SKY_ATTACK] =
    {
        .effect = EFFECT_SKY_ATTACK,
        .power = 140,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TRANSFORM] =
    {
        .effect = EFFECT_TRANSFORM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BUBBLE] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_DIZZY_PUNCH] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SPORE] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLASH] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYWAVE] =
    {
        .effect = EFFECT_PSYWAVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SPLASH] =
    {
        .effect = EFFECT_SPLASH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ACID_ARMOR] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CRABHAMMER] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 100,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_EXPLOSION] =
    {
        .effect = EFFECT_EXPLOSION,
        .power = 250,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FURY_SWIPES] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 80,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_BONEMERANG] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 50,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_REST] =
    {
        .effect = EFFECT_REST,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROCK_SLIDE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 75,
        .type = TYPE_ROCK,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_HYPER_FANG] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SHARPEN] =
    {
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CONVERSION] =
    {
        .effect = EFFECT_CONVERSION,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRI_ATTACK] =
    {
        .effect = EFFECT_TRI_ATTACK,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SUPER_FANG] =
    {
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SLASH] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SUBSTITUTE] =
    {
        .effect = EFFECT_SUBSTITUTE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STRUGGLE] =
    {
        .effect = EFFECT_RECOIL,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SKETCH] =
    {
        .effect = EFFECT_SKETCH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRIPLE_KICK] =
    {
        .effect = EFFECT_TRIPLE_KICK,
        .power = 10,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_THIEF] =
    {
        .effect = EFFECT_THIEF,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SPIDER_WEB] =
    {
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MIND_READER] =
    {
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NIGHTMARE] =
    {
        .effect = EFFECT_NIGHTMARE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLAME_WHEEL] =
    {
        .effect = EFFECT_THAW_HIT,
        .power = 60,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SNORE] =
    {
        .effect = EFFECT_SNORE,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_CURSE] =
    {
        .effect = EFFECT_CURSE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLAIL] =
    {
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_CONVERSION_2] =
    {
        .effect = EFFECT_CONVERSION_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER, // todo: investigate why this became MOVE_TARGET_SELECTED starting in gen 5
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AEROBLAST] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_COTTON_SPORE] =
    {
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_REVERSAL] =
    {
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SPITE] =
    {
        .effect = EFFECT_SPITE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWDER_SNOW] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_PROTECT] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MACH_PUNCH] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SCARY_FACE] =
    {
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FAINT_ATTACK] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SWEET_KISS] =
    {
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BELLY_DRUM] =
    {
        .effect = EFFECT_BELLY_DRUM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SLUDGE_BOMB] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_MUD_SLAP] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 20,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_OCTAZOOKA] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SPIKES] =
    {
        .effect = EFFECT_SPIKES,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .flags = FLAG_MAGIC_COAT_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ZAP_CANNON] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 50,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_FORESIGHT] =
    {
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DESTINY_BOND] =
    {
        .effect = EFFECT_DESTINY_BOND,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PERISH_SONG] =
    {
        .effect = EFFECT_PERISH_SONG,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICY_WIND] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 55,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_DETECT] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BONE_RUSH] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 30,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_LOCK_ON] =
    {
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_OUTRAGE] =
    {
        .effect = EFFECT_RAMPAGE,
        .power = 120,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SANDSTORM] =
    {
        .effect = EFFECT_SANDSTORM,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GIGA_DRAIN] =
    {
        .effect = EFFECT_ABSORB,
        .power = 75,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_ENDURE] =
    {
        .effect = EFFECT_ENDURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHARM] =
    {
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROLLOUT] =
    {
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FALSE_SWIPE] =
    {
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SWAGGER] =
    {
        .effect = EFFECT_SWAGGER,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MILK_DRINK] =
    {
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER, // todo: target either user or ally
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPARK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FURY_CUTTER] =
    {
        .effect = EFFECT_FURY_CUTTER,
        .power = 40,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_STEEL_WING] =
    {
        .effect = EFFECT_DEFENSE_UP_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MEAN_LOOK] =
    {
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ATTRACT] =
    {
        .effect = EFFECT_ATTRACT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SLEEP_TALK] =
    {
        .effect = EFFECT_SLEEP_TALK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAL_BELL] =
    {
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RETURN] =
    {
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_PRESENT] =
    {
        .effect = EFFECT_PRESENT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FRUSTRATION] =
    {
        .effect = EFFECT_FRUSTRATION,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SAFEGUARD] =
    {
        .effect = EFFECT_SAFEGUARD,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PAIN_SPLIT] =
    {
        .effect = EFFECT_PAIN_SPLIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SACRED_FIRE] =
    {
        .effect = EFFECT_THAW_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MAGNITUDE] =
    {
        .effect = EFFECT_MAGNITUDE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DYNAMIC_PUNCH] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 50,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MEGAHORN] =
    {
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_BUG,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DRAGON_BREATH] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BATON_PASS] =
    {
        .effect = EFFECT_BATON_PASS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ENCORE] =
    {
        .effect = EFFECT_ENCORE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PURSUIT] =
    {
        .effect = EFFECT_PURSUIT,
        .power = 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_RAPID_SPIN] =
    {
        .effect = EFFECT_RAPID_SPIN,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SWEET_SCENT] =
    {
        .effect = EFFECT_EVASION_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_IRON_TAIL] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 75,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_METAL_CLAW] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 35,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_VITAL_THROW] =
    {
        .effect = EFFECT_VITAL_THROW,
        .power = 70,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MORNING_SUN] =
    {
        .effect = EFFECT_MORNING_SUN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SYNTHESIS] =
    {
        .effect = EFFECT_SYNTHESIS,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MOONLIGHT] =
    {
        .effect = EFFECT_MOONLIGHT,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HIDDEN_POWER] =
    {
        .effect = EFFECT_HIDDEN_POWER,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_CROSS_CHOP] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_TWISTER] =
    {
        .effect = EFFECT_TWISTER,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_RAIN_DANCE] =
    {
        .effect = EFFECT_RAIN_DANCE,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SUNNY_DAY] =
    {
        .effect = EFFECT_SUNNY_DAY,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CRUNCH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MIRROR_COAT] =
    {
        .effect = EFFECT_MIRROR_COAT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_PSYCH_UP] =
    {
        .effect = EFFECT_PSYCH_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_EXTREME_SPEED] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ANCIENT_POWER] =
    {
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 60,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SHADOW_BALL] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_FUTURE_SIGHT] =
    {
        .effect = EFFECT_FUTURE_SIGHT,
        .power = 120,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_ROCK_SMASH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_WHIRLPOOL] =
    {
        .effect = EFFECT_TRAP,
        .power = 35,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BEAT_UP] =
    {
        .effect = EFFECT_BEAT_UP,
        .power = 10, // todo: gen 5+ power calculation based on party attack stats
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FAKE_OUT] =
    {
        .effect = EFFECT_FAKE_OUT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_UPROAR] =
    {
        .effect = EFFECT_UPROAR,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_STOCKPILE] =
    {
        .effect = EFFECT_STOCKPILE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPIT_UP] =
    {
        .effect = EFFECT_SPIT_UP,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SWALLOW] =
    {
        .effect = EFFECT_SWALLOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAT_WAVE] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 95,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_HAIL] =
    {
        .effect = EFFECT_HAIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TORMENT] =
    {
        .effect = EFFECT_TORMENT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLATTER] =
    {
        .effect = EFFECT_FLATTER,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WILL_O_WISP] =
    {
        .effect = EFFECT_WILL_O_WISP,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MEMENTO] =
    {
        .effect = EFFECT_MEMENTO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FACADE] =
    {
        .effect = EFFECT_FACADE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FOCUS_PUNCH] =
    {
        .effect = EFFECT_FOCUS_PUNCH,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SMELLING_SALT] =
    {
        .effect = EFFECT_SMELLINGSALT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FOLLOW_ME] =
    {
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 2,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NATURE_POWER] =
    {
        .effect = EFFECT_NATURE_POWER,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHARGE] =
    {
        .effect = EFFECT_CHARGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TAUNT] =
    {
        .effect = EFFECT_TAUNT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HELPING_HAND] =
    {
        .effect = EFFECT_HELPING_HAND,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 5,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRICK] =
    {
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROLE_PLAY] =
    {
        .effect = EFFECT_ROLE_PLAY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WISH] =
    {
        .effect = EFFECT_WISH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ASSIST] =
    {
        .effect = EFFECT_ASSIST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_INGRAIN] =
    {
        .effect = EFFECT_INGRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SUPERPOWER] =
    {
        .effect = EFFECT_SUPERPOWER,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MAGIC_COAT] =
    {
        .effect = EFFECT_MAGIC_COAT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RECYCLE] =
    {
        .effect = EFFECT_RECYCLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_REVENGE] =
    {
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -4,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_BRICK_BREAK] =
    {
        .effect = EFFECT_BRICK_BREAK,
        .power = 75,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_YAWN] =
    {
        .effect = EFFECT_YAWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_KNOCK_OFF] =
    {
        .effect = EFFECT_KNOCK_OFF,
        .power = 65,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ENDEAVOR] =
    {
        .effect = EFFECT_ENDEAVOR,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ERUPTION] =
    {
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SKILL_SWAP] =
    {
        .effect = EFFECT_SKILL_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_IMPRISON] =
    {
        .effect = EFFECT_IMPRISON,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_REFRESH] =
    {
        .effect = EFFECT_REFRESH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRUDGE] =
    {
        .effect = EFFECT_GRUDGE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SNATCH] =
    {
        .effect = EFFECT_SNATCH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SECRET_POWER] =
    {
        .effect = EFFECT_SECRET_POWER,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DIVE] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ARM_THRUST] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_CAMOUFLAGE] =
    {
        .effect = EFFECT_CAMOUFLAGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TAIL_GLOW] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LUSTER_PURGE] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 95,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_MIST_BALL] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 95,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_FEATHER_DANCE] =
    {
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TEETER_DANCE] =
    {
        .effect = EFFECT_TEETER_DANCE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BLAZE_KICK] =
    {
        .effect = EFFECT_BLAZE_KICK,
        .power = 85,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MUD_SPORT] =
    {
        .effect = EFFECT_MUD_SPORT,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICE_BALL] =
    {
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_NEEDLE_ARM] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SLACK_OFF] =
    {
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HYPER_VOICE] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_POISON_FANG] =
    {
        .effect = EFFECT_POISON_FANG,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_CRUSH_CLAW] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_BLAST_BURN] =
    {
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_HYDRO_CANNON] =
    {
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_METEOR_MASH] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 90,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ASTONISH] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 30,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_WEATHER_BALL] =
    {
        .effect = EFFECT_WEATHER_BALL,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_AROMATHERAPY] =
    {
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FAKE_TEARS] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AIR_CUTTER] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_OVERHEAT] =
    {
        .effect = EFFECT_OVERHEAT,
        .power = 130,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_ODOR_SLEUTH] =
    {
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROCK_TOMB] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 60,
        .type = TYPE_ROCK,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SILVER_WIND] =
    {
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_METAL_SOUND] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRASS_WHISTLE] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 55,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TICKLE] =
    {
        .effect = EFFECT_TICKLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COSMIC_POWER] =
    {
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WATER_SPOUT] =
    {
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SIGNAL_BEAM] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 75,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SHADOW_PUNCH] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_EXTRASENSORY] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_SKY_UPPERCUT] =
    {
        .effect = EFFECT_SKY_UPPERCUT,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SAND_TOMB] =
    {
        .effect = EFFECT_TRAP,
        .power = 35,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SHEER_COLD] =
    {
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_MUDDY_WATER] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BULLET_SEED] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_AERIAL_ACE] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_ICICLE_SPEAR] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_IRON_DEFENSE] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BLOCK] =
    {
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HOWL] =
    {
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_CLAW] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FRENZY_PLANT] =
    {
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BULK_UP] =
    {
        .effect = EFFECT_BULK_UP,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BOUNCE] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 85,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MUD_SHOT] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 55,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_POISON_TAIL] =
    {
        .effect = EFFECT_POISON_TAIL,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_COVET] =
    {
        .effect = EFFECT_THIEF,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_VOLT_TACKLE] =
    {
        .effect = EFFECT_DOUBLE_EDGE,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MAGICAL_LEAF] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_WATER_SPORT] =
    {
        .effect = EFFECT_WATER_SPORT,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CALM_MIND] =
    {
        .effect = EFFECT_CALM_MIND,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LEAF_BLADE] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .power = 90,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_DRAGON_DANCE] =
    {
        .effect = EFFECT_DRAGON_DANCE,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROCK_BLAST] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_SHOCK_WAVE] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .power = 60,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_WATER_PULSE] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_DOOM_DESIRE] =
    {
        .effect = EFFECT_FUTURE_SIGHT,
        .power = 140,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_PSYCHO_BOOST] =
    {
        .effect = EFFECT_OVERHEAT,
        .power = 140,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_ROOST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRAVITY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MIRACLE_EYE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WAKE_UP_SLAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HAMMER_ARM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GYRO_BALL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEALING_WISH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BRINE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NATURAL_GIFT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FEINT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PLUCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TAILWIND] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ACUPRESSURE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_METAL_BURST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_U_TURN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CLOSE_COMBAT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PAYBACK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ASSURANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_EMBARGO] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYCHO_SHIFT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRUMP_CARD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAL_BLOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WRING_OUT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWER_TRICK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GASTRO_ACID] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LUCKY_CHANT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ME_FIRST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COPYCAT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWER_SWAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GUARD_SWAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PUNISHMENT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LAST_RESORT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WORRY_SEED] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SUCKER_PUNCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TOXIC_SPIKES] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEART_SWAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AQUA_RING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAGNET_RISE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLARE_BLITZ] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FORCE_PALM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AURA_SPHERE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROCK_POLISH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POISON_JAB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DARK_PULSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NIGHT_SLASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AQUA_TAIL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SEED_BOMB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AIR_SLASH] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 75,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_X_SCISSOR] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BUG_BUZZ] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_PULSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_RUSH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWER_GEM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAIN_PUNCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_VACUUM_WAVE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FOCUS_BLAST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ENERGY_BALL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BRAVE_BIRD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_EARTH_POWER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SWITCHEROO] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GIGA_IMPACT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NASTY_PLOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BULLET_PUNCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AVALANCHE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICE_SHARD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHADOW_CLAW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THUNDER_FANG] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICE_FANG] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FIRE_FANG] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHADOW_SNEAK] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .power = 40,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_MUD_BOMB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYCHO_CUT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ZEN_HEADBUTT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MIRROR_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLASH_CANNON] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROCK_CLIMB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DEFOG] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRICK_ROOM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRACO_METEOR] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DISCHARGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LAVA_PLUME] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LEAF_STORM] =
    {
        .effect = EFFECT_OVERHEAT,
        .power = 130,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_POWER_WHIP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROCK_WRECKER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CROSS_POISON] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GUNK_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_IRON_HEAD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAGNET_BOMB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STONE_EDGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CAPTIVATE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STEALTH_ROCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRASS_KNOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHATTER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_JUDGMENT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BUG_BITE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHARGE_BEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WOOD_HAMMER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AQUA_JET] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ATTACK_ORDER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DEFEND_ORDER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAL_ORDER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAD_SMASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DOUBLE_HIT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROAR_OF_TIME] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPACIAL_REND] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LUNAR_DANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CRUSH_GRIP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAGMA_STORM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DARK_VOID] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SEED_FLARE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_OMINOUS_WIND] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHADOW_FORCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HONE_CLAWS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WIDE_GUARD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GUARD_SPLIT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWER_SPLIT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WONDER_ROOM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYSHOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_VENOSHOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AUTOTOMIZE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RAGE_POWDER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TELEKINESIS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAGIC_ROOM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SMACK_DOWN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STORM_THROW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLAME_BURST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SLUDGE_WAVE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_QUIVER_DANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAVY_SLAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SYNCHRONOISE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ELECTRO_BALL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SOAK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLAME_CHARGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COIL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LOW_SWEEP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ACID_SPRAY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FOUL_PLAY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SIMPLE_BEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ENTRAINMENT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AFTER_YOU] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROUND] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ECHOED_VOICE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHIP_AWAY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CLEAR_SMOG] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STORED_POWER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_QUICK_GUARD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ALLY_SWITCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SCALD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHELL_SMASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAL_PULSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEX] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SKY_DROP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHIFT_GEAR] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CIRCLE_THROW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_INCINERATE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_QUASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ACROBATICS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_REFLECT_TYPE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RETALIATE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FINAL_GAMBIT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BESTOW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_INFERNO] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WATER_PLEDGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FIRE_PLEDGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRASS_PLEDGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_VOLT_SWITCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STRUGGLE_BUG] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 50,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BULLDOZE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FROST_BREATH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_TAIL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WORK_UP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ELECTROWEB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WILD_CHARGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRILL_RUN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DUAL_CHOP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEART_STAMP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HORN_LEECH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SACRED_SWORD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RAZOR_SHELL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAT_CRASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LEAF_TORNADO] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STEAMROLLER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COTTON_GUARD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NIGHT_DAZE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYSTRIKE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TAIL_SLAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HURRICANE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEAD_CHARGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GEAR_GRIND] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SEARING_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TECHNO_BLAST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RELIC_SONG] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SECRET_SWORD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GLACIATE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BOLT_STRIKE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BLUE_FLARE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FIERY_DANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FREEZE_SHOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICE_BURN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SNARL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICICLE_CRASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_V_CREATE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FUSION_FLARE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FUSION_BOLT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLYING_PRESS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAT_BLOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BELCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ROTOTILLER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STICKY_WEB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FELL_STINGER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PHANTOM_FORCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRICK_OR_TREAT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NOBLE_ROAR] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ION_DELUGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PARABOLIC_CHARGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FORESTS_CURSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PETAL_BLIZZARD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FREEZE_DRY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DISARMING_VOICE] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_PARTING_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TOPSY_TURVY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAINING_KISS] =
    {
        .effect = EFFECT_ABSORB,
        .power = 50,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_CRAFTY_SHIELD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLOWER_SHIELD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRASSY_TERRAIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MISTY_TERRAIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ELECTRIFY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PLAY_ROUGH] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_PHYSICAL,
    },

    [MOVE_FAIRY_WIND] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_MOONBLAST] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 95,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_BOOMBURST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FAIRY_LOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_KINGS_SHIELD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PLAY_NICE] =
    {
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CONFIDE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DIAMOND_STORM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STEAM_ERUPTION] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HYPERSPACE_HOLE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WATER_SHURIKEN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MYSTICAL_FIRE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPIKY_SHIELD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AROMATIC_MIST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_EERIE_IMPULSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_VENOM_DRENCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWDER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GEOMANCY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAGNETIC_FLUX] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HAPPY_HOUR] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ELECTRIC_TERRAIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DAZZLING_GLEAM] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
        .category = CATEGORY_SPECIAL,
    },

    [MOVE_CELEBRATE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HOLD_HANDS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BABY_DOLL_EYES] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NUZZLE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HOLD_BACK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_INFESTATION] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWER_UP_PUNCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_OBLIVION_WING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THOUSAND_ARROWS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THOUSAND_WAVES] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LANDS_WRATH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LIGHT_OF_RUIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ORIGIN_PULSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PRECIPICE_BLADES] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_ASCENT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HYPERSPACE_FURY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHORE_UP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FIRST_IMPRESSION] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BANEFUL_BUNKER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPIRIT_SHACKLE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DARKEST_LARIAT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPARKLING_ARIA] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICE_HAMMER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLORAL_HEALING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HIGH_HORSEPOWER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STRENGTH_SAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SOLAR_BLADE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LEAFAGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPOTLIGHT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TOXIC_THREAD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LASER_FOCUS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GEAR_UP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THROAT_CHOP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POLLEN_PUFF] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ANCHOR_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYCHIC_TERRAIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LUNGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FIRE_LASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWER_TRIP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BURN_UP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPEED_SWAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SMART_STRIKE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PURIFY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_REVELATION_DANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CORE_ENFORCER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TROP_KICK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_INSTRUCT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BEAK_BLAST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CLANGING_SCALES] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_HAMMER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BRUTAL_SWING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AURORA_VEIL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHELL_TRAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLEUR_CANNON] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYCHIC_FANGS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STOMPING_TANTRUM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHADOW_BONE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ACCELEROCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LIQUIDATION] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PRISMATIC_LASER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPECTRAL_THIEF] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SUNSTEEL_STRIKE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MOONGEIST_BEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TEARFUL_LOOK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ZING_ZAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NATURES_MADNESS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MULTI_ATTACK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MIND_BLOWN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PLASMA_FISTS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PHOTON_GEYSER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ZIPPY_ZAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPLISHY_SPLASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLOATY_FALL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PIKA_PAPOW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BOUNCY_BUBBLE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BUZZY_BUZZ] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SIZZLY_SLIDE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GLITZY_GLOW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BADDY_BAD] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SAPPY_SEED] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FREEZY_FROST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPARKLY_SWIRL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_VEEVEE_VOLLEY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DOUBLE_IRON_BASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DYNAMAX_CANNON] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SNIPE_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_JAW_LOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STUFF_CHEEKS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NO_RETREAT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TAR_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAGIC_POWDER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_DARTS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TEATIME] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_OCTOLOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BOLT_BEAK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FISHIOUS_REND] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COURT_CHANGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CLANGOROUS_SOUL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BODY_PRESS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DECORATE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRUM_BEATING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SNAP_TRAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PYRO_BALL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BEHEMOTH_BLADE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BEHEMOTH_BASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AURA_WHEEL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BREAKING_SWIPE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BRANCH_POKE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_OVERDRIVE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_APPLE_ACID] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRAV_APPLE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPIRIT_BREAK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STRANGE_STEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LIFE_DEW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_OBSTRUCT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FALSE_SURRENDER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_METEOR_ASSAULT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ETERNABEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STEEL_BEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_EXPANDING_FORCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STEEL_ROLLER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SCALE_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_METEOR_BEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHELL_SIDE_ARM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MISTY_EXPLOSION] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GRASSY_GLIDE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RISING_VOLTAGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TERRAIN_PULSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SKITTER_SMACK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BURNING_JEALOUSY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LASH_OUT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POLTERGEIST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CORROSIVE_GAS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COACHING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLIP_TURN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRIPLE_AXEL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DUAL_WINGBEAT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SCORCHING_SANDS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_JUNGLE_HEALING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WICKED_BLOW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SURGING_STRIKES] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THUNDER_CAGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_ENERGY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FREEZING_GLARE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FIERY_WRATH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THUNDEROUS_KICK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GLACIAL_LANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ASTRAL_BARRAGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_EERIE_SPELL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DIRE_CLAW] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYSHIELD_BASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POWER_SHIFT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_STONE_AXE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPRINGTIDE_STORM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MYSTICAL_POWER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RAGING_FURY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WAVE_CRASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHLOROBLAST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MOUNTAIN_GALE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_VICTORY_DANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HEADLONG_RUSH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BARB_BARRAGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ESPER_WING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BITTER_MALICE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHELTER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRIPLE_ARROWS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_INFERNAL_PARADE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CEASELESS_EDGE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BLEAKWIND_STORM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WILDBOLT_STORM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SANDSEAR_STORM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LUNAR_BLESSING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TAKE_HEART] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TERA_BLAST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SILK_TRAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AXE_KICK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LAST_RESPECTS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_LUMINA_CRASH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ORDER_UP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_JET_PUNCH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPICY_EXTRACT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SPIN_OUT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POPULATION_BOMB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ICE_SPINNER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GLAIVE_RUSH] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_REVIVAL_BLESSING] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SALT_CURE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRIPLE_DIVE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MORTAL_SPIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DOODLE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FILLET_AWAY] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_KOWTOW_CLEAVE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FLOWER_TRICK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TORCH_SONG] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AQUA_STEP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RAGING_BULL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAKE_IT_RAIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RUINATION] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COLLISION_COURSE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ELECTRO_DRIFT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SHED_TAIL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHILLY_RECEPTION] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TIDY_UP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SNOWSCAPE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_POUNCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TRAILBLAZE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_CHILLING_WATER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HYPER_DRILL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TWIN_BEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_RAGE_FIST] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ARMOR_CANNON] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BITTER_BLADE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DOUBLE_SHOCK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_GIGATON_HAMMER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COMEUPPANCE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_AQUA_CUTTER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BLAZING_TORQUE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_WICKED_TORQUE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_NOXIOUS_TORQUE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_COMBAT_TORQUE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MAGICAL_TORQUE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYBLADE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HYDRO_STEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BLOOD_MOON] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MATCHA_GOTCHA] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SYRUP_BOMB] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_IVY_CUDGEL] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ELECTRO_SHOT] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TERA_STARSTORM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_FICKLE_BEAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_BURNING_BULWARK] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_THUNDERCLAP] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MIGHTY_CLEAVE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TACHYON_CUTTER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_HARD_PRESS] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_DRAGON_CHEER] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_ALLURING_VOICE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_TEMPER_FLARE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_SUPERCELL_SLAM] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_PSYCHIC_NOISE] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_UPPER_HAND] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },

    [MOVE_MALIGNANT_CHAIN] =
    {
        .effect = EFFECT_PLACEHOLDER,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .category = CATEGORY_STATUS,
    },
};
