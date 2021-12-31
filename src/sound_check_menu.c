#include "global.h"
#include "bg.h"
#include "sprite.h"
#include "palette.h"
#include "task.h"
#include "m4a.h"
#include "main.h"
#include "text.h"
#include "menu.h"
//#include "game_build.h"
#include "gpu_regs.h"
#include "scanline_effect.h"
#include "string_util.h"
#include "title_screen.h"
#include "sound.h"
#include "trainer_pokemon_sprites.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#define tWindowSelected data[0]
#define tBgmIndex data[1]
#define tSeIndex data[2]
#define tBgmIndexOld data[3]
#define tSeIndexOld data[4]
#define tWhichSubmenu data[14]
#define tState data[15]

// wonky dim access macro
#define MULTI_DIM_ARR(x, dim, y) ((x) * dim + (y))

// dim access enums
enum
{
    B_8 = 1,
    B_16 = 2,
    B_32 = 4
};

// windows
enum
{
    WIN_INFO,
    WIN_MUS,
    WIN_SE,
    WIN_COUNT
};

// selected test
enum
{
    TEST_MUS,
    TEST_SE
};

// driver test cry enums
enum
{
    CRY_TEST_VOICE,
    CRY_TEST_VOLUME,
    CRY_TEST_PANPOT,
    CRY_TEST_PITCH,
    CRY_TEST_LENGTH,
    CRY_TEST_RELEASE,
    CRY_TEST_PROGRESS,
    CRY_TEST_CHORUS,
    CRY_TEST_PRIORITY
};

// minmax range enums
enum
{
    MIN,
    MAX
};

extern struct ToneData gCryTable[];
extern struct ToneData gCryTable_Reverse[];

static EWRAM_DATA u8 sIsFastForwarding = 0;
static EWRAM_DATA u8 sDriverTest_IsCryPlaying = 0;
static EWRAM_DATA u8 sDriverTest_IsCryPlayingOld = 0;
static EWRAM_DATA int sSoundTestParams[9] = {0};
static EWRAM_DATA u8 sDriverTest_Reverse = 0;
static EWRAM_DATA u8 sDriverTest_Stereo = 0;

struct MusicPlayerInfo *sMPlayInfo_Cry;
extern struct MusicPlayerInfo gMPlayInfo_BGM;

static const struct BgTemplate sSoundCheckMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
};

static const struct WindowTemplate sSoundCheckMenuWindowTemplates[] =
{
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 28,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 20,
    },
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 8,
        .width = 28,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 132,
    },
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 15,
        .width = 28,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 244,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sSoundCheckMenuDriverTestWindowTemplates[] =
{
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 28,
        .height = 18,
        .paletteNum = 15,
        .baseBlock = 20,
    },
    DUMMY_WIN_TEMPLATE,
};

static void Task_InitSoundCheckMenu(u8 taskId);
static void Task_InitSoundCheckMenu_CreateWindows(u8);
static void Task_HandleDrawingSoundCheckMenuText(u8);
static void Task_ProcessSoundCheckMenuInputAndRedraw(u8);
static void Task_ExitToTitleScreen(u8);
static void HighlightSelectedWindow(u8);
static void PrintSoundNumber(u16, u8);
static void PrintPaddedString(const u8 *const, u8);
static void Task_DrawSubmenu(u8);
static void Task_ProcessDriverTestInput(u8);
static void AdjustSelectedDriverParam(s8);
static void PrintDriverTestMenuText(void);
static void PrintSignedNumber(int, u16, u16, u8);
static void Task_DrawDriverTestMenu(u8);
static void Task_DrawPanTestMenu(u8);
static void Task_ProcessPanTestInput(u8);
static void PrintPanTestMenuText(void);
static void InitGpuRegs(void);
static void ClearTasksAndGraphicalStructs(void);
static void SetupDispcnt(void);
static void DestroyWindow(u8 windowId);
static void PutWindowTilemapAndCopyWindowToVram(u8 windowId);

static void CB2_SoundCheckMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_SoundCheckMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();

    if (sIsFastForwarding != 0)
    {
        m4aSoundMain();
        m4aSoundMain();
        m4aSoundMain();
    }
}

void CB2_StartSoundCheckMenu(void) // sub_080E8320
{
    u8 taskId;

    switch (gMain.state)
    {
    case 0:
        SetVBlankCallback(NULL);
        InitGpuRegs();
        gMain.state++;
        break;
    case 1:
        ClearTasksAndGraphicalStructs();
        gMain.state++;
        break;
    case 2:
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sSoundCheckMenuBgTemplates, ARRAY_COUNT(sSoundCheckMenuBgTemplates));
        ResetBgPositions();
        gMain.state++;
        break;
    case 3:
        if (IsDma3ManagerBusyWithBgCopy() == TRUE)
            return;
        ShowBg(0);
        gMain.state++;
        break;
    case 4:
        InitWindows(sSoundCheckMenuWindowTemplates);
        DeactivateAllTextPrinters();
        LoadMessageBoxAndBorderGfx();
        gMain.state++;
        break;
    case 5:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB(0, 0, 0));
        gMain.state++;
        break;
    case 6:
        SetupDispcnt();
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0 |
                                    WININ_WIN0_OBJ |
                                    WININ_WIN1_BG0 |
                                    WININ_WIN1_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 |
                                     WINOUT_WIN01_OBJ |
                                     WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 |
                                     BLDCNT_TGT1_BD |
                                     BLDCNT_EFFECT_DARKEN);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 7);
        EnableInterrupts(INTR_FLAG_VBLANK);
        SetVBlankCallback(VBlankCB_SoundCheckMenu);
        SetMainCallback2(CB2_SoundCheckMenu);
        taskId = CreateTask(Task_InitSoundCheckMenu_CreateWindows, 0);
        gTasks[taskId].tWindowSelected = TEST_MUS;
        gTasks[taskId].tBgmIndex = 0;
        gTasks[taskId].tSeIndex = 0;
        gTasks[taskId].tBgmIndexOld = 0;
        gTasks[taskId].tSeIndexOld = 0;
        sIsFastForwarding = 0;
        m4aSoundInit();
        gMain.state++;
        break;
    }
}

static void Task_InitSoundCheckMenu_CreateWindows(u8 taskId) // SanitizeDayCareMailForRuby
{
    const u8 soundcheckStr[] = _("SOUND TEST{CLEAR_TO 120}A: PLAY  B: EXIT");
    const u8 bgmStr[] = _("MUSIC");
    const u8 seStr[] = _("SOUND EFFECTS");
    const u8 upDownStr[] = _("{LEFT_ARROW}PREV {RIGHT_ARROW}NEXT");
    const u8 driverStr[] = _("R: CRY TEST");

    if (!gPaletteFade.active)
    {
        //GetGameVersionString(gStringVar1);
        SetStandardWindowBorderStyle(WIN_INFO, FALSE);
        AddTextPrinterParameterized(WIN_INFO, 2, soundcheckStr, 0, 0, TEXT_SKIP_DRAW, NULL);
        //AddTextPrinterParameterized(WIN_INFO, 0, gStringVar1, 0, 18, TEXT_SKIP_DRAW, NULL);
        AddTextPrinterParameterized(WIN_INFO, 2, driverStr, 120, 14, TEXT_SKIP_DRAW, NULL);
        PutWindowTilemapAndCopyWindowToVram(WIN_INFO);
        SetStandardWindowBorderStyle(WIN_MUS, FALSE);
        AddTextPrinterParameterized(WIN_MUS, 2, bgmStr, 0, 0, TEXT_SKIP_DRAW, NULL);
        AddTextPrinterParameterized(WIN_MUS, 2, upDownStr, 100, 0, TEXT_SKIP_DRAW, NULL);
        PutWindowTilemapAndCopyWindowToVram(WIN_MUS);
        SetStandardWindowBorderStyle(WIN_SE, FALSE);
        AddTextPrinterParameterized(WIN_SE, 2, seStr, 0, 0, TEXT_SKIP_DRAW, NULL);
        AddTextPrinterParameterized(WIN_SE, 2, upDownStr, 100, 0, TEXT_SKIP_DRAW, NULL);
        PutWindowTilemapAndCopyWindowToVram(WIN_SE);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(0, 239));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(0, 48));
        HighlightSelectedWindow(WIN_INFO);
        gTasks[taskId].func = Task_HandleDrawingSoundCheckMenuText;
    }
}

static const u8 *const gBGMNames[];
static const u8 *const gSENames[];

static void Task_HandleDrawingSoundCheckMenuText(u8 taskId) // sub_080E85F4
{
    FillWindowPixelRect(WIN_MUS, PIXEL_FILL(1), 0, 14, 224, 12);
    PrintSoundNumber(gTasks[taskId].tBgmIndex + (MUS_LITTLEROOT_TEST - 1), WIN_MUS); // print by BGM index
    PrintPaddedString(gBGMNames[gTasks[taskId].tBgmIndex], WIN_MUS);
    FillWindowPixelRect(WIN_SE, PIXEL_FILL(1), 0, 14, 224, 12);
    PrintSoundNumber(gTasks[taskId].tSeIndex, WIN_SE);
    PrintPaddedString(gSENames[gTasks[taskId].tSeIndex], WIN_SE);
    gTasks[taskId].func = Task_ProcessSoundCheckMenuInputAndRedraw;
}

static bool8 Task_ProcessSoundCheckMenuInput(u8 taskId) // sub_080E8688
{
    if (JOY_NEW(R_BUTTON)) // driver test
    {
        gTasks[taskId].tWhichSubmenu = 1;
        gTasks[taskId].tState = 0;
        gTasks[taskId].func = Task_DrawSubmenu;
    }
    else if (JOY_NEW(L_BUTTON))
    {
        gTasks[taskId].tWhichSubmenu = 0;
        gTasks[taskId].tState = 0;
        gTasks[taskId].func = Task_DrawSubmenu;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        if (gTasks[taskId].tWindowSelected != TEST_MUS)
        {
            if (gTasks[taskId].tSeIndexOld != 0)
            {
                if (gTasks[taskId].tSeIndex != 0)
                {
                    m4aSongNumStop(gTasks[taskId].tSeIndexOld);
                    m4aSongNumStart(gTasks[taskId].tSeIndex);
                    gTasks[taskId].tSeIndexOld = gTasks[taskId].tSeIndex;
                }
                else
                {
                    m4aSongNumStop(gTasks[taskId].tSeIndexOld);
                    gTasks[taskId].tSeIndexOld = 0;
                }
            }
            else if (gTasks[taskId].tSeIndex != 0)
            {
                m4aSongNumStart(gTasks[taskId].tSeIndex);
                gTasks[taskId].tSeIndexOld = gTasks[taskId].tSeIndex;
            }
        }
        else
        {
            if (gTasks[taskId].tBgmIndexOld != 0)
            {
                if (gTasks[taskId].tBgmIndex != 0)
                {
                    m4aSongNumStop(gTasks[taskId].tBgmIndexOld + (MUS_LITTLEROOT_TEST - 1));
                    m4aSongNumStart(gTasks[taskId].tBgmIndex + (MUS_LITTLEROOT_TEST - 1));
                    gTasks[taskId].tBgmIndexOld = gTasks[taskId].tBgmIndex;
                }
                else
                {
                    m4aSongNumStop(gTasks[taskId].tBgmIndexOld + (MUS_LITTLEROOT_TEST - 1));
                    gTasks[taskId].tBgmIndexOld = 0;
                }
            }
            else if (gTasks[taskId].tBgmIndex != 0)
            {
                m4aSongNumStart(gTasks[taskId].tBgmIndex + (MUS_LITTLEROOT_TEST - 1));
                gTasks[taskId].tBgmIndexOld = gTasks[taskId].tBgmIndex;
            }
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        m4aSongNumStart(SE_SELECT);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB(0, 0, 0));
        gTasks[taskId].func = Task_ExitToTitleScreen;
    }
    else if (JOY_REPEAT(DPAD_UP | DPAD_DOWN))
    {
        gTasks[taskId].tWindowSelected ^= 1;
        HighlightSelectedWindow(gTasks[taskId].tWindowSelected);
        return FALSE;
    }
    else if (JOY_REPEAT(DPAD_LEFT))
    {
        if (gTasks[taskId].tWindowSelected != TEST_MUS)
        {
            if (gTasks[taskId].tSeIndex > 0)
                gTasks[taskId].tSeIndex--;
            else
                gTasks[taskId].tSeIndex = PH_NURSE_SOLO;
        }
        else
        {
            if (gTasks[taskId].tBgmIndex > 0)
                gTasks[taskId].tBgmIndex--;
            else
                gTasks[taskId].tBgmIndex = (MUS_B2_BGM_THEEND - (MUS_LITTLEROOT_TEST - 1));
        }
        return TRUE;
    }
    else if (JOY_REPEAT(DPAD_RIGHT))
    {
        if (gTasks[taskId].tWindowSelected != TEST_MUS)
        {
            if (gTasks[taskId].tSeIndex < PH_NURSE_SOLO)
                gTasks[taskId].tSeIndex++;
            else
                gTasks[taskId].tSeIndex = 0;
        }
        else
        {
            if (gTasks[taskId].tBgmIndex < (MUS_B2_BGM_THEEND - (MUS_LITTLEROOT_TEST - 1)))
                gTasks[taskId].tBgmIndex++;
            else
                gTasks[taskId].tBgmIndex = 0;
        }
        return TRUE;
    }
    else if (JOY_HELD(SELECT_BUTTON))
    {
        sIsFastForwarding = 1;
    }
    else
    {
        sIsFastForwarding = 0;
    }
    return FALSE;
}

static void Task_ProcessSoundCheckMenuInputAndRedraw(u8 taskId) // sub_080E8878
{
    if (Task_ProcessSoundCheckMenuInput(taskId) != FALSE)
        gTasks[taskId].func = Task_HandleDrawingSoundCheckMenuText;
}

static void Task_ExitToTitleScreen(u8 taskId) // sub_080E88A8
{
    u8 windowId;

    if (!gPaletteFade.active)
    {
        for (windowId = WIN_INFO; windowId < WIN_COUNT; windowId++)
        {
            DestroyWindow(windowId);
        }
        DestroyTask(taskId);
        SetMainCallback2(CB2_InitTitleScreen);
    }
}

static void HighlightSelectedWindow(u8 windowType) // sub_080E88E8
{
    switch (windowType)
    {
    case WIN_INFO:
        SetGpuReg(REG_OFFSET_WIN1H, WIN_RANGE(0, 239));
        SetGpuReg(REG_OFFSET_WIN1V, WIN_RANGE(56, 104));
        break;
    case WIN_MUS:
        SetGpuReg(REG_OFFSET_WIN1H, WIN_RANGE(0, 239));
        SetGpuReg(REG_OFFSET_WIN1V, WIN_RANGE(112, 160));
        break;
    }
}

static void PrintSoundNumber(u16 soundIndex, u8 windowId) // sub_080E8928
{
    ConvertIntToDecimalStringN(gStringVar1, soundIndex, STR_CONV_MODE_RIGHT_ALIGN, 4);
    
    gStringVar1[4] = CHAR_COLON;
    gStringVar1[5] = EOS;
    
    AddTextPrinterParameterized(windowId, 2, gStringVar1, 0, 14, TEXT_SKIP_DRAW, NULL);
    PutWindowTilemapAndCopyWindowToVram(windowId);
}

static void PrintPaddedString(const u8 *const string, u8 windowId) // sub_080E8978
{
    u8 i;
    u8 str[32];

    for (i = 0; i < 31; i++)
        str[i] = CHAR_SPACE; // pad string.

    str[31] = EOS;

    for (i = 0; string[i] != EOS && i < 31; i++)
        str[i] = string[i];

    AddTextPrinterParameterized(windowId, 2, str, 40, 14, TEXT_SKIP_DRAW, NULL);
    PutWindowTilemapAndCopyWindowToVram(windowId);
}

static void Task_DrawSubmenu(u8 taskId) // sub_080E89EC
{
    u8 windowId;

    switch (gTasks[taskId].tState)
    {
    case 0:
        for (windowId = WIN_INFO; windowId < WIN_COUNT; windowId++)
        {
            DestroyWindow(windowId);
        }
        FreeAllWindowBuffers();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sSoundCheckMenuBgTemplates, ARRAY_COUNT(sSoundCheckMenuBgTemplates));
        gTasks[taskId].tState++;
        break;
    case 1:
        if (IsDma3ManagerBusyWithBgCopy() == TRUE)
            return;
        InitWindows(sSoundCheckMenuDriverTestWindowTemplates);
        SetStandardWindowBorderStyle(0, TRUE);
        gTasks[taskId].tState++;
        break;
    case 2:
        ShowBg(0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 |
                                      DISPCNT_OBJ_1D_MAP |
                                      DISPCNT_BG0_ON |
                                      DISPCNT_OBJ_ON |
                                      DISPCNT_WIN0_ON);
        if (gTasks[taskId].tWhichSubmenu == 0)
        {
            gTasks[taskId].func = Task_DrawPanTestMenu;
        }
        else
        {
            gTasks[taskId].func = Task_DrawDriverTestMenu;
        }
        break;
    }
}

static void Task_DrawDriverTestMenu(u8 taskId) // sub_080E8AA0
{
    const u8 bbackStr[] = _("B BUTTON: BACK");
    const u8 aplayStr[] = _("A BUTTON: PLAY");
    const u8 voiceStr[] = _("VOICE…………");
    const u8 volumeStr[] = _("VOLUME………");
    const u8 panpotStr[] = _("PANPOT………");
    const u8 pitchStr[] = _("PITCH…………");
    const u8 lengthStr[] = _("LENGTH………");
    const u8 releaseStr[] = _("RELEASE……");
    const u8 progressStr[] = _("PROGRESS…");
    const u8 chorusStr[] = _("CHORUS………");
    const u8 priorityStr[] = _("PRIORITY…");
    const u8 playingStr[] = _("PLAYING");
    const u8 reverseStr[] = _("REVERSE");
    const u8 stereoStr[] = _("STEREO");

    SetStandardWindowBorderStyle(WIN_INFO, FALSE);
    AddTextPrinterParameterized(WIN_INFO, 2, bbackStr, 136, 16, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, aplayStr, 136, 32, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, playingStr, 136, 80, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, reverseStr, 136, 96, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, stereoStr, 136, 112, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, voiceStr, 8, 0, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, volumeStr, 8, 16, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, panpotStr, 8, 32, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, pitchStr, 8, 48, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, lengthStr, 8, 64, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, releaseStr, 8, 80, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, progressStr, 8, 96, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, chorusStr, 8, 112, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, priorityStr, 8, 128, TEXT_SKIP_DRAW, NULL);
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(0, DISPLAY_WIDTH));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(0, DISPLAY_HEIGHT));
    sDriverTest_IsCryPlaying = 0;
    sDriverTest_IsCryPlayingOld = 0;
    sMPlayInfo_Cry = NULL;
    sDriverTest_Reverse = 0;
    sDriverTest_Stereo = 1;
    sSoundTestParams[CRY_TEST_VOICE] = 0;
    sSoundTestParams[CRY_TEST_VOLUME] = 120;
    sSoundTestParams[CRY_TEST_PANPOT] = 0;
    sSoundTestParams[CRY_TEST_PITCH] = 15360;
    sSoundTestParams[CRY_TEST_LENGTH] = 180;
    sSoundTestParams[CRY_TEST_PROGRESS] = 0;
    sSoundTestParams[CRY_TEST_RELEASE] = 0;
    sSoundTestParams[CRY_TEST_CHORUS] = 0;
    sSoundTestParams[CRY_TEST_PRIORITY] = 2;
    PrintDriverTestMenuText();
    InitMenuNormal(WIN_INFO, 2, 0, 0, 16, 9, 0);
    gTasks[taskId].func = Task_ProcessDriverTestInput;
}

static void Task_ProcessDriverTestInput(u8 taskId) // sub_080E8D68
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].tState = 0;
        gTasks[taskId].func = Task_InitSoundCheckMenu;
        return;
    }
    if (JOY_REPEAT(DPAD_UP))
    {
        Menu_MoveCursorNoWrapAround(-1);
        return;
    }
    if (JOY_REPEAT(DPAD_DOWN))
    {
        Menu_MoveCursorNoWrapAround(1);
        return;
    }
    if (JOY_NEW(START_BUTTON))
    {
        sDriverTest_Reverse ^= 1;
        PrintDriverTestMenuText();
        return;
    }
    if (JOY_NEW(SELECT_BUTTON))
    {
        sDriverTest_Stereo ^= 1;
        PrintDriverTestMenuText();
        SetPokemonCryStereo(sDriverTest_Stereo);
        return;
    }
    if (JOY_REPEAT(R_BUTTON))
    {
        AdjustSelectedDriverParam(10);
        PrintDriverTestMenuText();
        return;
    }
    if (JOY_REPEAT(L_BUTTON))
    {
        AdjustSelectedDriverParam(-10);
        PrintDriverTestMenuText();
        return;
    }
    if (JOY_REPEAT(DPAD_LEFT))
    {
        AdjustSelectedDriverParam(-1);
        PrintDriverTestMenuText();
        return;
    }
    if (JOY_REPEAT(DPAD_RIGHT))
    {
        AdjustSelectedDriverParam(1);
        PrintDriverTestMenuText();
        return;
    }
    if (JOY_NEW(A_BUTTON))
    {
        u8 divide, remaining;

        SetPokemonCryVolume(sSoundTestParams[CRY_TEST_VOLUME]);
        SetPokemonCryPanpot(sSoundTestParams[CRY_TEST_PANPOT]);
        SetPokemonCryPitch(sSoundTestParams[CRY_TEST_PITCH]);
        SetPokemonCryLength(sSoundTestParams[CRY_TEST_LENGTH]);
        SetPokemonCryProgress(sSoundTestParams[CRY_TEST_PROGRESS]);
        SetPokemonCryRelease(sSoundTestParams[CRY_TEST_RELEASE]);
        SetPokemonCryChorus(sSoundTestParams[CRY_TEST_CHORUS]);
        SetPokemonCryPriority(sSoundTestParams[CRY_TEST_PRIORITY]);

        remaining = sSoundTestParams[CRY_TEST_VOICE] % 128;
        divide = sSoundTestParams[CRY_TEST_VOICE] / 128;

        switch (divide)
        {
        case 0:
            if (sDriverTest_Reverse)
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable_Reverse[(128 * 0) + remaining]);
            else
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable[(128 * 0) + remaining]);
            break;
        case 1:
            if (sDriverTest_Reverse)
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable_Reverse[(128 * 1) + remaining]);
            else
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable[(128 * 1) + remaining]);
            break;
        case 2:
            if (sDriverTest_Reverse)
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable_Reverse[(128 * 2) + remaining]);
            else
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable[(128 * 2) + remaining]);
            break;
        case 3:
            if (sDriverTest_Reverse)
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable_Reverse[(128 * 3) + remaining]);
            else
                sMPlayInfo_Cry = SetPokemonCryTone(&gCryTable[(128 * 3) + remaining]);
            break;
        }
    }

    if (sMPlayInfo_Cry != NULL)
    {
        sDriverTest_IsCryPlaying = IsPokemonCryPlaying(sMPlayInfo_Cry);

        if (sDriverTest_IsCryPlaying != sDriverTest_IsCryPlayingOld)
            PrintDriverTestMenuText();

        sDriverTest_IsCryPlayingOld = sDriverTest_IsCryPlaying;
    }
}

static void AdjustSelectedDriverParam(s8 delta) // sub_080E8FA4
{
    // also ideally should be a MinMax struct, but any attempt to make this into a struct causes it to not match due to the weird multi dim access.
    const int paramRanges[] =
    {
        0, 387,         // Voice
        0, 127,         // Volume
        -127, 127,      // Panpot
        -128, 32639,    // Pitch
        0, 65535,       // Length
        0, 255,         // Release
        0, 65535,       // Progress
        -64, 63,        // Chorus
        0, 65535        // Priority
    };

    u8 cursorPos = Menu_GetCursorPos();

    sSoundTestParams[cursorPos] += delta;

    if (sSoundTestParams[cursorPos] > paramRanges[MULTI_DIM_ARR(cursorPos, B_16, MAX)])
        sSoundTestParams[cursorPos] = paramRanges[MULTI_DIM_ARR(cursorPos, B_16, MIN)];

    if (sSoundTestParams[cursorPos] < paramRanges[MULTI_DIM_ARR(cursorPos, B_16, MIN)])
        sSoundTestParams[cursorPos] = paramRanges[MULTI_DIM_ARR(cursorPos, B_16, MAX)];
}

static void PrintDriverTestMenuText(void) // sub_080E900C
{
    PrintSignedNumber(sSoundTestParams[CRY_TEST_VOICE] + 1, 80, 0, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_VOLUME], 80, 16, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_PANPOT], 80, 32, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_PITCH], 80, 48, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_LENGTH], 80, 64, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_RELEASE], 80, 80, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_PROGRESS], 80, 96, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_CHORUS], 80, 112, 5);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_PRIORITY], 80, 128, 5);
    PrintSignedNumber(sDriverTest_IsCryPlaying, 200, 80, 1);
    PrintSignedNumber(sDriverTest_Reverse, 200, 96, 1);
    PrintSignedNumber(sDriverTest_Stereo, 200, 112, 1);
}

static void PrintSignedNumber(int n, u16 x, u16 y, u8 digits) // sub_080E90C0
{
    const int powersOfTen[6] =
    {
              1,
             10,
            100,
           1000,
          10000,
         100000
    };

    u8 str[8];
    s8 i;
    s8 negative;
    s8 someVar2;

    for (i = 0; i <= digits; i++)
        str[i] = CHAR_SPACE;
    str[digits + 1] = EOS;

    negative = FALSE;
    if (n < 0)
    {
        n = -n;
        negative = TRUE;
    }

    if (digits == 1)
        someVar2 = TRUE;
    else
        someVar2 = FALSE;

    for (i = digits - 1; i >= 0; i--)
    {
        s8 d = n / powersOfTen[i];

        if (d != 0 || someVar2 || i == 0)
        {
            if (negative && !someVar2)
                str[digits - i - 1] = CHAR_HYPHEN;
            str[digits - i] = CHAR_0 + d;
            someVar2 = TRUE;
        }
        n %= powersOfTen[i];
    }

    AddTextPrinterParameterized(WIN_INFO, 2, str, x, y, TEXT_SKIP_DRAW, NULL);
    PutWindowTilemapAndCopyWindowToVram(WIN_INFO);
}

static const s8 gUnknown_08566E58[5] = { 0x3F, 0x00, 0xC0, 0x7F, 0x80 };

static void Task_DrawPanTestMenu(u8 taskId) // sub_080E91E4
{
    const u8 seStr[] = _("SOUND EFFECT");
    const u8 panStr[] = _("PAN");

    AddTextPrinterParameterized(WIN_INFO, 2, seStr, 10, 14, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_INFO, 2, panStr, 10, 28, TEXT_SKIP_DRAW, NULL);

    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(0, DISPLAY_WIDTH));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(0, DISPLAY_HEIGHT));
    sSoundTestParams[CRY_TEST_VOICE] = 1;
    sSoundTestParams[CRY_TEST_PANPOT] = 0;
    sSoundTestParams[CRY_TEST_CHORUS] = 0;
    sSoundTestParams[CRY_TEST_PROGRESS] = 0;
    sSoundTestParams[CRY_TEST_RELEASE] = 0;
    PrintPanTestMenuText();
    gTasks[taskId].func = Task_ProcessPanTestInput;
}

static void Task_ProcessPanTestInput(u8 taskId) // sub_080E9284
{
    if (sSoundTestParams[CRY_TEST_PROGRESS])
    {
        if (sSoundTestParams[CRY_TEST_RELEASE])
        {
            sSoundTestParams[CRY_TEST_RELEASE]--;
        }
        else
        {
            s8 panpot = gUnknown_08566E58[sSoundTestParams[CRY_TEST_PANPOT]];
            if (panpot != -128)
            {
                if (panpot == 127)
                {
                    sSoundTestParams[CRY_TEST_CHORUS] += 2;
                    if (sSoundTestParams[CRY_TEST_CHORUS] < 63)
                        SE12PanpotControl(sSoundTestParams[CRY_TEST_CHORUS]);
                }
            }
            else
            {
                sSoundTestParams[CRY_TEST_CHORUS] -= 2;
                if (sSoundTestParams[CRY_TEST_CHORUS] > -64)
                    SE12PanpotControl(sSoundTestParams[CRY_TEST_CHORUS]);
            }
        }
    }

    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].tState = 0;
        gTasks[taskId].func = Task_InitSoundCheckMenu;
        return;
    }
    if (JOY_NEW(A_BUTTON))
    {
        s8 panpot = gUnknown_08566E58[sSoundTestParams[CRY_TEST_PANPOT]];
        if (panpot != -128)
        {
            if (panpot == 127)
            {
                PlaySE12WithPanning(sSoundTestParams[CRY_TEST_VOICE], -64);
                sSoundTestParams[CRY_TEST_CHORUS] = -64;
                sSoundTestParams[CRY_TEST_PROGRESS] = 1;
                sSoundTestParams[CRY_TEST_RELEASE] = 30;
                return;
            }
        }
        else
        {
            PlaySE12WithPanning(sSoundTestParams[CRY_TEST_VOICE], 63);
            sSoundTestParams[CRY_TEST_CHORUS] = 63;
            sSoundTestParams[CRY_TEST_PROGRESS] = 1;
            sSoundTestParams[CRY_TEST_RELEASE] = 30;
            return;
        }

        PlaySE12WithPanning(sSoundTestParams[CRY_TEST_VOICE], panpot);
        sSoundTestParams[CRY_TEST_PROGRESS] = 0;
        return;
    }
    if (JOY_NEW(L_BUTTON))
    {
        sSoundTestParams[CRY_TEST_PANPOT]++;
        if (sSoundTestParams[CRY_TEST_PANPOT] > 4)
            sSoundTestParams[CRY_TEST_PANPOT] = 0;
        PrintPanTestMenuText();
    }
    if (JOY_NEW(R_BUTTON))
    {
        sSoundTestParams[CRY_TEST_PANPOT]--;
        if (sSoundTestParams[CRY_TEST_PANPOT] < 0)
            sSoundTestParams[CRY_TEST_PANPOT] = 4;
        PrintPanTestMenuText();
    }
    if (JOY_REPEAT(DPAD_RIGHT))
    {
        sSoundTestParams[CRY_TEST_VOICE]++;
        if (sSoundTestParams[CRY_TEST_VOICE] > PH_NURSE_SOLO)
            sSoundTestParams[CRY_TEST_VOICE] = MUS_DUMMY;
        PrintPanTestMenuText();
    }
    else if (JOY_REPEAT(DPAD_LEFT))
    {
        sSoundTestParams[CRY_TEST_VOICE]--;
        if (sSoundTestParams[CRY_TEST_VOICE] < MUS_DUMMY)
            sSoundTestParams[CRY_TEST_VOICE] = PH_NURSE_SOLO;
        PrintPanTestMenuText();
    }
}

static void Task_InitSoundCheckMenu(u8 taskId) // sub_080E9410
{
    switch (gTasks[taskId].tState)
    {
    case 0:
        DestroyWindow(WIN_INFO);
        FreeAllWindowBuffers();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sSoundCheckMenuBgTemplates, ARRAY_COUNT(sSoundCheckMenuBgTemplates));
        gTasks[taskId].tState++;
        break;
    case 1:
        if (IsDma3ManagerBusyWithBgCopy() == TRUE)
            return;
        InitWindows(sSoundCheckMenuWindowTemplates);
        gTasks[taskId].tState++;
        break;
    case 2:
        ShowBg(0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 |
                                      DISPCNT_OBJ_1D_MAP |
                                      DISPCNT_BG0_ON |
                                      DISPCNT_OBJ_ON |
                                      DISPCNT_WIN0_ON |
                                      DISPCNT_WIN1_ON);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(17, 223));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(1, 31));
        gTasks[taskId].func = Task_InitSoundCheckMenu_CreateWindows;
        break;
    }
}

static void PrintPanTestMenuText(void) // sub_080E94B8
{
    u8 lrStr[] = _("   L");
    u8 rlStr[] = _("   R");

    FillWindowPixelRect(WIN_INFO, PIXEL_FILL(1), 100, 14, 3, 28);
    PrintSignedNumber(sSoundTestParams[CRY_TEST_VOICE], 100, 14, 3);

    switch (gUnknown_08566E58[sSoundTestParams[CRY_TEST_PANPOT]])
    {
    case 127:
        AddTextPrinterParameterized(WIN_INFO, 2, lrStr, 100, 28, TEXT_SKIP_DRAW, NULL);
        break;
    case -128:
        AddTextPrinterParameterized(WIN_INFO, 2, rlStr, 100, 28, TEXT_SKIP_DRAW, NULL);
        break;
    default:
        PrintSignedNumber(gUnknown_08566E58[sSoundTestParams[CRY_TEST_PANPOT]], 100, 28, 3);
        break;
    }
}

static void InitGpuRegs(void) // sub_080E9560
{
    DmaClear16(3, VRAM, VRAM_SIZE);
    DmaClear32(3, OAM, OAM_SIZE);
    DmaClear16(3, PLTT, PLTT_SIZE);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG3HOFS, 0);
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WIN1H, 0);
    SetGpuReg(REG_OFFSET_WIN1V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
}

static void ClearTasksAndGraphicalStructs(void) // sub_080E96A8
{
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    ResetAllPicSprites();
    ResetPaletteFade();
    FreeAllSpritePalettes();
}

static void SetupDispcnt(void) // sub_080E96C8
{
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 |
                                  DISPCNT_OBJ_1D_MAP |
                                  DISPCNT_BG0_ON |
                                  DISPCNT_OBJ_ON |
                                  DISPCNT_WIN0_ON |
                                  DISPCNT_WIN1_ON);
}

static void PutWindowTilemapAndCopyWindowToVram(u8 windowId) // sub_080E9734
{
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, 3);
}

static void DestroyWindow(u8 windowId) // sub_080E9750
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
    ClearWindowTilemap(windowId);
    CopyWindowToVram(windowId, 2);
    RemoveWindow(windowId);
}

#define SOUND_LIST_BGM \
    X(MUS_STOP, "STOP") \
    X(MUS_LITTLEROOT_TEST, "MUS-LITTLEROOT-TEST") \
    X(MUS_GSC_ROUTE38, "MUS-GSC-ROUTE38") \
    X(MUS_CAUGHT, "MUS-CAUGHT") \
    X(MUS_VICTORY_WILD, "MUS-VICTORY-WILD") \
    X(MUS_VICTORY_GYM_LEADER, "MUS-VICTORY-GYM-LEADER") \
    X(MUS_VICTORY_LEAGUE, "MUS-VICTORY-LEAGUE") \
    X(MUS_C_COMM_CENTER, "MUS-C-COMM-CENTER") \
    X(MUS_GSC_PEWTER, "MUS-GSC-PEWTER") \
    X(MUS_C_VS_LEGEND_BEAST, "MUS-C-VS-LEGEND-BEAST") \
    X(MUS_ROUTE101, "MUS-ROUTE101") \
    X(MUS_ROUTE110, "MUS-ROUTE110") \
    X(MUS_ROUTE120, "MUS-ROUTE120") \
    X(MUS_PETALBURG, "MUS-PETALBURG") \
    X(MUS_OLDALE, "MUS-OLDALE") \
    X(MUS_GYM, "MUS-GYM") \
    X(MUS_SURF, "MUS-SURF") \
    X(MUS_PETALBURG_WOODS, "MUS-PETALBURG-WOODS") \
    X(MUS_LEVEL_UP, "MUS-LEVEL-UP") \
    X(MUS_HEAL, "MUS-HEAL") \
    X(MUS_OBTAIN_BADGE, "MUS-OBTAIN-BADGE") \
    X(MUS_OBTAIN_ITEM, "MUS-OBTAIN-ITEM") \
    X(MUS_EVOLVED, "MUS-EVOLVED") \
    X(MUS_OBTAIN_TMHM, "MUS-OBTAIN-TMHM") \
    X(MUS_LILYCOVE_MUSEUM, "MUS-LILYCOVE-MUSEUM") \
    X(MUS_ROUTE122, "MUS-ROUTE122") \
    X(MUS_OCEANIC_MUSEUM, "MUS-OCEANIC-MUSEUM") \
    X(MUS_EVOLUTION_INTRO, "MUS-EVOLUTION-INTRO") \
    X(MUS_EVOLUTION, "MUS-EVOLUTION") \
    X(MUS_MOVE_DELETED, "MUS-MOVE-DELETED") \
    X(MUS_ENCOUNTER_GIRL, "MUS-ENCOUNTER-GIRL") \
    X(MUS_ENCOUNTER_MALE, "MUS-ENCOUNTER-MALE") \
    X(MUS_ABANDONED_SHIP, "MUS-ABANDONED-SHIP") \
    X(MUS_FORTREE, "MUS-FORTREE") \
    X(MUS_BIRCH_LAB, "MUS-BIRCH-LAB") \
    X(MUS_B_TOWER_RS, "MUS-B-TOWER-RS") \
    X(MUS_ENCOUNTER_SWIMMER, "MUS-ENCOUNTER-SWIMMER") \
    X(MUS_CAVE_OF_ORIGIN, "MUS-CAVE-OF-ORIGIN") \
    X(MUS_OBTAIN_BERRY, "MUS-OBTAIN-BERRY") \
    X(MUS_AWAKEN_LEGEND, "MUS-AWAKEN-LEGEND") \
    X(MUS_SLOTS_JACKPOT, "MUS-SLOTS-JACKPOT") \
    X(MUS_SLOTS_WIN, "MUS-SLOTS-WIN") \
    X(MUS_TOO_BAD, "MUS-TOO-BAD") \
    X(MUS_ROULETTE, "MUS-ROULETTE") \
    X(MUS_LINK_CONTEST_P1, "MUS-LINK-CONTEST-P1") \
    X(MUS_LINK_CONTEST_P2, "MUS-LINK-CONTEST-P2") \
    X(MUS_LINK_CONTEST_P3, "MUS-LINK-CONTEST-P3") \
    X(MUS_LINK_CONTEST_P4, "MUS-LINK-CONTEST-P4") \
    X(MUS_ENCOUNTER_RICH, "MUS-ENCOUNTER-RICH") \
    X(MUS_VERDANTURF, "MUS-VERDANTURF") \
    X(MUS_RUSTBORO, "MUS-RUSTBORO") \
    X(MUS_POKE_CENTER, "MUS-POKE-CENTER") \
    X(MUS_ROUTE104, "MUS-ROUTE104") \
    X(MUS_ROUTE119, "MUS-ROUTE119") \
    X(MUS_CYCLING, "MUS-CYCLING") \
    X(MUS_POKE_MART, "MUS-POKE-MART") \
    X(MUS_LITTLEROOT, "MUS-LITTLEROOT") \
    X(MUS_MT_CHIMNEY, "MUS-MT-CHIMNEY") \
    X(MUS_ENCOUNTER_FEMALE, "MUS-ENCOUNTER-FEMALE") \
    X(MUS_LILYCOVE, "MUS-LILYCOVE") \
    X(MUS_ROUTE111, "MUS-ROUTE111") \
    X(MUS_HELP, "MUS-HELP") \
    X(MUS_UNDERWATER, "MUS-UNDERWATER") \
    X(MUS_VICTORY_TRAINER, "MUS-VICTORY-TRAINER") \
    X(MUS_TITLE, "MUS-TITLE") \
    X(MUS_INTRO, "MUS-INTRO") \
    X(MUS_ENCOUNTER_MAY, "MUS-ENCOUNTER-MAY") \
    X(MUS_ENCOUNTER_INTENSE, "MUS-ENCOUNTER-INTENSE") \
    X(MUS_ENCOUNTER_COOL, "MUS-ENCOUNTER-COOL") \
    X(MUS_ROUTE113, "MUS-ROUTE113") \
    X(MUS_ENCOUNTER_AQUA, "MUS-ENCOUNTER-AQUA") \
    X(MUS_FOLLOW_ME, "MUS-FOLLOW-ME") \
    X(MUS_ENCOUNTER_BRENDAN, "MUS-ENCOUNTER-BRENDAN") \
    X(MUS_EVER_GRANDE, "MUS-EVER-GRANDE") \
    X(MUS_ENCOUNTER_SUSPICIOUS, "MUS-ENCOUNTER-SUSPICIOUS") \
    X(MUS_VICTORY_AQUA_MAGMA, "MUS-VICTORY-AQUA-MAGMA") \
    X(MUS_CABLE_CAR, "MUS-CABLE-CAR") \
    X(MUS_GAME_CORNER, "MUS-GAME-CORNER") \
    X(MUS_DEWFORD, "MUS-DEWFORD") \
    X(MUS_SAFARI_ZONE, "MUS-SAFARI-ZONE") \
    X(MUS_VICTORY_ROAD, "MUS-VICTORY-ROAD") \
    X(MUS_AQUA_MAGMA_HIDEOUT, "MUS-AQUA-MAGMA-HIDEOUT") \
    X(MUS_SAILING, "MUS-SAILING") \
    X(MUS_MT_PYRE, "MUS-MT-PYRE") \
    X(MUS_SLATEPORT, "MUS-SLATEPORT") \
    X(MUS_MT_PYRE_EXTERIOR, "MUS-MT-PYRE-EXTERIOR") \
    X(MUS_SCHOOL, "MUS-SCHOOL") \
    X(MUS_HALL_OF_FAME, "MUS-HALL-OF-FAME") \
    X(MUS_FALLARBOR, "MUS-FALLARBOR") \
    X(MUS_SEALED_CHAMBER, "MUS-SEALED-CHAMBER") \
    X(MUS_CONTEST_WINNER, "MUS-CONTEST-WINNER") \
    X(MUS_CONTEST, "MUS-CONTEST") \
    X(MUS_ENCOUNTER_MAGMA, "MUS-ENCOUNTER-MAGMA") \
    X(MUS_INTRO_BATTLE, "MUS-INTRO-BATTLE") \
    X(MUS_WEATHER_KYOGRE, "MUS-WEATHER-KYOGRE") \
    X(MUS_WEATHER_GROUDON, "MUS-WEATHER-GROUDON") \
    X(MUS_SOOTOPOLIS, "MUS-SOOTOPOLIS") \
    X(MUS_CONTEST_RESULTS, "MUS-CONTEST-RESULTS") \
    X(MUS_HALL_OF_FAME_ROOM, "MUS-HALL-OF-FAME-ROOM") \
    X(MUS_TRICK_HOUSE, "MUS-TRICK-HOUSE") \
    X(MUS_ENCOUNTER_TWINS, "MUS-ENCOUNTER-TWINS") \
    X(MUS_ENCOUNTER_ELITE_FOUR, "MUS-ENCOUNTER-ELITE-FOUR") \
    X(MUS_ENCOUNTER_HIKER, "MUS-ENCOUNTER-HIKER") \
    X(MUS_CONTEST_LOBBY, "MUS-CONTEST-LOBBY") \
    X(MUS_ENCOUNTER_INTERVIEWER, "MUS-ENCOUNTER-INTERVIEWER") \
    X(MUS_ENCOUNTER_CHAMPION, "MUS-ENCOUNTER-CHAMPION") \
    X(MUS_CREDITS, "MUS-CREDITS") \
    X(MUS_END, "MUS-END") \
    X(MUS_VS_WILD, "MUS-VS-WILD") \
    X(MUS_VS_AQUA_MAGMA, "MUS-VS-AQUA-MAGMA") \
    X(MUS_VS_TRAINER, "MUS-VS-TRAINER") \
    X(MUS_VS_GYM_LEADER, "MUS-VS-GYM-LEADER") \
    X(MUS_VS_CHAMPION, "MUS-VS-CHAMPION") \
    X(MUS_VS_REGI, "MUS-VS-REGI") \
    X(MUS_VS_KYOGRE_GROUDON, "MUS-VS-KYOGRE-GROUDON") \
    X(MUS_VS_RIVAL, "MUS-VS-RIVAL") \
    X(MUS_VS_ELITE_FOUR, "MUS-VS-ELITE-FOUR") \
    X(MUS_VS_AQUA_MAGMA_LEADER, "MUS-VS-AQUA-MAGMA-LEADER") \
    X(MUS_RG_FOLLOW_ME, "MUS-RG-FOLLOW-ME") \
    X(MUS_RG_GAME_CORNER, "MUS-RG-GAME-CORNER") \
    X(MUS_RG_ROCKET_HIDEOUT, "MUS-RG-ROCKET-HIDEOUT") \
    X(MUS_RG_GYM, "MUS-RG-GYM") \
    X(MUS_RG_JIGGLYPUFF, "MUS-RG-JIGGLYPUFF") \
    X(MUS_RG_INTRO_FIGHT, "MUS-RG-INTRO-FIGHT") \
    X(MUS_RG_TITLE, "MUS-RG-TITLE") \
    X(MUS_RG_CINNABAR, "MUS-RG-CINNABAR") \
    X(MUS_RG_LAVENDER, "MUS-RG-LAVENDER") \
    X(MUS_RG_HEAL, "MUS-RG-HEAL") \
    X(MUS_RG_CYCLING, "MUS-RG-CYCLING") \
    X(MUS_RG_ENCOUNTER_ROCKET, "MUS-RG-ENCOUNTER-ROCKET") \
    X(MUS_RG_ENCOUNTER_GIRL, "MUS-RG-ENCOUNTER-GIRL") \
    X(MUS_RG_ENCOUNTER_BOY, "MUS-RG-ENCOUNTER-BOY") \
    X(MUS_RG_HALL_OF_FAME, "MUS-RG-HALL-OF-FAME") \
    X(MUS_RG_VIRIDIAN_FOREST, "MUS-RG-VIRIDIAN-FOREST") \
    X(MUS_RG_MT_MOON, "MUS-RG-MT-MOON") \
    X(MUS_RG_POKE_MANSION, "MUS-RG-POKE-MANSION") \
    X(MUS_RG_CREDITS, "MUS-RG-CREDITS") \
    X(MUS_RG_ROUTE1, "MUS-RG-ROUTE1") \
    X(MUS_RG_ROUTE24, "MUS-RG-ROUTE24") \
    X(MUS_RG_ROUTE3, "MUS-RG-ROUTE3") \
    X(MUS_RG_ROUTE11, "MUS-RG-ROUTE11") \
    X(MUS_RG_VICTORY_ROAD, "MUS-RG-VICTORY-ROAD") \
    X(MUS_RG_VS_GYM_LEADER, "MUS-RG-VS-GYM-LEADER") \
    X(MUS_RG_VS_TRAINER, "MUS-RG-VS-TRAINER") \
    X(MUS_RG_VS_WILD, "MUS-RG-VS-WILD") \
    X(MUS_RG_VS_CHAMPION, "MUS-RG-VS-CHAMPION") \
    X(MUS_RG_PALLET, "MUS-RG-PALLET") \
    X(MUS_RG_OAK_LAB, "MUS-RG-OAK-LAB") \
    X(MUS_RG_OAK, "MUS-RG-OAK") \
    X(MUS_RG_POKE_CENTER, "MUS-RG-POKE-CENTER") \
    X(MUS_RG_SS_ANNE, "MUS-RG-SS-ANNE") \
    X(MUS_RG_SURF, "MUS-RG-SURF") \
    X(MUS_RG_POKE_TOWER, "MUS-RG-POKE-TOWER") \
    X(MUS_RG_SILPH, "MUS-RG-SILPH") \
    X(MUS_RG_FUCHSIA, "MUS-RG-FUCHSIA") \
    X(MUS_RG_CELADON, "MUS-RG-CELADON") \
    X(MUS_RG_VICTORY_TRAINER, "MUS-RG-VICTORY-TRAINER") \
    X(MUS_RG_VICTORY_WILD, "MUS-RG-VICTORY-WILD") \
    X(MUS_RG_VICTORY_GYM_LEADER, "MUS-RG-VICTORY-GYM-LEADER") \
    X(MUS_RG_VERMILLION, "MUS-RG-VERMILLION") \
    X(MUS_RG_PEWTER, "MUS-RG-PEWTER") \
    X(MUS_RG_ENCOUNTER_RIVAL, "MUS-RG-ENCOUNTER-RIVAL") \
    X(MUS_RG_RIVAL_EXIT, "MUS-RG-RIVAL-EXIT") \
    X(MUS_RG_DEX_RATING, "MUS-RG-DEX-RATING") \
    X(MUS_RG_OBTAIN_KEY_ITEM, "MUS-RG-OBTAIN-KEY-ITEM") \
    X(MUS_RG_CAUGHT_INTRO, "MUS-RG-CAUGHT-INTRO") \
    X(MUS_RG_PHOTO, "MUS-RG-PHOTO") \
    X(MUS_RG_GAME_FREAK, "MUS-RG-GAME-FREAK") \
    X(MUS_RG_CAUGHT, "MUS-RG-CAUGHT") \
    X(MUS_RG_NEW_GAME_INSTRUCT, "MUS-RG-NEW-GAME-INSTRUCT") \
    X(MUS_RG_NEW_GAME_INTRO, "MUS-RG-NEW-GAME-INTRO") \
    X(MUS_RG_NEW_GAME_EXIT, "MUS-RG-NEW-GAME-EXIT") \
    X(MUS_RG_POKE_JUMP, "MUS-RG-POKE-JUMP") \
    X(MUS_RG_UNION_ROOM, "MUS-RG-UNION-ROOM") \
    X(MUS_RG_NET_CENTER, "MUS-RG-NET-CENTER") \
    X(MUS_RG_MYSTERY_GIFT, "MUS-RG-MYSTERY-GIFT") \
    X(MUS_RG_BERRY_PICK, "MUS-RG-BERRY-PICK") \
    X(MUS_RG_SEVII_CAVE, "MUS-RG-SEVII-CAVE") \
    X(MUS_RG_TEACHY_TV_SHOW, "MUS-RG-TEACHY-TV-SHOW") \
    X(MUS_RG_SEVII_ROUTE, "MUS-RG-SEVII-ROUTE") \
    X(MUS_RG_SEVII_DUNGEON, "MUS-RG-SEVII-DUNGEON") \
    X(MUS_RG_SEVII_123, "MUS-RG-SEVII-123") \
    X(MUS_RG_SEVII_45, "MUS-RG-SEVII-45") \
    X(MUS_RG_SEVII_67, "MUS-RG-SEVII-67") \
    X(MUS_RG_POKE_FLUTE, "MUS-RG-POKE-FLUTE") \
    X(MUS_RG_VS_DEOXYS, "MUS-RG-VS-DEOXYS") \
    X(MUS_RG_VS_MEWTWO, "MUS-RG-VS-MEWTWO") \
    X(MUS_RG_VS_LEGEND, "MUS-RG-VS-LEGEND") \
    X(MUS_RG_ENCOUNTER_GYM_LEADER, "MUS-RG-ENCOUNTER-GYM-LEADER") \
    X(MUS_RG_ENCOUNTER_DEOXYS, "MUS-RG-ENCOUNTER-DEOXYS") \
    X(MUS_RG_TRAINER_TOWER, "MUS-RG-TRAINER-TOWER") \
    X(MUS_RG_SLOW_PALLET, "MUS-RG-SLOW-PALLET") \
    X(MUS_RG_TEACHY_TV_MENU, "MUS-RG-TEACHY-TV-MENU") \
    X(MUS_ABNORMAL_WEATHER, "MUS-ABNORMAL-WEATHER") \
    X(MUS_B_FRONTIER, "MUS-B-FRONTIER") \
    X(MUS_B_ARENA, "MUS-B-ARENA") \
    X(MUS_OBTAIN_B_POINTS, "MUS-OBTAIN-B-POINTS") \
    X(MUS_REGISTER_MATCH_CALL, "MUS-REGISTER-MATCH-CALL") \
    X(MUS_B_PYRAMID, "MUS-B-PYRAMID") \
    X(MUS_B_PYRAMID_TOP, "MUS-B-PYRAMID-TOP") \
    X(MUS_B_PALACE, "MUS-B-PALACE") \
    X(MUS_RAYQUAZA_APPEARS, "MUS-RAYQUAZA-APPEARS") \
    X(MUS_B_TOWER, "MUS-B-TOWER") \
    X(MUS_OBTAIN_SYMBOL, "MUS-OBTAIN-SYMBOL") \
    X(MUS_B_DOME, "MUS-B-DOME") \
    X(MUS_B_PIKE, "MUS-B-PIKE") \
    X(MUS_B_FACTORY, "MUS-B-FACTORY") \
    X(MUS_VS_RAYQUAZA, "MUS-VS-RAYQUAZA") \
    X(MUS_VS_FRONTIER_BRAIN, "MUS-VS-FRONTIER-BRAIN") \
    X(MUS_VS_MEW, "MUS-VS-MEW") \
    X(MUS_B_DOME_LOBBY, "MUS-B-DOME-LOBBY") \
    X(MUS_DP_TITLE00               , "MUS-DP-TITLE00") \
    X(MUS_DP_TITLE01               , "MUS-DP-TITLE01") \
    X(MUS_DP_OPENING               , "MUS-DP-OPENING") \
    X(MUS_DP_TV_HOUSOU             , "MUS-DP-TV-HOUSOU") \
    X(MUS_DP_TV_END                , "MUS-DP-TV-END") \
    X(MUS_DP_TOWN01_D              , "MUS-DP-TOWN01-D") \
    X(MUS_DP_TOWN01_N              , "MUS-DP-TOWN01-N") \
    X(MUS_DP_THE_RIV               , "MUS-DP-THE-RIV") \
    X(MUS_DP_ROAD_A_D              , "MUS-DP-ROAD-A-D") \
    X(MUS_DP_ROAD_A_N              , "MUS-DP-ROAD-A-N") \
    X(MUS_DP_D_LAKE                , "MUS-DP-D-LAKE") \
    X(MUS_DP_THE_EVENT01           , "MUS-DP-THE-EVENT01") \
    X(MUS_DP_BA_POKE               , "MUS-DP-BA-POKE") \
    X(MUS_DP_WINPOKE               , "MUS-DP-WINPOKE") \
    X(MUS_DP_THE_GIRL              , "MUS-DP-THE-GIRL") \
    X(MUS_DP_THE_BOY               , "MUS-DP-THE-BOY") \
    X(MUS_DP_FANFA4                , "MUS-DP-FANFA4") \
    X(MUS_DP_TOWN02_D              , "MUS-DP-TOWN02-D") \
    X(MUS_DP_TOWN02_N              , "MUS-DP-TOWN02-N") \
    X(MUS_DP_KENKYUJO              , "MUS-DP-KENKYUJO") \
    X(MUS_DP_TSURETEKE             , "MUS-DP-TSURETEKE") \
    X(MUS_DP_PC_01                 , "MUS-DP-PC-01") \
    X(MUS_DP_PC_02                 , "MUS-DP-PC-02") \
    X(MUS_DP_ASA                   , "MUS-DP-ASA") \
    X(MUS_DP_EYE_BOY               , "MUS-DP-EYE-BOY") \
    X(MUS_DP_EYE_GIRL              , "MUS-DP-EYE-GIRL") \
    X(MUS_DP_BA_TRAIN              , "MUS-DP-BA-TRAIN") \
    X(MUS_DP_WINTRAIN              , "MUS-DP-WINTRAIN") \
    X(MUS_DP_CITY01_D              , "MUS-DP-CITY01-D") \
    X(MUS_DP_CITY01_N              , "MUS-DP-CITY01-N") \
    X(MUS_DP_FANFA3                , "MUS-DP-FANFA3") \
    X(MUS_DP_FS                    , "MUS-DP-FS") \
    X(MUS_DP_ROAD_B_D              , "MUS-DP-ROAD-B-D") \
    X(MUS_DP_ROAD_B_N              , "MUS-DP-ROAD-B-N") \
    X(MUS_DP_BA_RIVAL              , "MUS-DP-BA-RIVAL") \
    X(MUS_DP_D_05                  , "MUS-DP-D-05") \
    X(MUS_DP_WAZA                  , "MUS-DP-WAZA") \
    X(MUS_DP_CITY03_D              , "MUS-DP-CITY03-D") \
    X(MUS_DP_CITY03_N              , "MUS-DP-CITY03-N") \
    X(MUS_DP_D_04                  , "MUS-DP-D-04") \
    X(MUS_DP_GYM                   , "MUS-DP-GYM") \
    X(MUS_DP_BA_GYM                , "MUS-DP-BA-GYM") \
    X(MUS_DP_WINTGYM               , "MUS-DP-WINTGYM") \
    X(MUS_DP_BADGE                 , "MUS-DP-BADGE") \
    X(MUS_DP_EYE_KID               , "MUS-DP-EYE-KID") \
    X(MUS_DP_FANFA1                , "MUS-DP-FANFA1") \
    X(MUS_DP_TOWN03_D              , "MUS-DP-TOWN03-D") \
    X(MUS_DP_TOWN03_N              , "MUS-DP-TOWN03-N") \
    X(MUS_DP_KINOMI                , "MUS-DP-KINOMI") \
    X(MUS_DP_ROAD_C_D              , "MUS-DP-ROAD-C-D") \
    X(MUS_DP_ROAD_C_N              , "MUS-DP-ROAD-C-N") \
    X(MUS_DP_EYE_GINGA             , "MUS-DP-EYE-GINGA") \
    X(MUS_DP_BA_GINGA              , "MUS-DP-BA-GINGA") \
    X(MUS_DP_D_02                  , "MUS-DP-D-02") \
    X(MUS_DP_GONIN                 , "MUS-DP-GONIN") \
    X(MUS_DP_CITY04_D              , "MUS-DP-CITY04-D") \
    X(MUS_DP_CITY04_N              , "MUS-DP-CITY04-N") \
    X(MUS_DP_D_GINLOBBY            , "MUS-DP-D-GINLOBBY") \
    X(MUS_DP_BA_GINGA3             , "MUS-DP-BA-GINGA3") \
    X(MUS_DP_WINGINGA              , "MUS-DP-WINGINGA") \
    X(MUS_DP_SHINKA                , "MUS-DP-SHINKA") \
    X(MUS_DP_FANFA5                , "MUS-DP-FANFA5") \
    X(MUS_DP_BICYCLE               , "MUS-DP-BICYCLE") \
    X(MUS_DP_EYE_SPORT             , "MUS-DP-EYE-SPORT") \
    X(MUS_DP_ROAD_D_D              , "MUS-DP-ROAD-D-D") \
    X(MUS_DP_ROAD_D_N              , "MUS-DP-ROAD-D-N") \
    X(MUS_DP_CITY05_D              , "MUS-DP-CITY05-D") \
    X(MUS_DP_CITY05_N              , "MUS-DP-CITY05-N") \
    X(MUS_DP_ROAD_E_D              , "MUS-DP-ROAD-E-D") \
    X(MUS_DP_ROAD_E_N              , "MUS-DP-ROAD-E-N") \
    X(MUS_DP_EYE_MOUNT             , "MUS-DP-EYE-MOUNT") \
    X(MUS_DP_TOWN04_D              , "MUS-DP-TOWN04-D") \
    X(MUS_DP_TOWN04_N              , "MUS-DP-TOWN04-N") \
    X(MUS_DP_POCKETCH              , "MUS-DP-POCKETCH") \
    X(MUS_DP_ROAD_F_D              , "MUS-DP-ROAD-F-D") \
    X(MUS_DP_ROAD_F_N              , "MUS-DP-ROAD-F-N") \
    X(MUS_DP_CITY07_D              , "MUS-DP-CITY07-D") \
    X(MUS_DP_CITY07_N              , "MUS-DP-CITY07-N") \
    X(MUS_DP_TOWN07_D              , "MUS-DP-TOWN07-D") \
    X(MUS_DP_TOWN07_N              , "MUS-DP-TOWN07-N") \
    X(MUS_DP_CITY02_D              , "MUS-DP-CITY02-D") \
    X(MUS_DP_CITY02_N              , "MUS-DP-CITY02-N") \
    X(MUS_DP_ROAD_SNOW_D           , "MUS-DP-ROAD-SNOW-D") \
    X(MUS_DP_ROAD_SNOW_N           , "MUS-DP-ROAD-SNOW-N") \
    X(MUS_DP_CITY09_D              , "MUS-DP-CITY09-D") \
    X(MUS_DP_CITY09_N              , "MUS-DP-CITY09-N") \
    X(MUS_DP_D_AGITO               , "MUS-DP-D-AGITO") \
    X(MUS_DP_BA_AGAKI              , "MUS-DP-BA-AGAKI") \
    X(MUS_DP_THE_EVENT04           , "MUS-DP-THE-EVENT04") \
    X(MUS_DP_D_MOUNT1              , "MUS-DP-D-MOUNT1") \
    X(MUS_DP_D_MOUNT2              , "MUS-DP-D-MOUNT2") \
    X(MUS_DP_THE_EVENT02           , "MUS-DP-THE-EVENT02") \
    X(MUS_DP_THE_EVENT03           , "MUS-DP-THE-EVENT03") \
    X(MUS_DP_BA_DPOKE2             , "MUS-DP-BA-DPOKE2") \
    X(MUS_DP_CITY08_D              , "MUS-DP-CITY08-D") \
    X(MUS_DP_CITY08_N              , "MUS-DP-CITY08-N") \
    X(MUS_DP_D_01                  , "MUS-DP-D-01") \
    X(MUS_DP_EYE_ELITE             , "MUS-DP-EYE-ELITE") \
    X(MUS_DP_CITY10_D              , "MUS-DP-CITY10-D") \
    X(MUS_DP_CITY10_N              , "MUS-DP-CITY10-N") \
    X(MUS_DP_CITY11_D              , "MUS-DP-CITY11-D") \
    X(MUS_DP_CITY11_N              , "MUS-DP-CITY11-N") \
    X(MUS_DP_TOWN06_D              , "MUS-DP-TOWN06-D") \
    X(MUS_DP_TOWN06_N              , "MUS-DP-TOWN06-N") \
    X(MUS_DP_ROAD_BZA_D            , "MUS-DP-ROAD-BZA-D") \
    X(MUS_DP_ROAD_BZA_N            , "MUS-DP-ROAD-BZA-N") \
    X(MUS_DP_WIFILOBBY             , "MUS-DP-WIFILOBBY") \
    X(MUS_DP_BLD_TV                , "MUS-DP-BLD-TV") \
    X(MUS_DP_BLD_BLD_GTC           , "MUS-DP-BLD-BLD-GTC") \
    X(MUS_DP_NAMINORI              , "MUS-DP-NAMINORI") \
    X(MUS_DP_WASURE                , "MUS-DP-WASURE") \
    X(MUS_DP_EYE_FIGHT             , "MUS-DP-EYE-FIGHT") \
    X(MUS_DP_EYE_ENKA              , "MUS-DP-EYE-ENKA") \
    X(MUS_DP_TANKOU                , "MUS-DP-TANKOU") \
    X(MUS_DP_HATANIGE              , "MUS-DP-HATANIGE") \
    X(MUS_DP_EYE_LADY              , "MUS-DP-EYE-LADY") \
    X(MUS_DP_D_03                  , "MUS-DP-D-03") \
    X(MUS_DP_D_SAFARI              , "MUS-DP-D-SAFARI") \
    X(MUS_DP_EYE_MYS               , "MUS-DP-EYE-MYS") \
    X(MUS_DP_BLD_GAME              , "MUS-DP-BLD-GAME") \
    X(MUS_DP_SLOT_ATARI            , "MUS-DP-SLOT-ATARI") \
    X(MUS_DP_SLOT_OOATARI          , "MUS-DP-SLOT-OOATARI") \
    X(MUS_DP_EYE_RICH              , "MUS-DP-EYE-RICH") \
    X(MUS_DP_D_RYAYHY              , "MUS-DP-D-RYAYHY") \
    X(MUS_DP_BA_DPOKE1             , "MUS-DP-BA-DPOKE1") \
    X(MUS_DP_KUSAGASA              , "MUS-DP-KUSAGASA") \
    X(MUS_DP_EYE_FUN               , "MUS-DP-EYE-FUN") \
    X(MUS_DP_D_KOUEN               , "MUS-DP-D-KOUEN") \
    X(MUS_DP_ACCE                  , "MUS-DP-ACCE") \
    X(MUS_DP_BLD_CON               , "MUS-DP-BLD-CON") \
    X(MUS_DP_KINOMI1               , "MUS-DP-KINOMI1") \
    X(MUS_DP_CON_TEST              , "MUS-DP-CON-TEST") \
    X(MUS_DP_CO_DRESS              , "MUS-DP-CO-DRESS") \
    X(MUS_DP_CO_KASHI              , "MUS-DP-CO-KASHI") \
    X(MUS_DP_CO_TAKUMA             , "MUS-DP-CO-TAKUMA") \
    X(MUS_DP_CO_KEKKA              , "MUS-DP-CO-KEKKA") \
    X(MUS_DP_CO_FANFA              , "MUS-DP-CO-FANFA") \
    X(MUS_DP_BF_TOWWER             , "MUS-DP-BF-TOWWER") \
    X(MUS_DP_D_06                  , "MUS-DP-D-06") \
    X(MUS_DP_BA_SECRET2            , "MUS-DP-BA-SECRET2") \
    X(MUS_DP_PRESENT               , "MUS-DP-PRESENT") \
    X(MUS_DP_D_LEAGUE              , "MUS-DP-D-LEAGUE") \
    X(MUS_DP_EYE_TENNO             , "MUS-DP-EYE-TENNO") \
    X(MUS_DP_BA_TENNO              , "MUS-DP-BA-TENNO") \
    X(MUS_DP_WINTENNO              , "MUS-DP-WINTENNO") \
    X(MUS_DP_EYE_CHAMP             , "MUS-DP-EYE-CHAMP") \
    X(MUS_DP_BA_CHANP              , "MUS-DP-BA-CHANP") \
    X(MUS_DP_WINCHAMP              , "MUS-DP-WINCHAMP") \
    X(MUS_DP_BLD_DENDO             , "MUS-DP-BLD-DENDO") \
    X(MUS_DP_BLD_EV_DENDO2         , "MUS-DP-BLD-EV-DENDO2") \
    X(MUS_DP_BLD_ENDING            , "MUS-DP-BLD-ENDING") \
    X(MUS_DP_FUE                   , "MUS-DP-FUE") \
    X(MUS_DP_AUS                   , "MUS-DP-AUS") \
    X(MUS_DP_BA_SECRET1            , "MUS-DP-BA-SECRET1") \
    X(MUS_PL_TITLE00               , "MUS-PL-TITLE00") \
    X(MUS_PL_TITLE01               , "MUS-PL-TITLE01") \
    X(MUS_PL_TV_HOUSOU             , "MUS-PL-TV-HOUSOU") \
    X(MUS_PL_TV_END                , "MUS-PL-TV-END") \
    X(MUS_PL_PL_HANDSOME           , "MUS-PL-PL-HANDSOME") \
    X(MUS_PL_PL_WIFITOWER          , "MUS-PL-PL-WIFITOWER") \
    X(MUS_PL_PL_WIFIUNION          , "MUS-PL-PL-WIFIUNION") \
    X(MUS_PL_PL_WIFIGAME           , "MUS-PL-PL-WIFIGAME") \
    X(MUS_PL_PL_WINMINI2           , "MUS-PL-PL-WINMINI2") \
    X(MUS_PL_PL_WIFIPARADE         , "MUS-PL-PL-WIFIPARADE") \
    X(MUS_PL_PL_EV_GIRA            , "MUS-PL-PL-EV-GIRA") \
    X(MUS_PL_PL_EV_GIRA2           , "MUS-PL-PL-EV-GIRA2") \
    X(MUS_PL_PL_D_GIRATINA         , "MUS-PL-PL-D-GIRATINA") \
    X(MUS_PL_PL_BA_GIRA            , "MUS-PL-PL-BA-GIRA") \
    X(MUS_PL_PL_GURUGURU           , "MUS-PL-PL-GURUGURU") \
    X(MUS_PL_PL_PTHAIFU            , "MUS-PL-PL-PTHAIFU") \
    X(MUS_PL_PL_MTKAWA             , "MUS-PL-PL-MTKAWA") \
    X(MUS_PL_PL_MTKAKKO            , "MUS-PL-PL-MTKAKKO") \
    X(MUS_PL_PL_MTTAKMA            , "MUS-PL-PL-MTTAKMA") \
    X(MUS_PL_PL_MTUTSUK            , "MUS-PL-PL-MTUTSUK") \
    X(MUS_PL_PL_MTKASHI            , "MUS-PL-PL-MTKASHI") \
    X(MUS_PL_PL_TOWN02             , "MUS-PL-PL-TOWN02") \
    X(MUS_PL_PL_AUDIO              , "MUS-PL-PL-AUDIO") \
    X(MUS_PL_CITY11_D              , "MUS-PL-CITY11-D") \
    X(MUS_PL_PL_BF_ROULETTE        , "MUS-PL-PL-BF-ROULETTE") \
    X(MUS_PL_PL_DON2               , "MUS-PL-PL-DON2") \
    X(MUS_PL_PL_BF_STAGE           , "MUS-PL-PL-BF-STAGE") \
    X(MUS_PL_PL_BF_FACTORY         , "MUS-PL-PL-BF-FACTORY") \
    X(MUS_PL_PL_BF_CASTLE          , "MUS-PL-PL-BF-CASTLE") \
    X(MUS_PL_PL_FRO                , "MUS-PL-PL-FRO") \
    X(MUS_PL_PL_POINTGET3          , "MUS-PL-PL-POINTGET3") \
    X(MUS_PL_PL_BA_BRAIN           , "MUS-PL-PL-BA-BRAIN") \
    X(MUS_PL_PL_WINBRAIN           , "MUS-PL-PL-WINBRAIN") \
    X(MUS_PL_PL_BA_REGI            , "MUS-PL-PL-BA-REGI") \
    X(MUS_HG_GS_TITLE              , "MUS-HG-GS-TITLE") \
    X(MUS_HG_GS_POKEMON_THEME      , "MUS-HG-GS-POKEMON-THEME") \
    X(MUS_HG_GS_STARTING           , "MUS-HG-GS-STARTING") \
    X(MUS_HG_GS_T_WAKABA           , "MUS-HG-GS-T-WAKABA") \
    X(MUS_HG_GS_E_TSURETEKE1       , "MUS-HG-GS-E-TSURETEKE1") \
    X(MUS_HG_GS_E_SUPPORT_F        , "MUS-HG-GS-E-SUPPORT-F") \
    X(MUS_HG_GS_E_SUPPORT_M        , "MUS-HG-GS-E-SUPPORT-M") \
    X(MUS_HG_GS_UTSUGI_RABO        , "MUS-HG-GS-UTSUGI-RABO") \
    X(MUS_HG_ME_KEYITEM            , "MUS-HG-ME-KEYITEM") \
    X(MUS_HG_GS_R_1_29             , "MUS-HG-GS-R-1-29") \
    X(MUS_HG_GS_VS_NORAPOKE        , "MUS-HG-GS-VS-NORAPOKE") \
    X(MUS_HG_GS_WIN2               , "MUS-HG-GS-WIN2") \
    X(MUS_HG_GS_WIN2_NOT_FAN       , "MUS-HG-GS-WIN2-NOT-FAN") \
    X(MUS_HG_ME_LVUP               , "MUS-HG-ME-LVUP") \
    X(MUS_HG_GS_C_YOSHINO          , "MUS-HG-GS-C-YOSHINO") \
    X(MUS_HG_GS_E_TSURETEKE2       , "MUS-HG-GS-E-TSURETEKE2") \
    X(MUS_HG_GS_POKESEN            , "MUS-HG-GS-POKESEN") \
    X(MUS_HG_ME_ASA                , "MUS-HG-ME-ASA") \
    X(MUS_HG_GS_EYE_J_SHOUNEN      , "MUS-HG-GS-EYE-J-SHOUNEN") \
    X(MUS_HG_GS_VS_TRAINER         , "MUS-HG-GS-VS-TRAINER") \
    X(MUS_HG_GS_WIN1               , "MUS-HG-GS-WIN1") \
    X(MUS_HG_GS_R_1_30             , "MUS-HG-GS-R-1-30") \
    X(MUS_HG_ME_HYOUKA1            , "MUS-HG-ME-HYOUKA1") \
    X(MUS_HG_GS_C_KIKYOU           , "MUS-HG-GS-C-KIKYOU") \
    X(MUS_HG_GS_TO_MADATSUBOMI1    , "MUS-HG-GS-TO-MADATSUBOMI1") \
    X(MUS_HG_GS_EYE_BOUZU          , "MUS-HG-GS-EYE-BOUZU") \
    X(MUS_HG_GS_FS                 , "MUS-HG-GS-FS") \
    X(MUS_HG_ME_TAMAGO_GET         , "MUS-HG-ME-TAMAGO-GET") \
    X(MUS_HG_GS_E_MAIKO_THEME      , "MUS-HG-GS-E-MAIKO-THEME") \
    X(MUS_HG_GS_D_CHIKATSUURO      , "MUS-HG-GS-D-CHIKATSUURO") \
    X(MUS_HG_ME_ITEM               , "MUS-HG-ME-ITEM") \
    X(MUS_HG_GS_D_UNKNOWN_ISEKI    , "MUS-HG-GS-D-UNKNOWN-ISEKI") \
    X(MUS_HG_GS_RADIO_UNKNOWN      , "MUS-HG-GS-RADIO-UNKNOWN") \
    X(MUS_HG_ME_HYOUKA2            , "MUS-HG-ME-HYOUKA2") \
    X(MUS_HG_GS_T_HIWADA           , "MUS-HG-GS-T-HIWADA") \
    X(MUS_HG_GS_EYE_ROCKET         , "MUS-HG-GS-EYE-ROCKET") \
    X(MUS_HG_GS_VS_ROCKET          , "MUS-HG-GS-VS-ROCKET") \
    X(MUS_HG_GS_R_4_34             , "MUS-HG-GS-R-4-34") \
    X(MUS_HG_GS_E_RIVAL1           , "MUS-HG-GS-E-RIVAL1") \
    X(MUS_HG_GS_VS_RIVAL           , "MUS-HG-GS-VS-RIVAL") \
    X(MUS_HG_GS_SHINKA             , "MUS-HG-GS-SHINKA") \
    X(MUS_HG_GS_KOUKAN             , "MUS-HG-GS-KOUKAN") \
    X(MUS_HG_ME_SHINKAOME          , "MUS-HG-ME-SHINKAOME") \
    X(MUS_HG_GS_C_KOGANE           , "MUS-HG-GS-C-KOGANE") \
    X(MUS_HG_GS_GYM                , "MUS-HG-GS-GYM") \
    X(MUS_HG_GS_VS_GYMREADER       , "MUS-HG-GS-VS-GYMREADER") \
    X(MUS_HG_GS_WIN3               , "MUS-HG-GS-WIN3") \
    X(MUS_HG_ME_BADGE              , "MUS-HG-ME-BADGE") \
    X(MUS_HG_GS_RADIO_JINGLE       , "MUS-HG-GS-RADIO-JINGLE") \
    X(MUS_HG_GS_AIKOTOBA           , "MUS-HG-GS-AIKOTOBA") \
    X(MUS_HG_ME_WAZA               , "MUS-HG-ME-WAZA") \
    X(MUS_HG_GS_GAME               , "MUS-HG-GS-GAME") \
    X(MUS_HG_GS_GAMEATARI          , "MUS-HG-GS-GAMEATARI") \
    X(MUS_HG_ME_CARDGAME1          , "MUS-HG-ME-CARDGAME1") \
    X(MUS_HG_ME_CARDGAME2          , "MUS-HG-ME-CARDGAME2") \
    X(MUS_HG_ME_ACCE               , "MUS-HG-ME-ACCE") \
    X(MUS_HG_GS_WIFITOWER          , "MUS-HG-GS-WIFITOWER") \
    X(MUS_HG_GS_BLD_GTC            , "MUS-HG-GS-BLD-GTC") \
    X(MUS_HG_ME_HYOUKA3            , "MUS-HG-ME-HYOUKA3") \
    X(MUS_HG_PL_BICYCLE            , "MUS-HG-PL-BICYCLE") \
    X(MUS_HG_GS_EYE_J_SHOUJO       , "MUS-HG-GS-EYE-J-SHOUJO") \
    X(MUS_HG_ME_POKEGEAR_REGIST    , "MUS-HG-ME-POKEGEAR-REGIST") \
    X(MUS_HG_GS_D_KOUEN            , "MUS-HG-GS-D-KOUEN") \
    X(MUS_HG_ME_KINOMI             , "MUS-HG-ME-KINOMI") \
    X(MUS_HG_GS_C_ENJU             , "MUS-HG-GS-C-ENJU") \
    X(MUS_HG_GS_KABURENJOU         , "MUS-HG-GS-KABURENJOU") \
    X(MUS_HG_GS_TO_YAKETA          , "MUS-HG-GS-TO-YAKETA") \
    X(MUS_HG_GS_E_MINAKI           , "MUS-HG-GS-E-MINAKI") \
    X(MUS_HG_GS_OHKIDO_RABO        , "MUS-HG-GS-OHKIDO-RABO") \
    X(MUS_HG_ME_HYOUKA4            , "MUS-HG-ME-HYOUKA4") \
    X(MUS_HG_GS_R_6_38             , "MUS-HG-GS-R-6-38") \
    X(MUS_HG_GS_RADIO_MARCH        , "MUS-HG-GS-RADIO-MARCH") \
    X(MUS_HG_GS_VS_RAIKOU          , "MUS-HG-GS-VS-RAIKOU") \
    X(MUS_HG_GS_TO_TOUDAI          , "MUS-HG-GS-TO-TOUDAI") \
    X(MUS_HG_GS_NAMINORI           , "MUS-HG-GS-NAMINORI") \
    X(MUS_HG_GS_C_TANBA            , "MUS-HG-GS-C-TANBA") \
    X(MUS_HG_ME_PT_SPECIAL         , "MUS-HG-ME-PT-SPECIAL") \
    X(MUS_HG_GS_R_7_42             , "MUS-HG-GS-R-7-42") \
    X(MUS_HG_GS_KAIDENPA           , "MUS-HG-GS-KAIDENPA") \
    X(MUS_HG_GS_D_AJITO            , "MUS-HG-GS-D-AJITO") \
    X(MUS_HG_GS_EYE_J_AYASHII      , "MUS-HG-GS-EYE-J-AYASHII") \
    X(MUS_HG_GS_E_RIVAL2           , "MUS-HG-GS-E-RIVAL2") \
    X(MUS_HG_GS_SENKYO             , "MUS-HG-GS-SENKYO") \
    X(MUS_HG_GS_D_KOORINONUKE      , "MUS-HG-GS-D-KOORINONUKE") \
    X(MUS_HG_ME_WASURE             , "MUS-HG-ME-WASURE") \
    X(MUS_HG_GS_RYUUNOANA          , "MUS-HG-GS-RYUUNOANA") \
    X(MUS_HG_GS_IBUKI              , "MUS-HG-GS-IBUKI") \
    X(MUS_HG_GS_VS_ENTEI           , "MUS-HG-GS-VS-ENTEI") \
    X(MUS_HG_GS_TO_SUZU            , "MUS-HG-GS-TO-SUZU") \
    X(MUS_HG_GS_E_MAIKO_MAI        , "MUS-HG-GS-E-MAIKO-MAI") \
    X(MUS_HG_GS_E_HOUOU            , "MUS-HG-GS-E-HOUOU") \
    X(MUS_HG_GS_VS_HOUOU           , "MUS-HG-GS-VS-HOUOU") \
    X(MUS_HG_GS_R_1_26             , "MUS-HG-GS-R-1-26") \
    X(MUS_HG_GS_KOUSOKUSEN         , "MUS-HG-GS-KOUSOKUSEN") \
    X(MUS_HG_GS_C_KUCHIBA          , "MUS-HG-GS-C-KUCHIBA") \
    X(MUS_HG_GS_VS_GYMREADER_KANTO , "MUS-HG-GS-VS-GYMREADER-KANTO") \
    X(MUS_HG_GS_T_CHION            , "MUS-HG-GS-T-CHION") \
    X(MUS_HG_GS_D_IWAYAMA          , "MUS-HG-GS-D-IWAYAMA") \
    X(MUS_HG_GS_VS_NORAPOKE_KANTO  , "MUS-HG-GS-VS-NORAPOKE-KANTO") \
    X(MUS_HG_ME_HYOUKA5            , "MUS-HG-ME-HYOUKA5") \
    X(MUS_HG_GS_C_HANADA           , "MUS-HG-GS-C-HANADA") \
    X(MUS_HG_GS_R_12_24            , "MUS-HG-GS-R-12-24") \
    X(MUS_HG_GS_E_LINEAR           , "MUS-HG-GS-E-LINEAR") \
    X(MUS_HG_GS_RADIO_KOMORIUTA    , "MUS-HG-GS-RADIO-KOMORIUTA") \
    X(MUS_HG_GS_VS_SUICUNE         , "MUS-HG-GS-VS-SUICUNE") \
    X(MUS_HG_GS_C_TAMAMUSHI        , "MUS-HG-GS-C-TAMAMUSHI") \
    X(MUS_HG_GS_R_10_11            , "MUS-HG-GS-R-10-11") \
    X(MUS_HG_GS_HUE                , "MUS-HG-GS-HUE") \
    X(MUS_HG_GS_D_TOKIWANOMORI3    , "MUS-HG-GS-D-TOKIWANOMORI3") \
    X(MUS_HG_GS_EYE_K_SHOUNEN      , "MUS-HG-GS-EYE-K-SHOUNEN") \
    X(MUS_HG_GS_C_YAMABUKI         , "MUS-HG-GS-C-YAMABUKI") \
    X(MUS_HG_GS_R_9_03             , "MUS-HG-GS-R-9-03") \
    X(MUS_HG_GS_EYE_K_AYASHII      , "MUS-HG-GS-EYE-K-AYASHII") \
    X(MUS_HG_GS_OTSUKIMI_EVENT     , "MUS-HG-GS-OTSUKIMI-EVENT") \
    X(MUS_HG_GS_R_9_01             , "MUS-HG-GS-R-9-01") \
    X(MUS_HG_GS_T_MASARA           , "MUS-HG-GS-T-MASARA") \
    X(MUS_HG_GS_OHKIDO             , "MUS-HG-GS-OHKIDO") \
    X(MUS_HG_ME_HYOUKA6            , "MUS-HG-ME-HYOUKA6") \
    X(MUS_HG_GS_EYE_K_SHOUJO       , "MUS-HG-GS-EYE-K-SHOUJO") \
    X(MUS_HG_GS_VS_TRAINER_KANTO   , "MUS-HG-GS-VS-TRAINER-KANTO") \
    X(MUS_HG_GS_T_GUREN            , "MUS-HG-GS-T-GUREN") \
    X(MUS_HG_GS_SAFARI_ROAD        , "MUS-HG-GS-SAFARI-ROAD") \
    X(MUS_HG_GS_SAFARI_HOUSE       , "MUS-HG-GS-SAFARI-HOUSE") \
    X(MUS_HG_GS_SAFARI_FIELD       , "MUS-HG-GS-SAFARI-FIELD") \
    X(MUS_HG_GS_RADIO_VARIETY      , "MUS-HG-GS-RADIO-VARIETY") \
    X(MUS_HG_GS_TAIKAIMAE          , "MUS-HG-GS-TAIKAIMAE") \
    X(MUS_HG_GS_TAIKAI             , "MUS-HG-GS-TAIKAI") \
    X(MUS_HG_ME_MUSHITORI3         , "MUS-HG-ME-MUSHITORI3") \
    X(MUS_HG_ME_MUSHITORI2         , "MUS-HG-ME-MUSHITORI2") \
    X(MUS_HG_ME_MUSHITORI1         , "MUS-HG-ME-MUSHITORI1") \
    X(MUS_HG_GS_PT_ENTR            , "MUS-HG-GS-PT-ENTR") \
    X(MUS_HG_ME_PT_NEW             , "MUS-HG-ME-PT-NEW") \
    X(MUS_HG_GS_PT_OPEN            , "MUS-HG-GS-PT-OPEN") \
    X(MUS_HG_GS_PT_TITLE           , "MUS-HG-GS-PT-TITLE") \
    X(MUS_HG_GS_PT_GAME            , "MUS-HG-GS-PT-GAME") \
    X(MUS_HG_ME_PT_RESULTG         , "MUS-HG-ME-PT-RESULTG") \
    X(MUS_HG_GS_PT_GAMEF           , "MUS-HG-GS-PT-GAMEF") \
    X(MUS_HG_GS_PT_RESULT          , "MUS-HG-GS-PT-RESULT") \
    X(MUS_HG_GS_PT_END             , "MUS-HG-GS-PT-END") \
    X(MUS_HG_GS_PT_VICTORY         , "MUS-HG-GS-PT-VICTORY") \
    X(MUS_HG_GS_WIFI_PRESENT       , "MUS-HG-GS-WIFI-PRESENT") \
    X(MUS_HG_GS_BATTLETOWER2       , "MUS-HG-GS-BATTLETOWER2") \
    X(MUS_HG_GS_BATTLETOWER        , "MUS-HG-GS-BATTLETOWER") \
    X(MUS_HG_ME_BPGET              , "MUS-HG-ME-BPGET") \
    X(MUS_HG_GS_BF_FACTORY         , "MUS-HG-GS-BF-FACTORY") \
    X(MUS_HG_GS_BF_STAGE           , "MUS-HG-GS-BF-STAGE") \
    X(MUS_HG_GS_BF_ROULETTE        , "MUS-HG-GS-BF-ROULETTE") \
    X(MUS_HG_ME_ROULETTE           , "MUS-HG-ME-ROULETTE") \
    X(MUS_HG_GS_BF_CASTLE          , "MUS-HG-GS-BF-CASTLE") \
    X(MUS_HG_ME_CASTLE             , "MUS-HG-ME-CASTLE") \
    X(MUS_HG_GS_BA_BRAIN           , "MUS-HG-GS-BA-BRAIN") \
    X(MUS_HG_GS_WINBRAIN           , "MUS-HG-GS-WINBRAIN") \
    X(MUS_HG_GS_RADIO_TRAINER      , "MUS-HG-GS-RADIO-TRAINER") \
    X(MUS_HG_GS_GURUGURU           , "MUS-HG-GS-GURUGURU") \
    X(MUS_HG_GS_WIFI_ACCESS        , "MUS-HG-GS-WIFI-ACCESS") \
    X(MUS_HG_GS_WIFIUNION          , "MUS-HG-GS-WIFIUNION") \
    X(MUS_HG_GS_WIFIGAME           , "MUS-HG-GS-WIFIGAME") \
    X(MUS_HG_ME_MINIGAME           , "MUS-HG-ME-MINIGAME") \
    X(MUS_HG_GS_WIFIPARADE         , "MUS-HG-GS-WIFIPARADE") \
    X(MUS_HG_GS_RADIO_R_101        , "MUS-HG-GS-RADIO-R-101") \
    X(MUS_HG_GS_RADIO_R_201        , "MUS-HG-GS-RADIO-R-201") \
    X(MUS_HG_GS_PHC                , "MUS-HG-GS-PHC") \
    X(MUS_HG_GS_E_G_PICHU          , "MUS-HG-GS-E-G-PICHU") \
    X(MUS_HG_GS_EYE_MAIKO          , "MUS-HG-GS-EYE-MAIKO") \
    X(MUS_HG_GS_E_LUGIA            , "MUS-HG-GS-E-LUGIA") \
    X(MUS_HG_GS_VS_LUGIA           , "MUS-HG-GS-VS-LUGIA") \
    X(MUS_HG_GS_D_CHAMPROAD        , "MUS-HG-GS-D-CHAMPROAD") \
    X(MUS_HG_GS_CHAMPROAD          , "MUS-HG-GS-CHAMPROAD") \
    X(MUS_HG_GS_VS_CHAMP           , "MUS-HG-GS-VS-CHAMP") \
    X(MUS_HG_GS_E_DENDOURIRI       , "MUS-HG-GS-E-DENDOURIRI") \
    X(MUS_HG_GS_ENDING             , "MUS-HG-GS-ENDING") \
    X(MUS_HG_GS_ENDING2            , "MUS-HG-GS-ENDING2") \
    X(MUS_HG_GS_VS_KODAI           , "MUS-HG-GS-VS-KODAI") \
    X(MUS_HG_GS_D_SHINTO           , "MUS-HG-GS-D-SHINTO") \
    X(MUS_HG_GS_E_ARCEUS           , "MUS-HG-GS-E-ARCEUS") \
    X(MUS_HG_ME_GONIN              , "MUS-HG-ME-GONIN") \
    X(MUS_BW_BGM_GF_LOGO           , "MUS-BW-BGM-GF-LOGO") \
    X(MUS_BW_BGM_TITLE             , "MUS-BW-BGM-TITLE") \
    X(MUS_BW_BGM_TITLE01           , "MUS-BW-BGM-TITLE01") \
    X(MUS_BW_BGM_POKEMON_THEME     , "MUS-BW-BGM-POKEMON-THEME") \
    X(MUS_BW_BGM_STARTING          , "MUS-BW-BGM-STARTING") \
    X(MUS_BW_BGM_STARTING2         , "MUS-BW-BGM-STARTING2") \
    X(MUS_BW_BGM_E_OPENING         , "MUS-BW-BGM-E-OPENING") \
    X(MUS_BW_BGM_T_01              , "MUS-BW-BGM-T-01") \
    X(MUS_BW_BGM_VS_RIVAL          , "MUS-BW-BGM-VS-RIVAL") \
    X(MUS_BW_BGM_E_TSURETEKE1      , "MUS-BW-BGM-E-TSURETEKE1") \
    X(MUS_BW_BGM_E_DOCTOR          , "MUS-BW-BGM-E-DOCTOR") \
    X(MUS_BW_BGM_LABO              , "MUS-BW-BGM-LABO") \
    X(MUS_BW_ME_KEYITEM            , "MUS-BW-ME-KEYITEM") \
    X(MUS_BW_BGM_E_FRIEND          , "MUS-BW-BGM-E-FRIEND") \
    X(MUS_BW_BGM_R_A               , "MUS-BW-BGM-R-A") \
    X(MUS_BW_BGM_VS_NORAPOKE       , "MUS-BW-BGM-VS-NORAPOKE") \
    X(MUS_BW_BGM_WIN1              , "MUS-BW-BGM-WIN1") \
    X(MUS_BW_ME_LVUP               , "MUS-BW-ME-LVUP") \
    X(MUS_BW_BGM_T_02              , "MUS-BW-BGM-T-02") \
    X(MUS_BW_BGM_E_TSURETEKE2      , "MUS-BW-BGM-E-TSURETEKE2") \
    X(MUS_BW_BGM_POKECEN           , "MUS-BW-BGM-POKECEN") \
    X(MUS_BW_ME_ASA                , "MUS-BW-ME-ASA") \
    X(MUS_BW_ME_HYOUKA1            , "MUS-BW-ME-HYOUKA1") \
    X(MUS_BW_BGM_E_SAGE            , "MUS-BW-BGM-E-SAGE") \
    X(MUS_BW_BGM_R_B_SP            , "MUS-BW-BGM-R-B-SP") \
    X(MUS_BW_BGM_R_B_SU            , "MUS-BW-BGM-R-B-SU") \
    X(MUS_BW_BGM_R_B_AU            , "MUS-BW-BGM-R-B-AU") \
    X(MUS_BW_BGM_R_B_WI            , "MUS-BW-BGM-R-B-WI") \
    X(MUS_BW_ME_CALL               , "MUS-BW-ME-CALL") \
    X(MUS_BW_BGM_EYE_01            , "MUS-BW-BGM-EYE-01") \
    X(MUS_BW_BGM_VS_TRAINER        , "MUS-BW-BGM-VS-TRAINER") \
    X(MUS_BW_BGM_WIN2              , "MUS-BW-BGM-WIN2") \
    X(MUS_BW_BGM_EYE_02            , "MUS-BW-BGM-EYE-02") \
    X(MUS_BW_ME_ITEM               , "MUS-BW-ME-ITEM") \
    X(MUS_BW_BGM_C_01              , "MUS-BW-BGM-C-01") \
    X(MUS_BW_ME_HYOUKA2            , "MUS-BW-ME-HYOUKA2") \
    X(MUS_BW_BGM_D_01              , "MUS-BW-BGM-D-01") \
    X(MUS_BW_BGM_D_01_B1F          , "MUS-BW-BGM-D-01-B1F") \
    X(MUS_BW_BGM_E_PLASMA          , "MUS-BW-BGM-E-PLASMA") \
    X(MUS_BW_BGM_VS_PLASMA         , "MUS-BW-BGM-VS-PLASMA") \
    X(MUS_BW_BGM_WIN6              , "MUS-BW-BGM-WIN6") \
    X(MUS_BW_BGM_SHINKA            , "MUS-BW-BGM-SHINKA") \
    X(MUS_BW_BGM_KOUKAN            , "MUS-BW-BGM-KOUKAN") \
    X(MUS_BW_ME_SHINKAOME          , "MUS-BW-ME-SHINKAOME") \
    X(MUS_BW_BGM_EYE_03            , "MUS-BW-BGM-EYE-03") \
    X(MUS_BW_BGM_E_RIVAL           , "MUS-BW-BGM-E-RIVAL") \
    X(MUS_BW_BGM_E_TROUBLE         , "MUS-BW-BGM-E-TROUBLE") \
    X(MUS_BW_BGM_C_02              , "MUS-BW-BGM-C-02") \
    X(MUS_BW_ME_HYOUKA3            , "MUS-BW-ME-HYOUKA3") \
    X(MUS_BW_BGM_GYM               , "MUS-BW-BGM-GYM") \
    X(MUS_BW_BGM_VS_GYMLEADER      , "MUS-BW-BGM-VS-GYMLEADER") \
    X(MUS_BW_BGM_BATTLESUPERIOR    , "MUS-BW-BGM-BATTLESUPERIOR") \
    X(MUS_BW_BGM_WIN3              , "MUS-BW-BGM-WIN3") \
    X(MUS_BW_ME_BADGE              , "MUS-BW-ME-BADGE") \
    X(MUS_BW_ME_WAZA               , "MUS-BW-ME-WAZA") \
    X(MUS_BW_BGM_GATE              , "MUS-BW-BGM-GATE") \
    X(MUS_BW_BGM_H_01              , "MUS-BW-BGM-H-01") \
    X(MUS_BW_BGM_C_03              , "MUS-BW-BGM-C-03") \
    X(MUS_BW_BGM_EYE_12            , "MUS-BW-BGM-EYE-12") \
    X(MUS_BW_BGM_R_C_SP            , "MUS-BW-BGM-R-C-SP") \
    X(MUS_BW_BGM_R_C_SU            , "MUS-BW-BGM-R-C-SU") \
    X(MUS_BW_BGM_R_C_AU            , "MUS-BW-BGM-R-C-AU") \
    X(MUS_BW_BGM_R_C_WI            , "MUS-BW-BGM-R-C-WI") \
    X(MUS_BW_BGM_EYE_11            , "MUS-BW-BGM-EYE-11") \
    X(MUS_BW_BGM_C_04              , "MUS-BW-BGM-C-04") \
    X(MUS_BW_BGM_E_SUPPORT         , "MUS-BW-BGM-E-SUPPORT") \
    X(MUS_BW_BGM_E_EMOTION         , "MUS-BW-BGM-E-EMOTION") \
    X(MUS_BW_BGM_E_N               , "MUS-BW-BGM-E-N") \
    X(MUS_BW_BGM_VS_N              , "MUS-BW-BGM-VS-N") \
    X(MUS_BW_BGM_BATTLEPINCH       , "MUS-BW-BGM-BATTLEPINCH") \
    X(MUS_BW_BGM_BICYCLE           , "MUS-BW-BGM-BICYCLE") \
    X(MUS_BW_BGM_E_CHAMPION        , "MUS-BW-BGM-E-CHAMPION") \
    X(MUS_BW_BGM_H_02              , "MUS-BW-BGM-H-02") \
    X(MUS_BW_BGM_C_05              , "MUS-BW-BGM-C-05") \
    X(MUS_BW_BGM_D_03              , "MUS-BW-BGM-D-03") \
    X(MUS_BW_BGM_R_D_SP            , "MUS-BW-BGM-R-D-SP") \
    X(MUS_BW_BGM_R_D_SU            , "MUS-BW-BGM-R-D-SU") \
    X(MUS_BW_BGM_R_D_AU            , "MUS-BW-BGM-R-D-AU") \
    X(MUS_BW_BGM_R_D_WI            , "MUS-BW-BGM-R-D-WI") \
    X(MUS_BW_BGM_EYE_06            , "MUS-BW-BGM-EYE-06") \
    X(MUS_BW_BGM_EYE_09            , "MUS-BW-BGM-EYE-09") \
    X(MUS_BW_BGM_D_02              , "MUS-BW-BGM-D-02") \
    X(MUS_BW_BGM_D_02_B1F          , "MUS-BW-BGM-D-02-B1F") \
    X(MUS_BW_BGM_D_02_B2F          , "MUS-BW-BGM-D-02-B2F") \
    X(MUS_BW_BGM_C_06              , "MUS-BW-BGM-C-06") \
    X(MUS_BW_BGM_E_DOCTOR2         , "MUS-BW-BGM-E-DOCTOR2") \
    X(MUS_BW_ME_HYOUKA4            , "MUS-BW-ME-HYOUKA4") \
    X(MUS_BW_ME_WASURE             , "MUS-BW-ME-WASURE") \
    X(MUS_BW_BGM_EYE_08            , "MUS-BW-BGM-EYE-08") \
    X(MUS_BW_BGM_C_07              , "MUS-BW-BGM-C-07") \
    X(MUS_BW_BGM_D_05              , "MUS-BW-BGM-D-05") \
    X(MUS_BW_BGM_EYE_PLASMA        , "MUS-BW-BGM-EYE-PLASMA") \
    X(MUS_BW_BGM_D_07              , "MUS-BW-BGM-D-07") \
    X(MUS_BW_BGM_D_04              , "MUS-BW-BGM-D-04") \
    X(MUS_BW_ME_ITEM_MYSTERY       , "MUS-BW-ME-ITEM-MYSTERY") \
    X(MUS_BW_BGM_H_03              , "MUS-BW-BGM-H-03") \
    X(MUS_BW_BGM_FS                , "MUS-BW-BGM-FS") \
    X(MUS_BW_BGM_EYE_05            , "MUS-BW-BGM-EYE-05") \
    X(MUS_BW_BGM_C_08_B            , "MUS-BW-BGM-C-08-B") \
    X(MUS_BW_BGM_C_08_W            , "MUS-BW-BGM-C-08-W") \
    X(MUS_BW_BGM_R_F               , "MUS-BW-BGM-R-F") \
    X(MUS_BW_BGM_D_CHAMPROAD       , "MUS-BW-BGM-D-CHAMPROAD") \
    X(MUS_BW_BGM_EYE_04            , "MUS-BW-BGM-EYE-04") \
    X(MUS_BW_BGM_POKEMON_LEAGUE    , "MUS-BW-BGM-POKEMON-LEAGUE") \
    X(MUS_BW_BGM_VS_SHITENNO       , "MUS-BW-BGM-VS-SHITENNO") \
    X(MUS_BW_BGM_E_N_CASTLE        , "MUS-BW-BGM-E-N-CASTLE") \
    X(MUS_BW_BGM_N_CASTLE_BRIDGE   , "MUS-BW-BGM-N-CASTLE-BRIDGE") \
    X(MUS_BW_BGM_N_CASTLE          , "MUS-BW-BGM-N-CASTLE") \
    X(MUS_BW_BGM_N_ROOM            , "MUS-BW-BGM-N-ROOM") \
    X(MUS_BW_BGM_E_LEGEND_COME     , "MUS-BW-BGM-E-LEGEND-COME") \
    X(MUS_BW_BGM_E_LEGEND_BORN     , "MUS-BW-BGM-E-LEGEND-BORN") \
    X(MUS_BW_BGM_VS_SHIN           , "MUS-BW-BGM-VS-SHIN") \
    X(MUS_BW_BGM_VS_N_2            , "MUS-BW-BGM-VS-N-2") \
    X(MUS_BW_BGM_E_G_CIS           , "MUS-BW-BGM-E-G-CIS") \
    X(MUS_BW_BGM_VS_G_CIS          , "MUS-BW-BGM-VS-G-CIS") \
    X(MUS_BW_BGM_WIN4              , "MUS-BW-BGM-WIN4") \
    X(MUS_BW_BGM_E_LAST            , "MUS-BW-BGM-E-LAST") \
    X(MUS_BW_BGM_ENDING            , "MUS-BW-BGM-ENDING") \
    X(MUS_BW_BGM_E_HANDSOME        , "MUS-BW-BGM-E-HANDSOME") \
    X(MUS_BW_ME_TAMAGO_GET         , "MUS-BW-ME-TAMAGO-GET") \
    X(MUS_BW_BGM_PLEASURE_BOAT     , "MUS-BW-BGM-PLEASURE-BOAT") \
    X(MUS_BW_BGM_WIFI_ACCESS       , "MUS-BW-BGM-WIFI-ACCESS") \
    X(MUS_BW_BGM_GLTERMINAL        , "MUS-BW-BGM-GLTERMINAL") \
    X(MUS_BW_BGM_GTS               , "MUS-BW-BGM-GTS") \
    X(MUS_BW_BGM_GURUGURU          , "MUS-BW-BGM-GURUGURU") \
    X(MUS_BW_BGM_UNITED_NATIONS    , "MUS-BW-BGM-UNITED-NATIONS") \
    X(MUS_BW_ME_HYOUKA5            , "MUS-BW-ME-HYOUKA5") \
    X(MUS_BW_BGM_GEAR_STATION      , "MUS-BW-BGM-GEAR-STATION") \
    X(MUS_BW_BGM_BATTLE_SUBWAY     , "MUS-BW-BGM-BATTLE-SUBWAY") \
    X(MUS_BW_BGM_VS_SUBWAY_TRAINER , "MUS-BW-BGM-VS-SUBWAY-TRAINER") \
    X(MUS_BW_ME_BPGET              , "MUS-BW-ME-BPGET") \
    X(MUS_BW_BGM_MSL_FIELD         , "MUS-BW-BGM-MSL-FIELD") \
    X(MUS_BW_ME_ACCE               , "MUS-BW-ME-ACCE") \
    X(MUS_BW_BGM_MSL_DRESSUP       , "MUS-BW-BGM-MSL-DRESSUP") \
    X(MUS_BW_BGM_MSL_BEFORE        , "MUS-BW-BGM-MSL-BEFORE") \
    X(MUS_BW_BGM_MSL_01            , "MUS-BW-BGM-MSL-01") \
    X(MUS_BW_BGM_MSL_02            , "MUS-BW-BGM-MSL-02") \
    X(MUS_BW_BGM_MSL_03            , "MUS-BW-BGM-MSL-03") \
    X(MUS_BW_BGM_MSL_04            , "MUS-BW-BGM-MSL-04") \
    X(MUS_BW_BGM_MSL_DL_MUNNA      , "MUS-BW-BGM-MSL-DL-MUNNA") \
    X(MUS_BW_BGM_MSL_DL_SMASH      , "MUS-BW-BGM-MSL-DL-SMASH") \
    X(MUS_BW_BGM_MSL_DL_FESTA      , "MUS-BW-BGM-MSL-DL-FESTA") \
    X(MUS_BW_BGM_MSL_DL_RELIC      , "MUS-BW-BGM-MSL-DL-RELIC") \
    X(MUS_BW_BGM_MSL_DL_RUNPA      , "MUS-BW-BGM-MSL-DL-RUNPA") \
    X(MUS_BW_BGM_E_KANRANSYA       , "MUS-BW-BGM-E-KANRANSYA") \
    X(MUS_BW_ME_AISHOU_KIDOU       , "MUS-BW-ME-AISHOU-KIDOU") \
    X(MUS_BW_ME_AISHOU_H           , "MUS-BW-ME-AISHOU-H") \
    X(MUS_BW_ME_AISHOU_M           , "MUS-BW-ME-AISHOU-M") \
    X(MUS_BW_ME_AISHOU_L           , "MUS-BW-ME-AISHOU-L") \
    X(MUS_BW_BGM_VS_MOVEPOKE       , "MUS-BW-BGM-VS-MOVEPOKE") \
    X(MUS_BW_BGM_T_03              , "MUS-BW-BGM-T-03") \
    X(MUS_BW_BGM_H_05              , "MUS-BW-BGM-H-05") \
    X(MUS_BW_BGM_R_E_SP            , "MUS-BW-BGM-R-E-SP") \
    X(MUS_BW_BGM_R_E_SU            , "MUS-BW-BGM-R-E-SU") \
    X(MUS_BW_BGM_R_E_AU            , "MUS-BW-BGM-R-E-AU") \
    X(MUS_BW_BGM_R_E_WI            , "MUS-BW-BGM-R-E-WI") \
    X(MUS_BW_BGM_EYE_07            , "MUS-BW-BGM-EYE-07") \
    X(MUS_BW_BGM_PALPARK           , "MUS-BW-BGM-PALPARK") \
    X(MUS_BW_BGM_PALPARK_BOX       , "MUS-BW-BGM-PALPARK-BOX") \
    X(MUS_BW_BGM_PALPARK_GAME      , "MUS-BW-BGM-PALPARK-GAME") \
    X(MUS_BW_BGM_EYE_10            , "MUS-BW-BGM-EYE-10") \
    X(MUS_BW_BGM_C_10_B            , "MUS-BW-BGM-C-10-B") \
    X(MUS_BW_BGM_C_10_W            , "MUS-BW-BGM-C-10-W") \
    X(MUS_BW_BGM_GAME_SYNC         , "MUS-BW-BGM-GAME-SYNC") \
    X(MUS_BW_BGM_PALACE            , "MUS-BW-BGM-PALACE") \
    X(MUS_BW_ME_MISSION_START      , "MUS-BW-ME-MISSION-START") \
    X(MUS_BW_BGM_PALACE2           , "MUS-BW-BGM-PALACE2") \
    X(MUS_BW_ME_MISSION_CLEAR      , "MUS-BW-ME-MISSION-CLEAR") \
    X(MUS_BW_ME_MISSION_FAILED     , "MUS-BW-ME-MISSION-FAILED") \
    X(MUS_BW_BGM_EYE_13            , "MUS-BW-BGM-EYE-13") \
    X(MUS_BW_BGM_T_05_SP           , "MUS-BW-BGM-T-05-SP") \
    X(MUS_BW_BGM_T_05_SU           , "MUS-BW-BGM-T-05-SU") \
    X(MUS_BW_BGM_E_SHIRONA         , "MUS-BW-BGM-E-SHIRONA") \
    X(MUS_BW_BGM_VS_SHIRONA        , "MUS-BW-BGM-VS-SHIRONA") \
    X(MUS_BW_BGM_D_06              , "MUS-BW-BGM-D-06") \
    X(MUS_BW_BGM_VS_TSUYOPOKE      , "MUS-BW-BGM-VS-TSUYOPOKE") \
    X(MUS_BW_BGM_NAMINORI          , "MUS-BW-BGM-NAMINORI") \
    X(MUS_BW_BGM_DIVING            , "MUS-BW-BGM-DIVING") \
    X(MUS_BW_BGM_T_04              , "MUS-BW-BGM-T-04") \
    X(MUS_BW_BGM_H_04              , "MUS-BW-BGM-H-04") \
    X(MUS_BW_BGM_WIFI_PRESENT      , "MUS-BW-BGM-WIFI-PRESENT") \
    X(MUS_BW_BGM_WCS               , "MUS-BW-BGM-WCS") \
    X(MUS_BW_BGM_E_SOUND_DESIGNER  , "MUS-BW-BGM-E-SOUND-DESIGNER") \
    X(MUS_BW_BGM_VS_RAI            , "MUS-BW-BGM-VS-RAI") \
    X(MUS_BW_ME_HYOUKA6            , "MUS-BW-ME-HYOUKA6") \
    X(MUS_BW_BGM_VS_CHAMP          , "MUS-BW-BGM-VS-CHAMP") \
    X(MUS_BW_BGM_WIN5              , "MUS-BW-BGM-WIN5") \
    X(MUS_BW_BGM_E_DENDOUIRI       , "MUS-BW-BGM-E-DENDOUIRI") \
    X(MUS_BW_BGM_E_INISHIE         , "MUS-BW-BGM-E-INISHIE") \
    X(MUS_BW_BGM_VS_WCS            , "MUS-BW-BGM-VS-WCS") \
    X(MUS_BW_ME_KINOMI             , "MUS-BW-ME-KINOMI") \
    X(MUS_B2_BGM_TITLE01           , "MUS-B2-BGM-TITLE01") \
    X(MUS_B2_BGM_SW_DEMO_OPENING   , "MUS-B2-BGM-SW-DEMO-OPENING") \
    X(MUS_B2_BGM_SW_C_12           , "MUS-B2-BGM-SW-C-12") \
    X(MUS_B2_BGM_E_BERU            , "MUS-B2-BGM-E-BERU") \
    X(MUS_B2_BGM_SW_R_19_SP        , "MUS-B2-BGM-SW-R-19-SP") \
    X(MUS_B2_BGM_SW_R_19_SU        , "MUS-B2-BGM-SW-R-19-SU") \
    X(MUS_B2_BGM_SW_R_19_AU        , "MUS-B2-BGM-SW-R-19-AU") \
    X(MUS_B2_BGM_SW_R_19_WI        , "MUS-B2-BGM-SW-R-19-WI") \
    X(MUS_B2_BGM_VS_NORAPOKE       , "MUS-B2-BGM-VS-NORAPOKE") \
    X(MUS_B2_BGM_SW_T_06           , "MUS-B2-BGM-SW-T-06") \
    X(MUS_B2_BGM_SW_D_22           , "MUS-B2-BGM-SW-D-22") \
    X(MUS_B2_BGM_E_HUE             , "MUS-B2-BGM-E-HUE") \
    X(MUS_B2_BGM_VS_HUE            , "MUS-B2-BGM-VS-HUE") \
    X(MUS_B2_BGM_SW_C_13           , "MUS-B2-BGM-SW-C-13") \
    X(MUS_B2_BGM_POISONE_GYM_01    , "MUS-B2-BGM-POISONE-GYM-01") \
    X(MUS_B2_BGM_POISONE_GYM_01_JP , "MUS-B2-BGM-POISONE-GYM-01-JP") \
    X(MUS_B2_BGM_E_PLASMA          , "MUS-B2-BGM-E-PLASMA") \
    X(MUS_B2_BGM_PW_LAND           , "MUS-B2-BGM-PW-LAND") \
    X(MUS_B2_BGM_PW_FILMING        , "MUS-B2-BGM-PW-FILMING") \
    X(MUS_B2_BGM_PW_SCENARIO_01_F  , "MUS-B2-BGM-PW-SCENARIO-01-F") \
    X(MUS_B2_BGM_PW_SCENARIO_01_L  , "MUS-B2-BGM-PW-SCENARIO-01-L") \
    X(MUS_B2_BGM_PW_SCENARIO_02_F  , "MUS-B2-BGM-PW-SCENARIO-02-F") \
    X(MUS_B2_BGM_PW_SCENARIO_02_L  , "MUS-B2-BGM-PW-SCENARIO-02-L") \
    X(MUS_B2_BGM_PW_SCENARIO_03_F  , "MUS-B2-BGM-PW-SCENARIO-03-F") \
    X(MUS_B2_BGM_PW_SCENARIO_03_L  , "MUS-B2-BGM-PW-SCENARIO-03-L") \
    X(MUS_B2_BGM_PW_SCENARIO_04_F  , "MUS-B2-BGM-PW-SCENARIO-04-F") \
    X(MUS_B2_BGM_PW_SCENARIO_04_L  , "MUS-B2-BGM-PW-SCENARIO-04-L") \
    X(MUS_B2_BGM_PW_SCENARIO_05_F  , "MUS-B2-BGM-PW-SCENARIO-05-F") \
    X(MUS_B2_BGM_PW_SCENARIO_05_L  , "MUS-B2-BGM-PW-SCENARIO-05-L") \
    X(MUS_B2_BGM_PW_SCENARIO_06_F  , "MUS-B2-BGM-PW-SCENARIO-06-F") \
    X(MUS_B2_BGM_PW_SCENARIO_06_L  , "MUS-B2-BGM-PW-SCENARIO-06-L") \
    X(MUS_B2_BGM_PW_SCENARIO_07_F  , "MUS-B2-BGM-PW-SCENARIO-07-F") \
    X(MUS_B2_BGM_PW_SCENARIO_07_L  , "MUS-B2-BGM-PW-SCENARIO-07-L") \
    X(MUS_B2_BGM_PW_SCENARIO_08_F  , "MUS-B2-BGM-PW-SCENARIO-08-F") \
    X(MUS_B2_ME_POKEWOOD           , "MUS-B2-ME-POKEWOOD") \
    X(MUS_B2_BGM_SW_D_23           , "MUS-B2-BGM-SW-D-23") \
    X(MUS_B2_BGM_INSECT_GYM_01     , "MUS-B2-BGM-INSECT-GYM-01") \
    X(MUS_B2_BGM_EYE_CLOWN         , "MUS-B2-BGM-EYE-CLOWN") \
    X(MUS_B2_BGM_FES               , "MUS-B2-BGM-FES") \
    X(MUS_B2_BGM_E_ACHROMA         , "MUS-B2-BGM-E-ACHROMA") \
    X(MUS_B2_BGM_VS_TRAINER        , "MUS-B2-BGM-VS-TRAINER") \
    X(MUS_B2_BGM_REZO_RIZO         , "MUS-B2-BGM-REZO-RIZO") \
    X(MUS_B2_ME_AVENUE_01          , "MUS-B2-ME-AVENUE-01") \
    X(MUS_B2_ME_AVENUE_02          , "MUS-B2-ME-AVENUE-02") \
    X(MUS_B2_BGM_JAPARADE          , "MUS-B2-BGM-JAPARADE") \
    X(MUS_B2_BGM_ERECTRIC_GYM_01   , "MUS-B2-BGM-ERECTRIC-GYM-01") \
    X(MUS_B2_BGM_EYE_DANCER        , "MUS-B2-BGM-EYE-DANCER") \
    X(MUS_B2_BGM_ERECTRIC_GYM_02   , "MUS-B2-BGM-ERECTRIC-GYM-02") \
    X(MUS_B2_BGM_VS_GYMLEADER      , "MUS-B2-BGM-VS-GYMLEADER") \
    X(MUS_B2_BGM_BATTLESUPERIOR    , "MUS-B2-BGM-BATTLESUPERIOR") \
    X(MUS_B2_BGM_GROUND_GYM_01     , "MUS-B2-BGM-GROUND-GYM-01") \
    X(MUS_B2_BGM_WBT_LOBBY         , "MUS-B2-BGM-WBT-LOBBY") \
    X(MUS_B2_BGM_WBT_GROUND        , "MUS-B2-BGM-WBT-GROUND") \
    X(MUS_B2_BGM_VS_RG_LEADER      , "MUS-B2-BGM-VS-RG-LEADER") \
    X(MUS_B2_BGM_VS_RG_CHAMP       , "MUS-B2-BGM-VS-RG-CHAMP") \
    X(MUS_B2_BGM_VS_GS_LEADER      , "MUS-B2-BGM-VS-GS-LEADER") \
    X(MUS_B2_BGM_VS_GS_CHAMP       , "MUS-B2-BGM-VS-GS-CHAMP") \
    X(MUS_B2_BGM_VS_RS_LEADER      , "MUS-B2-BGM-VS-RS-LEADER") \
    X(MUS_B2_BGM_VS_RS_CHAMP       , "MUS-B2-BGM-VS-RS-CHAMP") \
    X(MUS_B2_BGM_VS_DP_LEADER      , "MUS-B2-BGM-VS-DP-LEADER") \
    X(MUS_B2_BGM_VS_DP_CHAMP       , "MUS-B2-BGM-VS-DP-CHAMP") \
    X(MUS_B2_BGM_VS_WBT            , "MUS-B2-BGM-VS-WBT") \
    X(MUS_B2_BGM_WIN_WBT           , "MUS-B2-BGM-WIN-WBT") \
    X(MUS_B2_BGM_WBT_FANFARE       , "MUS-B2-BGM-WBT-FANFARE") \
    X(MUS_B2_BGM_SW_D_REGI         , "MUS-B2-BGM-SW-D-REGI") \
    X(MUS_B2_BGM_VS_REGI           , "MUS-B2-BGM-VS-REGI") \
    X(MUS_B2_BGM_SW_D_27_F_AJITO   , "MUS-B2-BGM-SW-D-27-F-AJITO") \
    X(MUS_B2_BGM_E_7_SAGE          , "MUS-B2-BGM-E-7-SAGE") \
    X(MUS_B2_BGM_E_CHEREN          , "MUS-B2-BGM-E-CHEREN") \
    X(MUS_B2_BGM_KEMONOMICHI       , "MUS-B2-BGM-KEMONOMICHI") \
    X(MUS_B2_BGM_FLIGHT_GYM_01     , "MUS-B2-BGM-FLIGHT-GYM-01") \
    X(MUS_B2_ME_MD_FAN03           , "MUS-B2-ME-MD-FAN03") \
    X(MUS_B2_ME_MD_FAN01           , "MUS-B2-ME-MD-FAN01") \
    X(MUS_B2_BGM_SW_T_07           , "MUS-B2-BGM-SW-T-07") \
    X(MUS_B2_BGM_SW_KAZAN          , "MUS-B2-BGM-SW-KAZAN") \
    X(MUS_B2_BGM_SW_D_24_B         , "MUS-B2-BGM-SW-D-24-B") \
    X(MUS_B2_BGM_SW_D_24_W         , "MUS-B2-BGM-SW-D-24-W") \
    X(MUS_B2_BGM_SW_D_25           , "MUS-B2-BGM-SW-D-25") \
    X(MUS_B2_BGM_VS_DPLEGEND       , "MUS-B2-BGM-VS-DPLEGEND") \
    X(MUS_B2_BGM_DRAGON_GYM_01     , "MUS-B2-BGM-DRAGON-GYM-01") \
    X(MUS_B2_BGM_SW_DEMO_AJITO_SHIP, "MUS-B2-BGM-SW-DEMO-AJITO-SHIP") \
    X(MUS_B2_BGM_E_C08_ICE         , "MUS-B2-BGM-E-C08-ICE") \
    X(MUS_B2_BGM_EYE_NEO_PLASMA    , "MUS-B2-BGM-EYE-NEO-PLASMA") \
    X(MUS_B2_BGM_VS_NEO_PLASMA     , "MUS-B2-BGM-VS-NEO-PLASMA") \
    X(MUS_B2_BGM_DARK_TRINITY      , "MUS-B2-BGM-DARK-TRINITY") \
    X(MUS_B2_BGM_SW_H_06           , "MUS-B2-BGM-SW-H-06") \
    X(MUS_B2_BGM_SW_C_14           , "MUS-B2-BGM-SW-C-14") \
    X(MUS_B2_BGM_WATER_GYM_01      , "MUS-B2-BGM-WATER-GYM-01") \
    X(MUS_B2_BGM_SW_R_22_SP        , "MUS-B2-BGM-SW-R-22-SP") \
    X(MUS_B2_BGM_SW_R_22_SU        , "MUS-B2-BGM-SW-R-22-SU") \
    X(MUS_B2_BGM_SW_R_22_AU        , "MUS-B2-BGM-SW-R-22-AU") \
    X(MUS_B2_BGM_SW_R_22_WI        , "MUS-B2-BGM-SW-R-22-WI") \
    X(MUS_B2_BGM_SW_DEMO_FRIGATE   , "MUS-B2-BGM-SW-DEMO-FRIGATE") \
    X(MUS_B2_BGM_SW_D_27_L_AJITO   , "MUS-B2-BGM-SW-D-27-L-AJITO") \
    X(MUS_B2_BGM_VS_ACHROMA        , "MUS-B2-BGM-VS-ACHROMA") \
    X(MUS_B2_BGM_SW_DEMO_UNION_00  , "MUS-B2-BGM-SW-DEMO-UNION-00") \
    X(MUS_B2_BGM_SW_DEMO_UNION_01  , "MUS-B2-BGM-SW-DEMO-UNION-01") \
    X(MUS_B2_BGM_SW_DEMO_UNION_02  , "MUS-B2-BGM-SW-DEMO-UNION-02") \
    X(MUS_B2_BGM_SW_DEMO_UNION_03  , "MUS-B2-BGM-SW-DEMO-UNION-03") \
    X(MUS_B2_BGM_VS_KYURAMU        , "MUS-B2-BGM-VS-KYURAMU") \
    X(MUS_B2_BGM_VS_NEW_G_CIS      , "MUS-B2-BGM-VS-NEW-G-CIS") \
    X(MUS_B2_BGM_SW_R_23           , "MUS-B2-BGM-SW-R-23") \
    X(MUS_B2_BGM_SW_D_N_CASTLE     , "MUS-B2-BGM-SW-D-N-CASTLE") \
    X(MUS_B2_BGM_SW_D_N_ROOM       , "MUS-B2-BGM-SW-D-N-ROOM") \
    X(MUS_B2_BGM_E_N_SWAN          , "MUS-B2-BGM-E-N-SWAN") \
    X(MUS_B2_BGM_VS_SWAN_N         , "MUS-B2-BGM-VS-SWAN-N") \
    X(MUS_B2_BGM_DATA_CONV         , "MUS-B2-BGM-DATA-CONV") \
    X(MUS_B2_BGM_LCG_01            , "MUS-B2-BGM-LCG-01") \
    X(MUS_B2_ME_LCG_01             , "MUS-B2-ME-LCG-01") \
    X(MUS_B2_ME_LCG_02             , "MUS-B2-ME-LCG-02") \
    X(MUS_B2_BGM_SW_D_UMA          , "MUS-B2-BGM-SW-D-UMA") \
    X(MUS_B2_BGM_VS_UMA            , "MUS-B2-BGM-VS-UMA") \
    X(MUS_B2_BGM_MUGEN_LOBBY_B     , "MUS-B2-BGM-MUGEN-LOBBY-B") \
    X(MUS_B2_BGM_MUGEN_D_B         , "MUS-B2-BGM-MUGEN-D-B") \
    X(MUS_B2_BGM_MUGEN_LOBBY_W     , "MUS-B2-BGM-MUGEN-LOBBY-W") \
    X(MUS_B2_BGM_MUGEN_D_W         , "MUS-B2-BGM-MUGEN-D-W") \
    X(MUS_B2_ME_OTAMARO            , "MUS-B2-ME-OTAMARO") \
    X(MUS_B2_ME_ZUKAN_01           , "MUS-B2-ME-ZUKAN-01") \
    X(MUS_B2_ME_MD_FAN04           , "MUS-B2-ME-MD-FAN04") \
    X(MUS_B2_BGM_VS_IRIS           , "MUS-B2-BGM-VS-IRIS") \
    X(MUS_B2_BGM_ENDING            , "MUS-B2-BGM-ENDING") \
    X(MUS_B2_BGM_THEEND            , "MUS-B2-BGM-THEEND") \

#define SOUND_LIST_SE \
    X(SE_STOP, "STOP") \
    X(SE_USE_ITEM, "SE-USE-ITEM") \
    X(SE_PC_LOGIN, "SE-PC-LOGIN") \
    X(SE_PC_OFF, "SE-PC-OFF") \
    X(SE_PC_ON, "SE-PC-ON") \
    X(SE_SELECT, "SE-SELECT") \
    X(SE_WIN_OPEN, "SE-WIN-OPEN") \
    X(SE_WALL_HIT, "SE-WALL-HIT") \
    X(SE_DOOR, "SE-DOOR") \
    X(SE_EXIT, "SE-EXIT") \
    X(SE_LEDGE, "SE-LEDGE") \
    X(SE_BIKE_BELL, "SE-BIKE-BELL") \
    X(SE_NOT_EFFECTIVE, "SE-NOT-EFFECTIVE") \
    X(SE_EFFECTIVE, "SE-EFFECTIVE") \
    X(SE_SUPER_EFFECTIVE, "SE-SUPER-EFFECTIVE") \
    X(SE_BALL_OPEN, "SE-BALL-OPEN") \
    X(SE_FAINT, "SE-FAINT") \
    X(SE_FLEE, "SE-FLEE") \
    X(SE_SLIDING_DOOR, "SE-SLIDING-DOOR") \
    X(SE_SHIP, "SE-SHIP") \
    X(SE_BANG, "SE-BANG") \
    X(SE_PIN, "SE-PIN") \
    X(SE_BOO, "SE-BOO") \
    X(SE_BALL, "SE-BALL") \
    X(SE_CONTEST_PLACE, "SE-CONTEST-PLACE") \
    X(SE_A, "SE-A") \
    X(SE_I, "SE-I") \
    X(SE_U, "SE-U") \
    X(SE_E, "SE-E") \
    X(SE_O, "SE-O") \
    X(SE_N, "SE-N") \
    X(SE_SUCCESS, "SE-SUCCESS") \
    X(SE_FAILURE, "SE-FAILURE") \
    X(SE_EXP, "SE-EXP") \
    X(SE_BIKE_HOP, "SE-BIKE-HOP") \
    X(SE_SWITCH, "SE-SWITCH") \
    X(SE_CLICK, "SE-CLICK") \
    X(SE_FU_ZAKU, "SE-FU-ZAKU") \
    X(SE_CONTEST_CONDITION_LOSE, "SE-CONTEST-CONDITION-LOSE") \
    X(SE_LAVARIDGE_FALL_WARP, "SE-LAVARIDGE-FALL-WARP") \
    X(SE_ICE_STAIRS, "SE-ICE-STAIRS") \
    X(SE_ICE_BREAK, "SE-ICE-BREAK") \
    X(SE_ICE_CRACK, "SE-ICE-CRACK") \
    X(SE_FALL, "SE-FALL") \
    X(SE_UNLOCK, "SE-UNLOCK") \
    X(SE_WARP_IN, "SE-WARP-IN") \
    X(SE_WARP_OUT, "SE-WARP-OUT") \
    X(SE_REPEL, "SE-REPEL") \
    X(SE_ROTATING_GATE, "SE-ROTATING-GATE") \
    X(SE_TRUCK_MOVE, "SE-TRUCK-MOVE") \
    X(SE_TRUCK_STOP, "SE-TRUCK-STOP") \
    X(SE_TRUCK_UNLOAD, "SE-TRUCK-UNLOAD") \
    X(SE_TRUCK_DOOR, "SE-TRUCK-DOOR") \
    X(SE_BERRY_BLENDER, "SE-BERRY-BLENDER") \
    X(SE_CARD, "SE-CARD") \
    X(SE_SAVE, "SE-SAVE") \
    X(SE_BALL_BOUNCE_1, "SE-BALL-BOUNCE-1") \
    X(SE_BALL_BOUNCE_2, "SE-BALL-BOUNCE-2") \
    X(SE_BALL_BOUNCE_3, "SE-BALL-BOUNCE-3") \
    X(SE_BALL_BOUNCE_4, "SE-BALL-BOUNCE-4") \
    X(SE_BALL_TRADE, "SE-BALL-TRADE") \
    X(SE_BALL_THROW, "SE-BALL-THROW") \
    X(SE_NOTE_C, "SE-NOTE-C") \
    X(SE_NOTE_D, "SE-NOTE-D") \
    X(SE_NOTE_E, "SE-NOTE-E") \
    X(SE_NOTE_F, "SE-NOTE-F") \
    X(SE_NOTE_G, "SE-NOTE-G") \
    X(SE_NOTE_A, "SE-NOTE-A") \
    X(SE_NOTE_B, "SE-NOTE-B") \
    X(SE_NOTE_C_HIGH, "SE-NOTE-C-HIGH") \
    X(SE_PUDDLE, "SE-PUDDLE") \
    X(SE_BRIDGE_WALK, "SE-BRIDGE-WALK") \
    X(SE_ITEMFINDER, "SE-ITEMFINDER") \
    X(SE_DING_DONG, "SE-DING-DONG") \
    X(SE_BALLOON_RED, "SE-BALLOON-RED") \
    X(SE_BALLOON_BLUE, "SE-BALLOON-BLUE") \
    X(SE_BALLOON_YELLOW, "SE-BALLOON-YELLOW") \
    X(SE_BREAKABLE_DOOR, "SE-BREAKABLE-DOOR") \
    X(SE_MUD_BALL, "SE-MUD-BALL") \
    X(SE_FIELD_POISON, "SE-FIELD-POISON") \
    X(SE_ESCALATOR, "SE-ESCALATOR") \
    X(SE_THUNDERSTORM, "SE-THUNDERSTORM") \
    X(SE_THUNDERSTORM_STOP, "SE-THUNDERSTORM-STOP") \
    X(SE_DOWNPOUR, "SE-DOWNPOUR") \
    X(SE_DOWNPOUR_STOP, "SE-DOWNPOUR-STOP") \
    X(SE_RAIN, "SE-RAIN") \
    X(SE_RAIN_STOP, "SE-RAIN-STOP") \
    X(SE_THUNDER, "SE-THUNDER") \
    X(SE_THUNDER2, "SE-THUNDER2") \
    X(SE_ELEVATOR, "SE-ELEVATOR") \
    X(SE_LOW_HEALTH, "SE-LOW-HEALTH") \
    X(SE_EXP_MAX, "SE-EXP-MAX") \
    X(SE_ROULETTE_BALL, "SE-ROULETTE-BALL") \
    X(SE_ROULETTE_BALL2, "SE-ROULETTE-BALL2") \
    X(SE_TAILLOW_WING_FLAP, "SE-TAILLOW-WING-FLAP") \
    X(SE_SHOP, "SE-SHOP") \
    X(SE_CONTEST_HEART, "SE-CONTEST-HEART") \
    X(SE_CONTEST_CURTAIN_RISE, "SE-CONTEST-CURTAIN-RISE") \
    X(SE_CONTEST_CURTAIN_FALL, "SE-CONTEST-CURTAIN-FALL") \
    X(SE_CONTEST_ICON_CHANGE, "SE-CONTEST-ICON-CHANGE") \
    X(SE_CONTEST_ICON_CLEAR, "SE-CONTEST-ICON-CLEAR") \
    X(SE_CONTEST_MONS_TURN, "SE-CONTEST-MONS-TURN") \
    X(SE_SHINY, "SE-SHINY") \
    X(SE_INTRO_BLAST, "SE-INTRO-BLAST") \
    X(SE_MUGSHOT, "SE-MUGSHOT") \
    X(SE_APPLAUSE, "SE-APPLAUSE") \
    X(SE_VEND, "SE-VEND") \
    X(SE_ORB, "SE-ORB") \
    X(SE_DEX_SCROLL, "SE-DEX-SCROLL") \
    X(SE_DEX_PAGE, "SE-DEX-PAGE") \
    X(SE_POKENAV_ON, "SE-POKENAV-ON") \
    X(SE_POKENAV_OFF, "SE-POKENAV-OFF") \
    X(SE_DEX_SEARCH, "SE-DEX-SEARCH") \
    X(SE_EGG_HATCH, "SE-EGG-HATCH") \
    X(SE_BALL_TRAY_ENTER, "SE-BALL-TRAY-ENTER") \
    X(SE_BALL_TRAY_BALL, "SE-BALL-TRAY-BALL") \
    X(SE_BALL_TRAY_EXIT, "SE-BALL-TRAY-EXIT") \
    X(SE_GLASS_FLUTE, "SE-GLASS-FLUTE") \
    X(SE_M_THUNDERBOLT, "SE-M-THUNDERBOLT") \
    X(SE_M_THUNDERBOLT2, "SE-M-THUNDERBOLT2") \
    X(SE_M_HARDEN, "SE-M-HARDEN") \
    X(SE_M_NIGHTMARE, "SE-M-NIGHTMARE") \
    X(SE_M_VITAL_THROW, "SE-M-VITAL-THROW") \
    X(SE_M_VITAL_THROW2, "SE-M-VITAL-THROW2") \
    X(SE_M_BUBBLE, "SE-M-BUBBLE") \
    X(SE_M_BUBBLE2, "SE-M-BUBBLE2") \
    X(SE_M_BUBBLE3, "SE-M-BUBBLE3") \
    X(SE_M_RAIN_DANCE, "SE-M-RAIN-DANCE") \
    X(SE_M_CUT, "SE-M-CUT") \
    X(SE_M_STRING_SHOT, "SE-M-STRING-SHOT") \
    X(SE_M_STRING_SHOT2, "SE-M-STRING-SHOT2") \
    X(SE_M_ROCK_THROW, "SE-M-ROCK-THROW") \
    X(SE_M_GUST, "SE-M-GUST") \
    X(SE_M_GUST2, "SE-M-GUST2") \
    X(SE_M_DOUBLE_SLAP, "SE-M-DOUBLE-SLAP") \
    X(SE_M_DOUBLE_TEAM, "SE-M-DOUBLE-TEAM") \
    X(SE_M_RAZOR_WIND, "SE-M-RAZOR-WIND") \
    X(SE_M_ICY_WIND, "SE-M-ICY-WIND") \
    X(SE_M_THUNDER_WAVE, "SE-M-THUNDER-WAVE") \
    X(SE_M_COMET_PUNCH, "SE-M-COMET-PUNCH") \
    X(SE_M_MEGA_KICK, "SE-M-MEGA-KICK") \
    X(SE_M_MEGA_KICK2, "SE-M-MEGA-KICK2") \
    X(SE_M_CRABHAMMER, "SE-M-CRABHAMMER") \
    X(SE_M_JUMP_KICK, "SE-M-JUMP-KICK") \
    X(SE_M_FLAME_WHEEL, "SE-M-FLAME-WHEEL") \
    X(SE_M_FLAME_WHEEL2, "SE-M-FLAME-WHEEL2") \
    X(SE_M_FLAMETHROWER, "SE-M-FLAMETHROWER") \
    X(SE_M_FIRE_PUNCH, "SE-M-FIRE-PUNCH") \
    X(SE_M_TOXIC, "SE-M-TOXIC") \
    X(SE_M_SACRED_FIRE, "SE-M-SACRED-FIRE") \
    X(SE_M_SACRED_FIRE2, "SE-M-SACRED-FIRE2") \
    X(SE_M_EMBER, "SE-M-EMBER") \
    X(SE_M_TAKE_DOWN, "SE-M-TAKE-DOWN") \
    X(SE_M_BLIZZARD, "SE-M-BLIZZARD") \
    X(SE_M_BLIZZARD2, "SE-M-BLIZZARD2") \
    X(SE_M_SCRATCH, "SE-M-SCRATCH") \
    X(SE_M_VICEGRIP, "SE-M-VICEGRIP") \
    X(SE_M_WING_ATTACK, "SE-M-WING-ATTACK") \
    X(SE_M_FLY, "SE-M-FLY") \
    X(SE_M_SAND_ATTACK, "SE-M-SAND-ATTACK") \
    X(SE_M_RAZOR_WIND2, "SE-M-RAZOR-WIND2") \
    X(SE_M_BITE, "SE-M-BITE") \
    X(SE_M_HEADBUTT, "SE-M-HEADBUTT") \
    X(SE_M_SURF, "SE-M-SURF") \
    X(SE_M_HYDRO_PUMP, "SE-M-HYDRO-PUMP") \
    X(SE_M_WHIRLPOOL, "SE-M-WHIRLPOOL") \
    X(SE_M_HORN_ATTACK, "SE-M-HORN-ATTACK") \
    X(SE_M_TAIL_WHIP, "SE-M-TAIL-WHIP") \
    X(SE_M_MIST, "SE-M-MIST") \
    X(SE_M_POISON_POWDER, "SE-M-POISON-POWDER") \
    X(SE_M_BIND, "SE-M-BIND") \
    X(SE_M_DRAGON_RAGE, "SE-M-DRAGON-RAGE") \
    X(SE_M_SING, "SE-M-SING") \
    X(SE_M_PERISH_SONG, "SE-M-PERISH-SONG") \
    X(SE_M_PAY_DAY, "SE-M-PAY-DAY") \
    X(SE_M_DIG, "SE-M-DIG") \
    X(SE_M_DIZZY_PUNCH, "SE-M-DIZZY-PUNCH") \
    X(SE_M_SELF_DESTRUCT, "SE-M-SELF-DESTRUCT") \
    X(SE_M_EXPLOSION, "SE-M-EXPLOSION") \
    X(SE_M_ABSORB_2, "SE-M-ABSORB-2") \
    X(SE_M_ABSORB, "SE-M-ABSORB") \
    X(SE_M_SCREECH, "SE-M-SCREECH") \
    X(SE_M_BUBBLE_BEAM, "SE-M-BUBBLE-BEAM") \
    X(SE_M_BUBBLE_BEAM2, "SE-M-BUBBLE-BEAM2") \
    X(SE_M_SUPERSONIC, "SE-M-SUPERSONIC") \
    X(SE_M_BELLY_DRUM, "SE-M-BELLY-DRUM") \
    X(SE_M_METRONOME, "SE-M-METRONOME") \
    X(SE_M_BONEMERANG, "SE-M-BONEMERANG") \
    X(SE_M_LICK, "SE-M-LICK") \
    X(SE_M_PSYBEAM, "SE-M-PSYBEAM") \
    X(SE_M_FAINT_ATTACK, "SE-M-FAINT-ATTACK") \
    X(SE_M_SWORDS_DANCE, "SE-M-SWORDS-DANCE") \
    X(SE_M_LEER, "SE-M-LEER") \
    X(SE_M_SWAGGER, "SE-M-SWAGGER") \
    X(SE_M_SWAGGER2, "SE-M-SWAGGER2") \
    X(SE_M_HEAL_BELL, "SE-M-HEAL-BELL") \
    X(SE_M_CONFUSE_RAY, "SE-M-CONFUSE-RAY") \
    X(SE_M_SNORE, "SE-M-SNORE") \
    X(SE_M_BRICK_BREAK, "SE-M-BRICK-BREAK") \
    X(SE_M_GIGA_DRAIN, "SE-M-GIGA-DRAIN") \
    X(SE_M_PSYBEAM2, "SE-M-PSYBEAM2") \
    X(SE_M_SOLAR_BEAM, "SE-M-SOLAR-BEAM") \
    X(SE_M_PETAL_DANCE, "SE-M-PETAL-DANCE") \
    X(SE_M_TELEPORT, "SE-M-TELEPORT") \
    X(SE_M_MINIMIZE, "SE-M-MINIMIZE") \
    X(SE_M_SKETCH, "SE-M-SKETCH") \
    X(SE_M_SWIFT, "SE-M-SWIFT") \
    X(SE_M_REFLECT, "SE-M-REFLECT") \
    X(SE_M_BARRIER, "SE-M-BARRIER") \
    X(SE_M_DETECT, "SE-M-DETECT") \
    X(SE_M_LOCK_ON, "SE-M-LOCK-ON") \
    X(SE_M_MOONLIGHT, "SE-M-MOONLIGHT") \
    X(SE_M_CHARM, "SE-M-CHARM") \
    X(SE_M_CHARGE, "SE-M-CHARGE") \
    X(SE_M_STRENGTH, "SE-M-STRENGTH") \
    X(SE_M_HYPER_BEAM, "SE-M-HYPER-BEAM") \
    X(SE_M_WATERFALL, "SE-M-WATERFALL") \
    X(SE_M_REVERSAL, "SE-M-REVERSAL") \
    X(SE_M_ACID_ARMOR, "SE-M-ACID-ARMOR") \
    X(SE_M_SANDSTORM, "SE-M-SANDSTORM") \
    X(SE_M_TRI_ATTACK, "SE-M-TRI-ATTACK") \
    X(SE_M_TRI_ATTACK2, "SE-M-TRI-ATTACK2") \
    X(SE_M_ENCORE, "SE-M-ENCORE") \
    X(SE_M_ENCORE2, "SE-M-ENCORE2") \
    X(SE_M_BATON_PASS, "SE-M-BATON-PASS") \
    X(SE_M_MILK_DRINK, "SE-M-MILK-DRINK") \
    X(SE_M_ATTRACT, "SE-M-ATTRACT") \
    X(SE_M_ATTRACT2, "SE-M-ATTRACT2") \
    X(SE_M_MORNING_SUN, "SE-M-MORNING-SUN") \
    X(SE_M_FLATTER, "SE-M-FLATTER") \
    X(SE_M_SAND_TOMB, "SE-M-SAND-TOMB") \
    X(SE_M_GRASSWHISTLE, "SE-M-GRASSWHISTLE") \
    X(SE_M_SPIT_UP, "SE-M-SPIT-UP") \
    X(SE_M_DIVE, "SE-M-DIVE") \
    X(SE_M_EARTHQUAKE, "SE-M-EARTHQUAKE") \
    X(SE_M_TWISTER, "SE-M-TWISTER") \
    X(SE_M_SWEET_SCENT, "SE-M-SWEET-SCENT") \
    X(SE_M_YAWN, "SE-M-YAWN") \
    X(SE_M_SKY_UPPERCUT, "SE-M-SKY-UPPERCUT") \
    X(SE_M_STAT_INCREASE, "SE-M-STAT-INCREASE") \
    X(SE_M_HEAT_WAVE, "SE-M-HEAT-WAVE") \
    X(SE_M_UPROAR, "SE-M-UPROAR") \
    X(SE_M_HAIL, "SE-M-HAIL") \
    X(SE_M_COSMIC_POWER, "SE-M-COSMIC-POWER") \
    X(SE_M_TEETER_DANCE, "SE-M-TEETER-DANCE") \
    X(SE_M_STAT_DECREASE, "SE-M-STAT-DECREASE") \
    X(SE_M_HAZE, "SE-M-HAZE") \
    X(SE_M_HYPER_BEAM2, "SE-M-HYPER-BEAM2") \
    X(SE_RG_DOOR, "SE-RG-DOOR") \
    X(SE_RG_CARD_FLIP, "SE-RG-CARD-FLIP") \
    X(SE_RG_CARD_FLIPPING, "SE-RG-CARD-FLIPPING") \
    X(SE_RG_CARD_OPEN, "SE-RG-CARD-OPEN") \
    X(SE_RG_BAG_CURSOR, "SE-RG-BAG-CURSOR") \
    X(SE_RG_BAG_POCKET, "SE-RG-BAG-POCKET") \
    X(SE_RG_BALL_CLICK, "SE-RG-BALL-CLICK") \
    X(SE_RG_SHOP, "SE-RG-SHOP") \
    X(SE_RG_SS_ANNE_HORN, "SE-RG-SS-ANNE-HORN") \
    X(SE_RG_HELP_OPEN, "SE-RG-HELP-OPEN") \
    X(SE_RG_HELP_CLOSE, "SE-RG-HELP-CLOSE") \
    X(SE_RG_HELP_ERROR, "SE-RG-HELP-ERROR") \
    X(SE_RG_DEOXYS_MOVE, "SE-RG-DEOXYS-MOVE") \
    X(SE_RG_POKE_JUMP_SUCCESS, "SE-RG-POKE-JUMP-SUCCESS") \
    X(SE_RG_POKE_JUMP_FAILURE, "SE-RG-POKE-JUMP-FAILURE") \
    X(SE_PHONE_CALL, "SE-PHONE-CALL") \
    X(SE_PHONE_CLICK, "SE-PHONE-CLICK") \
    X(SE_ARENA_TIMEUP1, "SE-ARENA-TIMEUP1") \
    X(SE_ARENA_TIMEUP2, "SE-ARENA-TIMEUP2") \
    X(SE_PIKE_CURTAIN_CLOSE, "SE-PIKE-CURTAIN-CLOSE") \
    X(SE_PIKE_CURTAIN_OPEN, "SE-PIKE-CURTAIN-OPEN") \
    X(SE_SUDOWOODO_SHAKE, "SE-SUDOWOODO-SHAKE") \
    X(MUS_DUMMY, "MUS-DUMMY") \
    X(PH_TRAP_BLEND, "PH-TRAP-BLEND") \
    X(PH_TRAP_HELD, "PH-TRAP-HELD") \
    X(PH_TRAP_SOLO, "PH-TRAP-SOLO") \
    X(PH_FACE_BLEND, "PH-FACE-BLEND") \
    X(PH_FACE_HELD, "PH-FACE-HELD") \
    X(PH_FACE_SOLO, "PH-FACE-SOLO") \
    X(PH_CLOTH_BLEND, "PH-CLOTH-BLEND") \
    X(PH_CLOTH_HELD, "PH-CLOTH-HELD") \
    X(PH_CLOTH_SOLO, "PH-CLOTH-SOLO") \
    X(PH_DRESS_BLEND, "PH-DRESS-BLEND") \
    X(PH_DRESS_HELD, "PH-DRESS-HELD") \
    X(PH_DRESS_SOLO, "PH-DRESS-SOLO") \
    X(PH_FLEECE_BLEND, "PH-FLEECE-BLEND") \
    X(PH_FLEECE_HELD, "PH-FLEECE-HELD") \
    X(PH_FLEECE_SOLO, "PH-FLEECE-SOLO") \
    X(PH_KIT_BLEND, "PH-KIT-BLEND") \
    X(PH_KIT_HELD, "PH-KIT-HELD") \
    X(PH_KIT_SOLO, "PH-KIT-SOLO") \
    X(PH_PRICE_BLEND, "PH-PRICE-BLEND") \
    X(PH_PRICE_HELD, "PH-PRICE-HELD") \
    X(PH_PRICE_SOLO, "PH-PRICE-SOLO") \
    X(PH_LOT_BLEND, "PH-LOT-BLEND") \
    X(PH_LOT_HELD, "PH-LOT-HELD") \
    X(PH_LOT_SOLO, "PH-LOT-SOLO") \
    X(PH_GOAT_BLEND, "PH-GOAT-BLEND") \
    X(PH_GOAT_HELD, "PH-GOAT-HELD") \
    X(PH_GOAT_SOLO, "PH-GOAT-SOLO") \
    X(PH_THOUGHT_BLEND, "PH-THOUGHT-BLEND") \
    X(PH_THOUGHT_HELD, "PH-THOUGHT-HELD") \
    X(PH_THOUGHT_SOLO, "PH-THOUGHT-SOLO") \
    X(PH_CHOICE_BLEND, "PH-CHOICE-BLEND") \
    X(PH_CHOICE_HELD, "PH-CHOICE-HELD") \
    X(PH_CHOICE_SOLO, "PH-CHOICE-SOLO") \
    X(PH_MOUTH_BLEND, "PH-MOUTH-BLEND") \
    X(PH_MOUTH_HELD, "PH-MOUTH-HELD") \
    X(PH_MOUTH_SOLO, "PH-MOUTH-SOLO") \
    X(PH_FOOT_BLEND, "PH-FOOT-BLEND") \
    X(PH_FOOT_HELD, "PH-FOOT-HELD") \
    X(PH_FOOT_SOLO, "PH-FOOT-SOLO") \
    X(PH_GOOSE_BLEND, "PH-GOOSE-BLEND") \
    X(PH_GOOSE_HELD, "PH-GOOSE-HELD") \
    X(PH_GOOSE_SOLO, "PH-GOOSE-SOLO") \
    X(PH_STRUT_BLEND, "PH-STRUT-BLEND") \
    X(PH_STRUT_HELD, "PH-STRUT-HELD") \
    X(PH_STRUT_SOLO, "PH-STRUT-SOLO") \
    X(PH_CURE_BLEND, "PH-CURE-BLEND") \
    X(PH_CURE_HELD, "PH-CURE-HELD") \
    X(PH_CURE_SOLO, "PH-CURE-SOLO") \
    X(PH_NURSE_BLEND, "PH-NURSE-BLEND") \
    X(PH_NURSE_HELD, "PH-NURSE-HELD") \
    X(PH_NURSE_SOLO, "PH-NURSE-SOLO") \

// Create BGM list
#define X(songId, name) static const u8 sBGMName_##songId[] = _(name);
SOUND_LIST_BGM
#undef X

#define X(songId, name) sBGMName_##songId,
static const u8 *const gBGMNames[] =
{
SOUND_LIST_BGM
};
#undef X

// Create SE list
#define X(songId, name) static const u8 sSEName_##songId[] = _(name);
SOUND_LIST_SE
#undef X

#define X(songId, name) sSEName_##songId,
static const u8 *const gSENames[] =
{
SOUND_LIST_SE
};
#undef X

#undef tWindowSelected
#undef tBgmIndex
#undef tSeIndex
#undef tBgmIndexOld
#undef tSeIndexOld
#undef tWhichSubmenu
#undef tState
