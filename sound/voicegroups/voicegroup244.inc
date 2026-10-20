	.align 2
voicegroup244::
	voice_directsound_comp 60, 0, DirectSoundWaveData_colo_loop, 255, 0, 255, 0
	voice_keysplit_all voicegroup244_kit - 0xc * 36
	voice_directsound 31, 0, DirectSoundWaveData_dp_slapbass_g1_16, A(127), D(127), S(127), R(120)
	voice_directsound 57, 0, DirectSoundWaveData_dp_bluesgt_a2_16, A(127), D(10), S(120), R(116)
	voice_keysplit voicegroup_DPmidipiano, KeySplitTable_36_52_67
	voice_keysplit voicegroup205_pad, KeySplitTable_GSmarimba
	voice_keysplit voicegroup208_piano, KeySplitTable_BWeuropad_23
	voice_keysplit voicegroup_DPstrings, KeySplitTable_DPstrings
	voice_keysplit voicegroup201_trumpet, KeySplitTable_GStrumpet
	voice_square_2_alt 60, 0, 0, 0, 2, 10, 1		@ psg voices for brass
	voice_square_1_alt 60, 0, 0, 0, 0, 2, 10, 1		@ psg voices for brass
	voice_keysplit voicegroup_GSfhorns, KeySplitTable_GSfhorns
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_5, 0, 7, 15, 0	@ psg voice for high arps
	voice_directsound 96, 0, DirectSoundWaveData_dp_sd90_glocken2, A(127), D(90), S(0), R(116)

voicegroup244_kit::
	voice_directsound 60, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(127), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(127), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(127), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(127), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(116), S(70), R(120)
	voice_directsound 59, 30, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_noise_alt 84, 0, 0, 0, 1, 0, 0
	voice_directsound 60, 90, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 61, 90, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 62, 90, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_noise_alt 84, 0, 0, 0, 2, 4, 0
	voice_noise_alt 85, 0, 0, 0, 2, 4, 0
	voice_noise_alt 86, 0, 0, 0, 2, 4, 0
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 60, 32, DirectSoundWaveData_dp_dance_drums_ride, A(127), D(70), S(0), R(114)
	voice_directsound 61, 32, DirectSoundWaveData_dp_dance_drums_ride, A(127), D(70), S(0), R(114)
	voice_directsound 60, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
