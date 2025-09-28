EvergreenTown_ProfSequoiasLab_MapScripts::
# 2 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EvergreenTown_ProfSequoiasLab_OnTransition
# 3 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EvergreenTown_ProfSequoiasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EvergreenTown_ProfSequoiasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	map_script_2 VAR_EVERGREEN_PROF_STATE, 0, EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting
	.2byte 0


EvergreenTown_ProfSequoiasLab_OnTransition::
# 10 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_RIVAL_HOUSE_VISIBILITY, EvergreenTown_ProfSequoiasLab_OnTransition_1
# 16 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	clearflag FLAG_RIVAL_LAB_VISIBILITY
	return

EvergreenTown_ProfSequoiasLab_OnTransition_1:
# 12 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_RIVAL_LAB_VISIBILITY
	return


EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting::
# 23 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 24 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_0
# 25 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 26 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_GreetProf
# 27 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 28 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_1
# 29 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 30 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_CheckStarters
# 31 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_ProfShowStarters
# 32 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 33 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_2
# 34 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 1
# 35 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne::
# 41 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 42 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_2
# 85 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_4
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_1:
# 87 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_2:
# 44 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	showmonpic SPECIES_DUSKULL, 10, 3
# 45 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_0, MSGBOX_YESNO
# 46 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_6
# 77 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 78 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5:
# 80 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmessage
# 81 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_1

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_6:
# 48 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	givemon SPECIES_DUSKULL, 5, ITEM_ORAN_BERRY, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 49 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_9
# 59 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_10
# 71 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 72 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_9:
# 51 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_1
# 53 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 2
# 54 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_ONE
# 55 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon
# 57 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_10:
# 61 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_1
# 63 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 2
# 64 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_TWO
# 65 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 66 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon
# 67 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_5


EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo::
# 93 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 94 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_2
# 137 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_4
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_1:
# 139 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_2:
# 96 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	showmonpic SPECIES_IMPIDIMP, 10, 3
# 97 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_0, MSGBOX_YESNO
# 98 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_6
# 129 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 130 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5:
# 132 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmessage
# 133 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_1

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_6:
# 100 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	givemon SPECIES_IMPIDIMP, 5, ITEM_ORAN_BERRY, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 101 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_9
# 111 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_10
# 123 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 124 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_9:
# 103 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_1
# 105 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 3
# 106 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_TWO
# 107 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 108 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon
# 109 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_10:
# 113 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_1
# 115 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 3
# 116 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_TWO
# 117 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 118 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon
# 119 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_5


EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree::
# 145 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 146 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_2
# 189 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_2
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_1:
# 191 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_2:
# 148 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	showmonpic SPECIES_BELDUM, 10, 3
# 149 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_0, MSGBOX_YESNO
# 150 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_6
# 181 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 182 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3
EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5:
# 184 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmessage
# 185 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_PROF_STATE, 2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_1

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_6:
# 152 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	givemon SPECIES_BELDUM, 5, ITEM_ORAN_BERRY, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 153 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_9
# 163 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_10
# 175 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 176 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_9:
# 155 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_1
# 157 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 4
# 158 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_THREE
# 159 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 160 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon
# 161 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_10:
# 165 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_1
# 167 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	removeobject 4
# 168 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_STARTER_BALL_THREE
# 169 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 170 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon
# 171 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3
	goto EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_5


EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter::
# 197 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats
# 198 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 199 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf
# 200 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 201 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter_Text_0
# 202 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex
	return


EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2::
# 208 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats2
# 209 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 210 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf
# 211 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 212 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter2_Text_0
# 213 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex
	return


EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3::
# 219 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 1, EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats3
# 220 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 221 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf
# 222 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 223 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter3_Text_0
# 224 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex
	return


EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex::
# 230 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_0
# 231 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 232 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	message EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_1
# 233 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitfanfare
# 234 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 235 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 236 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 237 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 238 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 239 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 240 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	special EnableNationalPokedex
# 241 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 242 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	setvar VAR_EVERGREEN_TOWN_STATE, 1
# 243 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_2
	return


EvergreenTown_ProfSequoiasLab_NPCScript_Professor::
# 250 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, EvergreenTown_ProfSequoiasLab_NPCScript_Professor_1
# 258 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_EVERGREEN_PROF_STATE, 2
	goto_if_eq EvergreenTown_ProfSequoiasLab_NPCScript_Professor_2
# 268 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 269 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 270 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_2
# 271 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_1:
# 252 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 253 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 254 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_0
# 255 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_2:
# 260 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 261 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 262 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_1
# 263 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_NPCScript_Aide::
# 278 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 279 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 280 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Aide_Text_0
# 281 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_NPCScript_Rival::
# 287 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 288 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	faceplayer
# 289 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_NPCScript_Rival_Text_0
# 290 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 291 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement 5, EvergreenTown_ProfSequoiasLab_MovementScript_FaceBookshelf
# 292 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 293 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_TriggerScript_BackToStarter::
# 300 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 301 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_TriggerScript_BackToStarter_Text_0
# 302 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 303 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_ProfSequoiasLab_MovementScript_GetStarter
# 304 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitmovement 0
# 305 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end


EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine::
# 312 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	lock
# 313 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	goto_if_set FLAG_HEAL_MACHINE_USABLE, EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_2
# 334 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_3
EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_1:
# 336 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	release
	end

EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_2:
# 315 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_0, MSGBOX_YESNO
# 316 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
# 317 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_5
# 329 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_2
	goto EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_1

EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_5:
# 319 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	special HealPlayerParty
# 320 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 321 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	playfanfare MUS_HEAL
# 322 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	waitse
# 323 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 324 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_1
# 325 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
	goto EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_1


EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon::
# 343 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 344 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 345 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_2
EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_1:
# 350 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_4
	return

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_2:
# 347 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 348 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_1

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_4:
# 352 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	closemessage
	return


EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon::
# 358 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	msgbox EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_Text_0, MSGBOX_YESNO
# 359 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	hidemonpic
# 360 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_2
EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_1:
# 364 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_2:
# 362 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_1


# 368 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_GreetProf:
# 370 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 370 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 370 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 370 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_ProfShowStarters:
# 375 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 375 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 376 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_right
# 376 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_right
# 377 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	face_left
	step_end

# 380 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_CheckStarters:
# 382 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
# 382 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
	step_end

# 385 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats:
# 387 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_left
# 387 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_left
	step_end

# 390 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats2:
# 392 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_left
	step_end

# 395 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_AfterStarterCongrats3:
# 397 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	face_left
	step_end

# 400 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_FaceProf:
# 402 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	face_right
	step_end

# 405 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_GetStarter:
# 407 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	walk_up
	step_end

# 410 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
EvergreenTown_ProfSequoiasLab_MovementScript_FaceBookshelf:
# 412 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	face_up
	step_end

EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_0:
# 24 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: You're here finally here\n"
	.string "{PLAYER}, please come say hello!$"

EvergreenTown_ProfSequoiasLab_EventScript_ProfGreeting_Text_1:
# 28 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
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
# 33 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Here are the starters I have available.\n"
	.string "Please choose only one.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_0:
# 45 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Do you want to choose Duskull?$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_1:
# 52 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received Duskull.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_2:
# 72 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "No more room.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_3:
# 78 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "You didn't choose this Pokemon.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallOne_Text_4:
# 85 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "You have already taken a starter.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_0:
# 97 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Do you want to choose Impidimp?$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallTwo_Text_1:
# 104 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received Impidimp.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_0:
# 149 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Do you want to choose Beldum?$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_1:
# 156 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received Beldum.$"

EvergreenTown_ProfSequoiasLab_EventScript_StarterBallThree_Text_2:
# 189 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "You've already taken a starter.$"

EvergreenTown_ProfSequoiasLab_EventScript_AfterStarter_Text_0:
# 201 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
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
# 212 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
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
# 223 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
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
# 230 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Have this Pokedex as well so you can\n"
	.string "study what you see and gather as\l"
	.string "complete of an encyclopedia as\l"
	.string "possible to support your ambitions.$"

EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_1:
# 232 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "{PLAYER} received the Pokedex!$"

EvergreenTown_ProfSequoiasLab_EventScript_GivePokedex_Text_2:
# 243 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Good luck on your task!$"

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_0:
# 254 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: Please pick a starter.$"

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_1:
# 262 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: You still haven't gotten\n"
	.string "the package yet. What are you doing\l"
	.string "around here instead of out on the path\l"
	.string "down south?\p"
	.string "If your pokemon need healing, use the\n"
	.string "big machine with the red top.$"

EvergreenTown_ProfSequoiasLab_NPCScript_Professor_Text_2:
# 270 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: How's your journey\n"
	.string "going? If you need any technical help\l"
	.string "please don't hesitate to ask. Also, if\l"
	.string "there's ever any discoveries that would\l"
	.string "be of help to you, I'll make sure to call\l"
	.string "you.$"

EvergreenTown_ProfSequoiasLab_NPCScript_Aide_Text_0:
# 280 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "I assist the professor in managing his\n"
	.string "large amounts of data. It's really nice\l"
	.string "to get to see a lot of the information\l"
	.string "that comes through here.$"

EvergreenTown_ProfSequoiasLab_NPCScript_Rival_Text_0:
# 289 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Jackson: What's up, {PLAYER}! I'm just\n"
	.string "reading up on some strategies while you\l"
	.string "run your errand.\p"
	.string "I'll be much better prepared for our\n"
	.string "next battle!$"

EvergreenTown_ProfSequoiasLab_TriggerScript_BackToStarter_Text_0:
# 301 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Prof. Sequoia: What are you doing? You\n"
	.string "still need to grab a starter before you\l"
	.string "leave.$"

EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_0:
# 315 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "This is the healing machine the\n"
	.string "professor mentioned, do you want to\l"
	.string "heal?$"

EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_1:
# 324 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Your Pokemon are now healed!$"

EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_2:
# 329 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "At least this is here...$"

EvergreenTown_ProfSequoiasLab_SignScript_HealingMachine_Text_3:
# 334 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "You can't use this machine right now.$"

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknamePartyMon_Text_0:
# 343 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Give it a nickname?$"

EvergreenTown_ProfSequoiasLab_ProcessScript_NicknameBoxMon_Text_0:
# 358 "data/maps/EvergreenTown_ProfSequoiasLab/scripts.pory"
	.string "Give ite a nickname?$"
