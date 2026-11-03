	.align 2
voicegroup250::
	voice_directsound 67, 0, DirectSoundWaveData_pmd2_brassoctave_g4, 255, 0, 255, 80
	voice_directsound 67, 0, DirectSoundWaveData_pmd2_brassoctave_g4, 255, 0, 255, 80
	voice_directsound 60, 0, DirectSoundWaveData_pmd1_synthbass1_c2, 255, 0, 255, 80
	voice_keysplit voicegroup250_string, KeySplitTable_critterstrings
	voice_keysplit voicegroup250_string, KeySplitTable_critterstrings
	voice_keysplit voicegroup250_trombone, KeySplitTable_63_76
	voice_keysplit voicegroup250_trombone, KeySplitTable_63_76
	voice_directsound 72, 0, DirectSoundWaveData_pmd2_frenchhorns_c4, 255, 0, 255, 150
	voice_directsound 72, 0, DirectSoundWaveData_pmd2_frenchhorns_c4, 255, 0, 255, 150
	voice_directsound 81, 0, DirectSoundWaveData_pmd2_saw, 255, 0, 255, 80
	voice_directsound 57, 0, DirectSoundWaveData_pmd2_timpani_a2, 255, 245, 0, 225
	voice_keysplit_all voicegroup250_kit - 0xc * 40

voicegroup250_string::
	voice_directsound 60, 0, DirectSoundWaveData_pmd1_strings_c4, 255, 0, 255, 80
	voice_directsound 72, 0, DirectSoundWaveData_pmd1_strings_c5, 255, 0, 255, 80

voicegroup250_trombone::
	voice_directsound 55, 0, DirectSoundWaveData_pmd2_trombone_g2, 255, 190, 150, 150
	voice_directsound 64, 0, DirectSoundWaveData_pmd2_trombone_e3, 255, 190, 150, 150
	voice_directsound 77, 0, DirectSoundWaveData_pmd2_trombone_f4, 255, 190, 150, 150

voicegroup250_kit::
	voice_directsound 64, 64, DirectSoundWaveData_pmd1_snare2, 255, 0, 255, 80
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
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_directsound 68, 64, DirectSoundWaveData_pmd1_triclosed, 255, 0, 255, 80
	voice_directsound 68, 64, DirectSoundWaveData_pmd1_triopen, 255, 180, 60, 127 @ adjusted pitch from 93 so it mixes better on gba (this can be sample rate dependent)
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_directsound 78, 64, DirectSoundWaveData_pmd1_crashcym2, 255, 0, 255, 240
