	.align 2
voicegroup227::
	voice_keysplit voicegroup227_bell, KeySplitTable_GStubbell
	voice_keysplit voicegroup227_organ, KeySplitTable_BWdrawbarorg
	voice_keysplit voicegroup227_synbass, KeySplitTable_BWsynbass
	voice_keysplit voicegroup227_strings, KeySplitTable_BWstrings
	voice_keysplit_all voicegroup227_drumset - 0xc * 31
	voice_directsound 40, 0, DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up, A(127), D(127), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_b2_drumloop_gs_leader_22, A(127), D(127), S(127), R(127)
	voice_keysplit voicegroup227_square, KeySplitTable_60_72_84
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)

voicegroup227_bell::
	voice_directsound 67, 0, DirectSoundWaveData_hg_ewso_orch_chimes_67, A(127), D(80), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_ewso_orch_chimes_72, A(127), D(80), S(1), R(116)

voicegroup227_organ::
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48, A(127), D(120), S(120), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60, A(127), D(120), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72, A(127), D(120), S(127), R(116)

voicegroup227_synbass::
	voice_directsound 36, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_36, A(127), D(125), S(120), R(120)
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_48, A(127), D(125), S(120), R(120)

voicegroup227_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(127), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(127), D(100), S(110), R(116)

voicegroup227_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, A(127), D(127), S(120), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 64, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 61, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 62, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 63, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 61, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 62, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 63, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 64, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 65, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 66, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 67, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 68, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 69, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 70, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 71, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 72, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 73, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)

voicegroup227_square::
	voice_directsound 50, 0, DirectSoundWaveData_b2_absynth_square_d3, A(127), D(127), S(127), R(120)
	voice_directsound 62, 0, DirectSoundWaveData_b2_absynth_square_d4, A(127), D(127), S(127), R(120)
	voice_directsound 74, 0, DirectSoundWaveData_b2_absynth_square_d5, A(127), D(127), S(127), R(120)
	voice_directsound 86, 0, DirectSoundWaveData_b2_absynth_square_d6, A(127), D(127), S(127), R(120)
