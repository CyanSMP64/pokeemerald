	.align 2
voicegroup239::
	voice_keysplit voicegroup239_piano, KeySplitTable_35_46_58_70
	voice_keysplit voicegroup239_slapbass, KeySplitTable_47
	voice_keysplit_all voicegroup239_drumset - 0xc * 31
	voice_keysplit voicegroup239_guitar, KeySplitTable_42_54_68
	voice_directsound 60, 0, DirectSoundWaveData_b2_doublsaw_c4, A(127), D(120), S(127), R(120)

voicegroup239_piano::
	voice_directsound 29, 0, DirectSoundWaveData_b2_piano_f1, A(127), D(60), S(1), R(125)
	voice_directsound 41, 0, DirectSoundWaveData_b2_piano_f2, A(127), D(50), S(1), R(116)
	voice_directsound 53, 0, DirectSoundWaveData_b2_piano_f3, A(127), D(50), S(1), R(116)
	voice_directsound 65, 0, DirectSoundWaveData_b2_piano_f4, A(127), D(50), S(1), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_b2_piano_f5, A(127), D(50), S(1), R(116)

voicegroup239_slapbass::
	voice_directsound 36, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_36, A(127), D(125), S(120), R(120)
	voice_directsound 48, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_48, A(127), D(125), S(120), R(120)

voicegroup239_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 61, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(127), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_b2_addictive_drums_snare4, A(127), D(114), S(90), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_b2_addictive_drums_snare4, A(127), D(114), S(90), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 64, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 67, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 38, DirectSoundWaveData_b2_addictive_drums_floortom, A(127), D(127), S(127), R(122)
	voice_directsound 59, 40, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 60, 112, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 61, 112, DirectSoundWaveData_hg_battery3_hihat_closed, A(127), D(100), S(0), R(120)
	voice_directsound 60, 112, DirectSoundWaveData_hg_battery3_hihat_open, A(127), D(102), S(0), R(120)
	voice_directsound 60, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 61, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 62, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 63, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 64, 86, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 63, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 64, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 65, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 66, 100, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 67, 120, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 60, 50, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 61, 50, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 62, 50, DirectSoundWaveData_b2_addictive_drums_racktom, A(127), D(127), S(127), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 84, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)

voicegroup239_guitar::
	voice_directsound 40, 0, DirectSoundWaveData_b2_pinkstrat_e2, A(127), D(30), S(1), R(120)
	voice_directsound 52, 0, DirectSoundWaveData_b2_pinkstrat_e3, A(127), D(30), S(1), R(120)
	voice_directsound 64, 0, DirectSoundWaveData_b2_pinkstrat_e4, A(127), D(30), S(1), R(120)
	voice_directsound 69, 0, DirectSoundWaveData_b2_pinkstrat_a4, A(127), D(30), S(1), R(120)
