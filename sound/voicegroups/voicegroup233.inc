	.align 2
voicegroup233::
	voice_none
	voice_directsound 72, 0, DirectSoundWaveData_bw_plugsound_pro_glockenspiel_72, A(127), D(75), S(1), R(116)
	voice_keysplit voicegroup233_slapbass, KeySplitTable_GSacbass
	voice_keysplit voicegroup233_strings, KeySplitTable_BWstrings_01
	voice_keysplit voicegroup233_trumpet, KeySplitTable_BWtrumpet_01
	voice_directsound 43, 0, DirectSoundWaveData_hg_plugsound_pro_cello_sus_43, A(120), D(100), S(127), R(116)
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_plugsound_pro_flute_sus_84, A(127), D(90), S(100), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_directsound 40, 0, DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up, A(127), D(127), S(127), R(120)
	voice_keysplit_all voicegroup233_drumset - 0xc * 26
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_1, A(127), D(120), S(100), R(118)
	voice_directsound 47, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_2, A(127), D(120), S(100), R(118)
	voice_directsound 52, 0, DirectSoundWaveData_b2_independence_pro_power_chords_combi_3, A(127), D(120), S(100), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_bw_zg_cb_guitar_squeal, A(127), D(120), S(127), R(124)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)

voicegroup233_slapbass::
	voice_directsound 36, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_36, A(127), D(125), S(120), R(120)
	voice_directsound 48, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_48, A(127), D(125), S(120), R(120)

voicegroup233_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)

voicegroup233_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)

voicegroup233_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 62, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 63, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 64, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
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
