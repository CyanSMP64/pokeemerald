	.align 2
voicegroup241::
	voice_keysplit_all voicegroup241_kit - 0xc * 36
	voice_keysplit voicegroup_DPtimpani1, KeySplitTable_DPtimpani1
	voice_keysplit voicegroup_GSfretlessbs, KeySplitTable_GSfretlessbs
	voice_keysplit voicegroup_DPmidipiano, KeySplitTable_36_52_67
	voice_keysplit voicegroup235_guitar, KeySplitTable_42_54_68_80
	voice_keysplit voicegroup_GSsteelstrgt, KeySplitTable_GSsteelstrgt
	voice_directsound 84, 0, DirectSoundWaveData_pmd1_synstring_c6, 255, 220, 220, 210
	voice_keysplit voicegroup_DPstrings, KeySplitTable_DPstrings
	voice_keysplit voicegroup247_pad, KeySplitTable_GSmarimba
	voice_keysplit voicegroup231_trumpet, KeySplitTable_GStrumpet
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)

voicegroup241_kit::
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(116), S(70), R(120)
	voice_directsound 60, 50, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_noise_alt 84, 0, 0, 0, 1, 0, 0
	voice_noise_alt 85, 0, 0, 0, 1, 0, 0
	voice_noise_alt 86, 0, 0, 0, 1, 0, 0
	voice_noise_alt 87, 0, 0, 0, 1, 0, 0
	voice_noise_alt 84, 0, 0, 0, 2, 4, 0
	voice_noise_alt 85, 0, 0, 0, 2, 4, 0
	voice_noise_alt 86, 0, 0, 0, 2, 4, 0
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
