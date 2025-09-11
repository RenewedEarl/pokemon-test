EvergreenTown_MapScripts::
	.byte 0


EvergreenTown_SignScript_PlayerHouse::
# 6 "data/maps/EvergreenTown/scripts.pory"
	lock
# 7 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_PlayerHouse_Text_0
# 8 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_RivalHouse::
# 14 "data/maps/EvergreenTown/scripts.pory"
	lock
# 15 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_RivalHouse_Text_0
# 16 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_ProfessorsLab::
# 22 "data/maps/EvergreenTown/scripts.pory"
	lock
# 23 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_ProfessorsLab_Text_0
# 24 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_EvergreenSign::
# 30 "data/maps/EvergreenTown/scripts.pory"
	lock
# 31 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_EvergreenSign_Text_0
# 32 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_OldMan::
# 39 "data/maps/EvergreenTown/scripts.pory"
	lock
# 40 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 41 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_OldMan_Text_0
# 42 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Beauty::
# 48 "data/maps/EvergreenTown/scripts.pory"
	lock
# 49 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 50 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Beauty_Text_0
# 51 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Boy::
# 57 "data/maps/EvergreenTown/scripts.pory"
	lock
# 58 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 59 "data/maps/EvergreenTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EVERGREEN_POTION, EvergreenTown_NPCScript_Boy_2
# 81 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_3
# 82 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 83 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
EvergreenTown_NPCScript_Boy_1:
# 85 "data/maps/EvergreenTown/scripts.pory"
	release
	end

EvergreenTown_NPCScript_Boy_2:
# 61 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_0, MSGBOX_YESNO
# 62 "data/maps/EvergreenTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_NPCScript_Boy_5
# 72 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_2
# 73 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 74 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 75 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 76 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1

EvergreenTown_NPCScript_Boy_5:
# 64 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_1
# 65 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 66 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 67 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 68 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1


EvergreenTown_NPCScript_Fisherman::
# 91 "data/maps/EvergreenTown/scripts.pory"
	lock
# 92 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 93 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_0
# 94 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull
# 95 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/EvergreenTown/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 97 "data/maps/EvergreenTown/scripts.pory"
	waitmoncry
# 98 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman
# 99 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 100 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_1
# 101 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull2
# 102 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman2
# 104 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_2
# 106 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman3
# 107 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock::
# 115 "data/maps/EvergreenTown/scripts.pory"
	lock
# 116 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 117 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 118 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 119 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock2::
# 126 "data/maps/EvergreenTown/scripts.pory"
	lock
# 127 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer
# 128 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 129 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 130 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 131 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 132 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer2
# 134 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/EvergreenTown/scripts.pory"
	release
	end


# 140 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull:
# 142 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 145 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull2:
# 147 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 150 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman:
# 152 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 155 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman2:
# 157 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 160 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman3:
# 162 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 165 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Boy:
# 167 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 170 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player:
# 172 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 175 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player2:
# 177 "data/maps/EvergreenTown/scripts.pory"
	walk_left
# 177 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 180 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer:
# 182 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 183 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 186 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer2:
# 188 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 189 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

EvergreenTown_SignScript_PlayerHouse_Text_0:
# 7 "data/maps/EvergreenTown/scripts.pory"
	.string "{PLAYER}'s House...$"

EvergreenTown_SignScript_RivalHouse_Text_0:
# 15 "data/maps/EvergreenTown/scripts.pory"
	.string "Rival's House...$"

EvergreenTown_SignScript_ProfessorsLab_Text_0:
# 23 "data/maps/EvergreenTown/scripts.pory"
	.string "Professor Sequioa's Lab...$"

EvergreenTown_SignScript_EvergreenSign_Text_0:
# 31 "data/maps/EvergreenTown/scripts.pory"
	.string "Evergreen Town, a lush homey\n"
	.string "atmosphere.$"

EvergreenTown_NPCScript_OldMan_Text_0:
# 41 "data/maps/EvergreenTown/scripts.pory"
	.string "Hello there, {PLAYER}! I can never get\n"
	.string "enough of how beautiful this town is.\p"
	.string "Good luck on your future endeavors!$"

EvergreenTown_NPCScript_Beauty_Text_0:
# 50 "data/maps/EvergreenTown/scripts.pory"
	.string "These flowers here are so pretty. I\n"
	.string "want to grow ones like these at my home.$"

EvergreenTown_NPCScript_Boy_Text_0:
# 61 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm trying to surprise this girl over on\n"
	.string "the other side of town with these\l"
	.string "flowers I found, will you go away?$"

EvergreenTown_NPCScript_Boy_Text_1:
# 64 "data/maps/EvergreenTown/scripts.pory"
	.string "Thanks.\p"
	.string "Here's a potion for your troubles...$"

EvergreenTown_NPCScript_Boy_Text_2:
# 72 "data/maps/EvergreenTown/scripts.pory"
	.string "Ugh!\p"
	.string "Take this and leave...$"

EvergreenTown_NPCScript_Boy_Text_3:
# 81 "data/maps/EvergreenTown/scripts.pory"
	.string "Stop bothering me.$"

EvergreenTown_NPCScript_Fisherman_Text_0:
# 93 "data/maps/EvergreenTown/scripts.pory"
	.string "Fishing here is so calming. I love coming\n"
	.string "here with my best buddy Wingull!$"

EvergreenTown_NPCScript_Fisherman_Text_1:
# 100 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm glad to hear you agree buddy!$"

EvergreenTown_NPCScript_Fisherman_Text_2:
# 105 "data/maps/EvergreenTown/scripts.pory"
	.string "Isn't he the coolest?$"

EvergreenTown_TriggerScript_StampedeBlock_Text_0:
# 116 "data/maps/EvergreenTown/scripts.pory"
	.string "I can't let you pass right now. There's\n"
	.string "been a stampede that's been wreaking\l"
	.string "havoc here. Once it's been routed,\l"
	.string "people can go through again.$"
