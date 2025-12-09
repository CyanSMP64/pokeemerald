voice_group ut_003
	voice_keysplit voicegroup_floweylead, keysplit_2oct - 18
	voice_keysplit voicegroup_floweylead_slow, keysplit_2oct + 26
	voice_directsound 60, 0, DirectSoundSynthData_tri, 255, 0, 255, 0

	voice_group floweylead @ 2oct - 18
	voice_directsound 68, 0, DirectSoundWaveData_floweylead_gs4, 255, 235, 90, 0
	voice_directsound 80, 0, DirectSoundWaveData_floweylead_gs5, 255, 235, 90, 0

	voice_group floweylead_slow @ 2oct - 26
	voice_directsound 68, 0, DirectSoundWaveData_floweylead_gs4, 255, 254, 90, 0
	voice_directsound 80, 0, DirectSoundWaveData_floweylead_gs5, 255, 254, 90, 0
