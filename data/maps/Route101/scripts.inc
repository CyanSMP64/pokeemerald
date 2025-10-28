.set LOCALID_BIRCH, 2
.set LOCALID_BAG, 3
.set LOCALID_ZIGZAGOON, 4

Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route101_OnWarp
	.byte 0

Route101_OnTransition:
	call ProfBirch_EventScript_UpdateLocation
	call_if_eq VAR_ROUTE101_STATE, 0, Route101_EventScript_PlayHelpBGM
	end

Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_OnWarp:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_PlayerTurnEast
	map_script_2 VAR_BIRCH_LAB_STATE, 3, Route101_EventScript_PlayerTurnEast
	map_script_2 VAR_BIRCH_LAB_STATE, 6, Route101_EventScript_PlayerTurnEast2
	.2byte 0

Route101_EventScript_PlayerTurnEast::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	end

Route101_EventScript_PlayerTurnEast2::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	setvar VAR_BIRCH_LAB_STATE, 5
	end

Route101_EventScript_PlayHelpBGM::
	playbgm MUS_HELP, TRUE
	return

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

Route101_EventScript_StartBirchRescue::
	setvar VAR_ROUTE101_STATE, 2
	end

Route101_EventScript_PreventExitSouth::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitWest::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitNorth::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
	waitmovement 0
	releaseall
	end

Route101_Movement_PreventExitSouth:
	walk_faster_up
	step_end

Route101_Movement_PreventExitWest:
	walk_faster_right
	step_end

Route101_Movement_PreventExitNorth:
	walk_faster_down
	step_end

Route101_Movement_ZigzagoonChaseInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_ZigzagoonChase1:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_ZigzagoonFaceBirch:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

Route101_Movement_EnterScene:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_left
	step_end

Route101_Movement_BirchRunInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_BirchRunAway1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_BirchFaceZigzagoon:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Route101_Movement_Unused1:
	walk_up
	walk_up
	step_end

Route101_Movement_Unused2:
	walk_up
	walk_left
	walk_up
	step_end

Route101_EventScript_Youngster::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	getplayerxy VAR_0x8004, VAR_0x8005
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ZIGZAGOON
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
	waitmovement 0
	bufferleadmonspeciesname STR_VAR_1
	message Route101_Text_YouSavedMe
	waitmessage
	playfanfare MUS_LEVEL_UP
	waitfanfare
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
	closemessage
@	clearflag FLAG_HIDE_ROUTE_101_BOY
	setvar VAR_BIRCH_LAB_STATE, 3
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachBag
	waitmovement 0
	removeobject LOCALID_BAG
	applymovement LOCALID_BIRCH, Route101_Movement_BirchAfterTakingBag
	waitmovement 0
	removeobject LOCALID_BIRCH
	special SpawnCameraObject
	call_if_eq VAR_0x8005, 14, Route101_EventScript_CameraPanTowardsPlayerEast
	call_if_eq VAR_0x8005, 15, Route101_EventScript_CameraPanTowardsPlayerSouth
	waitmovement 0
	special RemoveCameraObject
	releaseall
	end

Route101_EventScript_CameraPanTowardsPlayerEast::
	applymovement OBJ_EVENT_ID_CAMERA, Route101_Movement_CameraPanTowardsPlayerEast
	return

Route101_EventScript_CameraPanTowardsPlayerSouth::
	applymovement OBJ_EVENT_ID_CAMERA, Route101_Movement_CameraPanTowardsPlayerSouth
	return

Route101_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	return

Route101_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

Route101_Movement_BirchApproachPlayer:
	walk_fast_right
	step_end

Route101_Movement_BirchApproachBag:
	walk_fast_down
	walk_fast_right
	delay_8
	step_end

Route101_Movement_BirchAfterTakingBag:
	delay_8
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

Route101_Movement_CameraPanTowardsPlayerEast:
	walk_diag_northwest
	walk_left
	step_end

Route101_Movement_CameraPanTowardsPlayerSouth:
	walk_diag_northwest
	walk_up
	step_end

Route101_Text_HelpMe:
	.string "H-help me!$"

Route101_Text_PleaseHelp:
	.string "Hello! You over there!\n"
	.string "Please! Help!\p"
	.string "In my Bag!\n"
	.string "There's a Poké Ball!$"

Route101_Text_DontLeaveMe:
	.string "Wh-Where are you going?!\n"
	.string "Don't leave me like this!$"

Route101_Text_YouSavedMe:
	.string "Prof. Birch: You saved me! :)\n"
	.string "As thanks, you may keep my Pokémon.\p"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "If Pokémon get tired, take them to\n"
	.string "a Pokémon Center.\p"
	.string "There's a Pokémon Center in Oldale\n"
	.string "Town right close by.$"

Route101_Text_WildPokemonInTallGrass:
	.string "Wild Pokémon will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch Pokémon, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign:
	.string "Route 101\n"
	.string "{UP_ARROW} Oldale Town$"

