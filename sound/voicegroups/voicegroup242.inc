	.align 2
voicegroup242::
	voice_keysplit_all voicegroup242_kit - 0xc * 38
	voice_keysplit voicegroup_DPtimpani1, KeySplitTable_DPtimpani1
	voice_keysplit voicegroup201_strings, KeySplitTable_BWstrings
	voice_directsound 40, 0, DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up, A(127), D(127), S(127), R(120)
	voice_keysplit voicegroup231_trumpet, KeySplitTable_GStrumpet
	voice_keysplit voicegroup_GStrombone, KeySplitTable_GStrombone
	voice_keysplit voicegroup242_horn, KeySplitTable_52_53_62
	voice_directsound 37, 0, DirectSoundWaveData_bw_independence_pro_khso_trombones_stc, A(127), D(125), S(120), R(120)
	voice_keysplit voicegroup242_flute, KeySplitTable_71_78_78
	voice_keysplit voicegroup_GSharp, KeySplitTable_GSharp

voicegroup242_kit::
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 64, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 65, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 66, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 67, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 68, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 69, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(90), S(0), R(114)
	voice_directsound 60, 64, DirectSoundWaveData_bw_crashcym1_popkit_32, A(112), D(62), S(0), R(116)

voicegroup242_horn::
	voice_directsound 48, 0, DirectSoundWaveData_bw_kfl_french_horn_ensemble_48, A(127), D(110), S(120), R(116)
	voice_directsound 53, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_53, A(127), D(110), S(120), R(116)
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(110), S(120), R(116)

voicegroup242_flute::
	voice_directsound 65, 0, DirectSoundWaveData_bw_ps55_flute_65_22, A(127), D(90), S(100), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_bw_ps55_flute_72_22, A(127), D(90), S(100), R(118)
	voice_directsound 81, 0, DirectSoundWaveData_bw_ps55_flute_81_22, A(127), D(90), S(100), R(118)
	voice_directsound 89, 0, DirectSoundWaveData_bw_ps55_flute_89_22, A(127), D(90), S(100), R(118)
