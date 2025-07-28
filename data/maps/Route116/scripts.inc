# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 3 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 4 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 5 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 6 "data/maps/Route116/scripts.pory"
	.byte 0
# 7 "data/maps/Route116/scripts.pory"

# 8 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 9 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 10 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 11 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 12 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 13 "data/maps/Route116/scripts.pory"
	end
# 14 "data/maps/Route116/scripts.pory"

# 15 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 16 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_ROUTE116_WANDAS_BF, 38, 10
# 17 "data/maps/Route116/scripts.pory"
	return
# 18 "data/maps/Route116/scripts.pory"

# 19 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 20 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 21 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 22 "data/maps/Route116/scripts.pory"
	end
# 23 "data/maps/Route116/scripts.pory"

# 24 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 25 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 26 "data/maps/Route116/scripts.pory"
	.2byte 0
# 27 "data/maps/Route116/scripts.pory"

# 28 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 29 "data/maps/Route116/scripts.pory"
	lock
# 30 "data/maps/Route116/scripts.pory"
	faceplayer
# 31 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 32 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 33 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 34 "data/maps/Route116/scripts.pory"
	release
# 35 "data/maps/Route116/scripts.pory"
	end
# 36 "data/maps/Route116/scripts.pory"

# 37 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 38 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 39 "data/maps/Route116/scripts.pory"
	release
# 40 "data/maps/Route116/scripts.pory"
	end
# 41 "data/maps/Route116/scripts.pory"

# 42 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 43 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 44 "data/maps/Route116/scripts.pory"
	release
# 45 "data/maps/Route116/scripts.pory"
	end
# 46 "data/maps/Route116/scripts.pory"

# 47 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 48 "data/maps/Route116/scripts.pory"
	lock
# 49 "data/maps/Route116/scripts.pory"
	faceplayer
# 50 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 51 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 52 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 53 "data/maps/Route116/scripts.pory"
	end
# 54 "data/maps/Route116/scripts.pory"

# 55 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 56 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 57 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 58 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 59 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 60 "data/maps/Route116/scripts.pory"
	closemessage
# 61 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 62 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 63 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 64 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 65 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 66 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 67 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 68 "data/maps/Route116/scripts.pory"
	release
# 69 "data/maps/Route116/scripts.pory"
	end
# 70 "data/maps/Route116/scripts.pory"

# 71 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 72 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 73 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route116/scripts.pory"
	return
# 75 "data/maps/Route116/scripts.pory"

# 76 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 77 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 78 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route116/scripts.pory"
	return
# 80 "data/maps/Route116/scripts.pory"

# 81 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 82 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 83 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 84 "data/maps/Route116/scripts.pory"
	end
# 85 "data/maps/Route116/scripts.pory"

# 86 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 87 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 88 "data/maps/Route116/scripts.pory"
	release
# 89 "data/maps/Route116/scripts.pory"
	end
# 90 "data/maps/Route116/scripts.pory"

# 91 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 92 "data/maps/Route116/scripts.pory"
	walk_left
# 93 "data/maps/Route116/scripts.pory"
	walk_left
# 94 "data/maps/Route116/scripts.pory"
	walk_left
# 95 "data/maps/Route116/scripts.pory"
	walk_left
# 96 "data/maps/Route116/scripts.pory"
	walk_left
# 97 "data/maps/Route116/scripts.pory"
	walk_left
# 98 "data/maps/Route116/scripts.pory"
	walk_left
# 99 "data/maps/Route116/scripts.pory"
	walk_left
# 100 "data/maps/Route116/scripts.pory"
	step_end
# 101 "data/maps/Route116/scripts.pory"

# 102 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 103 "data/maps/Route116/scripts.pory"
	walk_down
# 104 "data/maps/Route116/scripts.pory"
	walk_left
# 105 "data/maps/Route116/scripts.pory"
	walk_left
# 106 "data/maps/Route116/scripts.pory"
	walk_left
# 107 "data/maps/Route116/scripts.pory"
	walk_left
# 108 "data/maps/Route116/scripts.pory"
	walk_left
# 109 "data/maps/Route116/scripts.pory"
	walk_left
# 110 "data/maps/Route116/scripts.pory"
	walk_left
# 111 "data/maps/Route116/scripts.pory"
	walk_left
# 112 "data/maps/Route116/scripts.pory"
	walk_left
# 113 "data/maps/Route116/scripts.pory"
	step_end
# 114 "data/maps/Route116/scripts.pory"

# 115 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 116 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 117 "data/maps/Route116/scripts.pory"
	end
# 118 "data/maps/Route116/scripts.pory"

# 119 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 120 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 121 "data/maps/Route116/scripts.pory"
	end
# 122 "data/maps/Route116/scripts.pory"

# 123 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 124 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 125 "data/maps/Route116/scripts.pory"
	end
# 126 "data/maps/Route116/scripts.pory"

# 127 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 128 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 129 "data/maps/Route116/scripts.pory"
	end
# 130 "data/maps/Route116/scripts.pory"

# 131 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 132 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 133 "data/maps/Route116/scripts.pory"
	end
# 134 "data/maps/Route116/scripts.pory"

# 135 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 136 "data/maps/Route116/scripts.pory"
	lock
# 137 "data/maps/Route116/scripts.pory"
	faceplayer
# 138 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 139 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 140 "data/maps/Route116/scripts.pory"
	release
# 141 "data/maps/Route116/scripts.pory"
	end
# 142 "data/maps/Route116/scripts.pory"

# 143 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 144 "data/maps/Route116/scripts.pory"
	lockall
# 145 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_ROUTE116_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 146 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 147 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 149 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 150 "data/maps/Route116/scripts.pory"
	releaseall
# 151 "data/maps/Route116/scripts.pory"
	end
# 152 "data/maps/Route116/scripts.pory"

# 153 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 154 "data/maps/Route116/scripts.pory"
	lock
# 155 "data/maps/Route116/scripts.pory"
	faceplayer
# 156 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 157 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 158 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 159 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 160 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 161 "data/maps/Route116/scripts.pory"
	release
# 162 "data/maps/Route116/scripts.pory"
	end
# 163 "data/maps/Route116/scripts.pory"

# 164 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 165 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 166 "data/maps/Route116/scripts.pory"
	closemessage
# 167 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 168 "data/maps/Route116/scripts.pory"
	end
# 169 "data/maps/Route116/scripts.pory"

# 170 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 171 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 172 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 173 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 174 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 175 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 176 "data/maps/Route116/scripts.pory"
	release
# 177 "data/maps/Route116/scripts.pory"
	end
# 178 "data/maps/Route116/scripts.pory"

# 179 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 180 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 181 "data/maps/Route116/scripts.pory"
	closemessage
# 182 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 183 "data/maps/Route116/scripts.pory"
	end
# 184 "data/maps/Route116/scripts.pory"

# 185 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 186 "data/maps/Route116/scripts.pory"
	delay 20
# 187 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 188 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 189 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 190 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 191 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 192 "data/maps/Route116/scripts.pory"
	release
# 193 "data/maps/Route116/scripts.pory"
	end
# 194 "data/maps/Route116/scripts.pory"

# 195 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 196 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 197 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route116/scripts.pory"
	return
# 199 "data/maps/Route116/scripts.pory"

# 200 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 201 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 202 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route116/scripts.pory"
	return
# 204 "data/maps/Route116/scripts.pory"

# 205 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 206 "data/maps/Route116/scripts.pory"
	walk_left
# 207 "data/maps/Route116/scripts.pory"
	walk_left
# 208 "data/maps/Route116/scripts.pory"
	walk_left
# 209 "data/maps/Route116/scripts.pory"
	walk_left
# 210 "data/maps/Route116/scripts.pory"
	walk_left
# 211 "data/maps/Route116/scripts.pory"
	walk_left
# 212 "data/maps/Route116/scripts.pory"
	walk_left
# 213 "data/maps/Route116/scripts.pory"
	walk_left
# 214 "data/maps/Route116/scripts.pory"
	walk_left
# 215 "data/maps/Route116/scripts.pory"
	step_end
# 216 "data/maps/Route116/scripts.pory"

# 217 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 218 "data/maps/Route116/scripts.pory"
	walk_up
# 219 "data/maps/Route116/scripts.pory"
	walk_left
# 220 "data/maps/Route116/scripts.pory"
	walk_left
# 221 "data/maps/Route116/scripts.pory"
	walk_left
# 222 "data/maps/Route116/scripts.pory"
	walk_left
# 223 "data/maps/Route116/scripts.pory"
	walk_left
# 224 "data/maps/Route116/scripts.pory"
	walk_left
# 225 "data/maps/Route116/scripts.pory"
	walk_left
# 226 "data/maps/Route116/scripts.pory"
	walk_left
# 227 "data/maps/Route116/scripts.pory"
	walk_left
# 228 "data/maps/Route116/scripts.pory"
	step_end
# 229 "data/maps/Route116/scripts.pory"

# 230 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 231 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 232 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route116/scripts.pory"
	end
# 234 "data/maps/Route116/scripts.pory"

# 235 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 236 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 237 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route116/scripts.pory"
	end
# 239 "data/maps/Route116/scripts.pory"

# 240 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 241 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 242 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 243 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 244 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 245 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 246 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 247 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 248 "data/maps/Route116/scripts.pory"
	release
# 249 "data/maps/Route116/scripts.pory"
	end
# 250 "data/maps/Route116/scripts.pory"

# 251 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 252 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 253 "data/maps/Route116/scripts.pory"
	release
# 254 "data/maps/Route116/scripts.pory"
	end
# 255 "data/maps/Route116/scripts.pory"

# 256 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 257 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 258 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 260 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 261 "data/maps/Route116/scripts.pory"
	release
# 262 "data/maps/Route116/scripts.pory"
	end
# 263 "data/maps/Route116/scripts.pory"

# 264 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 265 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 266 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 267 "data/maps/Route116/scripts.pory"
	release
# 268 "data/maps/Route116/scripts.pory"
	end
# 269 "data/maps/Route116/scripts.pory"

# 270 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 271 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 272 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 273 "data/maps/Route116/scripts.pory"
	release
# 274 "data/maps/Route116/scripts.pory"
	end
# 275 "data/maps/Route116/scripts.pory"

# 276 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 277 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 278 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 279 "data/maps/Route116/scripts.pory"
	end
# 280 "data/maps/Route116/scripts.pory"

# 281 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 282 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 283 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route116/scripts.pory"
	end
# 285 "data/maps/Route116/scripts.pory"

# 286 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 287 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 288 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route116/scripts.pory"
	end
# 290 "data/maps/Route116/scripts.pory"

# 291 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 292 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 293 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 294 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 295 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 296 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 297 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 298 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 299 "data/maps/Route116/scripts.pory"
	release
# 300 "data/maps/Route116/scripts.pory"
	end
# 301 "data/maps/Route116/scripts.pory"

# 302 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 303 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 304 "data/maps/Route116/scripts.pory"
	release
# 305 "data/maps/Route116/scripts.pory"
	end
# 306 "data/maps/Route116/scripts.pory"

# 307 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 308 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 309 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 311 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 312 "data/maps/Route116/scripts.pory"
	release
# 313 "data/maps/Route116/scripts.pory"
	end
# 314 "data/maps/Route116/scripts.pory"

# 315 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 316 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 317 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 318 "data/maps/Route116/scripts.pory"
	release
# 319 "data/maps/Route116/scripts.pory"
	end
# 320 "data/maps/Route116/scripts.pory"

# 321 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 322 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 323 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 324 "data/maps/Route116/scripts.pory"
	release
# 325 "data/maps/Route116/scripts.pory"
	end
# 326 "data/maps/Route116/scripts.pory"

# 327 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 328 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 329 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route116/scripts.pory"
	end
# 331 "data/maps/Route116/scripts.pory"

# 332 "data/maps/Route116/scripts.pory"
//TODO: add pokemon to sarah, maybe switch poochyena
# 333 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 334 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 335 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route116/scripts.pory"
	end
# 337 "data/maps/Route116/scripts.pory"

# 338 "data/maps/Route116/scripts.pory"
//TODO: add pokemon to dawson, maybe switch poochyena
# 339 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 340 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 341 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route116/scripts.pory"
	end
# 343 "data/maps/Route116/scripts.pory"

# 344 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 345 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 346 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route116/scripts.pory"
	end
# 348 "data/maps/Route116/scripts.pory"

# 349 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 350 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 351 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Route116/scripts.pory"
	end
# 353 "data/maps/Route116/scripts.pory"

# 354 "data/maps/Route116/scripts.pory"
Route116_EventScript_Maria::
# 355 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_MARIA_6, Route116_Text_MariaIntro, Route116_Text_MariaDefeat
# 356 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route116/scripts.pory"
	end
# 358 "data/maps/Route116/scripts.pory"

# 359 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 360 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 361 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 362 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 363 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 364 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 365 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 366 "data/maps/Route116/scripts.pory"

# 367 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 368 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 369 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 370 "data/maps/Route116/scripts.pory"

# 371 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 372 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 373 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 374 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 375 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 376 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 377 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 378 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 379 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 380 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 381 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 382 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 383 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 384 "data/maps/Route116/scripts.pory"

# 385 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 386 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 387 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 388 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 389 "data/maps/Route116/scripts.pory"

# 390 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 391 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 392 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 393 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 394 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 395 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 396 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 397 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 398 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 399 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 400 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 401 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 402 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 403 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 404 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 405 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 406 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 407 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 408 "data/maps/Route116/scripts.pory"

# 409 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 410 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 411 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 412 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 413 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 414 "data/maps/Route116/scripts.pory"

# 415 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 416 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 417 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 418 "data/maps/Route116/scripts.pory"

# 419 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 420 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 421 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 422 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 423 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 424 "data/maps/Route116/scripts.pory"

# 425 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 426 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 427 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 428 "data/maps/Route116/scripts.pory"

# 429 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 430 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 431 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 432 "data/maps/Route116/scripts.pory"

# 433 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 434 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 435 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 436 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 437 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 438 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 439 "data/maps/Route116/scripts.pory"

# 440 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 441 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 442 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 443 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 444 "data/maps/Route116/scripts.pory"

# 445 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 446 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 447 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 448 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 449 "data/maps/Route116/scripts.pory"

# 450 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 451 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 452 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 453 "data/maps/Route116/scripts.pory"

# 454 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 455 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 456 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 457 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 458 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 459 "data/maps/Route116/scripts.pory"

# 460 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 461 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 462 "data/maps/Route116/scripts.pory"

# 463 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 464 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 465 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a POKéMON from\n"
# 466 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 467 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 468 "data/maps/Route116/scripts.pory"
	.string "The startled POKéMON will stop.\p"
# 469 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 470 "data/maps/Route116/scripts.pory"

# 471 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 472 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 473 "data/maps/Route116/scripts.pory"
	.string "Your BAG has several POCKETS.\p"
# 474 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 475 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate POCKETS.\p"
# 476 "data/maps/Route116/scripts.pory"
	.string "No TRAINER can afford to be without\n"
# 477 "data/maps/Route116/scripts.pory"
	.string "a BAG of their own.$"
