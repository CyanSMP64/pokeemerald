	.align 2
voicegroup225::
	voice_none
	voice_keysplit voicegroup225_bell, KeySplitTable_GStubbell
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72, A(127), D(127), S(127), R(116)
	voice_keysplit voicegroup225_bass, KeySplitTable_36
	voice_keysplit voicegroup225_strings, KeySplitTable_BWstrings_01
	voice_keysplit voicegroup225_trumpet, KeySplitTable_BWtrumpet_01
	voice_keysplit_all voicegroup225_drumset - 0xc * 34
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(126), D(100), S(50), R(118)
	voice_directsound 43, 0, DirectSoundWaveData_hg_plugsound_pro_cello_sus_43, A(120), D(100), S(127), R(116)
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_1, A(127), D(120), S(100), R(118)
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_2, A(127), D(120), S(100), R(118)
	voice_directsound 52, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_3, A(127), D(120), S(100), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_bw_zg_cb_guitar_squeal, A(127), D(120), S(127), R(124)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)
	voice_none

voicegroup225_bell::
	voice_directsound 67, 0, DirectSoundWaveData_hg_ewso_orch_chimes_67, A(127), D(80), S(40), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_ewso_orch_chimes_72, A(127), D(80), S(40), R(116)

voicegroup225_bass::
	voice_directsound 33, 0, DirectSoundWaveData_b2_independence_pro_reso_bass_33, A(127), D(60), S(1), R(116)
	voice_directsound 38, 0, DirectSoundWaveData_b2_independence_pro_reso_bass_38, A(127), D(60), S(1), R(116)

voicegroup225_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)

voicegroup225_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)

voicegroup225_drumset::
	voice_directsound 63, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 60, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_closed, A(127), D(127), S(127), R(118)
	voice_directsound 60, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 61, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 62, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 63, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 64, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 65, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 66, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 67, 100, DirectSoundWaveData_b2_halionone_t9_analog_hihat_open, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 64, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 65, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 66, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 67, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 68, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 69, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 70, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 71, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 72, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 84, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 64, 44, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
