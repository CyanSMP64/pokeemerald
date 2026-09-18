	.align 2
voicegroup240::
	voice_keysplit voicegroup240_strings, KeySplitTable_BWstrings_01
	voice_keysplit voicegroup240_harp, KeySplitTable_72
	voice_keysplit voicegroup240_trumpet, KeySplitTable_GStrumpet
	voice_keysplit voicegroup240_horn, KeySplitTable_60
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_plugsound_pro_flute_sus_84, A(127), D(90), S(100), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_directsound 40, 0, DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up, A(127), D(127), S(127), R(120)
	voice_keysplit_all voicegroup240_drumset - 0xc * 33

voicegroup240_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)

voicegroup240_harp::
	voice_directsound 67, 0, DirectSoundWaveData_bw_kfl_harp_67, A(127), D(80), S(1), R(110)
	voice_directsound 76, 0, DirectSoundWaveData_bw_kfl_harp_76, A(127), D(80), S(1), R(110)

voicegroup240_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_79, A(127), D(90), S(115), R(116)

voicegroup240_horn::
	voice_directsound 53, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_53, A(127), D(110), S(120), R(116)
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)

voicegroup240_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 62, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 62, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 63, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 64, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 65, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 66, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 67, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 68, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 69, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 70, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 71, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 72, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 73, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 74, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 75, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 76, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 77, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 78, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 79, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 64, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 65, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 66, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 67, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
