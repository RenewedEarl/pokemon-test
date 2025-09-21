EvergreenTown_ProfSequoiasLab_MapScripts::
# 2 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EvergreenTown_ProfSequoiasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EvergreenTown_ProfSequoiasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	map_script_2 VAR_EVERGREEN_PROF_STATE, 0, EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting
	.2byte 0


EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting::
# 10 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 11 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_0
# 12 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 13 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_GreetProf
# 14 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 15 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_1
# 16 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 17 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_CheckStarters
# 18 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_ProfShowStarters
# 19 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 20 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_2
# 21 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 1
# 22 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne::
# 28 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 29 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_2
# 72 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_4
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_1:
# 74 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_2:
# 31 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	showmonpic SPECIES_DUSKULL, 10, 3
# 32 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_0, MSGBOX_YESNO
# 33 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_6
# 64 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 65 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5:
# 67 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmessage
# 68 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_1

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_6:
# 35 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	givemon SPECIES_DUSKULL, 5, ITEM_ORAN_BERRY
# 36 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_9
# 46 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_10
# 58 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 59 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_9:
# 38 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 39 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_1
# 40 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 2
# 41 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_ONE
# 42 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 43 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon
# 44 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_10:
# 48 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_1
# 50 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 2
# 51 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_TWO
# 52 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 53 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon
# 54 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5


EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo::
# 80 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 81 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_2
# 124 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_4
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_1:
# 126 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_2:
# 83 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	showmonpic SPECIES_IMPIDIMP, 10, 3
# 84 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_0, MSGBOX_YESNO
# 85 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_6
# 116 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 117 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5:
# 119 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmessage
# 120 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_1

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_6:
# 87 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	givemon SPECIES_IMPIDIMP, 5, ITEM_ORAN_BERRY
# 88 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_9
# 98 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_10
# 110 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 111 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_9:
# 90 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 91 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_1
# 92 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 3
# 93 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_TWO
# 94 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 95 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon
# 96 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_10:
# 100 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 101 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_1
# 102 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 3
# 103 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_TWO
# 104 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 105 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon
# 106 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5


EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree::
# 132 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 133 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_2
# 176 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_2
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_1:
# 178 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_2:
# 135 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	showmonpic SPECIES_BELDUM, 10, 3
# 136 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_0, MSGBOX_YESNO
# 137 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_6
# 168 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 169 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5:
# 171 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmessage
# 172 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_1

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_6:
# 139 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	givemon SPECIES_BELDUM, 5, ITEM_ORAN_BERRY
# 140 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_9
# 150 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_10
# 162 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 163 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_9:
# 142 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_1
# 144 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 4
# 145 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_THREE
# 146 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 147 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon
# 148 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_10:
# 152 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_1
# 154 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 4
# 155 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_THREE
# 156 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 157 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon
# 158 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5


EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter::
# 184 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats
# 185 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 186 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf
# 187 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 188 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter_Text_0
# 189 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex
	return


EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2::
# 195 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats2
# 196 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 197 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf
# 198 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 199 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2_Text_0
# 200 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex
	return


EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3::
# 206 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats3
# 207 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 208 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf
# 209 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 210 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3_Text_0
# 211 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex
	return


EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex::
# 217 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_0
# 218 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	message EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_1
# 220 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitfanfare
# 221 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 222 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 223 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 224 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 225 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 226 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 227 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	special EnableNationalPokedex
# 228 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 229 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_TOWN_STATE, 1
# 230 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_2
	return


EvergreenTown_ProfSequoiasLab_NPCScript_Professor::
# 237 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_NPCScript_Professor_1
# 245 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_EVERGREEN_PROF_STATE, 2
	goto_if_eq EvergreenTown_ProfSequoiasLab_NPCScript_Professor_2
# 255 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 256 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 257 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_2
# 258 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_1:
# 239 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 240 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 241 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_0
# 242 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_2:
# 247 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 248 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 249 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_1
# 250 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_TriggerScript_BackToStarter::
# 266 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 267 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_TriggerScript_BackToStarter_Text_0
# 268 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 269 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_GetStarter
# 270 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 271 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon::
# 278 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 279 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 280 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_2
EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_1:
# 285 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_4
	return

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_2:
# 282 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 283 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_1

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_4:
# 287 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
	return


EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon::
# 293 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_Text_0, MSGBOX_YESNO
# 294 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 295 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_2
EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_1:
# 299 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_2:
# 297 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_1


# 303 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_GreetProf:
# 305 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 305 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 305 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 305 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
	step_end

# 308 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_ProfShowStarters:
# 310 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 310 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 311 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_right
# 311 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_right
# 312 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	face_left
	step_end

# 315 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_CheckStarters:
# 317 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 317 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
	step_end

# 320 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats:
# 322 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_left
# 322 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_left
	step_end

# 325 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats2:
# 327 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_left
	step_end

# 330 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats3:
# 332 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	face_left
	step_end

# 335 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf:
# 337 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	face_right
	step_end

# 340 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_GetStarter:
# 342 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
	step_end

EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_0:
# 11 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: You're here finally here\n"
	.string "{PLAYER}, please come say hello!$"

EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_1:
# 15 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Thank you for coming to help me. I need\n"
	.string "to have a package picked up from the\l"
	.string "Pokemon Center in the town down south.\l"
	.string "I'd normally get it myself, but this town\l"
	.string "has a tradition where the prospective\l"
	.string "trainers that grow up here run an\l"
	.string "errand like this to get acquainted with\l"
	.string "a partner Pokemon and have a stable\l"
	.string "foundation to build off from.\p"
	.string "Please look at the three choices I have\n"
	.string "available for you!$"

EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_2:
# 20 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Here are the starters I have available.\n"
	.string "Please choose only one.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_0:
# 32 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Do you want to choose Duskull?$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_1:
# 39 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received Duskull.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2:
# 59 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "No more room.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3:
# 65 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "You didn't choose this Pokemon.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_4:
# 72 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "You have already taken a starter.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_0:
# 84 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Do you want to choose Impidimp?$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_1:
# 91 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received Impidimp.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_0:
# 136 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Do you want to choose Beldum?$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_1:
# 143 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received Beldum.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_2:
# 176 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "You've already taken a starter.$"

EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter_Text_0:
# 188 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: I see you picked Duskull,\n"
	.string "it's a very solid choice. Defensively,\l"
	.string "the line fulfills some very useful roles\l"
	.string "while having some good offensive\l"
	.string "presense too. I look forward to seeing\l"
	.string "how your team develops!\p"
	.string "Now that we have your starter\n"
	.string "selection out of the way, good luck on\l"
	.string "getting to the next town and securing\l"
	.string "the package.$"

EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2_Text_0:
# 199 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: I see you picked\n"
	.string "Impidimp, it's a very solid choice. The\l"
	.string "entire line provides some very good\l"
	.string "support utility, while also having some\l"
	.string "offensive kick to it. I look forward to\l"
	.string "seeing how your team develops!\p"
	.string "Now that we have your starter\n"
	.string "selection out of the way, good luck on\l"
	.string "getting to the next town and securing\l"
	.string "the package.$"

EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3_Text_0:
# 210 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof Sequoia: I see you picked Beldum,\n"
	.string "it's a very solid choice. Offensively,\l"
	.string "this line hits like a truck while having\l"
	.string "a good type combination as a bonus. I\l"
	.string "look forward to seeing how your team\l"
	.string "develops!\p"
	.string "Now that we have your starter\n"
	.string "selection out of the way, good luck on\l"
	.string "getting to the next town and securing\l"
	.string "the package.$"

EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_0:
# 217 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Have this Pokedex as well so you can\n"
	.string "study what you see and gather as\l"
	.string "complete of an encyclopedia as\l"
	.string "possible to support your ambitions.$"

EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_1:
# 219 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received the Pokedex!$"

EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_2:
# 230 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Good luck on your task!$"

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_0:
# 241 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: Please pick a starter.$"

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_1:
# 249 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: You still haven't gotten\n"
	.string "the package yet. What are you doing\l"
	.string "around here instead of out on the path\l"
	.string "down south?\p"
	.string "If your pokemon need healing, use the\n"
	.string "big machine with the red top.$"

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_2:
# 257 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: How's your journey\n"
	.string "going? If you need any technical help\l"
	.string "please don't hesitate to ask. Also, if\l"
	.string "there's ever any discoveries that would\l"
	.string "be of help to you, I'll make sure to call\l"
	.string "you.$"

EvergreenTown_ProfSequoiasLab_TriggerScript_BackToStarter_Text_0:
# 267 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: What are you doing? You\n"
	.string "still need to grab a starter before you\l"
	.string "leave.$"

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_Text_0:
# 278 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Give it a nickname?$"

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_Text_0:
# 293 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Give ite a nickname?$"
