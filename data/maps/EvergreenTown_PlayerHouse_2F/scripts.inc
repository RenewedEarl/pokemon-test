EvergreenTown_PlayerHouse_2F_MapScripts::
# 3 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EvergreenTown_PlayerHouse_2F_OnTransition
# 7 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EvergreenTown_PlayerHouse_2F_OnResume
# 4 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EvergreenTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EvergreenTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	map_script_2 VAR_PLAYER_HOUSE_INTRO_STATE, 0, EvergreenTown_PlayerHouse_2F_EventScript_BeginningScene
	.2byte 0


EvergreenTown_PlayerHouse_2F_OnTransition::
# 12 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	goto_if_unset FLAG_MOM_CAME_UPSTAIRS, EvergreenTown_PlayerHouse_2F_OnTransition_2
EvergreenTown_PlayerHouse_2F_OnTransition_1:
# 17 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, EvergreenTown_PlayerHouse_2F_OnTransition_4
	return

EvergreenTown_PlayerHouse_2F_OnTransition_2:
# 14 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_MOM_CAME_UPSTAIRS
	goto EvergreenTown_PlayerHouse_2F_OnTransition_1

EvergreenTown_PlayerHouse_2F_OnTransition_4:
# 19 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


EvergreenTown_PlayerHouse_2F_OnResume::
# 25 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	goto_if_unset FLAG_START_WARP_FINISHED, EvergreenTown_PlayerHouse_2F_OnResume_1
	return

EvergreenTown_PlayerHouse_2F_OnResume_1:
# 27 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_START_WARP_FINISHED
# 28 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_PlayerHouse_2F_MovementScript_FacePC
	return


EvergreenTown_PlayerHouse_2F_EventScript_BeginningScene::
# 35 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	lock
# 36 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_EventScript_BeginningScene_Text_0
# 37 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 38 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	call EvergreenTown_PlayerHouse_2F_EventScript_MomUpstairs
# 39 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_PlayerHouse_2F_MovementScript_ToSupplies
# 40 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	giveitem ITEM_POTION, 5
# 42 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 43 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	giveitem ITEM_LAVA_COOKIE, 5
# 44 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_PLAYER_HOUSE_INTRO_STATE, 1
# 45 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_2F_EventScript_MomUpstairs::
# 51 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	addobject 1
# 52 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	playse SE_EXIT
# 53 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	applymovement 1, EvergreenTown_PlayerHouse_2F_MovementScript_TOPC
# 54 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_PlayerHouse_2F_MovementScript_FaceMom
# 56 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_EventScript_MomUpstairs_Text_0
# 58 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 59 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	applymovement 1, EvergreenTown_PlayerHouse_2F_MovementScript_BackDownstairs
# 60 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	playse SE_EXIT
# 62 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	removeobject 1
	return


EvergreenTown_PlayerHouse_2F_SignScript_SupplyBox::
# 69 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	lock
# 70 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_SignScript_SupplyBox_Text_0
# 71 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_2F_SignScript_Gamecube::
# 77 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	lock
# 78 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_SignScript_Gamecube_Text_0
# 79 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_2F_SignScript_TV::
# 85 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	lock
# 86 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_SignScript_TV_Text_0
# 87 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_2F_SignScript_Notebook::
# 93 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	lock
# 94 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_SignScript_Notebook_Text_0
# 95 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_2F_SignScript_PC::
# 101 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	lock
# 102 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	multichoice 30, 10, MULTI_HOME_PC, 0
# 103 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvergreenTown_PlayerHouse_2F_SignScript_PC_2
# 107 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EvergreenTown_PlayerHouse_2F_SignScript_PC_3
EvergreenTown_PlayerHouse_2F_SignScript_PC_1:
# 111 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 112 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	waitmessage
# 113 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	release
	end

EvergreenTown_PlayerHouse_2F_SignScript_PC_2:
# 105 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_EventScript_BeginningScene_Text_0
	goto EvergreenTown_PlayerHouse_2F_SignScript_PC_1

EvergreenTown_PlayerHouse_2F_SignScript_PC_3:
# 109 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_2F_SignScript_PC_Text_0
	goto EvergreenTown_PlayerHouse_2F_SignScript_PC_1


# 118 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
EvergreenTown_PlayerHouse_2F_MovementScript_FacePC:
# 120 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	face_up
	step_end

# 123 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
EvergreenTown_PlayerHouse_2F_MovementScript_TOPC:
# 125 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 126 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 126 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 126 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 126 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 126 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 126 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_right
	step_end

# 129 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
EvergreenTown_PlayerHouse_2F_MovementScript_FaceMom:
# 131 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	face_left
	step_end

# 134 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
EvergreenTown_PlayerHouse_2F_MovementScript_BackDownstairs:
# 136 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_up
	step_end

# 140 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
EvergreenTown_PlayerHouse_2F_MovementScript_ToSupplies:
# 142 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 142 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 142 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 142 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 143 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	walk_left
	step_end

EvergreenTown_PlayerHouse_2F_EventScript_BeginningScene_Text_0:
# 36 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	.string "Professor Sequoia: Good morning\n"
	.string "{PLAYER}, I need you to run an errand\l"
	.string "for me. Please come over to my lab on\l"
	.string "the other side of town to discuss more\l"
	.string "details; thanks for your time.$"

EvergreenTown_PlayerHouse_2F_EventScript_MomUpstairs_Text_0:
# 57 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	.string "Mom: Hello honey, I see the professor\n"
	.string "finally decided to ask for your help.\l"
	.string "Make sure to grab all your supplies from\l"
	.string "the package by your bed so you're\l"
	.string "prepared. I'll see you downstairs\l"
	.string "before you leave!$"

EvergreenTown_PlayerHouse_2F_SignScript_SupplyBox_Text_0:
# 70 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	.string "You've already emptied this out.$"

EvergreenTown_PlayerHouse_2F_SignScript_Gamecube_Text_0:
# 78 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	.string "The Legend of Zelda: Twilight Princess\n"
	.string "is currently in this system.$"

EvergreenTown_PlayerHouse_2F_SignScript_TV_Text_0:
# 86 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	.string "Gurren Lagann seems to be playing right\n"
	.string "now.$"

EvergreenTown_PlayerHouse_2F_SignScript_Notebook_Text_0:
# 94 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	.string "This notebook seems to be empty, you\n"
	.string "really should start using this...$"

EvergreenTown_PlayerHouse_2F_SignScript_PC_Text_0:
# 109 "data/maps/EvergreenTown_PlayerHouse_2F/scripts.pory"
	.string "There's a stampede east of Evergreen\n"
	.string "Town, ace trainers have been\l"
	.string "dispatched to deal with this\l"
	.string "disturbance and mitigate potential\l"
	.string "risks to the public.$"
