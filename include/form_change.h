#ifndef GUARD_FORM_CHANGE_H
#define GUARD_FORM_CHANGE_H

struct FormChange
{
    u16 method;
    u16 targetSpecies;
    u16 param1;
    u16 param2;
    u16 param3;
};

// Form change types
#define FORM_CHANGE_TERMINATOR             0
#define FORM_CHANGE_END_BATTLE_ENVIRONMENT 1

void TryFormChange(struct Pokemon *mon, u8 environment);

#endif // GUARD_FORM_CHANGE_H
