voice_group test_3
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_oct_piano, keysplit_4oct + 4
	voice_keysplit voicegroup_gs_e_piano, keysplit_2oct + 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_vibraphone, keysplit_2oct - 8
	voice_keysplit voicegroup_gs_marimba, keysplit_3oct - 8
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_tubular_bell, keysplit_2oct - 12
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_perc_organ, keysplit_3oct + 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_clean_guitar, keysplit_gs_clean_guitar
	voice_keysplit voicegroup_gs_ac_bass, keysplit_2oct + 14
	voice_keysplit voicegroup_gs_fretless_bass, keysplit_2oct + 6
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_strings, keysplit_gs_strings
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_oboe, keysplit_wb_choirs_male - 6
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_gs_bassoon, keysplit_gs_bassoon
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit_all voicegroup_gs_kit

voice_group gs_oct_piano
	voice_directsound 36, 0, DirectSoundWaveData_wb_oct_piano_c2_22, A(127), D(75), S(1), R(116)
	voice_directsound 48, 0, DirectSoundWaveData_wb_oct_piano_c3_22, A(127), D(75), S(1), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_wb_oct_piano_c4_22, A(127), D(75), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_wb_oct_piano_c5_22, A(127), D(75), S(1), R(116)

voice_group gs_e_piano
	voice_directsound 60, 0, DirectSoundWaveData_wb_electric_piano_c4_22, A(127), D(70), S(1), R(115)
	voice_directsound 72, 0, DirectSoundWaveData_wb_electric_piano_c5_22, A(127), D(70), S(1), R(115)

voice_group gs_vibraphone
	voice_directsound 60, 0, DirectSoundWaveData_wb_vibraphone_c4_22, A(127), D(90), S(1), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_wb_vibraphone_c5_22, A(127), D(90), S(1), R(116)

voice_group gs_marimba
	voice_directsound 60, 0, DirectSoundWaveData_wb_marimba_c4_22, A(127), D(90), S(1), R(114)
	voice_directsound 72, 0, DirectSoundWaveData_wb_marimba_c5_22, A(127), D(90), S(1), R(114)
	voice_directsound 84, 0, DirectSoundWaveData_wb_marimba_c6_22, A(127), D(90), S(1), R(114)

voice_group gs_tubular_bell
	voice_directsound 67, 0, DirectSoundWaveData_wb_tublar_bell_g4_22, A(127), D(80), S(40), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_wb_tublar_bell_c5_22, A(127), D(80), S(40), R(116)

voice_group gs_perc_organ
	voice_directsound 48, 0, DirectSoundWaveData_wb_perc_organ_c3_22, A(127), D(127), S(127), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_wb_perc_organ_c4_22, A(127), D(127), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_wb_perc_organ_c5_22, A(127), D(127), S(127), R(116)

voice_group gs_clean_guitar
	voice_directsound 43, 0, DirectSoundWaveData_wb_clean_guitar_g2_22, A(127), D(90), S(1), R(120)
	voice_directsound 55, 0, DirectSoundWaveData_wb_clean_guitar_g3_22, A(127), D(90), S(1), R(120)
	voice_directsound 64, 0, DirectSoundWaveData_wb_clean_guitar_e4_22, A(127), D(90), S(1), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_wb_clean_guitar_c5_22, A(127), D(90), S(1), R(120)

voice_group gs_ac_bass
	voice_directsound 36, 0, DirectSoundWaveData_wb_ac_bass_c2_22, A(127), D(60), S(1), R(118)
	voice_directsound 48, 0, DirectSoundWaveData_wb_ac_bass_c3_22, A(127), D(60), S(1), R(118)

voice_group gs_fretless_bass
	voice_directsound 45, 0, DirectSoundWaveData_wb_e_bass_a2_22, A(127), D(110), S(100), R(118)
	voice_directsound 57, 0, DirectSoundWaveData_wb_e_bass_a3_22, A(127), D(110), S(100), R(118)

voice_group gs_strings
	voice_directsound 60, 0, DirectSoundWaveData_wb_strings_c4_22, A(127), D(100), S(110), R(118)
	voice_directsound 69, 0, DirectSoundWaveData_wb_strings_a4_22, A(127), D(100), S(110), R(118)
	voice_directsound 77, 0, DirectSoundWaveData_wb_strings_f5_22, A(122), D(100), S(110), R(118)
	voice_directsound 84, 0, DirectSoundWaveData_wb_strings_c6_22, A(122), D(100), S(110), R(118)

voice_group gs_oboe
	voice_directsound 64, 0, DirectSoundWaveData_wb_oboe_e4_22, A(127), D(100), S(110), R(114)
	voice_directsound 72, 0, DirectSoundWaveData_wb_oboe_c5_22, A(127), D(100), S(110), R(114)
	voice_directsound 81, 0, DirectSoundWaveData_wb_oboe_a5_22, A(127), D(100), S(110), R(114)

voice_group gs_bassoon
	voice_directsound 40, 0, DirectSoundWaveData_wb_basson_e2_22, A(127), D(100), S(90), R(114)
	voice_directsound 48, 0, DirectSoundWaveData_wb_basson_c3_22, A(127), D(100), S(90), R(114)
	voice_directsound 57, 0, DirectSoundWaveData_wb_basson_a3_22, A(127), D(100), S(90), R(114)

voice_group gs_kit, 29
	voice_directsound 60, 64, DirectSoundWaveData_wb_handclap_1_16, A(127), D(127), S(120), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_snare_22, A(127), D(0), S(110), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_reverse_cym_16, A(3), D(127), S(120), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_bassdr_1_16, A(127), D(127), S(120), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_wb_bassdr_1_16, A(127), D(127), S(120), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_snare_808_16, A(127), D(116), S(0), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_bassdr_2_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_bassdr_3_16, A(127), D(127), S(127), R(120)
	voice_directsound 61, 58, DirectSoundWaveData_wb_rimshot_16, A(127), D(116), S(0), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_snare_orch_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 70, DirectSoundWaveData_wb_handclap_2_16, A(127), D(127), S(120), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_snare_power_16, A(127), D(114), S(90), R(120)
	voice_directsound 60, 30, DirectSoundWaveData_wb_tom_f_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 80, DirectSoundWaveData_wb_hihat_closed_22, A(127), D(100), S(0), R(120)
	voice_directsound 60, 40, DirectSoundWaveData_wb_tom_l_16, A(127), D(127), S(127), R(120)
	voice_directsound 61, 40, DirectSoundWaveData_wb_tom_l_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 50, DirectSoundWaveData_wb_tom_m_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 80, DirectSoundWaveData_wb_hihat_open_22, A(127), D(102), S(0), R(120)
	voice_directsound 60, 100, DirectSoundWaveData_wb_tom_h_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_wb_cymbal_orch_22, A(127), D(90), S(0), R(114)
	voice_directsound 57, 64, DirectSoundWaveData_wb_crash_cym_22, A(127), D(100), S(0), R(114)
	voice_directsound 58, 64, DirectSoundWaveData_wb_crash_cym_22, A(127), D(100), S(0), R(114)
	voice_directsound 59, 64, DirectSoundWaveData_wb_crash_cym_22, A(127), D(100), S(0), R(114)
	voice_directsound 59, 20, DirectSoundWaveData_wb_chinese_cym_22, A(127), D(70), S(0), R(110)
	voice_directsound 60, 30, DirectSoundWaveData_wb_ride_bell_16, A(127), D(70), S(0), R(115)
	voice_directsound 60, 58, DirectSoundWaveData_wb_tambourine_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 84, DirectSoundWaveData_wb_splash_cym_22, A(127), D(70), S(0), R(120)
	voice_directsound 60, 110, DirectSoundWaveData_wb_cowbell_22, A(127), D(127), S(127), R(120)
	voice_directsound 60, 36, DirectSoundWaveData_wb_crash_cym_22, A(127), D(80), S(0), R(114)
	voice_directsound 61, 102, DirectSoundWaveData_wb_crash_cym_22, A(127), D(80), S(0), R(114)
	voice_directsound 60, 86, DirectSoundWaveData_wb_ride_cym_22, A(127), D(70), S(0), R(114)
	voice_directsound 60, 90, DirectSoundWaveData_wb_bongo_16, A(127), D(127), S(127), R(120)
	voice_directsound 57, 90, DirectSoundWaveData_wb_bongo_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 20, DirectSoundWaveData_wb_mute_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 24, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 57, 26, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 58, 26, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 59, 26, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 26, DirectSoundWaveData_wb_cabasa_16, A(127), D(100), S(90), R(120)
	voice_directsound 60, 105, DirectSoundWaveData_wb_mute_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 105, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 63, 105, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 64, 105, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 65, 105, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 66, 105, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 67, 105, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 68, 105, DirectSoundWaveData_wb_high_conga_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 20, DirectSoundWaveData_wb_shaker_16, A(127), D(100), S(90), R(120)
	voice_directsound 61, 20, DirectSoundWaveData_wb_shaker_16, A(127), D(100), S(90), R(120)
	voice_directsound 60, 105, DirectSoundWaveData_wb_shaker_16, A(127), D(100), S(90), R(120)
	voice_directsound 61, 105, DirectSoundWaveData_wb_shaker_16, A(127), D(100), S(90), R(120)
	voice_directsound 60, 44, DirectSoundWaveData_wb_triangle_16, A(127), D(120), S(0), R(125)
	voice_directsound 60, 44, DirectSoundWaveData_wb_triangle_16, A(127), D(80), S(0), R(118)
