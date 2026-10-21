	.align 2
voicegroup245::
	voice_keysplit_all voicegroup245_kit - 0xc * 36
	voice_keysplit voicegroup_DPtimpani1, KeySplitTable_DPtimpani1
	voice_directsound 36, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_36, A(127), D(125), S(120), R(120)
	voice_keysplit voicegroup235_guitar, KeySplitTable_42_54_68_80
	voice_directsound 57, 0, DirectSoundWaveData_dp_bluesgt_a2_16, A(127), D(10), S(120), R(116)
	voice_keysplit voicegroup_DPstrings, KeySplitTable_DPstrings
	voice_keysplit voicegroup201_trumpet, KeySplitTable_GStrumpet
	voice_keysplit voicegroup_DPmidipiano, KeySplitTable_36_52_67
	voice_keysplit voicegroup208_piano, KeySplitTable_BWeuropad_23
	voice_keysplit voicegroup205_pad, KeySplitTable_GSmarimba
	voice_square_1_alt 60, 0, 0, 0, 0, 2, 10, 1		@ psg voices for brass
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_harp, 255, 246, 0, 235
	voice_square_2 60, 0, 1, 1, 7, 15, 2	@ psg voice for high arps
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)

voicegroup245_kit::
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(116), S(70), R(120)
	voice_directsound 59, 30, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_noise_alt 84, 0, 0, 0, 1, 0, 0
	voice_directsound 60, 40, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 61, 40, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 70, DirectSoundWaveData_hg_battery3_rock_rack_tom2, A(127), D(127), S(127), R(120)
	voice_noise_alt 84, 0, 0, 0, 2, 4, 0
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 61, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(100), S(0), R(114)
	voice_directsound 60, 32, DirectSoundWaveData_dp_dance_drums_ride, A(127), D(70), S(0), R(114)
	voice_directsound 61, 32, DirectSoundWaveData_dp_dance_drums_ride, A(127), D(70), S(0), R(114)
	voice_directsound 60, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
