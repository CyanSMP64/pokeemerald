#ifndef GUARD_EVOLUTION_SCENE_H
#define GUARD_EVOLUTION_SCENE_H

void BeginEvolutionScene(struct Pokemon *mon, u16 speciesToEvolve, bool8 canStopEvo, u8 partyID);
void EvolutionScene(struct Pokemon *mon, u16 speciesToEvolve, bool8 canStopEvo, u8 partyID);
void TradeEvolutionScene(struct Pokemon *mon, u16 speciesToEvolve, u8 preEvoSpriteID, u8 partyID);
void Task_EvolutionScene(u8 taskId);

extern void (*gCB2_AfterEvolution)(void);

struct EvoInfo
{
    u8 preEvoSpriteId;
    u8 postEvoSpriteId;
    u8 evoTaskId;
    u8 delayTimer;
    u16 savedPalette[48];
}*sEvoStructPtr;

#endif // GUARD_EVOLUTION_SCENE_H
