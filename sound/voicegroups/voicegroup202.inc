	.align 2
voicegroup202::
	voice_directsound 72, 0, DirectSoundWaveData_bw_marimba_wb_c5_22, A(127), D(80), S(1), R(116)
	voice_keysplit voicegroup202_organ, KeySplitTable_BWdrawbarorg
	voice_keysplit voicegroup202_strings, KeySplitTable_BWstrings
	voice_keysplit voicegroup202_harp, KeySplitTable_BWharp
	voice_keysplit voicegroup202_trombone, KeySplitTable_DPtimpani1
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_directsound 30, 0, DirectSoundWaveData_bw_synbass_fs0_32, A(127), D(75), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_bw_ps19_trumpet_sus_f_72, A(127), D(127), S(127), R(120)
	voice_directsound 84, 0, DirectSoundWaveData_bw_ps19_trumpet_sus_f_84, A(127), D(127), S(127), R(120)
	voice_keysplit_all voicegroup202_drumset - 0xc * 28

voicegroup202_organ::
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48, A(127), D(120), S(120), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60, A(127), D(120), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72, A(127), D(120), S(127), R(116)

voicegroup202_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(122), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(122), D(100), S(110), R(116)

voicegroup202_harp::
	voice_directsound 48, 0, DirectSoundWaveData_hg_kfl_harp_48, A(127), D(80), S(1), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_harp_60, A(127), D(90), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_kfl_harp_72, A(127), D(90), S(1), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_kfl_harp_84, A(127), D(90), S(1), R(116)

voicegroup202_trombone::
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(100), R(116)
	voice_directsound 52, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_52, A(127), D(100), S(100), R(116)

voicegroup202_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_kick120, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 64, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_bw_ps15_kick66, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_bw_synth_snaer02_32, A(127), D(127), S(127), R(127)
	voice_directsound 61, 64, DirectSoundWaveData_bw_synth_snaer02_32, A(127), D(127), S(127), R(127)
	voice_directsound 62, 64, DirectSoundWaveData_bw_synth_snaer02_32, A(127), D(127), S(127), R(127)
	voice_directsound 63, 64, DirectSoundWaveData_bw_synth_snaer02_32, A(127), D(127), S(127), R(127)
	voice_directsound 64, 64, DirectSoundWaveData_bw_synth_snaer02_32, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 61, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 62, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 63, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 60, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 61, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 62, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 63, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 64, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 65, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 66, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 67, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 61, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 62, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 63, 64, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_bw_ps15_hihat20, A(127), D(127), S(127), R(127)
	voice_directsound 61, 64, DirectSoundWaveData_bw_ps15_hihat20, A(127), D(127), S(127), R(127)
	voice_directsound 62, 64, DirectSoundWaveData_bw_ps15_hihat20, A(127), D(127), S(127), R(127)
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
