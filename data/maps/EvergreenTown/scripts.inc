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


EvergreenTown_EventScript_EvergreenJacksonBattle::
# 16 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TextScript_RivalIntro
# 17 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
EvergreenTown_EventScript_EvergreenJacksonBattle_2:
# 18 "data/maps/EvergreenTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne EvergreenTown_EventScript_EvergreenJacksonBattle_3
# 50 "data/maps/EvergreenTown/scripts.pory"
	special HealPlayerParty
# 51 "data/maps/EvergreenTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 52 "data/maps/EvergreenTown/scripts.pory"
	call EvergreenTown_EventScript_EvergreenJacksonBeaten
	return

EvergreenTown_EventScript_EvergreenJacksonBattle_3:
# 20 "data/maps/EvergreenTown/scripts.pory"
	goto_if_set FLAG_STARTER_BALL_ONE, EvergreenTown_EventScript_EvergreenJacksonBattle_6
# 25 "data/maps/EvergreenTown/scripts.pory"
	goto_if_set FLAG_STARTER_BALL_TWO, EvergreenTown_EventScript_EvergreenJacksonBattle_7
# 30 "data/maps/EvergreenTown/scripts.pory"
	goto_if_set FLAG_STARTER_BALL_THREE, EvergreenTown_EventScript_EvergreenJacksonBattle_8
EvergreenTown_EventScript_EvergreenJacksonBattle_5:
# 36 "data/maps/EvergreenTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq EvergreenTown_EventScript_EvergreenJacksonBattle_12
	goto EvergreenTown_EventScript_EvergreenJacksonBattle_2

EvergreenTown_EventScript_EvergreenJacksonBattle_6:
# 22 "data/maps/EvergreenTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_EVERGREEN_IMPIDIMP, EvergreenTown_TextScript_RivalBattleFinished
# 23 "data/maps/EvergreenTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
	goto EvergreenTown_EventScript_EvergreenJacksonBattle_5

EvergreenTown_EventScript_EvergreenJacksonBattle_7:
# 27 "data/maps/EvergreenTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_EVERGREEN_BELDUM, EvergreenTown_TextScript_RivalBattleFinished
# 28 "data/maps/EvergreenTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
	goto EvergreenTown_EventScript_EvergreenJacksonBattle_5

EvergreenTown_EventScript_EvergreenJacksonBattle_8:
# 32 "data/maps/EvergreenTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_EVERGREEN_DUSKULL, EvergreenTown_TextScript_RivalBattleFinished
# 33 "data/maps/EvergreenTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
	goto EvergreenTown_EventScript_EvergreenJacksonBattle_5

EvergreenTown_EventScript_EvergreenJacksonBattle_12:
# 38 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_EventScript_EvergreenJacksonBattle_Text_0
# 39 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 40 "data/maps/EvergreenTown/scripts.pory"
	applymovement 12, EvergreenTown_MovementScript_RivalAway
# 41 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/EvergreenTown/scripts.pory"
	removeobject 12
# 43 "data/maps/EvergreenTown/scripts.pory"
	special HealPlayerParty
# 44 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 2
# 45 "data/maps/EvergreenTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 46 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_EventScript_EvergreenJacksonBeaten::
# 57 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_EventScript_EvergreenJacksonBeaten_Text_0
# 58 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 59 "data/maps/EvergreenTown/scripts.pory"
	applymovement 12, EvergreenTown_MovementScript_RivalAway
# 60 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/EvergreenTown/scripts.pory"
	removeobject 12
# 62 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 2
# 63 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_OldMan::
# 70 "data/maps/EvergreenTown/scripts.pory"
	lock
# 71 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 72 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_OldMan_Text_0
# 73 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Beauty::
# 79 "data/maps/EvergreenTown/scripts.pory"
	lock
# 80 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 81 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Beauty_Text_0
# 82 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Boy::
# 88 "data/maps/EvergreenTown/scripts.pory"
	lock
# 89 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 90 "data/maps/EvergreenTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EVERGREEN_POTION, EvergreenTown_NPCScript_Boy_2
# 112 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_3
# 113 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 114 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
EvergreenTown_NPCScript_Boy_1:
# 116 "data/maps/EvergreenTown/scripts.pory"
	release
	end

EvergreenTown_NPCScript_Boy_2:
# 92 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_0, MSGBOX_YESNO
# 93 "data/maps/EvergreenTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_NPCScript_Boy_5
# 103 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_2
# 104 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 105 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 106 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 107 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1

EvergreenTown_NPCScript_Boy_5:
# 95 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_1
# 96 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 97 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 98 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 99 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1


EvergreenTown_NPCScript_Fisherman::
# 122 "data/maps/EvergreenTown/scripts.pory"
	lock
# 123 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 124 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_0
# 125 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull
# 126 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/EvergreenTown/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 128 "data/maps/EvergreenTown/scripts.pory"
	waitmoncry
# 129 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman
# 130 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_1
# 132 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull2
# 133 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 134 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman2
# 135 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 136 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_2
# 137 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman3
# 138 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock::
# 146 "data/maps/EvergreenTown/scripts.pory"
	lock
# 147 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 148 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 149 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 150 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock2::
# 157 "data/maps/EvergreenTown/scripts.pory"
	lock
# 158 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer
# 159 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 161 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 162 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 163 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer2
# 165 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_GotoProfessor::
# 172 "data/maps/EvergreenTown/scripts.pory"
	lock
# 173 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_GotoProfessor_Text_0
# 174 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 175 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_GotoProfessor
# 176 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet::
# 183 "data/maps/EvergreenTown/scripts.pory"
	lock
# 184 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 185 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 186 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 187 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 188 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 189 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 190 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 191 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut
# 192 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 194 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 195 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn
# 196 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 197 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 198 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 199 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 200 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 202 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 203 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 204 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 205 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet2::
# 211 "data/maps/EvergreenTown/scripts.pory"
	lock
# 212 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 213 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 214 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 215 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 216 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 218 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 219 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut2
# 220 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 222 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 223 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn2
# 224 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 226 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 227 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 228 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 230 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 231 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 232 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 233 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet3::
# 239 "data/maps/EvergreenTown/scripts.pory"
	lock
# 240 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 241 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 242 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 243 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 244 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 245 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 246 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 247 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut3
# 248 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 250 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 251 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn3
# 252 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 254 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 255 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 256 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 257 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 258 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 259 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 260 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 261 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_FirstRivalBattle::
# 267 "data/maps/EvergreenTown/scripts.pory"
	lock
# 268 "data/maps/EvergreenTown/scripts.pory"
	addobject 12
# 269 "data/maps/EvergreenTown/scripts.pory"
	applymovement 12, EvergreenTown_MovementScript_ToMC
# 270 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/EvergreenTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenTown_MovementScript_FaceRival
# 272 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 273 "data/maps/EvergreenTown/scripts.pory"
	call EvergreenTown_EventScript_EvergreenJacksonBattle
	return


EvergreenTown_TriggerScript_FirstRivalBattle2::
# 278 "data/maps/EvergreenTown/scripts.pory"
	lock
# 279 "data/maps/EvergreenTown/scripts.pory"
	addobject 12
# 280 "data/maps/EvergreenTown/scripts.pory"
	applymovement 12, EvergreenTown_MovementScript_ToMC2
# 281 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 282 "data/maps/EvergreenTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenTown_MovementScript_FaceRival
# 283 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 284 "data/maps/EvergreenTown/scripts.pory"
	call EvergreenTown_EventScript_EvergreenJacksonBattle
	return


EvergreenTown_SignScript_PlayerHouse::
# 290 "data/maps/EvergreenTown/scripts.pory"
	lock
# 291 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_PlayerHouse_Text_0
# 292 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_RivalHouse::
# 298 "data/maps/EvergreenTown/scripts.pory"
	lock
# 299 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_RivalHouse_Text_0
# 300 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_ProfessorsLab::
# 306 "data/maps/EvergreenTown/scripts.pory"
	lock
# 307 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_ProfessorsLab_Text_0
# 308 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_EvergreenSign::
# 314 "data/maps/EvergreenTown/scripts.pory"
	lock
# 315 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_EvergreenSign_Text_0
# 316 "data/maps/EvergreenTown/scripts.pory"
	release
	end


# 321 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull:
# 323 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 326 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull2:
# 328 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 331 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman:
# 333 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 336 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman2:
# 338 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 341 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman3:
# 343 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 346 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Boy:
# 348 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 351 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player:
# 353 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 356 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player2:
# 358 "data/maps/EvergreenTown/scripts.pory"
	walk_left
# 358 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 361 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer:
# 363 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 364 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 367 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer2:
# 369 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 370 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 373 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_GotoProfessor:
# 375 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 378 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOutDoor:
# 380 "data/maps/EvergreenTown/scripts.pory"
	walk_down
	step_end

# 383 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalInDoor:
# 385 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 388 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut:
# 390 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 393 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut2:
# 395 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 396 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 399 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut3:
# 401 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 401 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 402 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 405 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn:
# 407 "data/maps/EvergreenTown/scripts.pory"
	face_up
	step_end

# 410 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn2:
# 412 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 415 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn3:
# 417 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 417 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 420 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_ToMC:
# 422 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 422 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 422 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 422 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 422 "data/maps/EvergreenTown/scripts.pory"
	walk_down
	step_end

# 425 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_ToMC2:
# 427 "data/maps/EvergreenTown/scripts.pory"
	walk_right
# 428 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 428 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 428 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 428 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 428 "data/maps/EvergreenTown/scripts.pory"
	walk_down
	step_end

# 431 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_FaceRival:
# 433 "data/maps/EvergreenTown/scripts.pory"
	face_up
	step_end

# 436 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalAway:
# 438 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 438 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 438 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 438 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 438 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

EvergreenTown_EventScript_EvergreenJacksonBattle_Text_0:
# 38 "data/maps/EvergreenTown/scripts.pory"
	.string "Jackson: That was a rush, you did really\n"
	.string "well!\p"
	.string "Our next battle will be even more\n"
	.string "amazing, I can tell.\p"
	.string "Be safe bro and see you again soon!$"

EvergreenTown_EventScript_EvergreenJacksonBeaten_Text_0:
# 57 "data/maps/EvergreenTown/scripts.pory"
	.string "Jackson: You're really good at this. It\n"
	.string "was a blast to fight you!\p"
	.string "I'll make sure to get better and improve\n"
	.string "my team then challenge you again.\p"
	.string "Be safe bro.$"

EvergreenTown_NPCScript_OldMan_Text_0:
# 72 "data/maps/EvergreenTown/scripts.pory"
	.string "Hello there, {PLAYER}! I can never get\n"
	.string "enough of how beautiful this town is.\p"
	.string "Good luck on your future endeavors!$"

EvergreenTown_NPCScript_Beauty_Text_0:
# 81 "data/maps/EvergreenTown/scripts.pory"
	.string "These flowers here are so pretty. I\n"
	.string "want to grow ones like these at my home.$"

EvergreenTown_NPCScript_Boy_Text_0:
# 92 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm trying to surprise this girl over on\n"
	.string "the other side of town with these\l"
	.string "flowers I found, will you go away?$"

EvergreenTown_NPCScript_Boy_Text_1:
# 95 "data/maps/EvergreenTown/scripts.pory"
	.string "Thanks.\p"
	.string "Here's a potion for your troubles...$"

EvergreenTown_NPCScript_Boy_Text_2:
# 103 "data/maps/EvergreenTown/scripts.pory"
	.string "Ugh!\p"
	.string "Take this and leave...$"

EvergreenTown_NPCScript_Boy_Text_3:
# 112 "data/maps/EvergreenTown/scripts.pory"
	.string "Stop bothering me.$"

EvergreenTown_NPCScript_Fisherman_Text_0:
# 124 "data/maps/EvergreenTown/scripts.pory"
	.string "Fishing here is so calming. I love coming\n"
	.string "here with my best buddy Wingull!$"

EvergreenTown_NPCScript_Fisherman_Text_1:
# 131 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm glad to hear you agree buddy!$"

EvergreenTown_NPCScript_Fisherman_Text_2:
# 136 "data/maps/EvergreenTown/scripts.pory"
	.string "Isn't he the coolest?$"

EvergreenTown_TriggerScript_StampedeBlock_Text_0:
# 147 "data/maps/EvergreenTown/scripts.pory"
	.string "I can't let you pass right now. There's\n"
	.string "been a stampede that's been wreaking\l"
	.string "havoc here. Once it's been routed,\l"
	.string "people can go through again.$"

EvergreenTown_TriggerScript_GotoProfessor_Text_0:
# 173 "data/maps/EvergreenTown/scripts.pory"
	.string "The Professor asked for you. Now's not\n"
	.string "the time to be leaving the town.$"

EvergreenTown_TriggerScript_RivalMeet_Text_0:
# 193 "data/maps/EvergreenTown/scripts.pory"
	.string "Jackson: Yo, {PLAYER}! I heard that\n"
	.string "you're going to be doing something for\l"
	.string "the professor. I recently just got my\l"
	.string "starter and plan on fighting the gyms\l"
	.string "to qualify for the league challenge, so\l"
	.string "let's fight at the edge of town when\l"
	.string "you're done at the lab.\p"
	.string "Wait for me right before route 1 and I'll\n"
	.string "come to you.\p"
	.string "See ya!$"

EvergreenTown_SignScript_PlayerHouse_Text_0:
# 291 "data/maps/EvergreenTown/scripts.pory"
	.string "{PLAYER}'s House...$"

EvergreenTown_SignScript_RivalHouse_Text_0:
# 299 "data/maps/EvergreenTown/scripts.pory"
	.string "Rival's House...$"

EvergreenTown_SignScript_ProfessorsLab_Text_0:
# 307 "data/maps/EvergreenTown/scripts.pory"
	.string "Professor Sequioa's Lab...$"

EvergreenTown_SignScript_EvergreenSign_Text_0:
# 315 "data/maps/EvergreenTown/scripts.pory"
	.string "Evergreen Town, a lush homey\n"
	.string "atmosphere.$"

EvergreenTown_TextScript_RivalIntro::
# 442 "data/maps/EvergreenTown/scripts.pory"
	.string "Jackson: Hey {PLAYER}, are you ready\n"
	.string "to have our battle? I've wanted to do\l"
	.string "this for a long time!$"

EvergreenTown_TextScript_RivalBattleFinished::
# 447 "data/maps/EvergreenTown/scripts.pory"
	.string "Good game, that was fun!$"
