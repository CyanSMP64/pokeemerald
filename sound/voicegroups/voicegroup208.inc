	.align 2
voicegroup208::
	voice_keysplit voicegroup208_piano, KeySplitTable_BWeuropad_23
	voice_directsound 72, 0, DirectSoundWaveData_bw_plugsound_pro_glockenspiel_72, A(127), D(75), S(1), R(116)
	voice_keysplit voicegroup208_bass, KeySplitTable_BWsynbass
	voice_directsound 35, 0, DirectSoundWaveData_bw_halionone_hard_sync_solo_35, A(127), D(125), S(120), R(127)
	voice_keysplit voicegroup208_strings, KeySplitTable_BWstrings_123
	voice_keysplit voicegroup208_lead, KeySplitTable_BWe4lead
	voice_keysplit voicegroup208_flute, KeySplitTable_BWflute2_23
	voice_keysplit voicegroup208_horn, KeySplitTable_BWfhorns_23
	voice_directsound 37, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_bw_ps19_trumpet_sus_f_72, A(127), D(127), S(127), R(120)
	voice_directsound 46, 0, DirectSoundWaveData_bw_sd90_orch_hit2, A(127), D(80), S(1), R(116)
	voice_keysplit_all voicegroup208_drumset - 0xc * 16
	voice_directsound 60, 0, DirectSoundWaveData_dp_zg_of_tutti_hit_minor, A(127), D(120), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_dp_zg_of_tutti_hit_minor, A(90), D(120), S(127), R(120)

voicegroup208_piano::
	voice_directsound 72, 0, DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_72, A(127), D(75), S(1), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_84, A(127), D(75), S(1), R(116)

voicegroup208_bass::
	voice_directsound 42, 0, DirectSoundWaveData_bw_sd90_mg303_bass_42, A(127), D(125), S(120), R(120)
	voice_directsound 66, 0, DirectSoundWaveData_bw_sd90_mg303_bass_66, A(127), D(125), S(120), R(120)

voicegroup208_strings::
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(122), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(122), D(100), S(110), R(116)

voicegroup208_lead::
	voice_directsound 66, 0, DirectSoundWaveData_bw_sd90_saw_wave_66, A(127), D(100), S(100), R(116)
	voice_directsound 85, 0, DirectSoundWaveData_bw_sd90_saw_wave_85, A(127), D(100), S(100), R(116)

voicegroup208_flute::
	voice_directsound 81, 0, DirectSoundWaveData_bw_ps55_flute_81_22, A(127), D(90), S(100), R(118)
	voice_directsound 89, 0, DirectSoundWaveData_bw_ps55_flute_89_22, A(127), D(90), S(100), R(118)

voicegroup208_horn::
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(110), S(120), R(116)

voicegroup208_drumset::
	voice_directsound 45, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 46, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 47, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 44, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 45, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 46, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 47, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 48, 64, DirectSoundWaveData_bw_halionone_t9_analog_clap, A(127), D(120), S(120), R(126)
	voice_directsound 60, 64, DirectSoundWaveData_bw_zg_cb_fx_loop6_kick, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_bw_zg_cb_fx_loop6_snare, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_bw_sd90_analog_snare_reverb, A(127), D(127), S(120), R(124)
	voice_directsound 51, 64, DirectSoundWaveData_dp_qy70_dance_snare, A(127), D(127), S(127), R(127)
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
	voice_directsound 84, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
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
