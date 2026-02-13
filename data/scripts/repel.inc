EventScript_RepelWoreOff::
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
	checkitem ITEM_REPEL, 1
	compare_var_to_value VAR_RESULT, 1
	goto_if TRUE, EventScript_RepelWoreOff_UseAnother
	checkitem ITEM_SUPER_REPEL, 1
	compare_var_to_value VAR_RESULT, 1
	goto_if TRUE, EventScript_RepelWoreOff_UseAnother
	checkitem ITEM_MAX_REPEL, 1
	compare_var_to_value VAR_RESULT, 0
	goto_if TRUE, EventScript_RepelWoreOff_End

EventScript_RepelWoreOff_UseAnother::
	msgbox Text_UseAnotherOne, MSGBOX_YESNO
	closemessage
	compare_var_to_value VAR_RESULT, 0
	goto_if TRUE, EventScript_RepelWoreOff_End
	callnative func_08FFB9A0
	compare_var_to_value VAR_RESULT, 1
	goto_if TRUE, EventScript_RepelWoreOff_RemoveRepel1
	waitstate
	compare_var_to_value VAR_RESULT, 0
	goto_if TRUE, EventScript_RepelWoreOff_RemoveRepel1
	compare_var_to_value VAR_RESULT, 1
	goto_if TRUE, EventScript_RepelWoreOff_RemoveRepel2
	compare_var_to_value VAR_RESULT, 2
	goto_if TRUE, EventScript_RepelWoreOff_RemoveRepel3
	end

EventScript_RepelWoreOff_RemoveRepel1::
	bufferitemname STR_VAR_1, VAR_0x8004
	removeitem VAR_0x8004, 1
	setvar VAR_RESULT, 0
	goto EventScript_RepelWoreOff_UseRepel

EventScript_RepelWoreOff_RemoveRepel2::
	bufferitemname STR_VAR_1, VAR_0x8005
	removeitem VAR_0x8005, 1
	goto EventScript_RepelWoreOff_UseRepel

EventScript_RepelWoreOff_RemoveRepel3::
	bufferitemname STR_VAR_1, VAR_0x8006
	removeitem VAR_0x8006, 1

EventScript_RepelWoreOff_UseRepel::
	callnative func_08FFB9E0
	setorcopyvar VAR_REPEL_STEP_COUNT, VAR_0x8004
	playse SE_REPEL
	msgbox Text_PlayerUsedTheRepel, MSGBOX_SIGN

EventScript_RepelWoreOff_End::
	end

Text_RepelWoreOff:
	.string "REPEL's effect wore off…$"

Text_PlayerUsedTheRepel:
	.string "{PLAYER} used the\n"
	.string "{STR_VAR_1}!$"

Text_UseAnotherOne:
	.string "Would you like to use\n"
	.string "another one?$"
