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
	delay 33
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_TheEndOn
	special DrawWholeMapView
	delay 115
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOn
	special DrawWholeMapView
	delay 98
	call CaveOfOrigin_UnusedRubySapphireMap3_EventScript_CongratsOn
	special DrawWholeMapView
	end

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_LoopEndScreen::
	delay 14600
	fadescreenspeed FADE_TO_WHITE, 4
	special DoSoftReset
	end

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_ForRealOn::
	setmetatile 6, 11, METATILE_Unused1_ForReal1, TRUE
	setmetatile 7, 11, METATILE_Unused1_ForReal2, TRUE
	setmetatile 8, 11, METATILE_Unused1_ForReal3, TRUE
	setmetatile 9, 11, METATILE_Unused1_ForReal4, TRUE
	setmetatile 10, 11, METATILE_Unused1_ForReal5, TRUE
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

CaveOfOrigin_UnusedRubySapphireMap3_EventScript_TheEndOn::
	setmetatile  2,  8, METATILE_Unused1_TheEnd28, TRUE
	setmetatile  3,  8, METATILE_Unused1_TheEnd38, TRUE
	setmetatile  4,  8, METATILE_Unused1_TheEnd48, TRUE
	setmetatile  5,  8, METATILE_Unused1_TheEnd58, TRUE
	setmetatile  6,  8, METATILE_Unused1_TheEnd68, TRUE
	setmetatile  7,  8, METATILE_Unused1_TheEnd78, TRUE
	setmetatile  9,  8, METATILE_Unused1_TheEnd98, TRUE
	setmetatile 10,  8, METATILE_Unused1_TheEndA8, TRUE
	setmetatile 11,  8, METATILE_Unused1_TheEndB8, TRUE
	setmetatile 12,  8, METATILE_Unused1_TheEndC8, TRUE
	setmetatile 13,  8, METATILE_Unused1_TheEndD8, TRUE
	setmetatile 14,  8, METATILE_Unused1_TheEndE8, TRUE
	setmetatile  2,  9, METATILE_Unused1_TheEnd29, TRUE
	setmetatile  3,  9, METATILE_Unused1_TheEnd39, TRUE
	setmetatile  4,  9, METATILE_Unused1_TheEnd49, TRUE
	setmetatile  5,  9, METATILE_Unused1_TheEnd59, TRUE
	setmetatile  6,  9, METATILE_Unused1_TheEnd69, TRUE
	setmetatile  7,  9, METATILE_Unused1_TheEnd79, TRUE
	setmetatile  9,  9, METATILE_Unused1_TheEnd99, TRUE
	setmetatile 10,  9, METATILE_Unused1_TheEndA9, TRUE
	setmetatile 11,  9, METATILE_Unused1_TheEndB9, TRUE
	setmetatile 12,  9, METATILE_Unused1_TheEndC9, TRUE
	setmetatile 13,  9, METATILE_Unused1_TheEndD9, TRUE
	setmetatile 14,  9, METATILE_Unused1_TheEndE9, TRUE
	setmetatile  2, 10, METATILE_Unused1_TheEnd2A, TRUE
	setmetatile  3, 10, METATILE_Unused1_TheEnd3A, TRUE
	setmetatile  4, 10, METATILE_Unused1_TheEnd4A, TRUE
	setmetatile  5, 10, METATILE_Unused1_TheEnd5A, TRUE
	setmetatile  6, 10, METATILE_Unused1_TheEnd6A, TRUE
	setmetatile  7, 10, METATILE_Unused1_TheEnd7A, TRUE
	setmetatile  9, 10, METATILE_Unused1_TheEnd9A, TRUE
	setmetatile 10, 10, METATILE_Unused1_TheEndAA, TRUE
	setmetatile 11, 10, METATILE_Unused1_TheEndBA, TRUE
	setmetatile 12, 10, METATILE_Unused1_TheEndCA, TRUE
	setmetatile 13, 10, METATILE_Unused1_TheEndDA, TRUE
	setmetatile 14, 10, METATILE_Unused1_TheEndEA, TRUE
	return
