# 1 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 9 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_DEWFORD_NURSE
# 14 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
# 21 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
# 22 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Man::
# 25 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
# 26 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_StoneCavern:
# 29 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "There's a stone cavern at the edge\n"
# 30 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "of town.\p"
# 31 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I've heard you can find rare stones\n"
# 32 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "there.$"
# 33 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
# 35 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Even if a POKéMON faints and can't\n"
# 36 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "battle, it can still use a move learned\l"
# 37 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "from a HIDDEN MACHINE (HM).$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor::
# 42 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	lockall
# 43 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 44 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_DEWFORD_QUIZ_DONE, DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_2
# 81 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_9, MSGBOX_DEFAULT
	getpartysize
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_9
# 87 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_15
DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_14:
	getpartysize
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_22
# 99 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_28
DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_27:
	getpartysize
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_31
# 111 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	message DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_13
# 112 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 114 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 10
# 115 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
# 116 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DEWFORD_STARTERS_RECEIVED
# 117 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_14, MSGBOX_DEFAULT
# 118 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 119 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_DEWFORD_DEVON_DISTRIBUTOR
# 121 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 122 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_1:
# 125 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_2:
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_0, MSGBOX_YESNO
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_5
# 76 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_8, MSGBOX_DEFAULT
# 77 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_5:
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_0, MSGBOX_YESNO
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_11
# 71 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_7, MSGBOX_DEFAULT
# 72 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_9:
# 83 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_10, MSGBOX_DEFAULT
# 84 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_11:
# 47 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	message DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_1
# 48 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 49 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	multichoice 0, 6, MULTI_DEVONBALLS, FALSE
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 0, DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_18
# 54 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 1, DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_19
# 58 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 2, DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_20
	goto DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_1

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_15:
# 88 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	message DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_11
# 89 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 90 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 91 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_CHIKORITA, 10
# 92 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_14

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_18:
# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_2, MSGBOX_DEFAULT
# 52 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_19:
# 55 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_3, MSGBOX_DEFAULT
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_20:
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_4, MSGBOX_YESNO
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_24
# 65 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_6, MSGBOX_DEFAULT
# 66 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_22:
# 95 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_10, MSGBOX_DEFAULT
# 96 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_24:
# 60 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_5, MSGBOX_DEFAULT
# 61 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RUSTBORO_QUIZ_DONE
# 62 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_28:
# 100 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	message DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_12
# 101 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 103 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_TOTODILE, 10
# 104 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_27

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_31:
# 107 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_10, MSGBOX_DEFAULT
# 108 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_0:
# 45 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "placeholder$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_1:
# 47 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "That is correct! placeholder$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_2:
# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Close, but wrong, sorry. Try again.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_3:
# 55 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "The Jet Ball has existed for hundreds\n"
	.string "of years, it has not been developed by\l"
	.string "DEVON CORP, sorry. Try again.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_4:
# 59 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "That is correct! The Repeat Ball is a\n"
	.string "Poké Ball designed by DEVON CORP. It is\l"
	.string "more effective at catching Pokémon\l"
	.string "that you have already caught before.\l"
	.string "Now, for the final question, what is the\l"
	.string "name of the device that DEVON CORP\l"
	.string "uses to help Trainers navigate their\l"
	.string "journeys? Is it the PokéNav?$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_5:
# 60 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "That is correct! The PokéNav has many\n"
	.string "features, including a map, a Pokedex,\l"
	.string "and a phone. Thank you for\l"
	.string "participating in our quiz! As a reward, I\l"
	.string "would like to give you a few special\l"
	.string "Pokémon. These Pokémon originally come\l"
	.string "from Kanto! Please speak to me again\l"
	.string "when you have enough space in your\l"
	.string "party.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_6:
# 65 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "One would think it was obvious, but no,\n"
	.string "that is not correct. Try again.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_7:
# 71 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "No, sorry, that is not correct. You\n"
	.string "should probably look up what our\l"
	.string "products do before taking this quiz.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_8:
# 76 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, alright, please come back if you\n"
	.string "change your mind.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_9:
# 81 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "You came to receive your Pokémon! Take\n"
	.string "these.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_10:
# 83 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, your party is full! You need to make\n"
	.string "space for the Pokémon.$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_11:
# 88 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "You received a CHIKORITA!$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_12:
# 100 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "You received a TOTODILE!$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_13:
# 111 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "You received a CYNDAQUIL!$"

DewfordTown_PokemonCenter_1F_EventScript_DevonDistributor_Text_14:
# 117 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Thanks for participating, have a nice\n"
	.string "day!$"
