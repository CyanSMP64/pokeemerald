	.equiv MUSIC_PLAYER_BGM,0
	.equiv MUSIC_PLAYER_SE1,1
	.equiv MUSIC_PLAYER_SE2,2
	.equiv MUSIC_PLAYER_SE3,3

	.align 2

gSongTable::
	song mus_dummy, MUSIC_PLAYER_BGM, 64, 1024
.if MUX_SE_USE_ITEM == TRUE
	song se_use_item, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_PC_LOGIN == TRUE
	song se_pc_login, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_PC_OFF == TRUE
	song se_pc_off, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_PC_ON == TRUE
	song se_pc_on, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SELECT == TRUE
	song se_select, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_WIN_OPEN == TRUE
	song se_win_open, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_WALL_HIT == TRUE
	song se_wall_hit, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_DOOR == TRUE
	song se_door, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_EXIT == TRUE
	song se_exit, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_LEDGE == TRUE
	song se_ledge, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BIKE_BELL == TRUE
	song se_bike_bell, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOT_EFFECTIVE == TRUE
	song se_not_effective, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_EFFECTIVE == TRUE
	song se_effective, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SUPER_EFFECTIVE == TRUE
	song se_super_effective, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_OPEN == TRUE
	song se_ball_open, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_FAINT == TRUE
	song se_faint, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_FLEE == TRUE
	song se_flee, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SLIDING_DOOR == TRUE
	song se_sliding_door, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SHIP == TRUE
	song se_ship, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BANG == TRUE
	song se_bang, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_PIN == TRUE
	song se_pin, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BOO == TRUE
	song se_boo, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL == TRUE
	song se_ball, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_PLACE == TRUE
	song se_contest_place, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_A == TRUE
	song se_a, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_I == TRUE
	song se_i, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_U == TRUE
	song se_u, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_E == TRUE
	song se_e, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_O == TRUE
	song se_o, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_N == TRUE
	song se_n, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SUCCESS == TRUE
	song se_success, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_FAILURE == TRUE
	song se_failure, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_EXP == TRUE
	song se_exp, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BIKE_HOP == TRUE
	song se_bike_hop, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SWITCH == TRUE
	song se_switch, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CLICK == TRUE
	song se_click, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_FU_ZAKU == TRUE
	song se_fu_zaku, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_CONDITION_LOSE == TRUE
	song se_contest_condition_lose, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_LAVARIDGE_FALL_WARP == TRUE
	song se_lavaridge_fall_warp, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ICE_STAIRS == TRUE
	song se_ice_stairs, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ICE_BREAK == TRUE
	song se_ice_break, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ICE_CRACK == TRUE
	song se_ice_crack, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_FALL == TRUE
	song se_fall, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_UNLOCK == TRUE
	song se_unlock, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_WARP_IN == TRUE
	song se_warp_in, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_WARP_OUT == TRUE
	song se_warp_out, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_REPEL == TRUE
	song se_repel, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ROTATING_GATE == TRUE
	song se_rotating_gate, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_TRUCK_MOVE == TRUE
	song se_truck_move, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_TRUCK_STOP == TRUE
	song se_truck_stop, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_TRUCK_UNLOAD == TRUE
	song se_truck_unload, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_TRUCK_DOOR == TRUE
	song se_truck_door, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BERRY_BLENDER == TRUE
	song se_berry_blender, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CARD == TRUE
	song se_card, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SAVE == TRUE
	song se_save, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_BOUNCE_1 == TRUE
	song se_ball_bounce_1, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_BOUNCE_2 == TRUE
	song se_ball_bounce_2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_BOUNCE_3 == TRUE
	song se_ball_bounce_3, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_BOUNCE_4 == TRUE
	song se_ball_bounce_4, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_TRADE == TRUE
	song se_ball_trade, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_THROW == TRUE
	song se_ball_throw, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_C == TRUE
	song se_note_c, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_D == TRUE
	song se_note_d, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_E == TRUE
	song se_note_e, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_F == TRUE
	song se_note_f, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_G == TRUE
	song se_note_g, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_A == TRUE
	song se_note_a, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_B == TRUE
	song se_note_b, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_NOTE_C_HIGH == TRUE
	song se_note_c_high, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_PUDDLE == TRUE
	song se_puddle, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BRIDGE_WALK == TRUE
	song se_bridge_walk, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ITEMFINDER == TRUE
	song se_itemfinder, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_DING_DONG == TRUE
	song se_ding_dong, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALLOON_RED == TRUE
	song se_balloon_red, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALLOON_BLUE == TRUE
	song se_balloon_blue, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALLOON_YELLOW == TRUE
	song se_balloon_yellow, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BREAKABLE_DOOR == TRUE
	song se_breakable_door, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_MUD_BALL == TRUE
	song se_mud_ball, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_FIELD_POISON == TRUE
	song se_field_poison, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ESCALATOR == TRUE
	song se_escalator, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_THUNDERSTORM == TRUE
	song se_thunderstorm, MUSIC_PLAYER_SE3, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_THUNDERSTORM_STOP == TRUE
	song se_thunderstorm_stop, MUSIC_PLAYER_SE3, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_DOWNPOUR == TRUE
	song se_downpour, MUSIC_PLAYER_SE3, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_DOWNPOUR_STOP == TRUE
	song se_downpour_stop, MUSIC_PLAYER_SE3, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RAIN == TRUE
	song se_rain, MUSIC_PLAYER_SE3, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RAIN_STOP == TRUE
	song se_rain_stop, MUSIC_PLAYER_SE3, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_THUNDER == TRUE
	song se_thunder, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_THUNDER2 == TRUE
	song se_thunder2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ELEVATOR == TRUE
	song se_elevator, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_LOW_HEALTH == TRUE
	song se_low_health, MUSIC_PLAYER_SE3, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_EXP_MAX == TRUE
	song se_exp_max, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ROULETTE_BALL == TRUE
	song se_roulette_ball, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ROULETTE_BALL2 == TRUE
	song se_roulette_ball2, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_TAILLOW_WING_FLAP == TRUE
	song se_taillow_wing_flap, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SHOP == TRUE
	song se_shop, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_HEART == TRUE
	song se_contest_heart, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_CURTAIN_RISE == TRUE
	song se_contest_curtain_rise, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_CURTAIN_FALL == TRUE
	song se_contest_curtain_fall, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_ICON_CHANGE == TRUE
	song se_contest_icon_change, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_ICON_CLEAR == TRUE
	song se_contest_icon_clear, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_CONTEST_MONS_TURN == TRUE
	song se_contest_mons_turn, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SHINY == TRUE
	song se_shiny, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_INTRO_BLAST == TRUE
	song se_intro_blast, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_MUGSHOT == TRUE
	song se_mugshot, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_APPLAUSE == TRUE
	song se_applause, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_VEND == TRUE
	song se_vend, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ORB == TRUE
	song se_orb, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_DEX_SCROLL == TRUE
	song se_dex_scroll, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_DEX_PAGE == TRUE
	song se_dex_page, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_POKENAV_ON == TRUE
	song se_pokenav_on, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_POKENAV_OFF == TRUE
	song se_pokenav_off, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_DEX_SEARCH == TRUE
	song se_dex_search, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_EGG_HATCH == TRUE
	song se_egg_hatch, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_TRAY_ENTER == TRUE
	song se_ball_tray_enter, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_TRAY_BALL == TRUE
	song se_ball_tray_ball, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_BALL_TRAY_EXIT == TRUE
	song se_ball_tray_exit, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_GLASS_FLUTE == TRUE
	song se_glass_flute, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_THUNDERBOLT == TRUE
	song se_m_thunderbolt, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_THUNDERBOLT2 == TRUE
	song se_m_thunderbolt2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HARDEN == TRUE
	song se_m_harden, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_NIGHTMARE == TRUE
	song se_m_nightmare, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_VITAL_THROW == TRUE
	song se_m_vital_throw, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_VITAL_THROW2 == TRUE
	song se_m_vital_throw2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BUBBLE == TRUE
	song se_m_bubble, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BUBBLE2 == TRUE
	song se_m_bubble2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BUBBLE3 == TRUE
	song se_m_bubble3, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_RAIN_DANCE == TRUE
	song se_m_rain_dance, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_CUT == TRUE
	song se_m_cut, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_STRING_SHOT == TRUE
	song se_m_string_shot, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_STRING_SHOT2 == TRUE
	song se_m_string_shot2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ROCK_THROW == TRUE
	song se_m_rock_throw, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_GUST == TRUE
	song se_m_gust, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_GUST2 == TRUE
	song se_m_gust2, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_DOUBLE_SLAP == TRUE
	song se_m_double_slap, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_DOUBLE_TEAM == TRUE
	song se_m_double_team, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_RAZOR_WIND == TRUE
	song se_m_razor_wind, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ICY_WIND == TRUE
	song se_m_icy_wind, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_THUNDER_WAVE == TRUE
	song se_m_thunder_wave, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_COMET_PUNCH == TRUE
	song se_m_comet_punch, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_MEGA_KICK == TRUE
	song se_m_mega_kick, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_MEGA_KICK2 == TRUE
	song se_m_mega_kick2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_CRABHAMMER == TRUE
	song se_m_crabhammer, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_JUMP_KICK == TRUE
	song se_m_jump_kick, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_FLAME_WHEEL == TRUE
	song se_m_flame_wheel, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_FLAME_WHEEL2 == TRUE
	song se_m_flame_wheel2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_FLAMETHROWER == TRUE
	song se_m_flamethrower, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_FIRE_PUNCH == TRUE
	song se_m_fire_punch, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TOXIC == TRUE
	song se_m_toxic, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SACRED_FIRE == TRUE
	song se_m_sacred_fire, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SACRED_FIRE2 == TRUE
	song se_m_sacred_fire2, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_EMBER == TRUE
	song se_m_ember, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TAKE_DOWN == TRUE
	song se_m_take_down, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BLIZZARD == TRUE
	song se_m_blizzard, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BLIZZARD2 == TRUE
	song se_m_blizzard2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SCRATCH == TRUE
	song se_m_scratch, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_VICEGRIP == TRUE
	song se_m_vicegrip, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_WING_ATTACK == TRUE
	song se_m_wing_attack, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_FLY == TRUE
	song se_m_fly, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SAND_ATTACK == TRUE
	song se_m_sand_attack, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_RAZOR_WIND2 == TRUE
	song se_m_razor_wind2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BITE == TRUE
	song se_m_bite, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HEADBUTT == TRUE
	song se_m_headbutt, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SURF == TRUE
	song se_m_surf, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HYDRO_PUMP == TRUE
	song se_m_hydro_pump, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_WHIRLPOOL == TRUE
	song se_m_whirlpool, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HORN_ATTACK == TRUE
	song se_m_horn_attack, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TAIL_WHIP == TRUE
	song se_m_tail_whip, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_MIST == TRUE
	song se_m_mist, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_POISON_POWDER == TRUE
	song se_m_poison_powder, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BIND == TRUE
	song se_m_bind, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_DRAGON_RAGE == TRUE
	song se_m_dragon_rage, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SING == TRUE
	song se_m_sing, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_PERISH_SONG == TRUE
	song se_m_perish_song, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_PAY_DAY == TRUE
	song se_m_pay_day, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_DIG == TRUE
	song se_m_dig, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_DIZZY_PUNCH == TRUE
	song se_m_dizzy_punch, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SELF_DESTRUCT == TRUE
	song se_m_self_destruct, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_EXPLOSION == TRUE
	song se_m_explosion, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ABSORB_2 == TRUE
	song se_m_absorb_2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ABSORB == TRUE
	song se_m_absorb, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SCREECH == TRUE
	song se_m_screech, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BUBBLE_BEAM == TRUE
	song se_m_bubble_beam, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BUBBLE_BEAM2 == TRUE
	song se_m_bubble_beam2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SUPERSONIC == TRUE
	song se_m_supersonic, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BELLY_DRUM == TRUE
	song se_m_belly_drum, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_METRONOME == TRUE
	song se_m_metronome, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BONEMERANG == TRUE
	song se_m_bonemerang, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_LICK == TRUE
	song se_m_lick, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_PSYBEAM == TRUE
	song se_m_psybeam, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_FAINT_ATTACK == TRUE
	song se_m_faint_attack, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SWORDS_DANCE == TRUE
	song se_m_swords_dance, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_LEER == TRUE
	song se_m_leer, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SWAGGER == TRUE
	song se_m_swagger, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SWAGGER2 == TRUE
	song se_m_swagger2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HEAL_BELL == TRUE
	song se_m_heal_bell, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_CONFUSE_RAY == TRUE
	song se_m_confuse_ray, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SNORE == TRUE
	song se_m_snore, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BRICK_BREAK == TRUE
	song se_m_brick_break, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_GIGA_DRAIN == TRUE
	song se_m_giga_drain, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_PSYBEAM2 == TRUE
	song se_m_psybeam2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SOLAR_BEAM == TRUE
	song se_m_solar_beam, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_PETAL_DANCE == TRUE
	song se_m_petal_dance, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TELEPORT == TRUE
	song se_m_teleport, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_MINIMIZE == TRUE
	song se_m_minimize, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SKETCH == TRUE
	song se_m_sketch, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SWIFT == TRUE
	song se_m_swift, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_REFLECT == TRUE
	song se_m_reflect, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BARRIER == TRUE
	song se_m_barrier, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_DETECT == TRUE
	song se_m_detect, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_LOCK_ON == TRUE
	song se_m_lock_on, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_MOONLIGHT == TRUE
	song se_m_moonlight, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_CHARM == TRUE
	song se_m_charm, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_CHARGE == TRUE
	song se_m_charge, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_STRENGTH == TRUE
	song se_m_strength, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HYPER_BEAM == TRUE
	song se_m_hyper_beam, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_WATERFALL == TRUE
	song se_m_waterfall, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_REVERSAL == TRUE
	song se_m_reversal, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ACID_ARMOR == TRUE
	song se_m_acid_armor, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SANDSTORM == TRUE
	song se_m_sandstorm, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TRI_ATTACK == TRUE
	song se_m_tri_attack, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TRI_ATTACK2 == TRUE
	song se_m_tri_attack2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ENCORE == TRUE
	song se_m_encore, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ENCORE2 == TRUE
	song se_m_encore2, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_BATON_PASS == TRUE
	song se_m_baton_pass, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_MILK_DRINK == TRUE
	song se_m_milk_drink, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ATTRACT == TRUE
	song se_m_attract, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_ATTRACT2 == TRUE
	song se_m_attract2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_MORNING_SUN == TRUE
	song se_m_morning_sun, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_FLATTER == TRUE
	song se_m_flatter, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SAND_TOMB == TRUE
	song se_m_sand_tomb, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_GRASSWHISTLE == TRUE
	song se_m_grasswhistle, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SPIT_UP == TRUE
	song se_m_spit_up, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_DIVE == TRUE
	song se_m_dive, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_EARTHQUAKE == TRUE
	song se_m_earthquake, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TWISTER == TRUE
	song se_m_twister, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SWEET_SCENT == TRUE
	song se_m_sweet_scent, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_YAWN == TRUE
	song se_m_yawn, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_SKY_UPPERCUT == TRUE
	song se_m_sky_uppercut, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_STAT_INCREASE == TRUE
	song se_m_stat_increase, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HEAT_WAVE == TRUE
	song se_m_heat_wave, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_UPROAR == TRUE
	song se_m_uproar, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HAIL == TRUE
	song se_m_hail, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_COSMIC_POWER == TRUE
	song se_m_cosmic_power, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_TEETER_DANCE == TRUE
	song se_m_teeter_dance, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_STAT_DECREASE == TRUE
	song se_m_stat_decrease, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HAZE == TRUE
	song se_m_haze, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_M_HYPER_BEAM2 == TRUE
	song se_m_hyper_beam2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_DOOR == TRUE
	song se_rg_door, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_CARD_FLIP == TRUE
	song se_rg_card_flip, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_CARD_FLIPPING == TRUE
	song se_rg_card_flipping, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_CARD_OPEN == TRUE
	song se_rg_card_open, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_BAG_CURSOR == TRUE
	song se_rg_bag_cursor, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_BAG_POCKET == TRUE
	song se_rg_bag_pocket, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_BALL_CLICK == TRUE
	song se_rg_ball_click, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_SHOP == TRUE
	song se_rg_shop, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_SS_ANNE_HORN == TRUE
	song se_rg_ss_anne_horn, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_HELP_OPEN == TRUE
	song se_rg_help_open, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_HELP_CLOSE == TRUE
	song se_rg_help_close, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_HELP_ERROR == TRUE
	song se_rg_help_error, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_DEOXYS_MOVE == TRUE
	song se_rg_deoxys_move, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_POKE_JUMP_SUCCESS == TRUE
	song se_rg_poke_jump_success, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_RG_POKE_JUMP_FAILURE == TRUE
	song se_rg_poke_jump_failure, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_POKENAV_CALL == TRUE
	song se_pokenav_call, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_POKENAV_HANG_UP == TRUE
	song se_pokenav_hang_up, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ARENA_TIMEUP1 == TRUE
	song se_arena_timeup1, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_ARENA_TIMEUP2 == TRUE
	song se_arena_timeup2, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_PIKE_CURTAIN_CLOSE == TRUE
	song se_pike_curtain_close, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_PIKE_CURTAIN_OPEN == TRUE
	song se_pike_curtain_open, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_SE_SUDOWOODO_SHAKE == TRUE
	song se_sudowoodo_shake, MUSIC_PLAYER_SE1, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LITTLEROOT_TEST == TRUE
	song mus_littleroot_test, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_GSC_ROUTE38 == TRUE
	song mus_gsc_route38, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CAUGHT == TRUE
	song mus_caught, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VICTORY_WILD == TRUE
	song mus_victory_wild, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VICTORY_GYM_LEADER == TRUE
	song mus_victory_gym_leader, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VICTORY_LEAGUE == TRUE
	song mus_victory_league, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_C_COMM_CENTER == TRUE
	song mus_c_comm_center, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_GSC_PEWTER == TRUE
	song mus_gsc_pewter, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_C_VS_LEGEND_BEAST == TRUE
	song mus_c_vs_legend_beast, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROUTE101 == TRUE
	song mus_route101, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROUTE110 == TRUE
	song mus_route110, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROUTE120 == TRUE
	song mus_route120, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_PETALBURG == TRUE
	song mus_petalburg, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OLDALE == TRUE
	song mus_oldale, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_GYM == TRUE
	song mus_gym, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SURF == TRUE
	song mus_surf, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_PETALBURG_WOODS == TRUE
	song mus_petalburg_woods, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LEVEL_UP == TRUE
	song mus_level_up, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_HEAL == TRUE
	song mus_heal, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OBTAIN_BADGE == TRUE
	song mus_obtain_badge, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OBTAIN_ITEM == TRUE
	song mus_obtain_item, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_EVOLVED == TRUE
	song mus_evolved, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OBTAIN_TMHM == TRUE
	song mus_obtain_tmhm, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LILYCOVE_MUSEUM == TRUE
	song mus_lilycove_museum, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROUTE122 == TRUE
	song mus_route122, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OCEANIC_MUSEUM == TRUE
	song mus_oceanic_museum, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_EVOLUTION_INTRO == TRUE
	song mus_evolution_intro, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_EVOLUTION == TRUE
	song mus_evolution, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_MOVE_DELETED == TRUE
	song mus_move_deleted, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_GIRL == TRUE
	song mus_encounter_girl, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_MALE == TRUE
	song mus_encounter_male, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ABANDONED_SHIP == TRUE
	song mus_abandoned_ship, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_FORTREE == TRUE
	song mus_fortree, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_BIRCH_LAB == TRUE
	song mus_birch_lab, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_TOWER_RS == TRUE
	song mus_b_tower_rs, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_SWIMMER == TRUE
	song mus_encounter_swimmer, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CAVE_OF_ORIGIN == TRUE
	song mus_cave_of_origin, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OBTAIN_BERRY == TRUE
	song mus_obtain_berry, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_AWAKEN_LEGEND == TRUE
	song mus_awaken_legend, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SLOTS_JACKPOT == TRUE
	song mus_slots_jackpot, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SLOTS_WIN == TRUE
	song mus_slots_win, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_TOO_BAD == TRUE
	song mus_too_bad, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROULETTE == TRUE
	song mus_roulette, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LINK_CONTEST_P1 == TRUE
	song mus_link_contest_p1, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LINK_CONTEST_P2 == TRUE
	song mus_link_contest_p2, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LINK_CONTEST_P3 == TRUE
	song mus_link_contest_p3, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LINK_CONTEST_P4 == TRUE
	song mus_link_contest_p4, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_RICH == TRUE
	song mus_encounter_rich, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VERDANTURF == TRUE
	song mus_verdanturf, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RUSTBORO == TRUE
	song mus_rustboro, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_POKE_CENTER == TRUE
	song mus_poke_center, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROUTE104 == TRUE
	song mus_route104, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROUTE119 == TRUE
	song mus_route119, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CYCLING == TRUE
	song mus_cycling, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_POKE_MART == TRUE
	song mus_poke_mart, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LITTLEROOT == TRUE
	song mus_littleroot, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_MT_CHIMNEY == TRUE
	song mus_mt_chimney, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_FEMALE == TRUE
	song mus_encounter_female, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_LILYCOVE == TRUE
	song mus_lilycove, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_DESERT == TRUE
	song mus_route111, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_HELP == TRUE
	song mus_help, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_UNDERWATER == TRUE
	song mus_underwater, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VICTORY_TRAINER == TRUE
	song mus_victory_trainer, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_TITLE == TRUE
	song mus_title, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_INTRO == TRUE
	song mus_intro, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_MAY == TRUE
	song mus_encounter_may, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_INTENSE == TRUE
	song mus_encounter_intense, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_COOL == TRUE
	song mus_encounter_cool, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ROUTE113 == TRUE
	song mus_route113, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_AQUA == TRUE
	song mus_encounter_aqua, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_FOLLOW_ME == TRUE
	song mus_follow_me, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_BRENDAN == TRUE
	song mus_encounter_brendan, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_EVER_GRANDE == TRUE
	song mus_ever_grande, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_SUSPICIOUS == TRUE
	song mus_encounter_suspicious, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VICTORY_AQUA_MAGMA == TRUE
	song mus_victory_aqua_magma, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CABLE_CAR == TRUE
	song mus_cable_car, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_GAME_CORNER == TRUE
	song mus_game_corner, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_DEWFORD == TRUE
	song mus_dewford, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SAFARI_ZONE == TRUE
	song mus_safari_zone, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VICTORY_ROAD == TRUE
	song mus_victory_road, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_AQUA_MAGMA_HIDEOUT == TRUE
	song mus_aqua_magma_hideout, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SAILING == TRUE
	song mus_sailing, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_MT_PYRE == TRUE
	song mus_mt_pyre, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SLATEPORT == TRUE
	song mus_slateport, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_MT_PYRE_EXTERIOR == TRUE
	song mus_mt_pyre_exterior, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SCHOOL == TRUE
	song mus_school, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_HALL_OF_FAME == TRUE
	song mus_hall_of_fame, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_FALLARBOR == TRUE
	song mus_fallarbor, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SEALED_CHAMBER == TRUE
	song mus_sealed_chamber, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CONTEST_WINNER == TRUE
	song mus_contest_winner, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CONTEST == TRUE
	song mus_contest, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_MAGMA == TRUE
	song mus_encounter_magma, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_INTRO_BATTLE == TRUE
	song mus_intro_battle, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ABNORMAL_WEATHER == TRUE
	song mus_abnormal_weather, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_WEATHER_GROUDON == TRUE
	song mus_weather_groudon, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_SOOTOPOLIS == TRUE
	song mus_sootopolis, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CONTEST_RESULTS == TRUE
	song mus_contest_results, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_HALL_OF_FAME_ROOM == TRUE
	song mus_hall_of_fame_room, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_TRICK_HOUSE == TRUE
	song mus_trick_house, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_TWINS == TRUE
	song mus_encounter_twins, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_ELITE_FOUR == TRUE
	song mus_encounter_elite_four, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_HIKER == TRUE
	song mus_encounter_hiker, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CONTEST_LOBBY == TRUE
	song mus_contest_lobby, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_INTERVIEWER == TRUE
	song mus_encounter_interviewer, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_ENCOUNTER_CHAMPION == TRUE
	song mus_encounter_champion, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_CREDITS == TRUE
	song mus_credits, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_END == TRUE
	song mus_end, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_FRONTIER == TRUE
	song mus_b_frontier, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_ARENA == TRUE
	song mus_b_arena, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OBTAIN_B_POINTS == TRUE
	song mus_obtain_b_points, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_REGISTER_MATCH_CALL == TRUE
	song mus_register_match_call, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_PYRAMID == TRUE
	song mus_b_pyramid, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_PYRAMID_TOP == TRUE
	song mus_b_pyramid_top, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_PALACE == TRUE
	song mus_b_palace, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RAYQUAZA_APPEARS == TRUE
	song mus_rayquaza_appears, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_TOWER == TRUE
	song mus_b_tower, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_OBTAIN_SYMBOL == TRUE
	song mus_obtain_symbol, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_DOME == TRUE
	song mus_b_dome, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_PIKE == TRUE
	song mus_b_pike, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_FACTORY == TRUE
	song mus_b_factory, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_RAYQUAZA == TRUE
	song mus_vs_rayquaza, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_FRONTIER_BRAIN == TRUE
	song mus_vs_frontier_brain, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_MEW == TRUE
	song mus_vs_mew, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_B_DOME_LOBBY == TRUE
	song mus_b_dome_lobby, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_WILD == TRUE
	song mus_vs_wild, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_AQUA_MAGMA == TRUE
	song mus_vs_aqua_magma, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_TRAINER == TRUE
	song mus_vs_trainer, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_GYM_LEADER == TRUE
	song mus_vs_gym_leader, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_CHAMPION == TRUE
	song mus_vs_champion, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_REGI == TRUE
	song mus_vs_regi, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_KYOGRE_GROUDON == TRUE
	song mus_vs_kyogre_groudon, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_RIVAL == TRUE
	song mus_vs_rival, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_ELITE_FOUR == TRUE
	song mus_vs_elite_four, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_VS_AQUA_MAGMA_LEADER == TRUE
	song mus_vs_aqua_magma_leader, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_FOLLOW_ME == TRUE
	song mus_rg_follow_me, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_GAME_CORNER == TRUE
	song mus_rg_game_corner, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ROCKET_HIDEOUT == TRUE
	song mus_rg_rocket_hideout, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_GYM == TRUE
	song mus_rg_gym, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_JIGGLYPUFF == TRUE
	song mus_rg_jigglypuff, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_INTRO_FIGHT == TRUE
	song mus_rg_intro_fight, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_TITLE == TRUE
	song mus_rg_title, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_CINNABAR == TRUE
	song mus_rg_cinnabar, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_LAVENDER == TRUE
	song mus_rg_lavender, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_HEAL == TRUE
	song mus_rg_heal, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_CYCLING == TRUE
	song mus_rg_cycling, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ENCOUNTER_ROCKET == TRUE
	song mus_rg_encounter_rocket, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ENCOUNTER_GIRL == TRUE
	song mus_rg_encounter_girl, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ENCOUNTER_BOY == TRUE
	song mus_rg_encounter_boy, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_HALL_OF_FAME == TRUE
	song mus_rg_hall_of_fame, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VIRIDIAN_FOREST == TRUE
	song mus_rg_viridian_forest, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_MT_MOON == TRUE
	song mus_rg_mt_moon, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_POKE_MANSION == TRUE
	song mus_rg_poke_mansion, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_CREDITS == TRUE
	song mus_rg_credits, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ROUTE1 == TRUE
	song mus_rg_route1, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ROUTE24 == TRUE
	song mus_rg_route24, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ROUTE3 == TRUE
	song mus_rg_route3, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ROUTE11 == TRUE
	song mus_rg_route11, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VICTORY_ROAD == TRUE
	song mus_rg_victory_road, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VS_GYM_LEADER == TRUE
	song mus_rg_vs_gym_leader, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VS_TRAINER == TRUE
	song mus_rg_vs_trainer, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VS_WILD == TRUE
	song mus_rg_vs_wild, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VS_CHAMPION == TRUE
	song mus_rg_vs_champion, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_PALLET == TRUE
	song mus_rg_pallet, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_OAK_LAB == TRUE
	song mus_rg_oak_lab, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_OAK == TRUE
	song mus_rg_oak, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_POKE_CENTER == TRUE
	song mus_rg_poke_center, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SS_ANNE == TRUE
	song mus_rg_ss_anne, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SURF == TRUE
	song mus_rg_surf, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_POKE_TOWER == TRUE
	song mus_rg_poke_tower, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SILPH == TRUE
	song mus_rg_silph, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_FUCHSIA == TRUE
	song mus_rg_fuchsia, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_CELADON == TRUE
	song mus_rg_celadon, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VICTORY_TRAINER == TRUE
	song mus_rg_victory_trainer, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VICTORY_WILD == TRUE
	song mus_rg_victory_wild, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VICTORY_GYM_LEADER == TRUE
	song mus_rg_victory_gym_leader, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VERMILLION == TRUE
	song mus_rg_vermillion, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_PEWTER == TRUE
	song mus_rg_pewter, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ENCOUNTER_RIVAL == TRUE
	song mus_rg_encounter_rival, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_RIVAL_EXIT == TRUE
	song mus_rg_rival_exit, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_DEX_RATING == TRUE
	song mus_rg_dex_rating, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_OBTAIN_KEY_ITEM == TRUE
	song mus_rg_obtain_key_item, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_CAUGHT_INTRO == TRUE
	song mus_rg_caught_intro, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_PHOTO == TRUE
	song mus_rg_photo, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_GAME_FREAK == TRUE
	song mus_rg_game_freak, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_CAUGHT == TRUE
	song mus_rg_caught, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_NEW_GAME_INSTRUCT == TRUE
	song mus_rg_new_game_instruct, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_NEW_GAME_INTRO == TRUE
	song mus_rg_new_game_intro, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_NEW_GAME_EXIT == TRUE
	song mus_rg_new_game_exit, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_POKE_JUMP == TRUE
	song mus_rg_poke_jump, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_UNION_ROOM == TRUE
	song mus_rg_union_room, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_NET_CENTER == TRUE
	song mus_rg_net_center, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_MYSTERY_GIFT == TRUE
	song mus_rg_mystery_gift, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_BERRY_PICK == TRUE
	song mus_rg_berry_pick, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SEVII_CAVE == TRUE
	song mus_rg_sevii_cave, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_TEACHY_TV_SHOW == TRUE
	song mus_rg_teachy_tv_show, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SEVII_ROUTE == TRUE
	song mus_rg_sevii_route, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SEVII_DUNGEON == TRUE
	song mus_rg_sevii_dungeon, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SEVII_123 == TRUE
	song mus_rg_sevii_123, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SEVII_45 == TRUE
	song mus_rg_sevii_45, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SEVII_67 == TRUE
	song mus_rg_sevii_67, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_POKE_FLUTE == TRUE
	song mus_rg_poke_flute, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VS_DEOXYS == TRUE
	song mus_rg_vs_deoxys, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VS_MEWTWO == TRUE
	song mus_rg_vs_mewtwo, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_VS_LEGEND == TRUE
	song mus_rg_vs_legend, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ENCOUNTER_GYM_LEADER == TRUE
	song mus_rg_encounter_gym_leader, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_ENCOUNTER_DEOXYS == TRUE
	song mus_rg_encounter_deoxys, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_TRAINER_TOWER == TRUE
	song mus_rg_trainer_tower, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_SLOW_PALLET == TRUE
	song mus_rg_slow_pallet, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_MUS_RG_TEACHY_TV_MENU == TRUE
	song mus_rg_teachy_tv_menu, MUSIC_PLAYER_BGM, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif
.if MUX_ENABLE_BARD_PHONEMES == TRUE
	song ph_trap_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_trap_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_trap_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_face_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_face_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_face_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_cloth_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_cloth_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_cloth_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_dress_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_dress_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_dress_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_fleece_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_fleece_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_fleece_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_kit_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_kit_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_kit_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_price_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_price_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_price_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_lot_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_lot_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_lot_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_goat_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_goat_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_goat_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_thought_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_thought_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_thought_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_choice_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_choice_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_choice_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_mouth_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_mouth_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_mouth_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_foot_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_foot_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_foot_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_goose_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_goose_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_goose_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_strut_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_strut_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_strut_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_cure_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_cure_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_cure_solo, MUSIC_PLAYER_SE2, 64, 1024
	song ph_nurse_blend, MUSIC_PLAYER_SE2, 64, 1024
	song ph_nurse_held, MUSIC_PLAYER_SE2, 64, 1024
	song ph_nurse_solo, MUSIC_PLAYER_SE2, 64, 1024
.else
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
	song dummy_song_header, MUSIC_PLAYER_BGM, 64, 1024
.endif

	.align 2
dummy_song_header:
	.byte 0, 0, 0, 0
