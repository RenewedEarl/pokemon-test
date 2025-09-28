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
# 52 "data/maps/EvergreenTown/scripts.pory"
	special HealPlayerParty
# 53 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RIVAL_HOUSE_VISIBILITY
# 54 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_HEAL_MACHINE_USABLE
# 55 "data/maps/EvergreenTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 56 "data/maps/EvergreenTown/scripts.pory"
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
	setflag FLAG_RIVAL_HOUSE_VISIBILITY
# 46 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_HEAL_MACHINE_USABLE
# 47 "data/maps/EvergreenTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 48 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_EventScript_EvergreenJacksonBeaten::
# 61 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_EventScript_EvergreenJacksonBeaten_Text_0
# 62 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 63 "data/maps/EvergreenTown/scripts.pory"
	applymovement 12, EvergreenTown_MovementScript_RivalAway
# 64 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 65 "data/maps/EvergreenTown/scripts.pory"
	removeobject 12
# 66 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 2
# 67 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_OldMan::
# 74 "data/maps/EvergreenTown/scripts.pory"
	lock
# 75 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 76 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_OldMan_Text_0
# 77 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Beauty::
# 83 "data/maps/EvergreenTown/scripts.pory"
	lock
# 84 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 85 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Beauty_Text_0
# 86 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_NPCScript_Boy::
# 92 "data/maps/EvergreenTown/scripts.pory"
	lock
# 93 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 94 "data/maps/EvergreenTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EVERGREEN_POTION, EvergreenTown_NPCScript_Boy_2
# 116 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_3
# 117 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 118 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
EvergreenTown_NPCScript_Boy_1:
# 120 "data/maps/EvergreenTown/scripts.pory"
	release
	end

EvergreenTown_NPCScript_Boy_2:
# 96 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_0, MSGBOX_YESNO
# 97 "data/maps/EvergreenTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvergreenTown_NPCScript_Boy_5
# 107 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_2
# 108 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 109 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 110 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 111 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1

EvergreenTown_NPCScript_Boy_5:
# 99 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Boy_Text_1
# 100 "data/maps/EvergreenTown/scripts.pory"
	giveitem ITEM_POTION
# 101 "data/maps/EvergreenTown/scripts.pory"
	setflag FLAG_RECEIVED_EVERGREEN_POTION
# 102 "data/maps/EvergreenTown/scripts.pory"
	applymovement 7, EvergreenTown_MovementScript_Boy
# 103 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
	goto EvergreenTown_NPCScript_Boy_1


EvergreenTown_NPCScript_Fisherman::
# 126 "data/maps/EvergreenTown/scripts.pory"
	lock
# 127 "data/maps/EvergreenTown/scripts.pory"
	faceplayer
# 128 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_0
# 129 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull
# 130 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/EvergreenTown/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 132 "data/maps/EvergreenTown/scripts.pory"
	waitmoncry
# 133 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman
# 134 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_1
# 136 "data/maps/EvergreenTown/scripts.pory"
	applymovement 4, EvergreenTown_MovementScript_Wingull2
# 137 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman2
# 139 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_NPCScript_Fisherman_Text_2
# 141 "data/maps/EvergreenTown/scripts.pory"
	applymovement 3, EvergreenTown_MovementScript_Fisherman3
# 142 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock::
# 150 "data/maps/EvergreenTown/scripts.pory"
	lock
# 151 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 152 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 153 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 154 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_StampedeBlock2::
# 161 "data/maps/EvergreenTown/scripts.pory"
	lock
# 162 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer
# 163 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_StampedeBlock_Text_0
# 165 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 166 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_Player
# 167 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/EvergreenTown/scripts.pory"
	applymovement 8, EvergreenTown_MovementScript_AceTrainer2
# 169 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_GotoProfessor::
# 176 "data/maps/EvergreenTown/scripts.pory"
	lock
# 177 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_GotoProfessor_Text_0
# 178 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 179 "data/maps/EvergreenTown/scripts.pory"
	applymovement LOCALID_PLAYER, EvergreenTown_MovementScript_GotoProfessor
# 180 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet::
# 187 "data/maps/EvergreenTown/scripts.pory"
	lock
# 188 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 189 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 190 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 191 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 192 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 194 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 195 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut
# 196 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 197 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 198 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 199 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn
# 200 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 202 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 203 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 204 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 206 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 207 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 208 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 209 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet2::
# 215 "data/maps/EvergreenTown/scripts.pory"
	lock
# 216 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 217 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 218 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 219 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 220 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 222 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 223 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut2
# 224 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 226 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 227 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn2
# 228 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 230 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 231 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 232 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 233 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 234 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 235 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 236 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 237 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_RivalMeet3::
# 243 "data/maps/EvergreenTown/scripts.pory"
	lock
# 244 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 245 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 246 "data/maps/EvergreenTown/scripts.pory"
	addobject 11
# 247 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOutDoor
# 248 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 250 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 251 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalOut3
# 252 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_TriggerScript_RivalMeet_Text_0
# 254 "data/maps/EvergreenTown/scripts.pory"
	closemessage
# 255 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalIn3
# 256 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 257 "data/maps/EvergreenTown/scripts.pory"
	opendoor 16, 14
# 258 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 259 "data/maps/EvergreenTown/scripts.pory"
	applymovement 11, EvergreenTown_MovementScript_RivalInDoor
# 260 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/EvergreenTown/scripts.pory"
	removeobject 11
# 262 "data/maps/EvergreenTown/scripts.pory"
	closedoor 16, 14
# 263 "data/maps/EvergreenTown/scripts.pory"
	waitdooranim
# 264 "data/maps/EvergreenTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 265 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_TriggerScript_FirstRivalBattle::
# 271 "data/maps/EvergreenTown/scripts.pory"
	lock
# 272 "data/maps/EvergreenTown/scripts.pory"
	addobject 12
# 273 "data/maps/EvergreenTown/scripts.pory"
	applymovement 12, EvergreenTown_MovementScript_ToMC
# 274 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 275 "data/maps/EvergreenTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenTown_MovementScript_FaceRival
# 276 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/EvergreenTown/scripts.pory"
	call EvergreenTown_EventScript_EvergreenJacksonBattle
	return


EvergreenTown_TriggerScript_FirstRivalBattle2::
# 282 "data/maps/EvergreenTown/scripts.pory"
	lock
# 283 "data/maps/EvergreenTown/scripts.pory"
	addobject 12
# 284 "data/maps/EvergreenTown/scripts.pory"
	applymovement 12, EvergreenTown_MovementScript_ToMC2
# 285 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/EvergreenTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergreenTown_MovementScript_FaceRival
# 287 "data/maps/EvergreenTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/EvergreenTown/scripts.pory"
	call EvergreenTown_EventScript_EvergreenJacksonBattle
	return


EvergreenTown_SignScript_PlayerHouse::
# 294 "data/maps/EvergreenTown/scripts.pory"
	lock
# 295 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_PlayerHouse_Text_0
# 296 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_RivalHouse::
# 302 "data/maps/EvergreenTown/scripts.pory"
	lock
# 303 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_RivalHouse_Text_0
# 304 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_ProfessorsLab::
# 310 "data/maps/EvergreenTown/scripts.pory"
	lock
# 311 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_ProfessorsLab_Text_0
# 312 "data/maps/EvergreenTown/scripts.pory"
	release
	end


EvergreenTown_SignScript_EvergreenSign::
# 318 "data/maps/EvergreenTown/scripts.pory"
	lock
# 319 "data/maps/EvergreenTown/scripts.pory"
	msgbox EvergreenTown_SignScript_EvergreenSign_Text_0
# 320 "data/maps/EvergreenTown/scripts.pory"
	release
	end


# 325 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull:
# 327 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 330 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Wingull2:
# 332 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 335 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman:
# 337 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 340 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman2:
# 342 "data/maps/EvergreenTown/scripts.pory"
	face_right
	step_end

# 345 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Fisherman3:
# 347 "data/maps/EvergreenTown/scripts.pory"
	face_down
	step_end

# 350 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Boy:
# 352 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 355 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player:
# 357 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 360 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_Player2:
# 362 "data/maps/EvergreenTown/scripts.pory"
	walk_left
# 362 "data/maps/EvergreenTown/scripts.pory"
	walk_left
	step_end

# 365 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer:
# 367 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 368 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 371 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_AceTrainer2:
# 373 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 374 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 377 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_GotoProfessor:
# 379 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 382 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOutDoor:
# 384 "data/maps/EvergreenTown/scripts.pory"
	walk_down
	step_end

# 387 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalInDoor:
# 389 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 392 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut:
# 394 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 397 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut2:
# 399 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 400 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 403 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalOut3:
# 405 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 405 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 406 "data/maps/EvergreenTown/scripts.pory"
	face_left
	step_end

# 409 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn:
# 411 "data/maps/EvergreenTown/scripts.pory"
	face_up
	step_end

# 414 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn2:
# 416 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 419 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalIn3:
# 421 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 421 "data/maps/EvergreenTown/scripts.pory"
	walk_up
	step_end

# 424 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_ToMC:
# 426 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 426 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 426 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 426 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 426 "data/maps/EvergreenTown/scripts.pory"
	walk_down
	step_end

# 429 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_ToMC2:
# 431 "data/maps/EvergreenTown/scripts.pory"
	walk_right
# 432 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 432 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 432 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 432 "data/maps/EvergreenTown/scripts.pory"
	walk_down
# 432 "data/maps/EvergreenTown/scripts.pory"
	walk_down
	step_end

# 435 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_FaceRival:
# 437 "data/maps/EvergreenTown/scripts.pory"
	face_up
	step_end

# 440 "data/maps/EvergreenTown/scripts.pory"
EvergreenTown_MovementScript_RivalAway:
# 442 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 442 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 442 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 442 "data/maps/EvergreenTown/scripts.pory"
	walk_up
# 442 "data/maps/EvergreenTown/scripts.pory"
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
# 61 "data/maps/EvergreenTown/scripts.pory"
	.string "Jackson: You're really good at this. It\n"
	.string "was a blast to fight you!\p"
	.string "I'll make sure to get better and improve\n"
	.string "my team then challenge you again.\p"
	.string "Be safe bro.$"

EvergreenTown_NPCScript_OldMan_Text_0:
# 76 "data/maps/EvergreenTown/scripts.pory"
	.string "Hello there, {PLAYER}! I can never get\n"
	.string "enough of how beautiful this town is.\p"
	.string "Good luck on your future endeavors!$"

EvergreenTown_NPCScript_Beauty_Text_0:
# 85 "data/maps/EvergreenTown/scripts.pory"
	.string "These flowers here are so pretty. I\n"
	.string "want to grow ones like these at my home.$"

EvergreenTown_NPCScript_Boy_Text_0:
# 96 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm trying to surprise this girl over on\n"
	.string "the other side of town with these\l"
	.string "flowers I found, will you go away?$"

EvergreenTown_NPCScript_Boy_Text_1:
# 99 "data/maps/EvergreenTown/scripts.pory"
	.string "Thanks.\p"
	.string "Here's a potion for your troubles...$"

EvergreenTown_NPCScript_Boy_Text_2:
# 107 "data/maps/EvergreenTown/scripts.pory"
	.string "Ugh!\p"
	.string "Take this and leave...$"

EvergreenTown_NPCScript_Boy_Text_3:
# 116 "data/maps/EvergreenTown/scripts.pory"
	.string "Stop bothering me.$"

EvergreenTown_NPCScript_Fisherman_Text_0:
# 128 "data/maps/EvergreenTown/scripts.pory"
	.string "Fishing here is so calming. I love coming\n"
	.string "here with my best buddy Wingull!$"

EvergreenTown_NPCScript_Fisherman_Text_1:
# 135 "data/maps/EvergreenTown/scripts.pory"
	.string "I'm glad to hear you agree buddy!$"

EvergreenTown_NPCScript_Fisherman_Text_2:
# 140 "data/maps/EvergreenTown/scripts.pory"
	.string "Isn't he the coolest?$"

EvergreenTown_TriggerScript_StampedeBlock_Text_0:
# 151 "data/maps/EvergreenTown/scripts.pory"
	.string "I can't let you pass right now. There's\n"
	.string "been a stampede that's been wreaking\l"
	.string "havoc here. Once it's been routed,\l"
	.string "people can go through again.$"

EvergreenTown_TriggerScript_GotoProfessor_Text_0:
# 177 "data/maps/EvergreenTown/scripts.pory"
	.string "The Professor asked for you. Now's not\n"
	.string "the time to be leaving the town.$"

EvergreenTown_TriggerScript_RivalMeet_Text_0:
# 197 "data/maps/EvergreenTown/scripts.pory"
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
# 295 "data/maps/EvergreenTown/scripts.pory"
	.string "{PLAYER}'s House...$"

EvergreenTown_SignScript_RivalHouse_Text_0:
# 303 "data/maps/EvergreenTown/scripts.pory"
	.string "Rival's House...$"

EvergreenTown_SignScript_ProfessorsLab_Text_0:
# 311 "data/maps/EvergreenTown/scripts.pory"
	.string "Professor Sequioa's Lab...$"

EvergreenTown_SignScript_EvergreenSign_Text_0:
# 319 "data/maps/EvergreenTown/scripts.pory"
	.string "Evergreen Town, a lush homey\n"
	.string "atmosphere.$"

EvergreenTown_TextScript_RivalIntro::
# 446 "data/maps/EvergreenTown/scripts.pory"
	.string "Jackson: Hey {PLAYER}, are you ready\n"
	.string "to have our battle? I've wanted to do\l"
	.string "this for a long time!$"

EvergreenTown_TextScript_RivalBattleFinished::
# 451 "data/maps/EvergreenTown/scripts.pory"
	.string "Good game, that was fun!$"
