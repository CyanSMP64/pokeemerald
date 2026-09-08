	.align 2
voicegroup201::
	voice_directsound 72, 0, DirectSoundWaveData_bw_plugsound_pro_glockenspiel_72, A(127), D(75), S(1), R(116)
	voice_keysplit voicegroup201_synbass, KeySplitTable_BWsynbass
	voice_keysplit voicegroup201_strings, KeySplitTable_BWstrings
	voice_keysplit voicegroup201_trumpet, KeySplitTable_GStrumpet
	voice_directsound 43, 0, DirectSoundWaveData_hg_plugsound_pro_cello_sus_43, A(120), D(100), S(127), R(116)
	voice_keysplit voicegroup201_pizz, KeySplitTable_BWpizz_34
	voice_keysplit voicegroup201_flute, KeySplitTable_BWflute2_23
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(100), R(116)
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_bw_ps19_trumpet_sus_f_72, A(127), D(127), S(127), R(120)
	voice_none
	voice_keysplit_all voicegroup201_drumset - 0xc * 33

voicegroup201_synbass::
	voice_directsound 36, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_36, A(127), D(125), S(120), R(120)
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_48, A(127), D(125), S(120), R(120)

voicegroup201_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(122), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(122), D(100), S(110), R(116)

voicegroup201_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_bw_atc_pet_sect_c4_32, A(124), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_bw_atc_pet_sect_a4_32, A(124), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_bw_atc_pet_sect_g5_32, A(127), D(90), S(115), R(116)

voicegroup201_pizz::
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_69, A(127), D(80), S(1), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_77, A(127), D(80), S(1), R(116)

voicegroup201_flute::
	voice_directsound 81, 0, DirectSoundWaveData_bw_ps55_flute_81_22, A(127), D(90), S(100), R(118)
	voice_directsound 89, 0, DirectSoundWaveData_bw_ps55_flute_89_22, A(127), D(90), S(100), R(118)

voicegroup201_drumset::
	voice_directsound 64, 64, DirectSoundWaveData_bw_kick_power_32, A(127), D(127), S(127), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_bw_kick_power_32, A(127), D(127), S(127), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_bw_kick_power_32, A(127), D(127), S(127), R(116)
	voice_directsound 67, 64, DirectSoundWaveData_bw_kick_power_32, A(127), D(127), S(127), R(116)
	voice_directsound 68, 64, DirectSoundWaveData_bw_kick_power_32, A(127), D(127), S(127), R(116)
	voice_directsound 69, 64, DirectSoundWaveData_bw_kick_power_32, A(127), D(127), S(127), R(116)
	voice_directsound 70, 64, DirectSoundWaveData_bw_kick_power_32, A(127), D(127), S(127), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 104, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 61, 104, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 62, 104, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 63, 104, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 60, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 61, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 62, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 63, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 64, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 65, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 66, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 67, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 68, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 69, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 70, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 71, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 72, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 73, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 74, 104, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 64, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 65, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 66, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 67, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 63, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 64, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 65, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 66, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 67, 114, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 14, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
