	.align 2
voicegroup243::
	voice_keysplit voicegroup_DPtimpani1, KeySplitTable_DPtimpani1
	voice_keysplit_all voicegroup243_kit - 0xc * 31
	voice_keysplit voicegroup_GSbrihorn, KeySplitTable_GSbrihorn
	voice_keysplit voicegroup_GStrombone, KeySplitTable_GStrombone
	voice_keysplit voicegroup242_horn, KeySplitTable_52_53_62
	voice_keysplit voicegroup_GSharp, KeySplitTable_GSharp
	voice_keysplit voicegroup242_flute, KeySplitTable_71_78_78
	voice_keysplit voicegroup201_strings, KeySplitTable_BWstrings
	voice_keysplit voicegroup_GScello, KeySplitTable_GScello

voicegroup243_kit::
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 64, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 65, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
	voice_directsound 66, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(120), R(120)
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
