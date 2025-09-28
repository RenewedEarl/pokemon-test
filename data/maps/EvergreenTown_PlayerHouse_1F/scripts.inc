EvergreenTown_PlayerHouse_1F_MapScripts::
# 3 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EvergreenTown_PlayerHouse_1F_OnTransition
# 4 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EvergreenTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EvergreenTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_PLAYER_HOUSE_INTRO_STATE, 1, EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom
	.2byte 0


EvergreenTown_PlayerHouse_1F_OnTransition::
# 11 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVERGREEN_TOWN
	end


EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom::
# 18 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 19 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_PlayerHouse_1F_MovementScript_ToMom
# 20 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	applymovement 1, EvergreenTown_PlayerHouse_1F_MovementScript_FacePlayer
# 22 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom_Text_0
# 24 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_PLAYER_HOUSE_INTRO_STATE, 2
# 25 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_1F_NPCScript_Mom::
# 32 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 33 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 34 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_NPCScript_Mom_Text_0
# 35 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_1F_SignScript_Refrigerator::
# 42 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 43 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_SignScript_Refrigerator_Text_0
# 44 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_1F_SignScript_TV::
# 50 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 51 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_SignScript_TV_Text_0
# 52 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_1F_SignScript_GlassCase::
# 58 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 59 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_SignScript_GlassCase_Text_0
# 60 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


# 65 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
EvergreenTown_PlayerHouse_1F_MovementScript_ToMom:
# 67 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 67 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 68 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 71 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
EvergreenTown_PlayerHouse_1F_MovementScript_FacePlayer:
# 73 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	face_left
	step_end

EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom_Text_0:
# 23 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: The things in the package are\n"
	.string "really useful, right? The professor\l"
	.string "should be giving you a starter pokemon\l"
	.string "to fulfill his errand so I made sure to\l"
	.string "get you some good supplies in advance.\p"
	.string "Make sure to visit when you can!$"

EvergreenTown_PlayerHouse_1F_NPCScript_Mom_Text_0:
# 34 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Thanks for visiting me, I love it\n"
	.string "when you come. If you need any advice\l"
	.string "on a problem you're always welcome to\l"
	.string "ask!$"

EvergreenTown_PlayerHouse_1F_SignScript_Refrigerator_Text_0:
# 43 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "This thing is filled to the brim!$"

EvergreenTown_PlayerHouse_1F_SignScript_TV_Text_0:
# 51 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "Breaking Bad seems to be on, such a\n"
	.string "good show.$"

EvergreenTown_PlayerHouse_1F_SignScript_GlassCase_Text_0:
# 59 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "There seems to be a lot of ceramic\n"
	.string "figures and pottery in here.$"
