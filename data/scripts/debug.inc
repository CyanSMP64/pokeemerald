Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_CheatStart::
	lockall
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_eq VAR_RESULT, 0, Debug_CheatStart2
    msgbox Debug_Message_Test, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

Debug_CheatStart2::
	givemon SPECIES_MUDKIP, 5, ITEM_NONE
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
    msgbox Debug_Message_Test2, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

Debug_Script_1::
@	lock
@	buffernumberstring STR_VAR_1, VAR_LAST_TALKED
@	msgbox Debug_Message_LastTalked_STR_VAR_1, MSGBOX_DEFAULT
@	closemessage
@	release
	end

Debug_Script_2::
	end

Debug_Script_3::
	end

Debug_Script_4::
	end

Debug_Script_5::
	end

Debug_Script_6::
	end

Debug_Script_7::
	end

Debug_Script_8::
	end

Debug_Message_Test::
    .string "Test message!$"

Debug_Message_Test2::
    .string "Pokémon menu unlocked!$"

Debug_Message_LastTalked_STR_VAR_1::
    .string "VAR-LAST-TALKED is {STR_VAR_1}.$"
