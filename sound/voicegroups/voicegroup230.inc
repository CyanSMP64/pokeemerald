	.align 2
voicegroup230::
	voice_none
	voice_none
	voice_none
	voice_none
	voice_keysplit voicegroup230_bass, KeySplitTable_36
	voice_none
	voice_none
	voice_keysplit voicegroup230_strings, KeySplitTable_BWstrings_01
	voice_none
	voice_none
	voice_keysplit voicegroup230_trumpet, KeySplitTable_BWtrumpet_01
	voice_keysplit voicegroup230_horn, KeySplitTable_BWfhorns_23
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_none
	voice_none
	voice_none
	voice_directsound 60, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_major, A(127), D(127), S(127), R(116)
	voice_none
	voice_none
	voice_none
	voice_none
	voice_keysplit_all voicegroup230_drumset - 0xc * 36
	voice_none
	voice_none
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_1, A(127), D(120), S(100), R(118)
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_2, A(127), D(120), S(100), R(118)
	voice_directsound 73, 0, DirectSoundWaveData_b2_omnisphere_aggressive_tendencies, A(127), D(120), S(127), R(124)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)
	voice_keysplit_all voicegroup230_drumloop - 0xc * 24

voicegroup230_bass::
	voice_directsound 33, 0, DirectSoundWaveData_b2_independence_pro_reso_bass_33, A(127), D(60), S(1), R(116)
	voice_directsound 38, 0, DirectSoundWaveData_b2_independence_pro_reso_bass_38, A(127), D(60), S(1), R(116)

voicegroup230_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)

voicegroup230_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)

voicegroup230_horn::
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(110), S(120), R(116)

voicegroup230_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 62, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 63, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 64, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 65, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 66, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 67, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 68, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 69, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 70, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 71, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 72, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 73, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 74, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 75, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 76, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 77, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 60, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 64, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)

voicegroup230_drumloop::
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_1, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_2, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_3, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_4, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_5, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_6, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_7, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_stylus_rmx_groove106_8, A(127), D(127), S(127), R(127)
