	.align 2
voicegroup200::
	voice_keysplit voicegroup200_epiano, KeySplitTable_GSrhodes2
	voice_directsound 72, 0, DirectSoundWaveData_bw_vibraphone_wb_c5_22, A(127), D(80), S(10), R(116)
	voice_keysplit voicegroup200_marimba, KeySplitTable_GSvibes
	voice_keysplit voicegroup200_organ, KeySplitTable_BWdrawbarorg
	voice_keysplit voicegroup200_synthbass, KeySplitTable_BWsynbass
	voice_keysplit voicegroup200_strings, KeySplitTable_GSstrings
	voice_keysplit voicegroup200_trumpet, KeySplitTable_GStrumpet
	voice_keysplit voicegroup200_trombone, KeySplitTable_GStrombone
	voice_keysplit voicegroup200_flute, KeySplitTable_BWflute
	voice_directsound 41, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_41, A(127), D(80), S(1), R(116)
	voice_keysplit_all voicegroup200_drumset - 0xc * 33
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_organ2, A(127), D(122), S(122), R(120)

voicegroup200_epiano::
	voice_directsound 60, 0, DirectSoundWaveData_bw_kfl_mark_i_classic_60, A(127), D(60), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_bw_kfl_mark_i_classic_72, A(127), D(60), S(1), R(116)

voicegroup200_marimba::
	voice_directsound 60, 0, DirectSoundWaveData_bw_marimba_wb_c4_22, A(127), D(80), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_bw_marimba_wb_c5_22, A(127), D(80), S(1), R(116)

voicegroup200_organ::
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48, A(127), D(120), S(120), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60, A(127), D(127), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72, A(127), D(127), S(127), R(116)

voicegroup200_synthbass::
	voice_directsound 36, 0, DirectSoundWaveData_bw_synth_bass_wb_c2_22, A(127), D(125), S(120), R(118)
	voice_directsound 48, 0, DirectSoundWaveData_bw_synth_bass_wb_c3_22, A(127), D(125), S(120), R(118)

voicegroup200_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(118)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(118)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(122), D(100), S(110), R(118)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(122), D(100), S(110), R(118)

voicegroup200_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_60, A(127), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_69, A(127), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_hg_kfl_trumpet_ensemble_79, A(127), D(90), S(115), R(116)

voicegroup200_trombone::
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(100), R(116)
	voice_directsound 52, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_52, A(127), D(100), S(100), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_60, A(127), D(100), S(100), R(116)

voicegroup200_flute::
	voice_directsound 65, 0, DirectSoundWaveData_bw_ps55_flute_65_22, A(127), D(90), S(100), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_bw_ps55_flute_72_22, A(127), D(90), S(100), R(116)
	voice_directsound 81, 0, DirectSoundWaveData_bw_ps55_flute_81_22, A(127), D(90), S(100), R(116)
	voice_directsound 89, 0, DirectSoundWaveData_bw_ps55_flute_89_22, A(127), D(90), S(100), R(116)

voicegroup200_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_bassdr1_32, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_bassdr1_32, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_bassdr1_32, A(127), D(127), S(120), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_bw_bassdr1_32, A(127), D(127), S(120), R(116)
	voice_directsound 64, 64, DirectSoundWaveData_bw_bassdr1_32, A(127), D(127), S(120), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_bw_bassdr1_32, A(127), D(127), S(120), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_bw_bassdr1_32, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 61, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 62, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 63, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(124), S(0), R(116)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 61, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 62, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(80), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(80), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(80), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 61, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 62, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 64, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 40, DirectSoundWaveData_bw_crashcym1_popkit_32, A(127), D(62), S(0), R(116)
	voice_directsound 61, 105, DirectSoundWaveData_bw_crashcym2_popkit_32, A(127), D(62), S(0), R(116)
