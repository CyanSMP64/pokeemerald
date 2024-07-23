.set LOCALID_STEVEN, 1

MeteorFalls_StevensCave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_StevensCave_OnLoad
	.byte 0

MeteorFalls_StevensCave_OnLoad:
	call_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_OpenEndCave
	end

MeteorFalls_StevensCave_EventScript_OpenEndCave::
	setmetatile 24, 6, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
	setmetatile 23, 7, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
	setmetatile 24, 7, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
	setmetatile 25, 7, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	setvar VAR_TEMP_0, 1
	return

MeteorFalls_StevensCave_EventScript_Steven::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	closemessage
	delay 10
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	playse SE_UNLOCK
	call MeteorFalls_StevensCave_EventScript_OpenEndCave
	special DrawWholeMapView
	release
	end

MeteorFalls_StevensCave_EventScript_SaveBeforeEndRoom::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	delay 30
	call Common_EventScript_SaveGame
	goto_if_eq VAR_RESULT, 0, MeteorFalls_StevensCave_EventScript_SaveCancelled
	release
	end

MeteorFalls_StevensCave_EventScript_SaveCancelled::
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_StevensCave_Movement_MoveAwayFromCave
	waitmovement 0
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Movement_MoveAwayFromCave:
	walk_left
	step_end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "Steven: Oh, wow, {PLAYER}.\n"
	.string "I'm amazed you knew where to find me.\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock maniac?\p"
	.string "No, that can't be right.\p"
	.string "We battled alongside each other at\n"
	.string "the Mossdeep Space Center.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"

MeteorFalls_StevensCave_Text_StevenDefeat:
	.string "You…\n"
	.string "I had no idea you'd become so strong…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "Steven: Come to think of it, ever since\n"
	.string "our paths first crossed in Granite\l"
	.string "Cave in Dewford, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the Champion.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Fufufu, even I couldn't tell you that.$"

