# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\n"
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how POKéMON have\n"
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "female POKéMON.\p"
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "But no one seems to have any idea how\n"
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "they're different.$"
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my POKéMON how to\n"
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor::
# 52 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lockall
# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_QUIZ_DONE, RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_2
# 91 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_10, MSGBOX_DEFAULT
	getpartysize
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_9
# 97 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BULBASAUR, RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_15
RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_14:
	getpartysize
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_22
# 109 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SQUIRTLE, RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_28
RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_27:
	getpartysize
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_31
# 121 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	message RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_14
# 122 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 124 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_CHARMANDER, 10
# 125 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_CHARMANDER
# 126 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RUSTBORO_STARTERS_RECEIVED
# 127 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_15, MSGBOX_DEFAULT
# 128 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 129 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_DISTRIBUTOR
# 131 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 132 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_1:
# 135 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_2:
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_0, MSGBOX_YESNO
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_5
# 86 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_9, MSGBOX_DEFAULT
# 87 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_5:
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_1, MSGBOX_YESNO
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_11
# 81 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_8, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_9:
# 93 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_11, MSGBOX_DEFAULT
# 94 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_11:
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	message RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_2
# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 59 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	multichoice 0, 6, MULTI_DEVONBALLS, FALSE
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 60 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 0, RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_18
# 64 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 1, RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_19
# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 2, RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_20
	goto RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_1

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_15:
# 98 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	message RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_12
# 99 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 101 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_BULBASAUR, 10
# 102 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_BULBASAUR
	goto RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_14

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_18:
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_3, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_19:
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_4, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_20:
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_5, MSGBOX_YESNO
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_24
# 75 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_7, MSGBOX_DEFAULT
# 76 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_22:
# 105 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_11, MSGBOX_DEFAULT
# 106 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_24:
# 70 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_6, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RUSTBORO_QUIZ_DONE
# 72 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_28:
# 110 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	message RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_13
# 111 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 112 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10
# 114 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
	goto RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_27

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_31:
# 117 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_11, MSGBOX_DEFAULT
# 118 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_0:
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Hey there, Trainer! I see you are just\n"
	.string "starting out on your journey, could I\l"
	.string "interest you in a special promotion\l"
	.string "that DEVON CORP is running?$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_1:
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Great! all you have to do is answer a\n"
	.string "few questions about DEVON CORP and our\l"
	.string "products, and you will receive a special\l"
	.string "gift! First off, is the DEVON SCOPE used\l"
	.string "to look at things that are far away?$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_2:
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "That is correct! The DEVON SCOPE is\n"
	.string "actually used to see invisible Pokemon.\l"
	.string "Next, which one of these is a Poké Ball\l"
	.string "designed by DEVON CORP?$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_3:
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Close, but wrong, sorry. Try again.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_4:
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The Jet Ball has existed for hundreds\n"
	.string "of years, it has not been developed by\l"
	.string "DEVON CORP, sorry. Try again.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_5:
# 69 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "That is correct! The Repeat Ball is a\n"
	.string "Poké Ball designed by DEVON CORP. It is\l"
	.string "more effective at catching Pokémon\l"
	.string "that you have already caught before.\l"
	.string "Now, for the final question, what is the\l"
	.string "name of the device that DEVON CORP\l"
	.string "uses to help Trainers navigate their\l"
	.string "journeys? Is it the PokéNav?$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_6:
# 70 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "That is correct! The PokéNav has many\n"
	.string "features, including a map, a Pokedex,\l"
	.string "and a phone. Thank you for\l"
	.string "participating in our quiz! As a reward, I\l"
	.string "would like to give you a few special\l"
	.string "Pokémon. These Pokémon originally come\l"
	.string "from Kanto! Please speak to me again\l"
	.string "when you have enough space in your\l"
	.string "party.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_7:
# 75 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "One would think it was obvious, but no,\n"
	.string "that is not correct. Try again.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_8:
# 81 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "No, sorry, that is not correct. You\n"
	.string "should probably look up what our\l"
	.string "products do before taking this quiz.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_9:
# 86 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Oh, alright, please come back if you\n"
	.string "change your mind.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_10:
# 91 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "You came to receive your Pokémon! Take\n"
	.string "these.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_11:
# 93 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Oh, your party is full! You need to make\n"
	.string "space for the Pokémon.$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_12:
# 98 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "You received a BULBASAUR!$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_13:
# 110 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "You received a SQUIRTLE!$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_14:
# 121 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "You received a CHARMANDER!$"

RustboroCity_PokemonCenter_1F_EventScript_DevonDistributor_Text_15:
# 127 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Thanks for participating, have a nice\n"
	.string "day!$"
