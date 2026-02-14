Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Nurse::
	lock
	faceplayer
	specialvar VAR_RESULT, IsPoisonInParty
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_NurseCantHealPoison
	msgbox Route102_Text_HealPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route102_EventScript_NurseHeal
	msgbox Route102_Text_PokemonNotHealed, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_NurseHeal::
	closemessage
	special HealPlayerParty
	playse SE_USE_ITEM
	waitse
	msgbox Route102_Text_PokemonHealed, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_NurseCantHealPoison::
	msgbox Route102_Text_CantHealPoison, MSGBOX_DEFAULT
	release
	end

Route102_Text_HealPokemon:
	.string "Want me to heal your Pokémon?$"

Route102_Text_PokemonHealed:
	.string "Your Pokémon are healthy.\n"
Route102_Text_PokemonNotHealed:
	.string "Come again!$"

Route102_Text_CantHealPoison:
	.string "Sorry, but I can't heal if\n"
	.string "you have a poisoned Pokémon.\p"
	.string "Please visit a Pokémon Center\n"
	.string "to cure poisoning.$"

Route102_Text_WatchMeCatchPokemon:
	.string "Wally: {PLAYER}…\n"
	.string "Pokémon hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "Wally: I did it… It's my…\n"
	.string "My Pokémon!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the Gym!$"

Route102_Text_ImNotVeryTall:
	.string "I'm just here to get in the way.$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I knew you wanted to join me.$"

Route102_Text_RouteSignOldale:
	.string "Route 102\n"
	.string "{RIGHT_ARROW} Oldale Town$"

Route102_Text_RouteSignPetalburg:
	.string "Route 102\n"
	.string "{LEFT_ARROW} Petalburg City$"
