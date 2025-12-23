#ifndef GUARD_FORM_CHANGE_H
#define GUARD_FORM_CHANGE_H

struct Pokemon;
struct BoxPokemon;

// FORM_CHANGE_BATTLE_HP_PERCENT param2 arguments
enum FormChangeBattleHPPercentArguments
{
    HP_HIGHER_THAN = 1,
    HP_LOWER_EQ_THAN,
};

struct FormChange
{
    u16 method;
    u16 targetSpecies;
    u16 param1;
    u16 param2;
    u16 param3;
};

// Form change types
#define FORM_CHANGE_ITEM_HOLD                   0
#define FORM_CHANGE_ITEM_USE                    1
#define FORM_CHANGE_MOVE                        2
#define FORM_CHANGE_WITHDRAW                    3
#define FORM_CHANGE_FAINT                       4
#define FORM_CHANGE_BEGIN_BATTLE                5
#define FORM_CHANGE_END_BATTLE                  6
#define FORM_CHANGE_END_BATTLE_ENVIRONMENT      7
#define FORM_CHANGE_BATTLE_SWITCH               8
#define FORM_CHANGE_BATTLE_HP_PERCENT           9
#define FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM  10
#define FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE  11
#define FORM_CHANGE_BATTLE_PRIMAL_REVERSION     12
#define FORM_CHANGE_BATTLE_WEATHER              13
#define FORM_CHANGE_BATTLE_TURN_END             14
#define FORM_CHANGE_BATTLE_ULTRA_BURST          15
#define FORM_CHANGE_BATTLE_GIGANTAMAX           16
#define FORM_CHANGE_TIME_OF_DAY                 17
#define FORM_CHANGE_ITEM_USE_MULTICHOICE        18
#define FORM_CHANGE_STATUS                      19
#define FORM_CHANGE_HIT_BY_MOVE                 20
#define FORM_CHANGE_BATTLE_TERASTALLIZATION     21
#define FORM_CHANGE_DAYS_PASSED                 22
#define FORM_CHANGE_BATTLE_BEFORE_MOVE          23
#define FORM_CHANGE_BATTLE_AFTER_MOVE           24
#define FORM_CHANGE_BATTLE_BEFORE_MOVE_CATEGORY 25
#define FORM_CHANGE_OVERWORLD_WEATHER           26
#define FORM_CHANGE_DEPOSIT                     27
#define FORM_CHANGE_TERMINATOR                  28

void TryFormChange(struct Pokemon *mon, u32 arg);
u16 GetFormChangeTargetSpecies(struct Pokemon *mon, u16 method, u32 arg);
u16 GetFormChangeTargetSpeciesBoxMon(struct BoxPokemon *boxMon, u16 method, u32 arg);
const struct FormChange *GetFormChangeTable(u16 species);

// Form change table declarations
extern const struct FormChange sBurmyFormChangeTable[];
extern const struct FormChange sShayminFormChangeTable[];

#endif // GUARD_FORM_CHANGE_H
