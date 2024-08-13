EventScript_RepelWoreOff::
	lockall
	checkitem VAR_REPEL_LAST_USED, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_RepelWoreOff_NoMoreRepels
	msgbox Text_RepelWoreOff_UseAnother, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_RepelWoreOff_ChooseNo
	copyvar VAR_0x8004, VAR_REPEL_LAST_USED
	callnative ItemId_GetHoldEffectParam_Script
	copyvar VAR_REPEL_STEP_COUNT, VAR_RESULT
	bufferitemname 1, VAR_REPEL_LAST_USED
	removeitem VAR_REPEL_LAST_USED, 1
	playse SE_REPEL
	waitse
	msgbox Text_PlayerUsedRepel, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

EventScript_RepelWoreOff_ChooseNo:
	closemessage
	releaseall
	end

EventScript_RepelWoreOff_NoMoreRepels:
	msgbox Text_RepelWoreOff, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

Text_RepelWoreOff:
	.string "Repel's effect wore off…$"

Text_RepelWoreOff_UseAnother:
	.string "Repel's effect wore off…\n"
	.string "Use another?$"

Text_PlayerUsedRepel:
	.string "{PLAYER} used the\n"
	.string "{STR_VAR_2}.$"
