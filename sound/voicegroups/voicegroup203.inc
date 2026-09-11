	.align 2
voicegroup203::
	voice_none
	voice_directsound 72, 0, DirectSoundWaveData_bw_plugsound_pro_glockenspiel_72, A(127), D(75), S(1), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_36, A(127), D(125), S(120), R(120)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_69, A(127), D(80), S(1), R(116)
	voice_keysplit voicegroup203_horn, KeySplitTable_BWfhorns_23
	voice_directsound 45, 0, DirectSoundWaveData_bw_tuba_a2_32, A(127), D(110), S(115), R(116)
	voice_keysplit voicegroup203_timpani, KeySplitTable_BWtimpani_01
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_keysplit voicegroup203_trumpet, KeySplitTable_GStrumpet
	voice_directsound 60, 0, DirectSoundWaveData_bw_europat_max_wb_c3_32, A(127), D(100), S(110), R(126)
	voice_directsound 60, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_major, A(127), D(127), S(127), R(116)
	voice_keysplit_all voicegroup203_drumset - 0xc * 35

voicegroup203_horn::
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(110), S(120), R(116)

voicegroup203_timpani::
	voice_directsound 55, 0, DirectSoundWaveData_hg_plugsound_pro_timpani_55, A(127), D(50), S(1), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_timpani_60, A(127), D(50), S(1), R(116)

voicegroup203_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_bw_atc_pet_sect_c4_32, A(124), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_bw_atc_pet_sect_a4_32, A(124), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_bw_atc_pet_sect_g5_32, A(127), D(90), S(115), R(116)

voicegroup203_drumset::
	voice_directsound 64, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(120), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(120), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(120), R(116)
	voice_directsound 67, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(120), R(116)
	voice_directsound 68, 64, DirectSoundWaveData_bw_power_bass_16, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 15, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 60, 30, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 61, 30, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 40, DirectSoundWaveData_hg_battery3_rock_rack_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 90, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 61, 110, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 62, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 63, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 64, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 65, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 66, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 67, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 68, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 69, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 70, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 71, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 72, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 73, 120, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 84, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 64, 44, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
