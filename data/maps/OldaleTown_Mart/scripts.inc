.set LOCALID_HOOPA_CLERK, 4

OldaleTown_Mart_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_Mart_OnTransition
	.byte 0

OldaleTown_Mart_OnTransition:
	setvar VAR_0x8004, SPECIES_HOOPA
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, OldaleTown_Mart_UnhideHoopaClerk
	setflag FLAG_HIDE_HOOPA_CLERK
	end

OldaleTown_Mart_UnhideHoopaClerk::
	goto_if_set FLAG_RECEIVED_PRISON_BOTTLE, OldaleTown_Mart_End
	clearflag FLAG_HIDE_HOOPA_CLERK
	addobject LOCALID_HOOPA_CLERK
OldaleTown_Mart_End::
	end

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

OldaleTown_Mart_Text_PokeBallsAreSoldOut:
	.string "The clerk says they're all sold out.\n"
	.string "I can't buy any Poké Balls.$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
	.string "I'm going to buy a bunch of Poké Balls\n"
	.string "and catch a bunch of Pokémon!$"

OldaleTown_Mart_Text_RestoreHPWithPotion:
	.string "If a Pokémon gets hurt and loses its HP\n"
	.string "and faints, it won't be able to battle.\p"
	.string "To prevent your Pokémon from fainting,\n"
	.string "restore its HP with a Potion.$"

OldaleTown_Mart_EventScript_HoopaClerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PRISON_BOTTLE, OldaleTown_Mart_EventScript_HoopaClerkPost
	msgbox OldaleTown_Mart_Text_HoopaStory1, MSGBOX_DEFAULT
	closemessage
	delay 16
	msgbox OldaleTown_Mart_Text_HoopaStory2, MSGBOX_DEFAULT
	closemessage
	delay 16
	msgbox OldaleTown_Mart_Text_HoopaStory3, MSGBOX_DEFAULT
	closemessage
	delay 16
	msgbox OldaleTown_Mart_Text_HoopaStory4, MSGBOX_DEFAULT
	closemessage
	delay 16
	msgbox OldaleTown_Mart_Text_HoopaStory5, MSGBOX_DEFAULT
	closemessage
	delay 16
	msgbox OldaleTown_Mart_Text_HoopaStory6, MSGBOX_DEFAULT
	giveitem ITEM_PRISON_BOTTLE
	setflag FLAG_RECEIVED_PRISON_BOTTLE
	setflag FLAG_HIDE_HOOPA_CLERK
OldaleTown_Mart_EventScript_HoopaClerkPost::
	msgbox OldaleTown_Mart_Text_HoopaStoryPost, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_Text_HoopaStory1:
	.string "Hey, do you have a minute for a story?\p"
	.string "This is something that happened when I\n"
	.string "was watching the store one time…$"

OldaleTown_Mart_Text_HoopaStory2:
	.string "It was, like, a totally dark night.\n"
	.string "Moonless. And I was all, “No way!\l"
	.string "This is so-o-o-o creepy!”\l"
	.string "Then, suddenly--whoosh!\p"
	.string "Out of nowhere, the automatic sliding\n"
	.string "door… slides open.\p"
	.string "And then this super-duper scary old guy\n"
	.string "comes in, kinda unsteady, you know?\l"
	.string "Kinda shambling…$"

OldaleTown_Mart_Text_HoopaStory3:
	.string "So I'm thinking how terrible and scary\n"
	.string "is this, and then the old guy\l"
	.string "shuffles over to me…\p"
	.string "He has a package, like, clutched in his\n"
	.string "hands… He's mumbling that he has to\l"
	.string "show it to me…\p"
	.string "Then he asks, “Do you know what this is\n"
	.string "worth?”\p"
	.string "He keeps staring right at me and not\n"
	.string "even blinking. I was so freaked out.\l"
	.string "I was, like…\p"
	.string "“Oh yes. It's, uh, really something,\n"
	.string "isn't it?”$"

OldaleTown_Mart_Text_HoopaStory4:
	.string "So the old guy grins at me, and he says…\p"
	.string "“Then I'll just give you this instead of\n"
	.string "money. Now give me everything you've\l"
	.string "got in this store!”\l"
	.string "That's what he said! Really!\p"
	.string "I was like, “What is this? Too weird, my\n"
	.string "dude!” But I was scared, so I started\l"
	.string "shoveling over Potions and, like,\l"
	.string "whatever I could reach.\l"
	.string "I gave the dude everything for his\l"
	.string "stupid package.\p"
	.string "And out he goes, like, with a wicked grin\n"
	.string "on his face…$"

OldaleTown_Mart_Text_HoopaStory5:
	.string "As he's walking out, he says, “Three\n"
	.string "days… For a mere three days will Hoopa\l"
	.string "be unbound…” Really!\p"
	.string "I was all, “Stop freaking me out with\n"
	.string "this nonsense!” I was, like, sweating.\l"
	.string "The back of my shirt was soaked.\p"
	.string "Anyway, nothing I could do, so I open the\n"
	.string "package. It's just a dirty old bottle.\l"
	.string "Li-i-i-i-ike, really.\p"
	.string "So I go, “Weirdness. Wonder what's in it.”\n"
	.string "I grab the stopper and carefully pull\l"
	.string "it loose.\p"
	.string "Blapt! It popped open, but there was\n"
	.string "nothing inside! So I figure I totally\l"
	.string "got fooled.$"

OldaleTown_Mart_Text_HoopaStory6:
	.string "…Thanks for listening to my story.\p"
	.string "Know what? I'm gonna give you the bottle\n"
	.string "from that night 'cause you're so nice.\p"
	.string "It's not doing me any good anyway.\n"
	.string "Really.$"

OldaleTown_Mart_Text_HoopaStoryPost:
	.string "Sometimes I wonder if it really is only a\n"
	.string "dirty old bottle.\p"
	.string "Those last words that the old guy said\n"
	.string "as he left… “For a mere three days\l"
	.string "will Hoopa be unbound…”\l"
	.string "Just can't seem to get that out of my\l"
	.string "head…$"
