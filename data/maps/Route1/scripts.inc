Route1_MapScripts::
	.byte 0


Route_1_EventScript_Youngster_Battle::
# 6 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_JOHNNY, Route_1_TextScript_Youngster_Intro, Route_1_TextScript_Youngster_Loss
# 7 "data/maps/Route1/scripts.pory"
	msgbox Route_1_EventScript_Youngster_Battle_Text_0
# 8 "data/maps/Route1/scripts.pory"
	release
	end


Route_1_EventScript_Lass_Battle::
# 14 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ELLA, Route_1_TextScript_Lass_Intro, Route_1_TextScript_Lass_Loss
# 15 "data/maps/Route1/scripts.pory"
	msgbox Route_1_EventScript_Lass_Battle_Text_0
# 16 "data/maps/Route1/scripts.pory"
	release
	end


Route_1_NPCScript_Fisherman::
# 23 "data/maps/Route1/scripts.pory"
	lock
# 24 "data/maps/Route1/scripts.pory"
	faceplayer
# 25 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Route_1_NPCScript_Fisherman_2
# 38 "data/maps/Route1/scripts.pory"
	msgbox Route_1_NPCScript_Fisherman_Text_2
Route_1_NPCScript_Fisherman_1:
# 40 "data/maps/Route1/scripts.pory"
	release
	end

Route_1_NPCScript_Fisherman_2:
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route_1_NPCScript_Fisherman_Text_0
# 28 "data/maps/Route1/scripts.pory"
	giveitem ITEM_OLD_ROD
# 29 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route_1_NPCScript_Fisherman_6
Route_1_NPCScript_Fisherman_5:
# 33 "data/maps/Route1/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 34 "data/maps/Route1/scripts.pory"
	msgbox Route_1_NPCScript_Fisherman_Text_1
	goto Route_1_NPCScript_Fisherman_1

Route_1_NPCScript_Fisherman_6:
# 31 "data/maps/Route1/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route_1_NPCScript_Fisherman_5


Route_1_EventScript_Youngster_Battle_Text_0:
# 7 "data/maps/Route1/scripts.pory"
	.string "I'll be stronger, just you wait!$"

Route_1_EventScript_Lass_Battle_Text_0:
# 15 "data/maps/Route1/scripts.pory"
	.string "You're something else...$"

Route_1_NPCScript_Fisherman_Text_0:
# 27 "data/maps/Route1/scripts.pory"
	.string "You look like someone who could use\n"
	.string "this extra rod I have. There's some\l"
	.string "solid Pokemon to find in the water with\l"
	.string "the right rod.$"

Route_1_NPCScript_Fisherman_Text_1:
# 34 "data/maps/Route1/scripts.pory"
	.string "Just face the water and use the rod,\n"
	.string "then pull when you catch something.\l"
	.string "Happy Fishing!$"

Route_1_NPCScript_Fisherman_Text_2:
# 38 "data/maps/Route1/scripts.pory"
	.string "How has the rod been treating you? I\n"
	.string "hope it's doing well.$"

Route_1_TextScript_Youngster_Intro::
# 45 "data/maps/Route1/scripts.pory"
	.string "My team is pretty good so far, I want to\n"
	.string "test it on you!$"

Route_1_TextScript_Youngster_Loss::
# 50 "data/maps/Route1/scripts.pory"
	.string "Damn, you're strong.$"

Route_1_TextScript_Lass_Intro::
# 55 "data/maps/Route1/scripts.pory"
	.string "My jigglypuff wants to get out and\n"
	.string "exercise. Please be good enough to\l"
	.string "help.$"

Route_1_TextScript_Lass_Loss::
# 60 "data/maps/Route1/scripts.pory"
	.string "You were too good.$"
