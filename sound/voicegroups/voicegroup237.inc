	.align 2
voicegroup237::
	voice_none
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_harp_60, A(127), D(90), S(1), R(116)
	voice_keysplit voicegroup237_timpani, KeySplitTable_BWghetsistimpani
	voice_keysplit voicegroup237_trumpet, KeySplitTable_BWtrumpet_01
	voice_keysplit voicegroup237_trombone, KeySplitTable_DPtimpani1
	voice_none
	voice_directsound 40, 0, DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up, A(127), D(127), S(127), R(120)
	voice_keysplit voicegroup237_choir, KeySplitTable_BWchoir_123
	voice_keysplit voicegroup237_guitar, KeySplitTable_42_54
	voice_directsound 61, 0, DirectSoundWaveData_bw_ge_cs1_loop1_32, A(127), D(127), S(120), R(116)
	voice_directsound 61, 0, DirectSoundWaveData_bw_chiss_shot_32, A(127), D(127), S(127), R(125)
	voice_directsound 73, 0, DirectSoundWaveData_bw_gee_sop_cs4_22, A(127), D(127), S(120), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_bw_ichiss_sop_c4_22, A(127), D(127), S(120), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_b2_ew_ra_chinese_gong_vs, A(127), D(50), S(1), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_bw_wadaiko_g, A(127), D(80), S(1), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_b2_ghetsis_unknown_drum, A(127), D(127), S(127), R(116)
	voice_keysplit_all voicegroup237_drumset - 0xc * 34

voicegroup237_timpani::
	voice_directsound 37, 0, DirectSoundWaveData_bw_sd90_timpani2_37, A(127), D(80), S(1), R(116)
	voice_directsound 49, 0, DirectSoundWaveData_bw_sd90_timpani2_49, A(127), D(80), S(1), R(116)
	voice_directsound 61, 0, DirectSoundWaveData_bw_sd90_timpani2_61, A(127), D(80), S(1), R(116)

voicegroup237_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_bw_atc_pet_sect_c4_32, A(124), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_bw_atc_pet_sect_a4_32, A(124), D(90), S(115), R(116)

voicegroup237_trombone::
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(100), R(116)
	voice_directsound 52, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_52, A(127), D(100), S(100), R(116)

voicegroup237_choir::
	voice_directsound 57, 0, DirectSoundWaveData_bw_choirs_male_a3_32, A(127), D(100), S(110), R(115)
	voice_directsound 65, 0, DirectSoundWaveData_bw_choirs_male_f4_32, A(127), D(100), S(110), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_bw_choirs_male_c5_32, A(127), D(100), S(110), R(118)

voicegroup237_guitar::
	voice_directsound 40, 0, DirectSoundWaveData_b2_pinkstrat_e2, A(127), D(30), S(1), R(120)
	voice_directsound 52, 0, DirectSoundWaveData_b2_pinkstrat_e3, A(127), D(30), S(1), R(120)
	voice_directsound 64, 0, DirectSoundWaveData_b2_pinkstrat_e4, A(127), D(30), S(1), R(120)

voicegroup237_drumset::
	voice_directsound 58, 64, DirectSoundWaveData_b2_addictive_drums_snare3, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 61, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 62, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 63, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 64, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 65, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 66, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 67, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 68, 72, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 61, 100, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 60, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 61, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 62, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 63, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 64, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 63, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 64, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 65, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 66, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 67, 120, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 60, 50, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 61, 50, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 58, 20, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 59, 20, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 55, 10, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 56, 10, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 61, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 62, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 64, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 65, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 66, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 67, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 118, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 61, 118, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 62, 118, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 118, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 64, 118, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 65, 118, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 66, 118, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 45, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 61, 45, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 62, 45, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 45, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 64, 45, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 74, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
