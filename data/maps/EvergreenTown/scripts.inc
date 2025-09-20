EvergreenTown_MapScripts::
# 2 "data/maps/EvergreenTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EvergreenTown_OnTransition
	.byte 0


EvergreenTown_OnTransition::
# 7 "data/maps/EvergreenTown/scripts.pory"
	goto_if_unset FLAG_RIVAL_VISIBILITY, EvergreenTown_OnTransition_1
	return

EvergreenTown_OnTransition_1:
# 9 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RIVAL_VISIBILITY
	return


EvergreenTown_SignScript_PlayerHouse::
# 16 "data/maps/EvergreenTown/scripts.pory"
	lock
# 17 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_PlayerHouse_Text_0
# 18 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_RivalHouse::
# 24 "data/maps/EvergreenTown/scripts.pory"
	lock
# 25 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_RivalHouse_Text_0
# 26 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_ProfessorsLab::
# 32 "data/maps/EvergreenTown/scripts.pory"
	lock
# 33 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_ProfessorsLab_Text_0
# 34 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_EvergreenSign::
# 40 "data/maps/EvergreenTown/scripts.pory"
	lock
# 41 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_EvergreenSign_Text_0
# 42 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_OldMan::
# 49 "data/maps/EvergreenTown/scripts.pory"
	lock
# 50 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 51 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_OldMan_Text_0
# 52 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Beauty::
# 58 "data/maps/EvergreenTown/scripts.pory"
	lock
# 59 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 60 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Beauty_Text_0
# 61 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Boy::
# 67 "data/maps/EvergreenTown/scripts.pory"
	lock
# 68 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 69 "data/maps/EvergreenTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EVERGREEN_POTION, EvergreenTown_NPCScript_Boy_2
# 91 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_3
# 92 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 93 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
EvergreenTown_NPCScript_Boy_1:
# 95 "data/maps/EvergreenTown/scripts.pory"
	release
	end

EvergreenTown_NPCScript_Boy_2:
# 71 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_0, MSGBOX_YESNO
# 72 "data/maps/EvergreenTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_NPCScript_Boy_5
# 82 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_2
# 83 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 84 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 85 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 86 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1

EvergreenTown_NPCScript_Boy_5:
# 74 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_1
# 75 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 76 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 77 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 78 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1


EvergreenTown_NPCScript_Fisherman::
# 101 "data/maps/EvergreenTown/scripts.pory"
	lock
# 102 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 103 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_0
# 104 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull
# 105 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 106 "data/maps/EvergreenTown/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 107 "data/maps/EvergreenTown/scripts.pory"
	waitmoncry
# 108 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman
# 109 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_1
# 111 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull2
# 112 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman2
# 114 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_2
# 116 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman3
# 117 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock::
# 125 "data/maps/EvergreenTown/scripts.pory"
	lock
# 126 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 127 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 128 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 129 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock2::
# 136 "data/maps/EvergreenTown/scripts.pory"
	lock
# 137 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer
# 138 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 140 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 141 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 142 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer2
# 144 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_GotoProfessor::
# 151 "data/maps/EvergreenTown/scripts.pory"
	lock
# 152 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_GotoProfessor_Text_0
# 153 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 154 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_GotoProfessor
# 155 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 156 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet::
# 162 "data/maps/EvergreenTown/scripts.pory"
	lock
# 163 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 164 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 165 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 166 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 167 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 169 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 170 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut
# 171 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 173 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 174 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn
# 175 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 176 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 177 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 178 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 179 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 181 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 182 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 183 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 184 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet2::
# 190 "data/maps/EvergreenTown/scripts.pory"
	lock
# 191 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 192 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 193 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 194 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 195 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 197 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 198 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut2
# 199 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 201 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 202 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn2
# 203 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 205 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 206 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 207 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 208 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 209 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 210 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 211 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 212 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet3::
# 218 "data/maps/EvergreenTown/scripts.pory"
	lock
# 219 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 220 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 221 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 222 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 223 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 225 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 226 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut3
# 227 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 229 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 230 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn3
# 231 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 233 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 234 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 235 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 237 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 238 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 239 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 240 "data/maps/EvergreenTown/scripts.pory"
	release
	end


# 245 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull:
# 247 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 250 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull2:
# 252 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 255 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman:
# 257 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 260 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman2:
# 262 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 265 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman3:
# 267 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 270 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Boy:
# 272 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 275 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player:
# 277 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 280 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player2:
# 282 "data/maps/EvergreenTown/scripts.pory"
	walk_left
# 282 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 285 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer:
# 287 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 288 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 291 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer2:
# 293 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 294 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 297 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_GotoProfessor:
# 299 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 302 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOutDoor:
# 304 "data/maps/EvergreenTown/scripts.pory"
	walk_down
	step_end

# 307 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalInDoor:
# 309 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 312 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut:
# 314 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 317 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut2:
# 319 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 320 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 323 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut3:
# 325 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 325 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 326 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 329 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn:
# 331 "data/maps/EvergreenTown/scripts.pory"
	face_up
	step_end

# 334 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn2:
# 336 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 339 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn3:
# 341 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 341 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

EvergreenTown_SignScript_PlayerHouse_Text_0:
# 17 "data/maps/EvergreenTown/scripts.pory"
	.string "{PLAYER}'s House...$"

EvergreenTown_SignScript_RivalHouse_Text_0:
# 25 "data/maps/EvergreenTown/scripts.pory"
	.string "Rival's House...$"

EvergreenTown_SignScript_ProfessorsLab_Text_0:
# 33 "data/maps/EvergreenTown/scripts.pory"
	.string "Professor Sequioa's Lab...$"

EvergreenTown_SignScript_EvergreenSign_Text_0:
# 41 "data/maps/EvergreenTown/scripts.pory"
	.string "Evergreen Town, a lush homey\n"
	.string "atmosphere.$"

EvergreenTown_NPCScript_OldMan_Text_0:
# 51 "data/maps/EvergreenTown/scripts.pory"
	.string "Hello there, {PLAYER}! I can never get\n"
	.string "enough of how beautiful this town is.\p"
	.string "Good luck on your future endeavors!$"

EvergreenTown_NPCScript_Beauty_Text_0:
# 60 "data/maps/EvergreenTown/scripts.pory"
	.string "These flowers here are so pretty. I\n"
	.string "want to grow ones like these at my home.$"

EvergreenTown_NPCScript_Boy_Text_0:
# 71 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm trying to surprise this girl over on\n"
	.string "the other side of town with these\l"
	.string "flowers I found, will you go away?$"

EvergreenTown_NPCScript_Boy_Text_1:
# 74 "data/maps/EvergreenTown/scripts.pory"
	.string "Thanks.\p"
	.string "Here's a potion for your troubles...$"

EvergreenTown_NPCScript_Boy_Text_2:
# 82 "data/maps/EvergreenTown/scripts.pory"
	.string "Ugh!\p"
	.string "Take this and leave...$"

EvergreenTown_NPCScript_Boy_Text_3:
# 91 "data/maps/EvergreenTown/scripts.pory"
	.string "Stop bothering me.$"

EvergreenTown_NPCScript_Fisherman_Text_0:
# 103 "data/maps/EvergreenTown/scripts.pory"
	.string "Fishing here is so calming. I love coming\n"
	.string "here with my best buddy Wingull!$"

EvergreenTown_NPCScript_Fisherman_Text_1:
# 110 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm glad to hear you agree buddy!$"

EvergreenTown_NPCScript_Fisherman_Text_2:
# 115 "data/maps/EvergreenTown/scripts.pory"
	.string "Isn't he the coolest?$"

EvergreenTown_TriggerScript_StampedeBlock_Text_0:
# 126 "data/maps/EvergreenTown/scripts.pory"
	.string "I can't let you pass right now. There's\n"
	.string "been a stampede that's been wreaking\l"
	.string "havoc here. Once it's been routed,\l"
	.string "people can go through again.$"

EvergreenTown_TriggerScript_GotoProfessor_Text_0:
# 152 "data/maps/EvergreenTown/scripts.pory"
	.string "The Professor asked for you. Now's not\n"
	.string "the time to be leaving the town.$"

EvergreenTown_TriggerScript_RivalMeet_Text_0:
# 172 "data/maps/EvergreenTown/scripts.pory"
	.string "Rival: Yo, {PLAYER}! I heard that\n"
	.string "you're going to be doing something for\l"
	.string "the professor. I recently just got my\l"
	.string "starter and plan on fighting the gyms\l"
	.string "to qualify for the league challenge, so\l"
	.string "let's fight at the edge of town when\l"
	.string "you're done at the lab.\p"
	.string "Wait for me right before route 1 and I'll\n"
	.string "come to you.\p"
	.string "See ya!$"
