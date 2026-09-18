	.align 2
voicegroup236::
	voice_none
	voice_keysplit voicegroup236_piano, KeySplitTable_GSvibes
	voice_keysplit voicegroup236_organ, KeySplitTable_BWdrawbarorg
	voice_directsound 36, 0, DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_36, A(127), D(125), S(120), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_b2_colress_fx, A(127), D(120), S(127), R(122)
	voice_directsound 67, 0, DirectSoundWaveData_b2_colress_hit, A(127), D(80), S(1), R(116)
	voice_keysplit_all voicegroup236_drumset - 0xc * 32
	voice_directsound 79, 0, DirectSoundWaveData_b2_unknown_sine_g5, A(127), D(125), S(120), R(122)
	voice_directsound 60, 0, DirectSoundWaveData_b2_drumloop_colress, A(127), D(127), S(127), R(127)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(126)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_b2_doublsaw_c4, A(127), D(120), S(127), R(120)
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(126), D(100), S(40), R(127)
	voice_directsound 60, 0, DirectSoundWaveData_b2_colress_voice1, A(127), D(127), S(127), R(127)
	voice_keysplit voicegroup236_voice, KeySplitTable_36_48_60_72
	voice_directsound 60, 0, DirectSoundWaveData_b2_colress_voice2, A(127), D(127), S(127), R(127)
	voice_directsound 60, 0, DirectSoundWaveData_b2_colress_voice3, A(127), D(127), S(127), R(127)
	voice_directsound 60, 0, DirectSoundWaveData_b2_colress_voice5, A(127), D(127), S(127), R(127)

voicegroup236_piano::
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_rock_piano_60, A(127), D(75), S(1), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_rock_piano_72, A(127), D(75), S(1), R(120)

voicegroup236_organ::
	voice_directsound 48, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48, A(127), D(120), S(120), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60, A(127), D(120), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72, A(127), D(120), S(127), R(116)

voicegroup236_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(127), S(120), R(116)
	voice_directsound 57, 64, DirectSoundWaveData_b2_addictive_drums_snare3, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halion_t9_analog_kick, A(127), D(127), S(120), R(116)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(116)
	voice_directsound 60, 110, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 60, 110, DirectSoundWaveData_b2_dance_open_hat_32_loop, A(127), D(90), S(0), R(127)
	voice_directsound 60, 60, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 60, 60, DirectSoundWaveData_b2_dance_open_hat_32_loop, A(127), D(90), S(0), R(127)
	voice_directsound 60, 20, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 61, 20, DirectSoundWaveData_bw_ps15_hihat21, A(127), D(127), S(127), R(127)
	voice_directsound 60, 20, DirectSoundWaveData_b2_dance_open_hat_32_loop, A(127), D(90), S(0), R(127)
	voice_directsound 61, 20, DirectSoundWaveData_b2_dance_open_hat_32_loop, A(127), D(90), S(0), R(127)
	voice_directsound 62, 20, DirectSoundWaveData_b2_dance_open_hat_32_loop, A(127), D(90), S(0), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_b2_halionone_t9_analog_snare, A(127), D(127), S(120), R(118)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 61, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 62, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 63, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 64, 64, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
	voice_directsound 60, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 61, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 62, 64, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)
	voice_directsound 60, 100, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
	voice_directsound 63, 84, DirectSoundWaveData_hg_battery3_rock_crash_cymbal2, A(127), D(90), S(0), R(114)

voicegroup236_voice::
	voice_directsound 36, 0, DirectSoundWaveData_b2_colress_voice1, A(127), D(127), S(127), R(127)
	voice_directsound 48, 0, DirectSoundWaveData_b2_colress_voice2, A(127), D(127), S(127), R(127)
	voice_directsound 60, 0, DirectSoundWaveData_b2_colress_voice3, A(127), D(127), S(127), R(127)
	voice_directsound 72, 0, DirectSoundWaveData_b2_colress_voice4, A(127), D(127), S(127), R(127)
	voice_directsound 84, 0, DirectSoundWaveData_b2_colress_voice5, A(127), D(127), S(127), R(127)
