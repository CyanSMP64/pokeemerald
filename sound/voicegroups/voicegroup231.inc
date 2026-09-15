	.align 2
voicegroup231::
	voice_none
	voice_keysplit_all voicegroup231_drumset - 0xc * 30
	voice_directsound 96, 0, DirectSoundWaveData_dp_sd90_glocken2, A(127), D(90), S(0), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_b2_slap_bass_louder, A(127), D(125), S(120), R(120)
	voice_keysplit voicegroup231_strings, KeySplitTable_GSstrings
	voice_keysplit voicegroup231_trumpet, KeySplitTable_GStrumpet
	voice_directsound 84, 0, DirectSoundWaveData_hg_plugsound_pro_flute_sus_84, A(127), D(90), S(70), R(118)
	voice_keysplit voicegroup231_sitar, KeySplitTable_53_62_72
	voice_directsound 37, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_directsound 40, 0, DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up, A(127), D(127), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)
	voice_keysplit voicegroup231_synth, KeySplitTable_48_60_72_84
	voice_directsound 60, 0, DirectSoundWaveData_b2_drumloop_dp_leader, A(127), D(127), S(127), R(127)

voicegroup231_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_dp_zg_wet_crossfade_snare2, A(127), D(0), S(110), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_b2_absynth_808_kick, A(127), D(127), S(120), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_b2_absynth_808_kick, A(127), D(127), S(120), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 62, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 63, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 64, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 65, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 66, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 67, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 68, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 69, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 70, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 71, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 72, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 73, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 74, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 57, 64, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(90), S(0), R(114)
	voice_directsound 58, 64, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(90), S(0), R(114)
	voice_directsound 59, 64, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(90), S(0), R(114)
	voice_directsound 59, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 61, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 62, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 63, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 60, 36, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(70), S(0), R(114)
	voice_directsound 61, 102, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(70), S(0), R(114)

voicegroup231_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(118)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(118)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(122), D(100), S(110), R(118)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(122), D(100), S(110), R(118)

voicegroup231_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_79, A(127), D(90), S(115), R(116)

voicegroup231_sitar::
	voice_directsound 48, 0, DirectSoundWaveData_bw_sitar_c3_32, A(127), D(55), S(1), R(116)
	voice_directsound 57, 0, DirectSoundWaveData_bw_sitar_a3_32, A(127), D(55), S(1), R(118)
	voice_directsound 65, 0, DirectSoundWaveData_bw_sitar_f4_32, A(127), D(55), S(1), R(116)
	voice_directsound 74, 0, DirectSoundWaveData_bw_sitar_d5_32, A(127), D(55), S(1), R(116)

voicegroup231_synth::
	voice_directsound 38, 0, DirectSoundWaveData_b2_dj_handy_d2, A(127), D(127), S(127), R(120)
	voice_directsound 50, 0, DirectSoundWaveData_b2_dj_handy_d3, A(127), D(127), S(127), R(120)
	voice_directsound 62, 0, DirectSoundWaveData_b2_dj_handy_d4, A(127), D(127), S(127), R(120)
	voice_directsound 74, 0, DirectSoundWaveData_b2_dj_handy_d5, A(127), D(127), S(127), R(120)
	voice_directsound 86, 0, DirectSoundWaveData_b2_dj_handy_d6, A(127), D(127), S(127), R(120)
