OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_USED_FRIENDSHIP, OldaleTown_House1_EventScript_CantRaiseFriendship
	msgbox OldaleTown_House1_Text_LikeMeToRaiseFriendship, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldaleTown_House1_EventScript_DeclineFriendship
	msgbox OldaleTown_House1_Text_WhichOne, MSGBOX_DEFAULT
	special ChoosePartyMonFRLG
	waitstate
	lock
	faceplayer
	goto_if_ge VAR_0x8004, PARTY_SIZE, OldaleTown_House1_EventScript_DeclineFriendship
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, OldaleTown_House1_EventScript_NotEgg
	msgbox OldaleTown_House1_Text_Alright, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_USED_FRIENDSHIP
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special DaisyMassageServices
	special DaisyMassageServices
	fadescreen FADE_FROM_BLACK
	msgbox OldaleTown_House1_Text_AllDone, MSGBOX_DEFAULT
@	random 25
@	call_if_eq VAR_RESULT, 0, OldaleTown_House1_EventScript_ActivateAccuser
	release
	end

OldaleTown_House1_EventScript_CantRaiseFriendship::
	msgbox OldaleTown_House1_Text_NoMore
	release
	end

OldaleTown_House1_EventScript_DeclineFriendship::
	msgbox OldaleTown_House1_Text_ComeBackWhenReady
	release
	end

OldaleTown_House1_EventScript_NotEgg::
	msgbox OldaleTown_House1_Text_Egg
	release
	end

OldaleTown_House1_EventScript_ActivateAccuser::
	setvar VAR_OLDALE_TOWN_STATE, 2
	clearflag FLAG_HIDE_ACCUSER
	return

OldaleTown_House1_Text_LikeMeToRaiseFriendship:
	.string "Would you like me to maximize your\n"
	.string "Pokémon's friendship?$"


OldaleTown_House1_Text_WhichOne:
	.string "You may only use my service once.\p"
	.string "Which Pokémon would you like me\n"
	.string "to make more friendly?$"

OldaleTown_House1_Text_Alright:
	.string "Okay, here goes!$"

OldaleTown_House1_Text_AllDone:
	.string "There you go! All done.\p"
OldaleTown_House1_Text_NoMore:
	.string "You may no longer use my service\n"
	.string "for the rest of the run.$"

OldaleTown_House1_Text_ComeBackWhenReady:
	.string "Come back when you're ready!$"

OldaleTown_House1_Text_Egg:
	.string "I can't do this to an Egg.$"

