EvergreenTown_PlayerHouse_1F_MapScripts::
# 3 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EvergreenTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EvergreenTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_PLAYER_HOUSE_INTRO_STATE, 1, EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom
	.2byte 0


EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom::
# 11 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 12 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_PlayerHouse_1F_MovementScript_ToMom
# 13 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	applymovement 1, EvergreenTown_PlayerHouse_1F_MovementScript_FacePlayer
# 15 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom_Text_0
# 17 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_PLAYER_HOUSE_INTRO_STATE, 2
# 18 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_1F_SignScript_Refrigerator::
# 25 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 26 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_SignScript_Refrigerator_Text_0
# 27 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_1F_SignScript_TV::
# 33 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 34 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_SignScript_TV_Text_0
# 35 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


EvergreenTown_PlayerHouse_1F_SignScript_GlassCase::
# 41 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	lock
# 42 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	msgbox EvergreenTown_PlayerHouse_1F_SignScript_GlassCase_Text_0
# 43 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	release
	end


# 48 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
EvergreenTown_PlayerHouse_1F_MovementScript_ToMom:
# 50 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 50 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 51 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 51 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
EvergreenTown_PlayerHouse_1F_MovementScript_FacePlayer:
# 56 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	face_left
	step_end

EvergreenTown_PlayerHouse_1F_EventScript_CheckWithMom_Text_0:
# 16 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "The things in the package are really\n"
	.string "useful, right? The professor should be\l"
	.string "giving you a starter pokemon to fulfill\l"
	.string "his errand so I made sure to get you\l"
	.string "some good supplies in advance.\p"
	.string "Make sure to visit when you can!$"

EvergreenTown_PlayerHouse_1F_SignScript_Refrigerator_Text_0:
# 26 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "This thing is filled to the brim!$"

EvergreenTown_PlayerHouse_1F_SignScript_TV_Text_0:
# 34 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "Breaking Bad seems to be on, such a\n"
	.string "good show.$"

EvergreenTown_PlayerHouse_1F_SignScript_GlassCase_Text_0:
# 42 "data/maps/EvergreenTown_PlayerHouse_1F/scripts.pory"
	.string "There seems to be a lot of ceramic\n"
	.string "figures and pottery in here.$"
