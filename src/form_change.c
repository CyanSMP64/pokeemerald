#include "global.h"
#include "form_change.h"
#include "pokemon.h"
#include "constants/species.h"
#include "constants/battle.h"
#include "constants/items.h"

// Form change table definitions
const struct FormChange sBurmyFormChangeTable[] = {
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

const struct FormChange sShayminFormChangeTable[] = {
    {FORM_CHANGE_ITEM_USE,    SPECIES_SHAYMIN_SKY, ITEM_GRACIDEA, STATUS1_FREEZE},
    {FORM_CHANGE_WITHDRAW,    SPECIES_SHAYMIN},
    {FORM_CHANGE_STATUS,      SPECIES_SHAYMIN, STATUS1_FREEZE},
    {FORM_CHANGE_TERMINATOR},
};

const struct FormChange *GetFormChangeTable(u16 species)
{
    if (species == SPECIES_NONE || species >= NUM_SPECIES)
        return NULL;
    return gSpeciesInfo[species].formChangeTable;
}

static u16 GetTargetSpeciesFromEntryCommon(const struct FormChange *entry, void *ctx, u32 arg, u32 (*getStatus)(void *))
{
    switch (entry->method)
    {
    case FORM_CHANGE_WITHDRAW:
    case FORM_CHANGE_DEPOSIT:
    case FORM_CHANGE_FAINT:
        return entry->targetSpecies;
    case FORM_CHANGE_ITEM_USE:
        if (arg == entry->param1)
        {
            bool32 pass = TRUE;

            if (entry->param2 != STATUS1_NONE && getStatus(ctx) & entry->param2)
                pass = FALSE;

            if (pass)
                return entry->targetSpecies;
        }
        break;
    case FORM_CHANGE_END_BATTLE_ENVIRONMENT:
        if (entry->param1 == arg)
            return entry->targetSpecies;
        break;
    case FORM_CHANGE_STATUS:
        if (getStatus(ctx) & entry->param1)
            return entry->targetSpecies;
        break;
    }

    return SPECIES_NONE;
}

static u32 GetMonStatus(void *ctx)
{
    return GetMonData((struct Pokemon *)ctx, MON_DATA_STATUS, NULL);
}

static u32 GetBoxMonStatus(void *ctx)
{
    return GetBoxMonData((struct BoxPokemon *)ctx, MON_DATA_STATUS, NULL);
}

static u16 GetTargetSpeciesFromEntry(const struct FormChange *entry, struct Pokemon *mon, u32 arg)
{
    return GetTargetSpeciesFromEntryCommon(entry, mon, arg, GetMonStatus);
}

static u16 GetTargetSpeciesFromEntryBox(const struct FormChange *entry, struct BoxPokemon *boxMon, u32 arg)
{
    return GetTargetSpeciesFromEntryCommon(entry, boxMon, arg, GetBoxMonStatus);
}

static u16 GetTargetSpeciesFromEntryMonCtx(const struct FormChange *entry, void *ctx, u32 arg)
{
    return GetTargetSpeciesFromEntry(entry, (struct Pokemon *)ctx, arg);
}

static u16 GetTargetSpeciesFromEntryBoxCtx(const struct FormChange *entry, void *ctx, u32 arg)
{
    return GetTargetSpeciesFromEntryBox(entry, (struct BoxPokemon *)ctx, arg);
}

static u16 GetFormChangeTargetSpeciesCommon(const struct FormChange *formChangeTable, u16 species, u16 method, u32 arg,
                                            u16 (*getTarget)(const struct FormChange *, void *, u32), void *ctx)
{
    int i;
    u16 targetSpecies = species;

    if (formChangeTable == NULL)
        return species;

    for (i = 0; formChangeTable[i].method != FORM_CHANGE_TERMINATOR; i++)
    {
        if (formChangeTable[i].method != method)
            continue;

        targetSpecies = getTarget(&formChangeTable[i], ctx, arg);

        if (targetSpecies != SPECIES_NONE && targetSpecies != species)
            break;
    }

    return targetSpecies != SPECIES_NONE ? targetSpecies : species;
}

void TryFormChange(struct Pokemon *mon, u32 arg)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    const struct FormChange *formChangeTable = GetFormChangeTable(species);

    if (formChangeTable != NULL)
    {
        int i;
        u16 targetSpecies = SPECIES_NONE;
        
        for (i = 0; formChangeTable[i].method != FORM_CHANGE_TERMINATOR; i++)
        {
            // Skip WITHDRAW and DEPOSIT - those are only for explicit PC/Daycare use via GetFormChangeTargetSpecies
            if (formChangeTable[i].method == FORM_CHANGE_WITHDRAW ||
                formChangeTable[i].method == FORM_CHANGE_DEPOSIT)
                continue;
            
            targetSpecies = GetTargetSpeciesFromEntry(&formChangeTable[i], mon, arg);
            
            if (targetSpecies != SPECIES_NONE && targetSpecies != species)
            {
                SetMonData(mon, MON_DATA_SPECIES, &targetSpecies);
                break;
            }
        }
    }
}

u16 GetFormChangeTargetSpecies(struct Pokemon *mon, u16 method, u32 arg)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    const struct FormChange *formChangeTable = GetFormChangeTable(species);
    return GetFormChangeTargetSpeciesCommon(formChangeTable, species, method, arg, GetTargetSpeciesFromEntryMonCtx, mon);
}

u16 GetFormChangeTargetSpeciesBoxMon(struct BoxPokemon *boxMon, u16 method, u32 arg)
{
    u16 species = GetBoxMonData(boxMon, MON_DATA_SPECIES, NULL);
    const struct FormChange *formChangeTable = GetFormChangeTable(species);
    return GetFormChangeTargetSpeciesCommon(formChangeTable, species, method, arg, GetTargetSpeciesFromEntryBoxCtx, boxMon);
}
