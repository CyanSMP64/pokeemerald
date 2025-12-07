voice_group ut_002
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0
	voice_directsound 60, 0, DirectSoundWaveData_whitenoise_c4, 255, 255, 0, 0
	voice_directsound 60, 0, DirectSoundWaveData_whitenoise_c4, 255, 190, 0, 0
	voice_square_2 60, 0, 2, 0, 7, 15, 0
	voice_keysplit voicegroup_piano1f, keysplit_piano1
	voice_keysplit voicegroup_piano1p, keysplit_piano1
	voice_directsound 60, 0, DirectSoundSynthData_squ18, 50, 0, 255, 220
	voice_keysplit_all voicegroup_perc_standard - 0xc * 61
	voice_square_1 60, 0, 0, 2, 0, 7, 15, 0
	voice_keysplit voicegroup_glocken, keysplit_glocken
	voice_keysplit voicegroup_strings, keysplit_strings_new
	voice_keysplit voicegroup_acbass, keysplit_acbass
	voice_noise 60, 0, 0, 0, 2, 0, 0
