	.align 2
voicegroup217::
	voice_none
	voice_keysplit_all voicegroup217_drumset - 0xc * 35
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_fm_e_piano_72, A(127), D(80), S(0), R(116)
	voice_keysplit_all voicegroup217_dancekit - 0xc * 38
	voice_directsound 72, 0, DirectSoundWaveData_dp_retro_sampler_organ_b3_ham_72, A(127), D(127), S(127), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)
	voice_keysplit voicegroup217_guitar, KeySplitTable_DPdistgt1
	voice_directsound 36, 0, DirectSoundWaveData_dp_zg_bass_filter_slaps, A(127), D(125), S(127), R(118)
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_mg303_bass, A(127), D(127), S(127), R(112)
	voice_keysplit voicegroup217_violin, KeySplitTable_GSviolin
	voice_keysplit voicegroup217_timpani1, KeySplitTable_DPtimpani1
	voice_keysplit voicegroup217_strings, KeySplitTable_BWstrings
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_timpani2_60, A(127), D(70), S(1), R(115)
	voice_keysplit voicegroup217_trombone, KeySplitTable_62
	voice_keysplit voicegroup217_horn, KeySplitTable_DPfhorns
	voice_directsound 48, 0, DirectSoundWaveData_dp_ps13_classic_choir_ahh_48, A(127), D(120), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_dp_ps13_classic_choir_ahh_60, A(127), D(120), S(127), R(120)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_whistle2, A(127), D(90), S(70), R(118)
	voice_keysplit voicegroup217_hit, KeySplitTable_62_64_67

voicegroup217_drumset::
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 62, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 63, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 64, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 65, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 80, DirectSoundWaveData_dp_sd90_standard2_chh, A(127), D(127), S(120), R(125)
	voice_directsound 61, 80, DirectSoundWaveData_dp_sd90_standard2_chh, A(127), D(127), S(120), R(125)
	voice_directsound 62, 80, DirectSoundWaveData_dp_sd90_standard2_chh, A(127), D(127), S(120), R(125)
	voice_directsound 63, 80, DirectSoundWaveData_dp_sd90_standard2_chh, A(127), D(127), S(120), R(125)
	voice_directsound 60, 80, DirectSoundWaveData_dp_sd90_standard2_ohh, A(127), D(102), S(0), R(127)
	voice_directsound 61, 80, DirectSoundWaveData_dp_sd90_standard2_ohh, A(127), D(102), S(0), R(127)
	voice_directsound 62, 80, DirectSoundWaveData_dp_sd90_standard2_ohh, A(127), D(102), S(0), R(127)
	voice_directsound 63, 80, DirectSoundWaveData_dp_sd90_standard2_ohh, A(127), D(102), S(0), R(127)
	voice_directsound 64, 80, DirectSoundWaveData_dp_sd90_standard2_ohh, A(127), D(102), S(0), R(127)
	voice_directsound 65, 80, DirectSoundWaveData_dp_sd90_standard2_ohh, A(127), D(102), S(0), R(127)
	voice_directsound 59, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 60, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 61, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 62, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 63, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 60, 36, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(70), S(0), R(114)

voicegroup217_dancekit::
	voice_directsound 60, 64, DirectSoundWaveData_dp_qy70_dance_snare, A(127), D(127), S(127), R(127)

voicegroup217_guitar::
	voice_directsound 40, 0, DirectSoundWaveData_dp_ps16_dist_gtr_40, A(127), D(30), S(1), R(126)
	voice_directsound 48, 0, DirectSoundWaveData_dp_ps16_dist_gtr_48, A(127), D(30), S(1), R(126)
	voice_directsound 64, 0, DirectSoundWaveData_dp_ps16_dist_gtr_64, A(127), D(30), S(1), R(126)
	voice_directsound 76, 0, DirectSoundWaveData_dp_ps16_dist_gtr_76, A(127), D(30), S(1), R(126)
	voice_directsound 83, 0, DirectSoundWaveData_dp_ps16_dist_gtr_83, A(127), D(30), S(1), R(126)

voicegroup217_violin::
	voice_directsound 64, 0, DirectSoundWaveData_hg_plugsound_pro_violin_sus_64, A(127), D(110), S(120), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_hg_plugsound_pro_violin_sus_72, A(127), D(100), S(120), R(116)
	voice_directsound 81, 0, DirectSoundWaveData_hg_plugsound_pro_violin_sus_81, A(127), D(100), S(120), R(116)

voicegroup217_timpani1::
	voice_directsound 41, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_41, A(127), D(80), S(1), R(116)
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)

voicegroup217_strings::
	voice_directsound 60, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_60, A(127), D(100), S(110), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_69, A(127), D(100), S(110), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_77, A(127), D(100), S(110), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_hg_sampletank_string_orchestra_84, A(127), D(100), S(110), R(116)

voicegroup217_trombone::
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_solo_bone_60, A(127), D(100), S(100), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_solo_bone_72, A(127), D(100), S(100), R(116)

voicegroup217_horn::
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_french_horns2_48, A(115), D(117), S(118), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_french_horns2_72, A(127), D(117), S(127), R(116)

voicegroup217_hit::
	voice_directsound 60, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_minor_60, A(127), D(127), S(127), R(116)
	voice_directsound 63, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_minor_63, A(127), D(127), S(127), R(116)
	voice_directsound 66, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_minor_66, A(127), D(127), S(127), R(116)
	voice_directsound 69, 0, DirectSoundWaveData_bw_zg_of_tutti_hit_minor_69, A(127), D(127), S(127), R(116)
