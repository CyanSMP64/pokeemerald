	.align 2
voicegroup247::
	voice_keysplit_all voicegroup247_kit - 0xc * 24
	voice_directsound 36, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_36, A(127), D(125), S(120), R(120)
	voice_keysplit voicegroup245_slapbass_alt, KeySplitTable_40_46
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_coloslapbass, 0, 2, 8, 0
	voice_keysplit voicegroup205_pad, KeySplitTable_GSmarimba
	voice_keysplit voicegroup247_pad, KeySplitTable_GSmarimba
	voice_keysplit voicegroup_DPstrings, KeySplitTable_DPstrings
	voice_keysplit voicegroup_GSglocken, KeySplitTable_GSglocken
	voice_keysplit voicegroup_DPmidipiano, KeySplitTable_36_52_67
	voice_keysplit voicegroup201_trumpet, KeySplitTable_GStrumpet
	voice_square_2_alt 60, 0, 0, 0, 2, 10, 1		@ psg voices for brass
	voice_square_1_alt 60, 0, 0, 0, 0, 2, 10, 1		@ psg voices for brass
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_organ2, 255, 0, 255, 210
	voice_keysplit voicegroup_GSfhorns, KeySplitTable_GSfhorns
	voice_keysplit voicegroup235_guitar, KeySplitTable_42_54_68_80

voicegroup247_kit::
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_kick1, A(127), D(127), S(127), R(120)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_kick2, A(127), D(127), S(127), R(120)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_kick3, A(127), D(127), S(127), R(120)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_kick4, A(127), D(127), S(127), R(120)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_kick5, A(127), D(127), S(127), R(120)
	voice_directsound_comp 60, 64, DirectSoundWaveData_colo_kick6, A(127), D(127), S(127), R(120)
	voice_directsound_comp 61, 64, DirectSoundWaveData_colo_kick6, A(127), D(127), S(127), R(120)
	voice_directsound 36, 64, DirectSoundWaveData_bw_crashcym1_popkit_32, A(127), D(40), S(0), R(116)
	voice_directsound 37, 64, DirectSoundWaveData_bw_crashcym1_popkit_32, A(127), D(40), S(0), R(116)
	voice_directsound 38, 64, DirectSoundWaveData_bw_crashcym1_popkit_32, A(127), D(40), S(0), R(116)
	voice_directsound 48, 64, DirectSoundWaveData_dp_sd90_room2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 51, 64, DirectSoundWaveData_dp_sd90_tr808_snare, A(127), D(116), S(0), R(124)
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
	voice_directsound 60, 64, DirectSoundWaveData_bw_crashcym1_popkit_32, A(127), D(62), S(0), R(116)

voicegroup247_pad::
	voice_directsound 60, 0, DirectSoundWaveData_bw_europat_max_wb_c3_32, A(110), D(10), S(80), R(124)
	voice_directsound 72, 0, DirectSoundWaveData_bw_europat_max_wb_c4_32, A(110), D(10), S(80), R(124)
	voice_directsound 84, 0, DirectSoundWaveData_bw_europat_max_wb_c5_32, A(110), D(10), S(80), R(124)
