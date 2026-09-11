	.align 2
voicegroup205::
	voice_none
	voice_directsound 72, 0, DirectSoundWaveData_bw_plugsound_pro_glockenspiel_72, A(127), D(75), S(1), R(116)
	voice_directsound 29, 0, DirectSoundWaveData_bw_elebass01_f0_32, A(127), D(60), S(30), R(120)
	voice_keysplit voicegroup205_timpani, KeySplitTable_BWghetsistimpani_01
	voice_keysplit voicegroup205_strings, KeySplitTable_BWstrings_01
	voice_directsound 46, 0, DirectSoundWaveData_bw_sd90_orch_hit2, A(127), D(80), S(1), R(116)
	voice_keysplit voicegroup205_trumpet, KeySplitTable_GStrumpet
	voice_keysplit voicegroup205_flute, KeySplitTable_BWflute3_23
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_square_wave_72, A(127), D(100), S(110), R(116)
	voice_keysplit voicegroup205_lead, KeySplitTable_BWe4lead
	voice_keysplit voicegroup205_pad, KeySplitTable_GSmarimba
	voice_directsound 60, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_major, A(127), D(127), S(127), R(116)
	voice_keysplit_all voicegroup205_drumset - 0xc * 31
	voice_none

voicegroup205_timpani::
	voice_directsound 37, 0, DirectSoundWaveData_bw_sd90_timpani2_37, A(127), D(80), S(1), R(116)
	voice_directsound 49, 0, DirectSoundWaveData_bw_sd90_timpani2_49, A(127), D(80), S(1), R(116)

voicegroup205_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)

voicegroup205_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_bw_atc_pet_sect_c4_32, A(124), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_bw_atc_pet_sect_a4_32, A(124), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_bw_atc_pet_sect_g5_32, A(127), D(90), S(115), R(116)

voicegroup205_flute::
	voice_directsound 81, 0, DirectSoundWaveData_bw_ps55_flute_81_22, A(127), D(90), S(100), R(118)
	voice_directsound 89, 0, DirectSoundWaveData_bw_ps55_flute_89_22, A(127), D(90), S(100), R(118)

voicegroup205_lead::
	voice_directsound 66, 0, DirectSoundWaveData_bw_sd90_saw_wave_66, A(127), D(100), S(100), R(116)
	voice_directsound 85, 0, DirectSoundWaveData_bw_sd90_saw_wave_85, A(127), D(100), S(100), R(116)

voicegroup205_pad::
	voice_directsound 60, 0, DirectSoundWaveData_bw_europat_max_wb_c3_32, A(127), D(100), S(110), R(124)
	voice_directsound 72, 0, DirectSoundWaveData_bw_europat_max_wb_c4_32, A(127), D(100), S(110), R(124)
	voice_directsound 84, 0, DirectSoundWaveData_bw_europat_max_wb_c5_32, A(127), D(110), S(110), R(124)

voicegroup205_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 64, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 65, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 66, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 67, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 68, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 30, DirectSoundWaveData_hg_battery3_rock_floor_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 60, 40, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 61, 40, DirectSoundWaveData_hg_battery3_rock_floor_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 50, DirectSoundWaveData_hg_battery3_rock_rack_tom2, A(127), D(127), S(127), R(120)
	voice_directsound 60, 80, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 61, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 62, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 63, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 64, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 65, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 66, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 67, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 68, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 69, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 70, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 71, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 72, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 73, 100, DirectSoundWaveData_hg_battery3_rock_rack_tom1, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 84, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 64, 44, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
