	.align 2
voicegroup246::
	voice_keysplit_all voicegroup246_kit - 0xc * 24
	voice_keysplit voicegroup_GSfretlessbs, KeySplitTable_GSfretlessbs
	voice_keysplit voicegroup_DPmidipiano, KeySplitTable_36_52_67
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, A(127), D(117), S(126), R(118)
	voice_keysplit voicegroup201_trumpet, KeySplitTable_GStrumpet
	voice_directsound_comp 60, 0, DirectSoundWaveData_colo_brasshit1, A(127), D(127), S(127), R(120)
	voice_directsound_comp 60, 0, DirectSoundWaveData_colo_brasshit2, A(127), D(127), S(127), R(120)

voicegroup246_kit::
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_voice_agozar, A(127), D(127), S(127), R(110)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_voice_cumbia, A(127), D(127), S(127), R(110)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_voice_jaja, A(127), D(127), S(127), R(110)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_voice_querico, A(127), D(127), S(127), R(110)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_voice_rrr, A(127), D(127), S(127), R(110)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_voice_salsa, A(127), D(127), S(127), R(110)
	voice_directsound_comp 61, 64, DirectSoundWaveData_colo_voice_salsa, A(127), D(127), S(127), R(110)
	voice_directsound_comp 62, 64, DirectSoundWaveData_colo_voice_salsa, A(127), D(127), S(127), R(110)
	voice_directsound_comp 63, 64, DirectSoundWaveData_colo_voice_salsa, A(127), D(127), S(127), R(110)
	voice_directsound_comp 64, 64, DirectSoundWaveData_colo_voice_salsa, A(127), D(127), S(127), R(110)
	voice_directsound_comp 65, 64, DirectSoundWaveData_colo_voice_salsa, A(127), D(127), S(127), R(110)
	voice_directsound_comp 66, 64, DirectSoundWaveData_colo_voice_salsa, A(127), D(127), S(127), R(110)
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(120)
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
	voice_directsound 61, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 62, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 63, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 64, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 65, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 66, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 67, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(115)
	voice_directsound 60, 120, DirectSoundWaveData_sc88pro_mute_high_conga, 255, 0, 255, 0
	voice_directsound 60, 120, DirectSoundWaveData_dp_sd90_standard2_muted_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 60, 120, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 61, 120, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 62, 120, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 63, 120, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 60, 26, DirectSoundWaveData_dp_sd90_standard2_cabasa, A(127), D(100), S(90), R(120)
	voice_directsound 61, 26, DirectSoundWaveData_dp_sd90_standard2_cabasa, A(127), D(100), S(90), R(120)
