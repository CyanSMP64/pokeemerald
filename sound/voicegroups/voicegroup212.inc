	.align 2
voicegroup212::
	voice_none
	voice_none
	voice_directsound 60, 0, DirectSoundWaveData_hg_kfl_harp_60, A(127), D(90), S(1), R(116)
	voice_keysplit voicegroup212_timpani, KeySplitTable_BWghetsistimpani
	voice_keysplit voicegroup212_trumpet, KeySplitTable_BWtrumpet_01
	voice_keysplit voicegroup212_trombone, KeySplitTable_DPtimpani1
	voice_none
	voice_keysplit voicegroup212_choir, KeySplitTable_BWchoir_123
	voice_directsound 73, 0, DirectSoundWaveData_bw_breth_noiselopp_cs4_32, A(127), D(60), S(1), R(120)
	voice_directsound 73, 0, DirectSoundWaveData_bw_g_cis_musboxl_cs4_32, A(127), D(80), S(1), R(116)
	voice_none
	voice_directsound 67, 0, DirectSoundWaveData_bw_g_cis_l_taiko_g3_32, A(127), D(80), S(1), R(116)
	voice_directsound 61, 0, DirectSoundWaveData_bw_ge_cs1_loop1_32, A(127), D(127), S(120), R(116)
	voice_directsound 61, 0, DirectSoundWaveData_bw_ei_cs1_big_32, A(127), D(127), S(127), R(125)
	voice_directsound 61, 0, DirectSoundWaveData_bw_chiss_shot_32, A(127), D(127), S(127), R(125)
	voice_directsound 73, 0, DirectSoundWaveData_bw_gee_sop_cs4_22, A(127), D(127), S(120), R(116)
	voice_none
	voice_none
	voice_directsound 72, 0, DirectSoundWaveData_bw_dora_loop_22, A(127), D(127), S(120), R(116)
	voice_directsound 36, 0, DirectSoundWaveData_bw_wadaiko_g, A(127), D(127), S(120), R(116)
	voice_directsound 67, 0, DirectSoundWaveData_bw_wadaiko_g_lop, A(127), D(80), S(1), R(116)
	voice_keysplit_all voicegroup212_drumset - 0xc * 52

voicegroup212_timpani::
	voice_directsound 37, 0, DirectSoundWaveData_bw_sd90_timpani2_37, A(127), D(80), S(1), R(116)
	voice_directsound 49, 0, DirectSoundWaveData_bw_sd90_timpani2_49, A(127), D(80), S(1), R(116)
	voice_directsound 61, 0, DirectSoundWaveData_bw_sd90_timpani2_61, A(127), D(80), S(1), R(116)

voicegroup212_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_bw_atc_pet_sect_c4_32, A(124), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_bw_atc_pet_sect_a4_32, A(124), D(90), S(115), R(116)

voicegroup212_trombone::
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(100), R(116)
	voice_directsound 52, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_52, A(127), D(100), S(100), R(116)

voicegroup212_choir::
	voice_directsound 57, 0, DirectSoundWaveData_bw_choirs_male_a3_32, A(127), D(100), S(110), R(115)
	voice_directsound 65, 0, DirectSoundWaveData_bw_choirs_male_f4_32, A(127), D(100), S(110), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_bw_choirs_male_c5_32, A(127), D(100), S(110), R(118)

voicegroup212_drumset::
	voice_directsound 60, 20, DirectSoundWaveData_hg_battery3_chinese, A(127), D(80), S(0), R(110)
