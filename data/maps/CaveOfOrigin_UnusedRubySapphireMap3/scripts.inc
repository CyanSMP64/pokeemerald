CaveOfOrigin_UnusedRubySapphireMap3_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveOfOrigin_UnusedRubySapphireMap3_OnFrame
	.byte 0

CaveOfOrigin_UnusedRubySapphireMap3_OnFrame:
	map_script_2 VAR_TEMP_0, 0, CaveOfOrigin_UnusedRubySapphireMap3_EventScript_StartEndScreen
	map_script_2 VAR_TEMP_0, 1, CaveOfOrigin_UnusedRubySapphireMap3_EventScript_LoopEndScreen
	end

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_StartEndScreen::
	lockall
	setvar VAR_TEMP_0, 1
	playbgm MUS_SMWEND, FALSE
	delay 34
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOn
	special DrawWholeMapView
	delay 54
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOff
	special DrawWholeMapView
	delay 10
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOn
	special DrawWholeMapView
	delay 48
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOff
	special DrawWholeMapView
	delay 8
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOn
	special DrawWholeMapView
	delay 42
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOff
	special DrawWholeMapView
	delay 7
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOn
	special DrawWholeMapView
	delay 50
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_CongratsOn
	special DrawWholeMapView
	end

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_LoopEndScreen::
	delay 255
	end

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOn::
	setmetatile 6, 11, METATILE_Unused1_ForReal1, TRUE
	setmetatile 7, 11, METATILE_Unused1_ForReal2, TRUE
	setmetatile 8, 11, METATILE_Unused1_ForReal3, TRUE
	setmetatile 9, 11, METATILE_Unused1_ForReal4, TRUE
	setmetatile 10, 11, METATILE_Unused1_ForReal5, TRUE
	return

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOff::
	setmetatile 6, 11, 0x201, TRUE
	setmetatile 7, 11, 0x201, TRUE
	setmetatile 8, 11, 0x201, TRUE
	setmetatile 9, 11, 0x201, TRUE
	setmetatile 10, 11, 0x201, TRUE
	return

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_CongratsOn::
	setmetatile 5, 13, METATILE_Unused1_Congrat1, TRUE
	setmetatile 6, 13, METATILE_Unused1_Congrat2, TRUE
	setmetatile 7, 13, METATILE_Unused1_Congrat3, TRUE
	setmetatile 8, 13, METATILE_Unused1_Congrat4, TRUE
	setmetatile 9, 13, METATILE_Unused1_Congrat5, TRUE
	setmetatile 10, 13, METATILE_Unused1_Congrat6, TRUE
	setmetatile 11, 13, METATILE_Unused1_Congrat7, TRUE
	return
