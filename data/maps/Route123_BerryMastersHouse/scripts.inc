Route123_BerryMastersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_BerryMastersHouse_OnTransition
	.byte 0

Route123_BerryMastersHouse_OnTransition:
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
	end

Route123_BerryMastersHouse_EventScript_BerryMaster::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_ReceivedBerryToday
	msgbox Route123_BerryMastersHouse_Text_YoureDeservingOfBerry, MSGBOX_DEFAULT
	random NUM_BERRY_MASTER_BERRIES
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
	msgbox Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother, MSGBOX_DEFAULT
	random NUM_BERRY_MASTER_BERRIES
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_ReceivedBerryToday::
	msgbox Route123_BerryMastersHouse_Text_DoneForToday, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_BerryMastersWife::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday
	msgbox Route123_BerryMastersHouse_Text_HeardAGoodSayingLately, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, TRUE, Route123_BerryMastersHouse_EventScript_GavePhrase
	goto_if_eq VAR_RESULT, FALSE, Route123_BerryMastersHouse_EventScript_CancelPhrase
	end

Route123_BerryMastersHouse_EventScript_CancelPhrase::
	msgbox Route123_BerryMastersHouse_Text_Ah, MSGBOX_DEFAULT
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_GavePhrase::
	goto_if_eq VAR_0x8004, NOT_SPECIAL_PHRASE, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto_if_eq VAR_0x8004, PHRASE_GREAT_BATTLE, Route123_BerryMastersHouse_EventScript_GiveSpelonBerry
	goto_if_eq VAR_0x8004, PHRASE_CHALLENGE_CONTEST, Route123_BerryMastersHouse_EventScript_GivePamtreBerry
	goto_if_eq VAR_0x8004, PHRASE_OVERWHELMING_LATIAS, Route123_BerryMastersHouse_EventScript_GiveWatmelBerry
	goto_if_eq VAR_0x8004, PHRASE_COOL_LATIOS, Route123_BerryMastersHouse_EventScript_GiveDurinBerry
	goto_if_eq VAR_0x8004, PHRASE_SUPER_HUSTLE, Route123_BerryMastersHouse_EventScript_GiveBelueBerry
	end

Route123_BerryMastersHouse_EventScript_GiveNormalBerry::
	msgbox Route123_BerryMastersHouse_Text_GoodSayingTakeThis, MSGBOX_DEFAULT
	random NUM_BERRY_MASTER_WIFE_BERRIES
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	release
	end

Route123_BerryMastersHouse_EventScript_GiveSpelonBerry::
	goto_if_set FLAG_RECEIVED_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_SPELON_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SPELON_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GivePamtreBerry::
	goto_if_set FLAG_RECEIVED_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_PAMTRE_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PAMTRE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GiveWatmelBerry::
	goto_if_set FLAG_RECEIVED_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_WATMEL_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_WATMEL_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GiveDurinBerry::
	goto_if_set FLAG_RECEIVED_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_DURIN_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_DURIN_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GiveBelueBerry::
	goto_if_set FLAG_RECEIVED_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_BELUE_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_BELUE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday::
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_GaveBerry::
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_GracideaMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GRACIDEA, Route123_BerryMastersHouse_EventScript_GracideaMan_Explain
	setvar VAR_0x8004, SPECIES_SHAYMIN
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, Route123_BerryMastersHouse_EventScript_GracideaMan_Give
	msgbox Route123_BerryMastersHouse_Text_HaveYouHeardOfGracidea
	release
	end

Route123_BerryMastersHouse_EventScript_GracideaMan_Give::
	msgbox Route123_BerryMastersHouse_Text_WowShaymin
	giveitem ITEM_GRACIDEA
	setflag FLAG_RECEIVED_GRACIDEA
	release
	end

Route123_BerryMastersHouse_EventScript_GracideaMan_Explain::
	msgbox Route123_BerryMastersHouse_Text_ItsBeenATradition
	release
	end

Route123_BerryMastersHouse_Text_HaveYouHeardOfGracidea::
    .string "Do you know Gracidea?\p"
	.string "In the Sinnoh region, people give a\n"
	.string "bouquet of Gracidea to convey their\l"
	.string "gratitude!\p"
	.string "It's a very old custom!$"

Route123_BerryMastersHouse_Text_WowShaymin::
    .string "Golly!\n"
	.string "You have a Shaymin!\p"
	.string "Speaking of Shaymin, do you have a\n"
	.string "Gracidea?\p"
	.string "I have many Gracidea right now, so I'll\n"
	.string "give you one.$"

Route123_BerryMastersHouse_Text_ItsBeenATradition::
    .string "In the Sinnoh region, there's an old\n"
	.string "custom that they give a bouquet of\l"
	.string "Gracidea to convey gratitude.\p"
	.string "In other words, if you give Gracidea, you\n"
	.string "can express your feeling even without\l"
	.string "saying it.\p"
	.string "For a shy person like me, there's nothing\n"
	.string "more useful than this.$"
