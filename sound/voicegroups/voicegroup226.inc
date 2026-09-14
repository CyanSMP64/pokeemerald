	.align 2
voicegroup226::
	voice_keysplit voicegroup226_bell, KeySplitTable_GStubbell
	voice_keysplit voicegroup226_bass, KeySplitTable_36
	voice_none
	voice_keysplit voicegroup226_strings, KeySplitTable_BWstrings_01
	voice_none
	voice_keysplit voicegroup226_trumpet, KeySplitTable_BWtrumpet_01
	voice_directsound 43, 0, DirectSoundWaveData_hg_plugsound_pro_cello_sus_43, A(120), D(100), S(127), R(116)
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_keysplit voicegroup226_choir, KeySplitTable_BWtimpani_01
	voice_directsound 43, 0, DirectSoundWaveData_bw_ewsc_full_chorus_ah_43, A(127), D(100), S(110), R(118)
	voice_directsound 52, 0, DirectSoundWaveData_bw_ewsc_full_chorus_ah_52, A(127), D(100), S(110), R(118)
	voice_directsound 60, 0, DirectSoundWaveData_bw_ewsc_full_chorus_ah_60, A(127), D(100), S(110), R(118)
	voice_keysplit_all voicegroup226_drumset - 0xc * 35
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_1, A(127), D(120), S(100), R(118)
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_2, A(127), D(120), S(100), R(118)
	voice_directsound 52, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_3, A(127), D(120), S(100), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_bw_zg_cb_guitar_squeal, A(127), D(120), S(127), R(124)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)

voicegroup226_bell::
	voice_directsound 67, 0, DirectSoundWaveData_hg_ewso_orch_chimes_67, A(127), D(80), S(40), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_ewso_orch_chimes_72, A(127), D(80), S(40), R(116)

voicegroup226_bass::
	voice_directsound 33, 0, DirectSoundWaveData_b2_independence_pro_reso_bass_33, A(127), D(60), S(1), R(116)
	voice_directsound 38, 0, DirectSoundWaveData_b2_independence_pro_reso_bass_38, A(127), D(60), S(1), R(116)

voicegroup226_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)

voicegroup226_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)

voicegroup226_choir::
	voice_directsound 52, 0, DirectSoundWaveData_bw_ewsc_full_chorus_ah_52, A(127), D(100), S(110), R(118)
	voice_directsound 60, 0, DirectSoundWaveData_bw_ewsc_full_chorus_ah_60, A(127), D(100), S(110), R(118)

voicegroup226_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 60, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_closed, A(127), D(127), S(127), R(118)
	voice_directsound 60, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 60, 10, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 30, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 50, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 30, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 40, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 110, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 90, DirectSoundWaveData_hg_battery3_rock_rack_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 110, DirectSoundWaveData_hg_battery3_rock_rack_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 118, DirectSoundWaveData_hg_battery3_rock_rack_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 104, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 112, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
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
	voice_directsound 63, 84, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
