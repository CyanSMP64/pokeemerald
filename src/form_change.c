#include "global.h"
#include "form_change.h"
#include "pokemon.h"
#include "constants/species.h"
#include "constants/battle.h"

// burmy
static const struct FormChange sBurmyFormChangeTable[] = {
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY, BATTLE_TERRAIN_GRASS},
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY, BATTLE_TERRAIN_LONG_GRASS},
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY_SANDY_CLOAK, BATTLE_TERRAIN_SAND},
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY, BATTLE_TERRAIN_POND},
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY, BATTLE_TERRAIN_MOUNTAIN},
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY_SANDY_CLOAK, BATTLE_TERRAIN_CAVE},
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY_TRASH_CLOAK, BATTLE_TERRAIN_BUILDING},
    {FORM_CHANGE_END_BATTLE_ENVIRONMENT, SPECIES_BURMY, BATTLE_TERRAIN_PLAIN},
    {FORM_CHANGE_TERMINATOR},
};

void TryFormChange(struct Pokemon *mon, u8 environment)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    const struct FormChange *formChangeTable = NULL;

    if (species == SPECIES_BURMY || species == SPECIES_BURMY_SANDY_CLOAK || species == SPECIES_BURMY_TRASH_CLOAK)
        formChangeTable = sBurmyFormChangeTable;

    if (formChangeTable != NULL)
    {
        int i;
        for (i = 0; formChangeTable[i].method != FORM_CHANGE_TERMINATOR; i++)
        {   
            if (formChangeTable[i].method == FORM_CHANGE_END_BATTLE_ENVIRONMENT
                && formChangeTable[i].param1 == environment)
            {
                SetMonData(mon, MON_DATA_SPECIES, &formChangeTable[i].targetSpecies);
                break;
            }
        }
    }
}
