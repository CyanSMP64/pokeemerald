	.align 2
voicegroup191::
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(127), D(127), S(127), R(126)
	voice_keysplit_all voicegroup_DPdrumset1 - 0xc * 28
	voice_keysplit voicegroup_DPgrandpiano, KeySplitTable_DPgrandpiano
	voice_keysplit voicegroup_DPgrandpianolow, KeySplitTable_DPgrandpianolow
	voice_keysplit voicegroup_DPrhodes, KeySplitTable_DPrhodes
	voice_keysplit voicegroup_DPfmep, KeySplitTable_DPfmep
	voice_keysplit_all voicegroup_DPdrumset2 - 0xc * 27
	voice_keysplit voicegroup_DPclav, KeySplitTable_DPclav
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 96, 0, DirectSoundWaveData_dp_sd90_glocken2, A(127), D(90), S(0), R(116)
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(126), D(100), S(50), R(118)
	voice_keysplit voicegroup_DPvibes, KeySplitTable_DPvibes
	voice_keysplit voicegroup_DPmarimba, KeySplitTable_DPmarimba
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_DPtubbell, KeySplitTable_DPtubbell
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit_all voicegroup_DPdancekit - 0xc * 36
	voice_keysplit voicegroup_DProtaryorg, KeySplitTable_DProtaryorg
	voice_keysplit voicegroup_DPhammondorg, KeySplitTable_DPhammondorg
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_organ2, A(127), D(122), S(122), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_dp_qy70_doublsaw, A(127), D(120), S(127), R(120)
	voice_keysplit voicegroup_DPaccordion, KeySplitTable_DPaccordion
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_harmonica2, A(116), D(90), S(110), R(120)
	voice_none
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_dp_tengan_wind, A(127), D(127), S(127), R(125)
	voice_keysplit voicegroup_DPdistgt1, KeySplitTable_DPdistgt1
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(126), D(100), S(40), R(127)
	voice_keysplit voicegroup_DPwoodbass, KeySplitTable_DPwoodbass
	voice_directsound 28, 0, DirectSoundWaveData_dp_ps16_stingray_bass_hard, A(127), D(60), S(1), R(116)
	voice_directsound 28, 0, DirectSoundWaveData_dp_zg_pick_bass, A(127), D(60), S(1), R(116)
	voice_directsound 38, 0, DirectSoundWaveData_dp_zg_woody_bass_38, A(127), D(127), S(127), R(118)
	voice_directsound 31, 0, DirectSoundWaveData_dp_slapbass_g1_16, A(127), D(127), S(127), R(112)
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_slap_bass1, A(127), D(127), S(127), R(114)
	voice_directsound 36, 0, DirectSoundWaveData_dp_zg_bass_filter_slaps, A(127), D(125), S(127), R(118)
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_mg303_bass, A(127), D(127), S(127), R(112)
	voice_keysplit voicegroup_DPviolin, KeySplitTable_DPviolin	@ sd90 violin vib
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(127), D(50), S(0), R(125)
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_wind, A(99), D(99), S(99), R(110)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_DPpizz, KeySplitTable_DPpizz
	voice_keysplit voicegroup_DPharp, KeySplitTable_DPharp
	voice_keysplit voicegroup_DPtimpani1, KeySplitTable_DPtimpani1
	voice_keysplit voicegroup_DPstrings, KeySplitTable_DPstrings
	voice_directsound 61, 0, DirectSoundWaveData_dp_ps55_cello_section_61,  A(127), D(120), S(127), R(118)
	voice_directsound 59, 0, DirectSoundWaveData_dp_ps51_french_horns_59,  A(127), D(120), S(127), R(110)
	voice_keysplit voicegroup_DPtimpani2, KeySplitTable_DPtimpani2
	voice_directsound 60, 0, DirectSoundSynthData_squ50,  A(127), D(70), S(0), R(110)
	voice_directsound 48, 0, DirectSoundWaveData_sc88pro_square_wave, A(127), D(70), S(0), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_bubbles, A(125), D(127), S(127), R(127)
	voice_directsound 48, 0, DirectSoundWaveData_dp_trinity_pop_u_wit_dis, A(127), D(120), S(127), R(112)
	voice_keysplit voicegroup_DPtrumpet1, KeySplitTable_DPtrumpet1
	voice_keysplit voicegroup_DPtrombone, KeySplitTable_DPtrombone
	voice_keysplit voicegroup_DPtuba, KeySplitTable_DPtuba
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_DPfhorns, KeySplitTable_DPfhorns
	voice_keysplit voicegroup_DPdistgt2, KeySplitTable_DPdistgt2
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundSynthData_squ12, A(124), D(100), S(80), R(110)
	voice_directsound 36, 0, DirectSoundWaveData_dp_sc88pro_p5_bass, A(127), D(125), S(127), R(114)
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, A(127), D(117), S(126), R(118)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(124), D(100), S(80), R(110)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_dp_sy77_clarinet_60, A(127), D(100), S(100), R(114)
	voice_directsound 60, 0, DirectSoundSynthData_squ50, A(124), D(100), S(80), R(120)
	voice_keysplit voicegroup_DPflute, KeySplitTable_DPflute
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 48, 0, DirectSoundWaveData_dp_ps13_classic_choir_ahh_48, A(127), D(120), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_dp_ps13_classic_choir_ahh_60, A(127), D(120), S(127), R(120)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_whistle2, A(127), D(90), S(70), R(118)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_dp_zg_of_tutti_hit_major, A(127), D(120), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_dp_zg_of_tutti_hit_minor, A(127), D(120), S(127), R(120)

voicegroup_DPdrumset1::		@ drum set 1
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(127), R(126)
	voice_directsound 60, 64, DirectSoundWaveData_dp_zg_wet_tight_thunder, A(127), D(127), S(120), R(125)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 58, DirectSoundWaveData_dp_rim1_roop, A(127), D(116), S(0), R(126)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(127)
	voice_directsound 60, 70, DirectSoundWaveData_dp_sd90_standard2_clap, A(127), D(127), S(120), R(125)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_directsound 48, 30, DirectSoundWaveData_dp_sd90_room2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 60, 80, DirectSoundWaveData_dp_sd90_standard2_chh, A(127), D(127), S(120), R(125)
	voice_directsound 53, 40, DirectSoundWaveData_dp_sd90_room2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 60, 80, DirectSoundWaveData_dp_zg_panned_hats_ped3, A(127), D(127), S(122), R(126)
	voice_directsound 60, 50, DirectSoundWaveData_dp_sd90_room2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 60, 80, DirectSoundWaveData_dp_sd90_standard2_ohh, A(127), D(102), S(0), R(127)
	voice_directsound 66, 100, DirectSoundWaveData_dp_sd90_room2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 72, 107, DirectSoundWaveData_dp_sd90_room2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 57, 64, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(90), S(0), R(114)
	voice_directsound 74, 117, DirectSoundWaveData_dp_sd90_room2_tom, A(127), D(127), S(127), R(126)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 59, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 84, DirectSoundWaveData_trinity_cymbal_crash, A(127), D(70), S(0), R(110)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 36, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(70), S(0), R(114)
	voice_directsound 61, 102, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(70), S(0), R(114)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0

voicegroup_DPgrandpiano::			@ grand piano
	voice_directsound 43, 0, DirectSoundWaveData_dp_ew_grand_piano_43, A(127), D(75), S(1), R(110)
	voice_directsound 48, 0, DirectSoundWaveData_dp_ew_grand_piano_48, A(127), D(75), S(1), R(110)
	voice_directsound 60, 0, DirectSoundWaveData_dp_ew_grand_piano_60, A(127), D(75), S(1), R(116)
	voice_directsound 67, 0, DirectSoundWaveData_dp_ew_grand_piano_67, A(127), D(80), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_ew_grand_piano_72, A(127), D(85), S(1), R(116)
	voice_directsound 77, 0, DirectSoundWaveData_dp_ew_grand_piano_77, A(127), D(90), S(1), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_dp_ew_grand_piano_84, A(127), D(90), S(1), R(116)
	voice_directsound 96, 0, DirectSoundWaveData_dp_ew_grand_piano_96, A(127), D(90), S(1), R(116)

voicegroup_DPgrandpianolow::			@ grand piano (low)
	voice_directsound 24, 0, DirectSoundWaveData_dp_ew_grand_piano_24, A(127), D(75), S(1), R(108)
	voice_directsound 36, 0, DirectSoundWaveData_dp_ew_grand_piano_36, A(127), D(75), S(1), R(110)

voicegroup_DPrhodes::			@ rhodes
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_soft_rhodes_60, A(127), D(100), S(0), R(125)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_soft_rhodes_72, A(127), D(100), S(0), R(125)

voicegroup_DPfmep::			@ fm e piano
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_fm_e_piano_60, A(127), D(80), S(0), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_fm_e_piano_72, A(127), D(80), S(0), R(116)

voicegroup_DPdrumset2::			@ drum set 2
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_reverse_cymbal, A(3), D(127), S(127), R(126)
	voice_directsound 60, 64, DirectSoundWaveData_dp_dance_drums_kick, A(127), D(127), S(127), R(127)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_standard2_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_orchestra_snare, A(127), D(127), S(127), R(127)
	voice_directsound 60, 70, DirectSoundWaveData_dp_sd90_standard2_clap, A(127), D(127), S(120), R(125)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sd90_power2_snare, A(127), D(114), S(90), R(127)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 58, DirectSoundWaveData_dp_sd90_tr808_snare, A(127), D(116), S(0), R(124)
	voice_directsound 60, 64, DirectSoundWaveData_dp_zg_wet_tight_thunder, A(127), D(127), S(120), R(125)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 64, DirectSoundWaveData_dp_rim1_roop, A(127), D(0), S(110), R(126)
	voice_directsound 60, 64, DirectSoundWaveData_dp_sne1_roop, A(127), D(0), S(110), R(125)
	voice_directsound 60, 64, DirectSoundWaveData_dp_handclup1, A(127), D(127), S(120), R(125)
	voice_directsound 60, 64, DirectSoundWaveData_dp_zg_wet_crossfade_snare2, A(127), D(0), S(110), R(125)
	voice_directsound 48, 30, DirectSoundWaveData_dp_sd90_standard2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 60, 82, DirectSoundWaveData_dp_closehight, A(127), D(127), S(120), R(125)
	voice_directsound 53, 40, DirectSoundWaveData_dp_sd90_standard2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 60, 82, DirectSoundWaveData_dp_zg_panned_hats_ped3, A(127), D(127), S(120), R(125)
	voice_directsound 60, 50, DirectSoundWaveData_dp_sd90_standard2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 60, 82, DirectSoundWaveData_dp_zg_panned_hats_open_closed_1, A(125), D(110), S(0), R(125)
	voice_directsound 66, 90, DirectSoundWaveData_dp_sd90_standard2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 72, 100, DirectSoundWaveData_dp_sd90_standard2_tom, A(127), D(127), S(127), R(125)
	voice_directsound 57, 64, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(90), S(0), R(114)
	voice_directsound 74, 110, DirectSoundWaveData_dp_sd90_standard2_tom, A(127), D(127), S(127), R(126)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 59, 20, DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3, A(127), D(70), S(0), R(110)
	voice_directsound 60, 30, DirectSoundWaveData_dp_dance_drums_ride_bell, A(127), D(70), S(0), R(106)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 36, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(70), S(0), R(114)
	voice_directsound 61, 102, DirectSoundWaveData_dp_sd90_standard2_crash, A(127), D(70), S(0), R(114)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 90, DirectSoundWaveData_dp_bongo_16, A(127), D(127), S(127), R(120)
	voice_directsound 57, 90, DirectSoundWaveData_dp_bongo_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 20, DirectSoundWaveData_dp_sd90_standard2_muted_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 60, 24, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 57, 26, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 60, 26, DirectSoundWaveData_dp_africa_dr_16, A(127), D(127), S(127), R(120)
	voice_directsound 60, 101, DirectSoundWaveData_dp_africa_dr_16, A(127), D(127), S(127), R(120)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 100, DirectSoundWaveData_dp_sd90_standard2_muted_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 60, 98, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_directsound 63, 102, DirectSoundWaveData_dp_sd90_standard2_high_conga, A(127), D(127), S(127), R(120)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 44, DirectSoundWaveData_dp_sd90_standard2_open_triangle, A(127), D(120), S(0), R(127)
	voice_directsound 60, 44, DirectSoundWaveData_dp_sd90_standard2_open_triangle, A(127), D(80), S(0), R(118)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0

voicegroup_DPclav::
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_atack_clav1_36, A(127), D(75), S(1), R(126)
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_atack_clav1_48, A(127), D(75), S(1), R(126)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_atack_clav1_60, A(127), D(75), S(1), R(126)

voicegroup_DPvibes::
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_vibraphone2_36, A(127), D(90), S(0), R(118)
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_vibraphone2_48, A(127), D(90), S(0), R(118)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_vibraphone2_60, A(127), D(90), S(0), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_vibraphone2_72, A(127), D(90), S(0), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_vibraphone2_84, A(127), D(90), S(0), R(116)
	voice_directsound 96, 0, DirectSoundWaveData_dp_sd90_vibraphone2_96, A(127), D(90), S(0), R(116)

voicegroup_DPmarimba::
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_marimba2_60, A(127), D(90), S(0), R(114)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_marimba2_72, A(127), D(90), S(0), R(114)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_marimba2_84, A(127), D(90), S(0), R(114)

voicegroup_DPtubbell::
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_tubular_bell2_48, A(127), D(80), S(0), R(110)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_tubular_bell2_60, A(127), D(80), S(0), R(110)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_tubular_bell2_72, A(127), D(80), S(0), R(110)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_tubular_bell2_84, A(127), D(80), S(0), R(110)

voicegroup_DPdancekit::
	voice_directsound 60, 64, DirectSoundWaveData_dp_qy70_dance_kick, A(127), D(127), S(127), R(120)
	voice_directsound 61, 64, DirectSoundWaveData_dp_qy70_dance_kick, A(127), D(127), S(127), R(120)
	voice_directsound 60, 64, DirectSoundWaveData_dp_qy70_dance_snare, A(127), D(127), S(127), R(127)
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none
	voice_none

voicegroup_DProtaryorg::
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_perky_spin_48, A(127), D(127), S(127), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_perky_spin_60, A(127), D(120), S(120), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_perky_spin_72, A(127), D(127), S(127), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_perky_spin_84, A(127), D(127), S(127), R(116)

voicegroup_DPhammondorg::
	voice_directsound 60, 0, DirectSoundWaveData_dp_retro_sampler_organ_b3_ham_60, A(127), D(127), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_retro_sampler_organ_b3_ham_72, A(127), D(127), S(127), R(116)

voicegroup_DPaccordion::
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_french_accordion_36, A(127), D(127), S(127), R(118)
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_french_accordion_48, A(127), D(127), S(127), R(118)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_french_accordion_60, A(120), D(120), S(117), R(118)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_french_accordion_72, A(118), D(120), S(110), R(118)

voicegroup_DPdistgt1::
	voice_directsound 40, 0, DirectSoundWaveData_dp_ps16_dist_gtr_40, A(127), D(30), S(1), R(126)
	voice_directsound 48, 0, DirectSoundWaveData_dp_ps16_dist_gtr_48, A(127), D(30), S(1), R(126)
	voice_directsound 64, 0, DirectSoundWaveData_dp_ps16_dist_gtr_64, A(127), D(30), S(1), R(126)
	voice_directsound 76, 0, DirectSoundWaveData_dp_ps16_dist_gtr_76, A(127), D(30), S(1), R(126)
	voice_directsound 83, 0, DirectSoundWaveData_dp_ps16_dist_gtr_83, A(127), D(30), S(1), R(126)

voicegroup_DPwoodbass::
	voice_directsound 31, 0, DirectSoundWaveData_dp_zg_woody_bass_31, A(127), D(60), S(1), R(118)
	voice_directsound 44, 0, DirectSoundWaveData_dp_zg_woody_bass_44, A(127), D(60), S(1), R(120)
	voice_directsound 50, 0, DirectSoundWaveData_dp_zg_woody_bass_50, A(127), D(60), S(1), R(120)

voicegroup_DPviolin::
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_violin_vib_36, A(120), D(100), S(127), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_violin_vib_60, A(120), D(90), S(127), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_violin_vib_72, A(116), D(90), S(86), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_violin_vib_84, A(110), D(90), S(70), R(116)

voicegroup_DPpizz::
	voice_directsound 67, 0, DirectSoundWaveData_dp_ps41_violin_pizzicato_forte_67, A(127), D(110), S(100), R(118)
	voice_directsound 79, 0, DirectSoundWaveData_dp_ps41_violin_pizzicato_forte_79, A(127), D(114), S(100), R(119)

voicegroup_DPharp::
	voice_directsound 60, 0, DirectSoundWaveData_dp_classic_orchestra_2_harp_long_60, A(127), D(80), S(1), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_classic_orchestra_2_harp_long_72, A(127), D(90), S(1), R(116)
	voice_directsound 84, 0, DirectSoundWaveData_dp_classic_orchestra_2_harp_long_84, A(127), D(100), S(1), R(116)
	voice_directsound 96, 0, DirectSoundWaveData_dp_classic_orchestra_2_harp_long_96, A(127), D(110), S(1), R(118)

voicegroup_DPtimpani1::
	voice_directsound 41, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_41, A(127), D(80), S(1), R(116)
	voice_directsound 46, 0, DirectSoundWaveData_dp_classic_orchestra_timpani_46, A(127), D(80), S(1), R(116)

voicegroup_DPstrings::
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_strings2_36, A(127), D(100), S(120), R(116)
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_strings2_48, A(127), D(105), S(110), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_strings2_60, A(122), D(110), S(100), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_strings2_72, A(122), D(115), S(90), R(116)

voicegroup_DPtimpani2::
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_timpani2_48, A(127), D(70), S(1), R(115)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_timpani2_60, A(127), D(70), S(1), R(115)

voicegroup_DPdistgt2::
	voice_directsound 36, 0, DirectSoundWaveData_dp_dis_gt_c1_16, A(127), D(90), S(127), R(120)
	voice_directsound 48, 0, DirectSoundWaveData_dp_dis_gt_c2_16, A(127), D(90), S(127), R(120)
	voice_directsound 60, 0, DirectSoundWaveData_dp_dis_gt_c3_16, A(127), D(90), S(127), R(120)
	voice_directsound 72, 0, DirectSoundWaveData_dp_dis_gt_c4_16, A(127), D(90), S(127), R(120)

voicegroup_DPtrumpet1::
	voice_directsound 61, 0, DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_61, A(127), D(100), S(80), R(116)
	voice_directsound 73, 0, DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_73, A(127), D(100), S(80), R(116)
	voice_directsound 83, 0, DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_83, A(127), D(110), S(80), R(116)

voicegroup_DPtrombone::
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_solo_bone_48, A(127), D(100), S(100), R(116)
	voice_directsound 60, 0, DirectSoundWaveData_dp_sd90_solo_bone_60, A(127), D(100), S(100), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_solo_bone_72, A(127), D(100), S(100), R(116)

voicegroup_DPtuba::
	voice_directsound 36, 0, DirectSoundWaveData_dp_sd90_tuba2_36, A(127), D(127), S(126), R(118)
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_tuba2_48, A(127), D(127), S(126), R(118)

voicegroup_DPfhorns::
	voice_directsound 48, 0, DirectSoundWaveData_dp_sd90_french_horns2_48, A(115), D(117), S(118), R(116)
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_french_horns2_72, A(127), D(117), S(127), R(116)

voicegroup_DPflute::
	voice_directsound 72, 0, DirectSoundWaveData_dp_sd90_flute2_72, A(127), D(90), S(100), R(118)
	voice_directsound 84, 0, DirectSoundWaveData_dp_sd90_flute2_84, A(127), D(90), S(90), R(118)
	voice_directsound 96, 0, DirectSoundWaveData_dp_sd90_flute2_96, A(127), D(90), S(67), R(118)
