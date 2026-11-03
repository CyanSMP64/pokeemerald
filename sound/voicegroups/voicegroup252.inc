	.align 2
voicegroup252::
	voice_directsound 60, 0, DirectSoundWaveData_pmd1_synthbass1_c2, 255, 0, 255, 150
	voice_keysplit voicegroup252_string, KeySplitTable_critterstrings
	voice_keysplit voicegroup252_string, KeySplitTable_critterstrings
	voice_directsound 96, 0, DirectSoundWaveData_pmd1_synstring_c6, 255, 0, 255, 127
	voice_directsound 72, 0, DirectSoundWaveData_pmd1_percorgan_c4, 255, 190, 80, 150
	voice_directsound 60, 0, DirectSoundWaveData_pmd2_tuba_c3, 255, 190, 180, 127
	voice_directsound 60, 0, DirectSoundWaveData_pmd2_tuba_c3, 255, 190, 180, 127
	voice_directsound 79, 0, DirectSoundWaveData_pmd2_brassoctave_g4, 255, 0, 255, 127
	voice_directsound 81, 0, DirectSoundWaveData_pmd2_square, 255, 0, 255, 80
	voice_directsound 81, 0, DirectSoundWaveData_pmd2_square, 255, 0, 255, 80
	voice_keysplit_all voicegroup252_kit - 0xc * 36

voicegroup252_string::
	voice_directsound 60, 0, DirectSoundWaveData_pmd1_strings_c4, 255, 0, 255, 127
	voice_directsound 72, 0, DirectSoundWaveData_pmd1_strings_c5, 255, 0, 255, 127

voicegroup252_kit::
	voice_directsound 60, 64, DirectSoundWaveData_pmd1_kick, 255, 0, 255, 127
	voice_directsound 61, 64, DirectSoundWaveData_pmd1_sidestick1, 255, 0, 255, 127
	voice_none
	voice_none
	voice_directsound 64, 64, DirectSoundWaveData_pmd1_snare2, 255, 0, 255, 127
	voice_none
	voice_directsound 68, 64, DirectSoundWaveData_pmd1_hihat_closed, 255, 0, 255, 127
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_directsound 67, 64, DirectSoundWaveData_pmd1_hihat_open, 255, 240, 0, 127
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_directsound 61, 40, DirectSoundWaveData_pmd1_bongo, 255, 0, 255, 127
	voice_directsound 61, 50, DirectSoundWaveData_pmd1_congamute, 255, 0, 255, 127
	voice_directsound 63, 60, DirectSoundWaveData_pmd1_congahi, 255, 0, 255, 127
	voice_directsound 64, 70, DirectSoundWaveData_pmd1_congalo, 255, 0, 255, 127
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_directsound 68, 30, DirectSoundWaveData_pmd1_triclosed, 255, 0, 255, 127
	voice_directsound 68, 30, DirectSoundWaveData_pmd1_triopen, 255, 180, 60, 127 @ adjusted pitch from 93 so it mixes better on gba (this can be sample rate dependent)
