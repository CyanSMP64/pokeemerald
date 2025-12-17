voice_group ut_005
	voice_keysplit voicegroup_piano1f, keysplit_piano1 + 4
	voice_keysplit voicegroup_piano1p, keysplit_piano1 + 4
	voice_keysplit voicegroup_glocken, keysplit_glocken + 4
	voice_directsound 48, 0, DirectSoundWaveData_fretlessbass_c3, 255, 235, 200, 100
	voice_keysplit voicegroup_strings, keysplit_strings_new + 4
	voice_directsound 72, 0, DirectSoundWaveData_sinewave_c5, 80, 0, 255, 100
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 60, 0, 255, 100
	voice_keysplit_all voicegroup_perc_005 - 0xc * 36
	voice_square_2 60, 0, 1, 0, 7, 15, 0
    voice_programmable_wave 60, 0, ProgrammableWaveData_saw, 0, 4, 8, 0
	voice_square_2 60, 0, 2, 1, 7, 15, 0

voice_group perc_005
	voice_directsound 63, 64, DirectSoundWaveData_kick1, 255, 0, 255, 127
	voice_directsound 63, 64, DirectSoundWaveData_sidestick, 255, 0, 255, 127
	voice_directsound 64, 64, DirectSoundWaveData_snare1, 255, 0, 255, 127
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 63, 84, DirectSoundWaveData_hat_closed, 255, 248, 0, 127
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 63, 84, DirectSoundWaveData_hat_open, 255, 248, 0, 200
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 53, 32, DirectSoundWaveData_crash1, 255, 252, 0, 215
