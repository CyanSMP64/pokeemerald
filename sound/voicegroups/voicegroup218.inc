	.align 2
voicegroup218::
	voice_none
	voice_keysplit voicegroup218_strings, KeySplitTable_BWstrings_123
	voice_directsound 43, 0, DirectSoundWaveData_hg_plugsound_pro_cello_sus_43, A(120), D(100), S(127), R(116)
	voice_directsound 55, 0, DirectSoundWaveData_hg_plugsound_pro_timpani_55, A(127), D(50), S(1), R(116)
	voice_directsound 43, 0, DirectSoundWaveData_hg_kfl_trombone_ensemble_43, A(127), D(100), S(100), R(116)
	voice_keysplit voicegroup218_horn, KeySplitTable_GSclarinet
	voice_keysplit voicegroup218_trumpet, KeySplitTable_BWpizz_34
	voice_directsound 72, 0, DirectSoundWaveData_bw_ps19_trumpet_sus_f_72, A(127), D(127), S(127), R(120)
	voice_keysplit_all voicegroup218_drumset - 0xc * 38

voicegroup218_strings::
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(127), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(127), D(100), S(110), R(116)

voicegroup218_horn::
	voice_directsound 53, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_53, A(127), D(110), S(120), R(116)
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(110), S(120), R(116)

voicegroup218_trumpet::
	voice_directsound 69, 0, DirectSoundWaveData_bw_atc_pet_sect_a4_32, A(124), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_bw_atc_pet_sect_g5_32, A(127), D(90), S(115), R(116)

voicegroup218_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 61, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 62, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 63, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 64, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 65, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 66, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 67, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 68, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 69, 64, DirectSoundWaveData_bw_snare_btry_gm_32, A(127), D(127), S(120), R(116)
	voice_directsound 60, 40, DirectSoundWaveData_hg_kfl_cymbals_a_due, A(127), D(70), S(0), R(114)
