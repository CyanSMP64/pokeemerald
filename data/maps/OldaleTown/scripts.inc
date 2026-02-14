.set LOCALID_MART_EMPLOYEE, 2
.set LOCALID_FOOTPRINTS_MAN, 3
.set LOCALID_RIVAL, 4
.set LOCALID_ACCUSER, 5

OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_OnFrame
	.byte 0

OldaleTown_OnFrame:
	map_script_2 VAR_OLDALE_TOWN_STATE, 2, OldaleTown_EventScript_Accuser
	.2byte 0

OldaleTown_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	setflag FLAG_VISITED_OLDALE_TOWN
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
	end

@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
OldaleTown_EventScript_SetOldaleState::
	setvar VAR_OLDALE_TOWN_STATE, 1
	return

OldaleTown_EventScript_BlockWestEntrance::
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	return

OldaleTown_EventScript_MoveMartEmployee::
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
	setflag FLAG_TEMP_1
	playbgm MUS_FOLLOW_ME, FALSE
	switch VAR_FACING
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
	end

OldaleTown_EventScript_GoToMartSouth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartNorth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartEast::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_ExplainPokemonMart::
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_ExplainPotion::
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

OldaleTown_Movement_EmployeeEast:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeSouth:
	walk_faster_left
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeNorth:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_Unknown1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerEast:
	walk_faster_right
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

OldaleTown_Movement_PlayerSouth:
	delay_4
	delay_4
	delay_4
	delay_4
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

OldaleTown_Movement_PlayerNorth:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

OldaleTown_Movement_Unknown2:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OldaleTown_EventScript_BlockedPath::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
	waitmovement 0
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
	waitmovement 0
	releaseall
	end

OldaleTown_EventScript_NotBlockingPath::
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_Rival::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_0x8009, 0
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_ShowRivalMessage::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
	end

OldaleTown_EventScript_ShowMayMessage::
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_ShowBrendanMessage::
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_RivalFinish::
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	removeobject LOCALID_RIVAL
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	releaseall
	end

OldaleTown_EventScript_DoExitMovement1::
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_EventScript_DoExitMovement2::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_EventScript_Accuser::
	lockall
	playse SE_PIN
	applymovement LOCALID_ACCUSER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ACCUSER, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_GAME_CORNER, FALSE
	delay 6
	playse SE_LEDGE
	applymovement LOCALID_ACCUSER, OldaleTown_Movement_AccuserJump
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_ACCUSER, OldaleTown_Movement_AccuserJump
	waitmovement 0
	delay 6
	applymovement LOCALID_ACCUSER, OldaleTown_Movement_AccuserRunRightLeft
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_ACCUSER, OldaleTown_Movement_AccuserJump
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_ACCUSER, OldaleTown_Movement_AccuserJump
	waitmovement 0
	applymovement LOCALID_ACCUSER, OldaleTown_Movement_AccuserSpinApproach
	waitmovement 0
	msgbox OldaleTown_Text_Accuser1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ACCUSER, OldaleTown_Movement_AccuserExit
	waitmovement 0
	removeobject LOCALID_ACCUSER
	setflag FLAG_HIDE_ACCUSER
	fadedefaultbgm
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_AccuserLeaveNoDex
	setvar VAR_OLDALE_TOWN_STATE, 1
	releaseall
	end

OldaleTown_EventScript_AccuserLeaveNoDex::
	setvar VAR_OLDALE_TOWN_STATE, 0
	releaseall
	end

OldaleTown_Movement_AccuserJump:
	jump_in_place_up
	step_end

OldaleTown_Movement_AccuserRunRightLeft:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_4
	walk_in_place_up
	delay_4
	step_end

OldaleTown_Movement_AccuserSpinApproach:
	face_up
	delay_4
	delay_2
	face_right
	delay_4
	delay_2
	face_down
	delay_4
	delay_2
	face_left
	delay_4
	delay_2
	face_up
	delay_16
	walk_up
	step_end

OldaleTown_Movement_AccuserExit:
	delay_16
	face_down
	delay_16
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

OldaleTown_Movement_RivalApproachPlayer1:
	walk_faster_left
	walk_faster_left
	step_end

OldaleTown_Movement_RivalApproachPlayer2:
	walk_faster_left
	step_end

OldaleTown_Movement_RivalApproachPlayer3:
	face_left
	step_end

OldaleTown_Movement_RivalExit:
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

OldaleTown_Movement_WatchRivalExit:
	delay_2
	delay_1
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerStepBack:
	delay_2
	walk_faster_right
	step_end

OldaleTown_Movement_BackUp:
	walk_faster_up
	walk_in_place_faster_left
	lock_facing_direction
	walk_faster_right
	unlock_facing_direction
	step_end

OldaleTown_Movement_ReturnToOriginalPosition:
	walk_faster_down
	walk_faster_left
	step_end

OldaleTown_Text_SavingMyProgress:
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Follow me.$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "Trust me and we will escape from the\n"
	.string "city.$"

OldaleTown_Text_PotionExplanation:
	.string "You only get one.$"

OldaleTown_Text_WaitDontComeInHere:
	.string "If I take one more step, it'll be the\n"
	.string "farthest away from home I've ever been.$"

OldaleTown_Text_DiscoveredFootprints:
	.string "This is it…$"

OldaleTown_Text_FinishedSketchingFootprints:
	.string "I finished sketching the footprints of\n"
	.string "a rare Pokémon.\p"
	.string "But it turns out they were only my\n"
	.string "own footprints…$"

OldaleTown_Text_MayLetsGoBack:
	.string "May: {PLAYER}!\n"
	.string "Over here!\l"
	.string "Let's hurry home!$"

OldaleTown_Text_BrendanLetsGoBack:
	.string "Brendan: I'm heading back to my dad's\n"
	.string "Lab now.\l"
	.string "{PLAYER}, you should hustle back, too.$"

OldaleTown_Text_TownSign:
	.string "Oldale Town\n"
	.string "“You'll be back.”$"

OldaleTown_Text_Accuser1:
	.string "Well, well, how d'ya do, young 'un?\p"
	.string "Huh? Y'don't know me?\n"
	.string "Who am I, y'ask?\p"
	.string "Why, I'm the Kaizo Police!\n"
	.string "And I'm here to tell ya somethin'.\p"
	.string "Your run…{PAUSE 30}\n"
	.string "is officially…{PAUSE 30} {PLAY_SE SE_VINEBOOM}cursed!\p"
	.string "From now on for the rest of the run,\n"
	.string "chat will yell at the streamer to\l"
	.string "reset!\p"
	.string "They will flood the chat with\n"
	.string "asterisks!\p"
	.string "And laugh at the streamer KEKW\p"
	.string "Y'understand the consequences of\n"
	.string "cheatin', right?\p"
	.string "Go run around for a while!\n"
	.string "That oughta teach y'all a lesson!\p"
	.string "Y'best remember to reset the run!\n"
	.string "Or don't! Haha! Be seein' ya later!$"
