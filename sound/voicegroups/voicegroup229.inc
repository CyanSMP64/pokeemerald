	.align 2
voicegroup229::
	voice_none
	voice_keysplit voicegroup229_piano, KeySplitTable_GSvibes
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_a_suitcase_medium_72, A(127), D(70), S(1), R(125)
	voice_keysplit voicegroup229_organ, KeySplitTable_GSdrawbarorg
	voice_keysplit voicegroup229_guitar, KeySplitTable_60_72
	voice_keysplit voicegroup229_bass, KeySplitTable_GSsynbass
	voice_keysplit voicegroup229_strings, KeySplitTable_GSstrings
	voice_keysplit voicegroup229_pizz, KeySplitTable_57_65_74
	voice_keysplit voicegroup229_horn, KeySplitTable_GSfhorns
	voice_keysplit voicegroup229_flute, KeySplitTable_81
	voice_keysplit_all voicegroup229_drumset - 0xc * 42
	voice_keysplit_all voicegroup229_drumloops - 0xc * 29
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_wind, A(99), D(99), S(99), R(110)
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(126), D(100), S(40), R(127)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_b2_doublsaw_c5, A(127), D(120), S(127), R(120)

voicegroup229_piano::
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_rock_piano_60, A(127), D(75), S(1), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_rock_piano_72, A(127), D(75), S(1), R(120)

voicegroup229_organ::
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48, A(127), D(120), S(120), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60, A(127), D(127), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72, A(127), D(127), S(127), R(116)

voicegroup229_guitar::
	voice_directsound 48, 0, DirectSoundWaveData_dp_ps16_dist_gtr_48, A(127), D(30), S(1), R(120)
	voice_directsound 64, 0, DirectSoundWaveData_dp_ps16_dist_gtr_64, A(127), D(30), S(1), R(120)
	voice_directsound 76, 0, DirectSoundWaveData_dp_ps16_dist_gtr_76, A(127), D(30), S(1), R(120)

voicegroup229_bass::
	voice_directsound 36, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_36, A(127), D(125), S(120), R(120)
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_48, A(127), D(125), S(120), R(120)

voicegroup229_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(118)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(118)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(122), D(100), S(110), R(118)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(122), D(100), S(110), R(118)

voicegroup229_pizz::
	voice_directsound 52, 0, DirectSoundWaveData_hg_kfl_cello_ensemble_pizz_52, A(127), D(100), S(40), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_60, A(127), D(100), S(40), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_69, A(127), D(100), S(40), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_77, A(127), D(105), S(40), R(116)

voicegroup229_horn::
	voice_directsound 53, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_53, A(127), D(117), S(118), R(116)
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(117), S(118), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(117), S(127), R(116)

voicegroup229_flute::
	voice_directsound 77, 0, DirectSoundWaveData_hg_plugsound_pro_flute_sus_77, A(127), D(90), S(90), R(118)
	voice_directsound 84, 0, DirectSoundWaveData_hg_plugsound_pro_flute_sus_84, A(127), D(90), S(70), R(118)

voicegroup229_drumset::
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 61, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 62, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 63, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 64, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 65, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 66, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 57, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 58, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 59, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 64, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 60, 36, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(80), S(0), R(114)

voicegroup229_drumloops::
	voice_directsound 60, 64, DirectSoundWaveData_b2_drumloop_rs_leader1_r, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_drumloop_rs_leader1_l, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_drumloop_rs_leader2_r, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_drumloop_rs_leader2_l, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_unknown_kick_rs_leader, A(127), D(127), S(127), R(126)
