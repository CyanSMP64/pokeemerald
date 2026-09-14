	.align 2
voicegroup228::
	voice_keysplit voicegroup228_organ, KeySplitTable_BWdrawbarorg
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_48, A(127), D(125), S(120), R(120)
	voice_keysplit voicegroup228_strings, KeySplitTable_BWstrings
	voice_directsound 55, 0, DirectSoundWaveData_hg_plugsound_pro_timpani_55, A(127), D(50), S(1), R(116)
	voice_keysplit voicegroup228_trumpet, KeySplitTable_GStrumpet
	voice_keysplit voicegroup228_trombone, KeySplitTable_GStrombone
	voice_keysplit_all voicegroup228_drumset - 0xc * 26
	voice_directsound 40, 0, DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up, A(127), D(127), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_b2_drumloop_gs_champ, A(127), D(127), S(127), R(127)
	voice_directsound 60, 0, DirectSoundWaveData_b2_drumloop_gs_champ_flange, A(127), D(127), S(127), R(127)

voicegroup228_organ::
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48, A(127), D(120), S(120), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60, A(127), D(120), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72, A(127), D(120), S(127), R(116)

voicegroup228_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(127), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(127), D(100), S(110), R(116)

voicegroup228_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_79, A(127), D(90), S(115), R(116)

voicegroup228_trombone::
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(115), R(116)
	voice_directsound 52, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_52, A(127), D(100), S(115), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_60, A(127), D(100), S(115), R(116)

voicegroup228_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 64, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 65, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 64, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 67, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 68, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 69, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 70, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 71, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 72, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
