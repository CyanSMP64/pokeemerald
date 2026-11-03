	.align 2
voicegroup248::
	voice_directsound 60, 0, DirectSoundWaveData_pmd1_synthbass1_c2, 255, 0, 255, 80
	voice_keysplit voicegroup248_string, KeySplitTable_critterstrings
	voice_keysplit voicegroup248_string, KeySplitTable_critterstrings
	voice_directsound 72, 0, DirectSoundWaveData_pmd1_percorgan_c4, 255, 190, 80, 127
	voice_directsound 72, 0, DirectSoundWaveData_pmd1_percorgan_c4, 255, 190, 80, 127
	voice_directsound 72, 0, DirectSoundWaveData_pmd1_pwmsynth_c4, 255, 0, 255, 80
	voice_directsound 84, 0, DirectSoundWaveData_pmd1_supersaw_c5, 255, 0, 255, 80
	voice_directsound 60, 0, DirectSoundWaveData_pmd2_cymbal_loop, 255, 251, 0, 48
	voice_keysplit_all voicegroup248_kit - 0xc * 36

voicegroup248_string::
	voice_directsound 60, 0, DirectSoundWaveData_pmd1_strings_c4, 255, 0, 255, 80
	voice_directsound 72, 0, DirectSoundWaveData_pmd1_strings_c5, 255, 0, 255, 80

voicegroup248_kit::
	voice_directsound 60, 64, DirectSoundWaveData_pmd1_kick, 255, 0, 255, 80
	voice_none
	voice_directsound 62, 64, DirectSoundWaveData_pmd1_bodhranlo, 255, 0, 255, 80
	voice_none
	voice_directsound 64, 64, DirectSoundWaveData_pmd1_snare2, 255, 0, 255, 80
	voice_directsound 65, 64, DirectSoundWaveData_pmd1_snare3, 255, 0, 255, 80
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_directsound 71, 64, DirectSoundWaveData_pmd1_shaker, 255, 0, 255, 80
	voice_none
	voice_none
	voice_directsound 66, 64, DirectSoundWaveData_pmd1_tambourine, 255, 0, 255, 80
