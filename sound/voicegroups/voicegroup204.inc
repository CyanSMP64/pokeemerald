	.align 2
voicegroup204::
	voice_directsound 36, 0, DirectSoundWaveData_hg_plugsound_pro_elastik_36, A(127), D(125), S(120), R(120)
	voice_directsound 69, 0, DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_69, A(127), D(80), S(1), R(116)
	voice_none
	voice_keysplit voicegroup204_horn, KeySplitTable_BWfhorns_23
	voice_directsound 45, 0, DirectSoundWaveData_bw_tuba_a2_32, A(127), D(110), S(115), R(116)
	voice_keysplit voicegroup204_timpani, KeySplitTable_BWtimpani_01
	voice_keysplit voicegroup204_strings, KeySplitTable_BWstrings_012
	voice_keysplit voicegroup204_trumpet, KeySplitTable_GStrumpet
	voice_keysplit voicegroup204_synth, KeySplitTable_BWdrawbarorg_01
	voice_directsound 60, 0, DirectSoundWaveData_bw_drum_loop_subway01_22, A(127), D(127), S(127), R(124)
	voice_directsound 60, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_major, A(127), D(127), S(127), R(116)
	voice_keysplit_all voicegroup204_drumset - 0xc * 36

voicegroup204_horn::
	voice_directsound 62, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_62, A(127), D(110), S(120), R(116)
	voice_directsound 71, 0, DirectSoundWaveData_hg_kfl_french_horn_ensemble_71, A(127), D(110), S(120), R(116)

voicegroup204_timpani::
	voice_directsound 55, 0, DirectSoundWaveData_hg_plugsound_pro_timpani_55, A(127), D(50), S(1), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_hg_plugsound_pro_timpani_60, A(127), D(50), S(1), R(116)

voicegroup204_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(122), D(100), S(110), R(116)

voicegroup204_trumpet::
	voice_directsound 60, 0, DirectSoundWaveData_bw_atc_pet_sect_c4_32, A(124), D(90), S(115), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_bw_atc_pet_sect_a4_32, A(124), D(90), S(115), R(116)
	voice_directsound 79, 0, DirectSoundWaveData_bw_atc_pet_sect_g5_32, A(127), D(90), S(115), R(116)

voicegroup204_synth::
	voice_directsound 60, 0, DirectSoundWaveData_bw_europat_max_wb_c3_32, A(127), D(100), S(110), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_bw_europat_max_wb_c4_32, A(127), D(100), S(110), R(120)

voicegroup204_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_bw_unknown_synth_kick_wcs, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_bw_unknown_synth_kick_wcs, A(127), D(127), S(127), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_bw_unknown_synth_kick_wcs, A(127), D(127), S(127), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_bw_unknown_synth_kick_wcs, A(127), D(127), S(127), R(120)
	voice_directsound 60, 40, DirectSoundWaveData_bw_snare_groove_32, A(127), D(114), S(90), R(116)
	voice_directsound 61, 40, DirectSoundWaveData_bw_snare_groove_32, A(127), D(114), S(90), R(116)
	voice_directsound 60, 35, DirectSoundWaveData_bw_hihat_closed_groove_32, A(127), D(105), S(0), R(116)
	voice_directsound 61, 35, DirectSoundWaveData_bw_hihat_closed_groove_32, A(127), D(105), S(0), R(116)
	voice_directsound 62, 35, DirectSoundWaveData_bw_hihat_closed_groove_32, A(127), D(105), S(0), R(116)
	voice_directsound 63, 35, DirectSoundWaveData_bw_hihat_closed_groove_32, A(127), D(105), S(0), R(116)
	voice_directsound 60, 35, DirectSoundWaveData_bw_hihat_open_groove_32, A(127), D(65), S(0), R(116)
	voice_directsound 61, 35, DirectSoundWaveData_bw_hihat_open_groove_32, A(127), D(65), S(0), R(116)
	voice_directsound 62, 35, DirectSoundWaveData_bw_hihat_open_groove_32, A(127), D(65), S(0), R(116)
	voice_directsound 60, 25, DirectSoundWaveData_bw_plugsound_pro_analog_crash, A(127), D(78), S(0), R(116)
	voice_directsound 62, 100, DirectSoundWaveData_bw_plugsound_pro_analog_crash, A(127), D(78), S(0), R(116)
