	.align 2
voicegroup215::
	voice_keysplit voicegroup215_piano, KeySplitTable_BWeuropad_23
	voice_directsound 43, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_43, A(127), D(125), S(120), R(120)
	voice_directsound 35, 0, DirectSoundWaveData_bw_halionone_hard_sync_solo_35, A(127), D(125), S(120), R(127)
	voice_keysplit voicegroup215_strings, KeySplitTable_BWstrings_123
	voice_keysplit voicegroup215_flute, KeySplitTable_BWflute2_23
	voice_directsound 55, 0, DirectSoundWaveData_hg_plugsound_pro_timpani_55, A(127), D(50), S(1), R(116)
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(100), R(116)
	voice_keysplit voicegroup215_horn, KeySplitTable_BWfhorns_23
	voice_keysplit voicegroup215_oboe, KeySplitTable_BWfhorns_23
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_bw_ewso_6fh_rips_f, A(127), D(80), S(1), R(116)
	voice_directsound 48, 0, DirectSoundWaveData_bw_ewso_6fh_rips_s, A(127), D(80), S(1), R(116)
	voice_directsound 37, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_bw_ps19_trumpet_sus_f_72, A(127), D(127), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_major, A(127), D(127), S(127), R(116)
	voice_keysplit_all voicegroup215_drumset - 0xc * 26

voicegroup215_piano::
	voice_directsound 72, 0, DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_72, A(127), D(75), S(1), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_84, A(127), D(75), S(1), R(116)

voicegroup215_strings::
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(127), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(127), D(100), S(110), R(116)

voicegroup215_flute::
	voice_directsound 81, 0, DirectSoundWaveData_bw_ps55_flute_81_22, A(127), D(90), S(100), R(118)
	voice_directsound 89, 0, DirectSoundWaveData_bw_ps55_flute_89_22, A(127), D(90), S(100), R(118)

voicegroup215_horn::
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(110), S(120), R(116)

voicegroup215_oboe::
	voice_directsound 64, 0, DirectSoundWaveData_hg_kfl_oboe_64, A(127), D(100), S(100), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_kfl_oboe_72, A(127), D(100), S(100), R(116)

voicegroup215_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_bw_unknown_snare_roll, A(127), D(127), S(120), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_kick120, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 64, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 67, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 68, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 69, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 70, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 71, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 72, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 73, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 74, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 75, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 76, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 77, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 78, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 79, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 80, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 81, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 82, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 83, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 60, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 61, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 62, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 63, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_hihat20, A(127), D(127), S(127), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_ps15_hihat20, A(127), D(127), S(127), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_ps15_hihat20, A(127), D(127), S(127), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 64, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 65, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 66, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 67, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 63, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 64, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 65, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 66, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 67, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 14, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
