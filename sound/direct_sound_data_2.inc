	.macro camelot_synth_sound type:req offset:req step:req depth:req init:req
	.4byte 0x40000000, 0x01058920, 0, 0
	.byte 0x80
	.byte \type
	.if \type != 0
	.else
	.byte \offset
	.byte \step
	.byte \depth
	.byte \init
	.endif
	.byte 0, 0
	.endm

	.macro camelot_square_basic duty_cycle:req
	camelot_synth_sound 0, \duty_cycle, 0, 0, 0
	.endm

	.align 2
DirectSoundSynthData_squ50::
	camelot_square_basic 128
	
	.align 2
DirectSoundWaveData_dp_sd90_mg303_bass::
	.incbin "sound/direct_sound_samples/dp_sd90_mg303_bass.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_61::
	.incbin "sound/direct_sound_samples/dp_ew_pop_brass_3tp_sus_61.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_73::
	.incbin "sound/direct_sound_samples/dp_ew_pop_brass_3tp_sus_73.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_83::
	.incbin "sound/direct_sound_samples/dp_ew_pop_brass_3tp_sus_83.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_harmonica2::
	.incbin "sound/direct_sound_samples/dp_sd90_harmonica2.bin"
	
	.align 2
DirectSoundWaveData_dp_retro_sampler_organ_b3_ham_60::
	.incbin "sound/direct_sound_samples/dp_retro_sampler_organ_b3_ham_60.bin"
	
	.align 2
DirectSoundWaveData_dp_retro_sampler_organ_b3_ham_72::
	.incbin "sound/direct_sound_samples/dp_retro_sampler_organ_b3_ham_72.bin"
	
@	.align 2
@DirectSoundWaveData_dp_sd90_french_accordion_36::
@	.incbin "sound/direct_sound_samples/dp_sd90_french_accordion_36.bin"
@	
@	.align 2
@DirectSoundWaveData_dp_sd90_french_accordion_48::
@	.incbin "sound/direct_sound_samples/dp_sd90_french_accordion_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_accordion_60::
	.incbin "sound/direct_sound_samples/dp_sd90_french_accordion_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_accordion_72::
	.incbin "sound/direct_sound_samples/dp_sd90_french_accordion_72.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_36::
	.incbin "sound/direct_sound_samples/dp_sd90_strings2_36.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_48::
	.incbin "sound/direct_sound_samples/dp_sd90_strings2_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_60::
	.incbin "sound/direct_sound_samples/dp_sd90_strings2_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_72::
	.incbin "sound/direct_sound_samples/dp_sd90_strings2_72.bin"
	
@	.align 2
@DirectSoundWaveData_dp_ew_grand_piano_24::
@	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_24.bin"
@	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_36::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_36.bin"
@	
@	.align 2
@DirectSoundWaveData_dp_ew_grand_piano_43::
@	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_43.bin"
@	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_48::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_48.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_60::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_60.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_67::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_67.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_72::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_72.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_77::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_77.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_84::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_84.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_96::
	.incbin "sound/direct_sound_samples/dp_ew_grand_piano_96.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_marimba2_60::
	.incbin "sound/direct_sound_samples/dp_sd90_marimba2_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_marimba2_72::
	.incbin "sound/direct_sound_samples/dp_sd90_marimba2_72.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_marimba2_84::
	.incbin "sound/direct_sound_samples/dp_sd90_marimba2_84.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_organ2::
	.incbin "sound/direct_sound_samples/dp_sd90_organ2.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_crash::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_crash.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_clap::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_clap.bin"

	.align 2
DirectSoundWaveData_dp_dance_drums_kick::
	.incbin "sound/direct_sound_samples/dp_dance_drums_kick.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_kick::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_kick.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_power2_snare::
	.incbin "sound/direct_sound_samples/dp_sd90_power2_snare.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_chh::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_chh.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_ohh::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_ohh.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3::
	.incbin "sound/direct_sound_samples/dp_zg_dpt_ambient_16_crash_3.bin"
	
	.align 2
DirectSoundWaveData_dp_sc88pro_p5_bass::
	.incbin "sound/direct_sound_samples/dp_sc88pro_p5_bass.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_slap_bass1::
	.incbin "sound/direct_sound_samples/dp_sd90_slap_bass1.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_solo_bone_48::
	.incbin "sound/direct_sound_samples/dp_sd90_solo_bone_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_solo_bone_60::
	.incbin "sound/direct_sound_samples/dp_sd90_solo_bone_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_solo_bone_72::
	.incbin "sound/direct_sound_samples/dp_sd90_solo_bone_72.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_horns2_48::
	.incbin "sound/direct_sound_samples/dp_sd90_french_horns2_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_horns2_72::
	.incbin "sound/direct_sound_samples/dp_sd90_french_horns2_72.bin"
	
@	.align 2
@DirectSoundWaveData_dp_sd90_violin_vib_36::
@	.incbin "sound/direct_sound_samples/dp_sd90_violin_vib_36.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_violin_vib_60::
	.incbin "sound/direct_sound_samples/dp_sd90_violin_vib_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_violin_vib_72::
	.incbin "sound/direct_sound_samples/dp_sd90_violin_vib_72.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_violin_vib_84::
	.incbin "sound/direct_sound_samples/dp_sd90_violin_vib_84.bin"
	
	.align 2
DirectSoundWaveData_dp_qy70_doublsaw::
	.incbin "sound/direct_sound_samples/dp_qy70_doublsaw.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_60::
	.incbin "sound/direct_sound_samples/dp_classic_orchestra_2_harp_long_60.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_72::
	.incbin "sound/direct_sound_samples/dp_classic_orchestra_2_harp_long_72.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_84::
	.incbin "sound/direct_sound_samples/dp_classic_orchestra_2_harp_long_84.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_96::
	.incbin "sound/direct_sound_samples/dp_classic_orchestra_2_harp_long_96.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_40::
	.incbin "sound/direct_sound_samples/dp_ps16_dist_gtr_40.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_48::
	.incbin "sound/direct_sound_samples/dp_ps16_dist_gtr_48.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_64::
	.incbin "sound/direct_sound_samples/dp_ps16_dist_gtr_64.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_76::
	.incbin "sound/direct_sound_samples/dp_ps16_dist_gtr_76.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_83::
	.incbin "sound/direct_sound_samples/dp_ps16_dist_gtr_83.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_of_tutti_hit_major::
	.incbin "sound/direct_sound_samples/dp_zg_of_tutti_hit_major.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_of_tutti_hit_minor::
	.incbin "sound/direct_sound_samples/dp_zg_of_tutti_hit_minor.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_48::
	.incbin "sound/direct_sound_samples/dp_sd90_perky_spin_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_60::
	.incbin "sound/direct_sound_samples/dp_sd90_perky_spin_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_72::
	.incbin "sound/direct_sound_samples/dp_sd90_perky_spin_72.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_84::
	.incbin "sound/direct_sound_samples/dp_sd90_perky_spin_84.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_reverse_cymbal::
	.incbin "sound/direct_sound_samples/dp_sd90_reverse_cymbal.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_timpani2_48::
	.incbin "sound/direct_sound_samples/dp_sd90_timpani2_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_timpani2_60::
	.incbin "sound/direct_sound_samples/dp_sd90_timpani2_60.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_pick_bass::
	.incbin "sound/direct_sound_samples/dp_zg_pick_bass.bin"
	
@	.align 2
@DirectSoundWaveData_dp_sd90_tuba2_36::
@	.incbin "sound/direct_sound_samples/dp_sd90_tuba2_36.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tuba2_48::
	.incbin "sound/direct_sound_samples/dp_sd90_tuba2_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_flute2_72::
	.incbin "sound/direct_sound_samples/dp_sd90_flute2_72.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_flute2_84::
	.incbin "sound/direct_sound_samples/dp_sd90_flute2_84.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_flute2_96::
	.incbin "sound/direct_sound_samples/dp_sd90_flute2_96.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_woody_bass_31::
	.incbin "sound/direct_sound_samples/dp_zg_woody_bass_31.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_woody_bass_38::
	.incbin "sound/direct_sound_samples/dp_zg_woody_bass_38.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_woody_bass_44::
	.incbin "sound/direct_sound_samples/dp_zg_woody_bass_44.bin"

	.align 2
DirectSoundWaveData_dp_zg_woody_bass_50::
	.incbin "sound/direct_sound_samples/dp_zg_woody_bass_50.bin"

	.align 2
DirectSoundWaveData_dp_sd90_glocken2::
	.incbin "sound/direct_sound_samples/dp_sd90_glocken2.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_timpani_41::
	.incbin "sound/direct_sound_samples/dp_classic_orchestra_timpani_41.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_timpani_46::
	.incbin "sound/direct_sound_samples/dp_classic_orchestra_timpani_46.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_orchestra_snare::
	.incbin "sound/direct_sound_samples/dp_sd90_orchestra_snare.bin"
	
@	.align 2
@DirectSoundWaveData_dp_sd90_vibraphone2_36::
@	.incbin "sound/direct_sound_samples/dp_sd90_vibraphone2_36.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_48::
	.incbin "sound/direct_sound_samples/dp_sd90_vibraphone2_48.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_60::
	.incbin "sound/direct_sound_samples/dp_sd90_vibraphone2_60.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_72::
	.incbin "sound/direct_sound_samples/dp_sd90_vibraphone2_72.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_84::
	.incbin "sound/direct_sound_samples/dp_sd90_vibraphone2_84.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_96::
	.incbin "sound/direct_sound_samples/dp_sd90_vibraphone2_96.bin"

	.align 2
DirectSoundWaveData_dp_sd90_soft_rhodes_60::
	.incbin "sound/direct_sound_samples/dp_sd90_soft_rhodes_60.bin"

	.align 2
DirectSoundWaveData_dp_sd90_soft_rhodes_72::
	.incbin "sound/direct_sound_samples/dp_sd90_soft_rhodes_72.bin"

	.align 2
DirectSoundWaveData_dp_trinity_pop_u_wit_dis::
	.incbin "sound/direct_sound_samples/dp_trinity_pop_u_wit_dis.bin"

	.align 2
DirectSoundWaveData_dp_zg_bass_filter_slaps::
	.incbin "sound/direct_sound_samples/dp_zg_bass_filter_slaps.bin"

	.align 2
DirectSoundWaveData_dp_ps13_classic_choir_ahh_48::
	.incbin "sound/direct_sound_samples/dp_ps13_classic_choir_ahh_48.bin"
	
	.align 2
DirectSoundWaveData_dp_ps13_classic_choir_ahh_60::
	.incbin "sound/direct_sound_samples/dp_ps13_classic_choir_ahh_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tubular_bell2_48::
	.incbin "sound/direct_sound_samples/dp_sd90_tubular_bell2_48.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tubular_bell2_60::
	.incbin "sound/direct_sound_samples/dp_sd90_tubular_bell2_60.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tubular_bell2_72::
	.incbin "sound/direct_sound_samples/dp_sd90_tubular_bell2_72.bin"
@	
@	.align 2
@DirectSoundWaveData_dp_sd90_tubular_bell2_84::
@	.incbin "sound/direct_sound_samples/dp_sd90_tubular_bell2_84.bin"
	
	.align 2
DirectSoundWaveData_dp_qy70_dance_kick::
	.incbin "sound/direct_sound_samples/dp_qy70_dance_kick.bin"
	
	.align 2
DirectSoundWaveData_dp_qy70_dance_snare::
	.incbin "sound/direct_sound_samples/dp_qy70_dance_snare.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_tom::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_tom.bin"
	
	.align 2
DirectSoundWaveData_dp_dance_drums_ride_bell::
	.incbin "sound/direct_sound_samples/dp_dance_drums_ride_bell.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_panned_hats_open_closed_1::
	.incbin "sound/direct_sound_samples/dp_zg_panned_hats_open_closed_1.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_wet_tight_thunder::
	.incbin "sound/direct_sound_samples/dp_zg_wet_tight_thunder.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_room2_tom::
	.incbin "sound/direct_sound_samples/dp_sd90_room2_tom.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_panned_hats_ped3::
	.incbin "sound/direct_sound_samples/dp_zg_panned_hats_ped3.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_wet_crossfade_snare2::
	.incbin "sound/direct_sound_samples/dp_zg_wet_crossfade_snare2.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_radio_compressor_kick::
	.incbin "sound/direct_sound_samples/dp_zg_radio_compressor_kick.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_cabasa::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_cabasa.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_whistle2::
	.incbin "sound/direct_sound_samples/dp_sd90_whistle2.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tr808_snare::
	.incbin "sound/direct_sound_samples/dp_sd90_tr808_snare.bin"

	.align 2
DirectSoundWaveData_dp_dance_drums_ride::
	.incbin "sound/direct_sound_samples/dp_dance_drums_ride.bin"

	.align 2
DirectSoundWaveData_dp_sd90_standard2_high_conga::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_high_conga.bin"

	.align 2
DirectSoundWaveData_dp_sd90_standard2_muted_high_conga::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_muted_high_conga.bin"

	.align 2
DirectSoundWaveData_dp_sd90_standard2_open_triangle::
	.incbin "sound/direct_sound_samples/dp_sd90_standard2_open_triangle.bin"

	.align 2
DirectSoundWaveData_dp_sd90_fm_e_piano_60::
	.incbin "sound/direct_sound_samples/dp_sd90_fm_e_piano_60.bin"

	.align 2
DirectSoundWaveData_dp_sd90_fm_e_piano_72::
	.incbin "sound/direct_sound_samples/dp_sd90_fm_e_piano_72.bin"

	.align 2
DirectSoundWaveData_dp_ps41_violin_pizzicato_forte_67::
	.incbin "sound/direct_sound_samples/dp_ps41_violin_pizzicato_forte_67.bin"

	.align 2
DirectSoundWaveData_dp_ps41_violin_pizzicato_forte_79::
	.incbin "sound/direct_sound_samples/dp_ps41_violin_pizzicato_forte_79.bin"

	.align 2
DirectSoundWaveData_dp_ps16_stingray_bass_hard::
	.incbin "sound/direct_sound_samples/dp_ps16_stingray_bass_hard.bin"

	.align 2
DirectSoundWaveData_dp_ps55_cello_section_61::
	.incbin "sound/direct_sound_samples/dp_ps55_cello_section_61.bin"

	.align 2
DirectSoundWaveData_dp_ps51_french_horns_59::
	.incbin "sound/direct_sound_samples/dp_ps51_french_horns_59.bin"

@	.align 2
@DirectSoundWaveData_dp_sd90_atack_clav1_36::
@	.incbin "sound/direct_sound_samples/dp_sd90_atack_clav1_36.bin"
@
@	.align 2
@DirectSoundWaveData_dp_sd90_atack_clav1_48::
@	.incbin "sound/direct_sound_samples/dp_sd90_atack_clav1_48.bin"

	.align 2
DirectSoundWaveData_dp_sd90_atack_clav1_60::
	.incbin "sound/direct_sound_samples/dp_sd90_atack_clav1_60.bin"

	.align 2
DirectSoundWaveData_dp_sy77_clarinet_60::
	.incbin "sound/direct_sound_samples/dp_sy77_clarinet_60.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_60::
	.incbin "sound/direct_sound_samples/hg_sampletank_string_orchestra_60.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_69::
	.incbin "sound/direct_sound_samples/hg_sampletank_string_orchestra_69.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_77::
	.incbin "sound/direct_sound_samples/hg_sampletank_string_orchestra_77.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_84::
	.incbin "sound/direct_sound_samples/hg_sampletank_string_orchestra_84.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_53::
	.incbin "sound/direct_sound_samples/hg_kfl_french_horn_53.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_62::
	.incbin "sound/direct_sound_samples/hg_kfl_french_horn_62.bin"
	
@	.align 2
@DirectSoundWaveData_hg_kfl_french_horn_71::
@	.incbin "sound/direct_sound_samples/hg_kfl_french_horn_71.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_ensemble_53::
	.incbin "sound/direct_sound_samples/hg_kfl_french_horn_ensemble_53.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_ensemble_62::
	.incbin "sound/direct_sound_samples/hg_kfl_french_horn_ensemble_62.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_ensemble_71::
	.incbin "sound/direct_sound_samples/hg_kfl_french_horn_ensemble_71.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trumpet_ensemble_60::
	.incbin "sound/direct_sound_samples/hg_kfl_trumpet_ensemble_60.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trumpet_ensemble_69::
	.incbin "sound/direct_sound_samples/hg_kfl_trumpet_ensemble_69.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trumpet_ensemble_79::
	.incbin "sound/direct_sound_samples/hg_kfl_trumpet_ensemble_79.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_double_bass_hard_36::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_jazz_double_bass_hard_36.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_double_bass_hard_48::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_jazz_double_bass_hard_48.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_flute_sus_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_69::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_flute_sus_69.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_77::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_flute_sus_77.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_84::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_flute_sus_84.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_oboe_64::
	.incbin "sound/direct_sound_samples/hg_kfl_oboe_64.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_oboe_72::
	.incbin "sound/direct_sound_samples/hg_kfl_oboe_72.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_oboe_81::
	.incbin "sound/direct_sound_samples/hg_kfl_oboe_81.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_cello_sus_43::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_cello_sus_43.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_cello_sus_52::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_cello_sus_52.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_cello_sus_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_cello_sus_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_elastik_36::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_elastik_36.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_elastik_48::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_elastik_48.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trombone_ensemble_43::
	.incbin "sound/direct_sound_samples/hg_kfl_trombone_ensemble_43.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trombone_ensemble_52::
	.incbin "sound/direct_sound_samples/hg_kfl_trombone_ensemble_52.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trombone_ensemble_60::
	.incbin "sound/direct_sound_samples/hg_kfl_trombone_ensemble_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_violin_sus_64::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_violin_sus_64.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_violin_sus_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_violin_sus_72.bin"
	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_violin_sus_81::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_violin_sus_81.bin"
	
	.align 2
DirectSoundWaveData_hg_ewso_orch_chimes_67::
	.incbin "sound/direct_sound_samples/hg_ewso_orch_chimes_67.bin"
	
	.align 2
DirectSoundWaveData_hg_ewso_orch_chimes_72::
	.incbin "sound/direct_sound_samples/hg_ewso_orch_chimes_72.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_cello_ensemble_pizz_43::
	.incbin "sound/direct_sound_samples/hg_kfl_cello_ensemble_pizz_43.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_cello_ensemble_pizz_52::
	.incbin "sound/direct_sound_samples/hg_kfl_cello_ensemble_pizz_52.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_60::
	.incbin "sound/direct_sound_samples/hg_kfl_violin_ensemble_pizz_60.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_69::
	.incbin "sound/direct_sound_samples/hg_kfl_violin_ensemble_pizz_69.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_77::
	.incbin "sound/direct_sound_samples/hg_kfl_violin_ensemble_pizz_77.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_xylophone_60::
	.incbin "sound/direct_sound_samples/hg_kfl_xylophone_60.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_xylophone_69::
	.incbin "sound/direct_sound_samples/hg_kfl_xylophone_69.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_xylophone_77::
	.incbin "sound/direct_sound_samples/hg_kfl_xylophone_77.bin"
	
	.align 2
DirectSoundWaveData_hg_sampletank_clarinet_55::
	.incbin "sound/direct_sound_samples/hg_sampletank_clarinet_55.bin"
	
	.align 2
DirectSoundWaveData_hg_sampletank_clarinet_64::
	.incbin "sound/direct_sound_samples/hg_sampletank_clarinet_64.bin"
	
	.align 2
DirectSoundWaveData_hg_sampletank_clarinet_72::
	.incbin "sound/direct_sound_samples/hg_sampletank_clarinet_72.bin"
	
@	.align 2
@DirectSoundWaveData_hg_kfl_marimba_60::
@	.incbin "sound/direct_sound_samples/hg_kfl_marimba_60.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_marimba_72::
	.incbin "sound/direct_sound_samples/hg_kfl_marimba_72.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_marimba_84::
	.incbin "sound/direct_sound_samples/hg_kfl_marimba_84.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_vibraphone1_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_vibraphone1_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_vibraphone1_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_vibraphone1_72.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_glockenspiel_60::
	.incbin "sound/direct_sound_samples/hg_kfl_glockenspiel_60.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_glockenspiel_72::
	.incbin "sound/direct_sound_samples/hg_kfl_glockenspiel_72.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_timpani_55::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_timpani_55.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_timpani_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_timpani_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_timpani_67::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_timpani_67.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_crash_cymbal2::
	.incbin "sound/direct_sound_samples/hg_battery3_rock_crash_cymbal2.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_cymbals_a_due::
	.incbin "sound/direct_sound_samples/hg_kfl_cymbals_a_due.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_rack_tom1::
	.incbin "sound/direct_sound_samples/hg_battery3_rock_rack_tom1.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_rack_tom2::
	.incbin "sound/direct_sound_samples/hg_battery3_rock_rack_tom2.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_floor_tom1::
	.incbin "sound/direct_sound_samples/hg_battery3_rock_floor_tom1.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_floor_tom2::
	.incbin "sound/direct_sound_samples/hg_battery3_rock_floor_tom2.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_chinese::
	.incbin "sound/direct_sound_samples/hg_battery3_chinese.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_hihat_open::
	.incbin "sound/direct_sound_samples/hg_battery3_hihat_open.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_hihat_closed::
	.incbin "sound/direct_sound_samples/hg_battery3_hihat_closed.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_orchestra_hit_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_orchestra_hit_72.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_79::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_orchestra_hit_79.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_84::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_orchestra_hit_84.bin"
	
	.align 2
DirectSoundWaveData_hg_ps13_classic_choir_ahh_60::
	.incbin "sound/direct_sound_samples/hg_ps13_classic_choir_ahh_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_36::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_36.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_48::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_48.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_72.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_84::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_84.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_full_organ_slow_48.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_full_organ_slow_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_full_organ_slow_72.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_harp_48::
	.incbin "sound/direct_sound_samples/hg_kfl_harp_48.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_harp_60::
	.incbin "sound/direct_sound_samples/hg_kfl_harp_60.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_harp_72::
	.incbin "sound/direct_sound_samples/hg_kfl_harp_72.bin"
	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_36::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_oct_36.bin"
@	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_48::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_oct_48.bin"
@	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_60::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_oct_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_acoustic_grand_piano_oct_72.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_ampeg_ac_bass_full_45::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_ampeg_ac_bass_full_45.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_ampeg_ac_bass_full_57::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_ampeg_ac_bass_full_57.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_splash::
	.incbin "sound/direct_sound_samples/hg_battery3_splash.bin"
	
	.align 2
DirectSoundWaveData_hg_kaeru_cafe_hyoshigi::
	.incbin "sound/direct_sound_samples/hg_kaeru_cafe_hyoshigi.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_taiko::
	.incbin "sound/direct_sound_samples/hg_machfive2_taiko.bin"
	
	.align 2
DirectSoundWaveData_hg_kaeru_cafe_kotsu::
	.incbin "sound/direct_sound_samples/hg_kaeru_cafe_kotsu.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_shamisen1_50::
	.incbin "sound/direct_sound_samples/hg_machfive2_shamisen1_50.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_shamisen1_58::
	.incbin "sound/direct_sound_samples/hg_machfive2_shamisen1_58.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_shamisen1_67::
	.incbin "sound/direct_sound_samples/hg_machfive2_shamisen1_67.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_bassoon_sus_40::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_bassoon_sus_40.bin"
	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_bassoon_sus_48::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_bassoon_sus_48.bin"
@	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_bassoon_sus_57::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_bassoon_sus_57.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_a_suitcase_medium_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_a_suitcase_medium_60.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_a_suitcase_medium_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_a_suitcase_medium_72.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_koto3_52::
	.incbin "sound/direct_sound_samples/hg_machfive2_koto3_52.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_koto3_60::
	.incbin "sound/direct_sound_samples/hg_machfive2_koto3_60.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_koto3_69::
	.incbin "sound/direct_sound_samples/hg_machfive2_koto3_69.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_organ_48::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_jazz_organ_48.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_organ_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_jazz_organ_60.bin"
	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_jazz_organ_72::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_jazz_organ_72.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_music_box_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_music_box_60.bin"
	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_music_box_72::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_music_box_72.bin"
@	
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_music_box_84::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_music_box_84.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_taiko2::
	.incbin "sound/direct_sound_samples/hg_kaeru_cafe_taiko2.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_taiko3::
	.incbin "sound/direct_sound_samples/hg_kaeru_cafe_taiko3.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_okedo_ohdaiko_rim::
	.incbin "sound/direct_sound_samples/hg_kaeru_cafe_okedo_ohdaiko_rim.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_martin_soft2_43::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_martin_soft2_43.bin"

@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_martin_soft2_55::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_martin_soft2_55.bin"
@
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_martin_soft2_64::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_martin_soft2_64.bin"
@
@	.align 2
@DirectSoundWaveData_hg_plugsound_pro_martin_soft2_72::
@	.incbin "sound/direct_sound_samples/hg_plugsound_pro_martin_soft2_72.bin"

	.align 2
DirectSoundWaveData_hg_discovery_japan_suzu::
	.incbin "sound/direct_sound_samples/hg_discovery_japan_suzu.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_kodaiko2::
	.incbin "sound/direct_sound_samples/hg_kaeru_cafe_kodaiko2.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_square_wave_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_square_wave_72.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_rock_piano_60::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_rock_piano_60.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_rock_piano_72::
	.incbin "sound/direct_sound_samples/hg_plugsound_pro_rock_piano_72.bin"

	.align 2
DirectSoundWaveData_bw_zg_of_tutti_hit_major::
	.incbin "sound/direct_sound_samples/bw_zg_of_tutti_hit_major.bin"

	.align 2
DirectSoundWaveData_bw_kfl_french_horn_ensemble_48::
	.incbin "sound/direct_sound_samples/bw_kfl_french_horn_ensemble_48.bin"

	.align 2
DirectSoundWaveData_bw_independence_pro_khso_trombones_stc::
	.incbin "sound/direct_sound_samples/bw_independence_pro_khso_trombones_stc.bin"

	.align 2
DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up::
	.incbin "sound/direct_sound_samples/bw_independence_pro_khso_all_strings_spc_up.bin"

	.align 2
DirectSoundWaveData_bw_unknown_snare_roll::
	.incbin "sound/direct_sound_samples/bw_unknown_snare_roll.bin"

	.align 2
DirectSoundWaveData_bw_kfl_harp_55::
	.incbin "sound/direct_sound_samples/bw_kfl_harp_55.bin"

	.align 2
DirectSoundWaveData_bw_kfl_harp_67::
	.incbin "sound/direct_sound_samples/bw_kfl_harp_67.bin"

	.align 2
DirectSoundWaveData_bw_kfl_harp_76::
	.incbin "sound/direct_sound_samples/bw_kfl_harp_76.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_72::
	.incbin "sound/direct_sound_samples/bw_plugsound_pro_acoustic_grand_piano_72.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_84::
	.incbin "sound/direct_sound_samples/bw_plugsound_pro_acoustic_grand_piano_84.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_glockenspiel_72::
	.incbin "sound/direct_sound_samples/bw_plugsound_pro_glockenspiel_72.bin"

	.align 2
DirectSoundWaveData_bw_halionone_hard_sync_solo_35::
	.incbin "sound/direct_sound_samples/bw_halionone_hard_sync_solo_35.bin"

	.align 2
DirectSoundWaveData_bw_ewso_6fh_rips_f::
	.incbin "sound/direct_sound_samples/bw_ewso_6fh_rips_f.bin"

	.align 2
DirectSoundWaveData_bw_ewso_6fh_rips_s::
	.incbin "sound/direct_sound_samples/bw_ewso_6fh_rips_s.bin"

	.align 2
DirectSoundWaveData_bw_ps15_hihat20::
	.incbin "sound/direct_sound_samples/bw_ps15_hihat20.bin"

	.align 2
DirectSoundWaveData_bw_ps15_hihat21::
	.incbin "sound/direct_sound_samples/bw_ps15_hihat21.bin"

	.align 2
DirectSoundWaveData_bw_ps15_kick66::
	.incbin "sound/direct_sound_samples/bw_ps15_kick66.bin"

	.align 2
DirectSoundWaveData_bw_ps15_kick120::
	.incbin "sound/direct_sound_samples/bw_ps15_kick120.bin"

	.align 2
DirectSoundWaveData_bw_ps55_flute_81_22::
	.incbin "sound/direct_sound_samples/bw_ps55_flute_81_22.bin"

	.align 2
DirectSoundWaveData_bw_ps55_flute_89_22::
	.incbin "sound/direct_sound_samples/bw_ps55_flute_89_22.bin"

	.align 2
DirectSoundWaveData_bw_ps19_trumpet_sus_f_72::
	.incbin "sound/direct_sound_samples/bw_ps19_trumpet_sus_f_72.bin"

	.align 2
DirectSoundWaveData_bw_sfx_reshiram_flame::
	.incbin "sound/direct_sound_samples/bw_sfx_reshiram_flame.bin"

	.align 2
DirectSoundWaveData_bw_sfx_zekrom_zap::
	.incbin "sound/direct_sound_samples/bw_sfx_zekrom_zap.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_43::
	.incbin "sound/direct_sound_samples/bw_plugsound_pro_fend_slap1_pull_43.bin"

	.align 2
DirectSoundWaveData_bw_sd90_mg303_bass_42::
	.incbin "sound/direct_sound_samples/bw_sd90_mg303_bass_42.bin"

	.align 2
DirectSoundWaveData_bw_sd90_mg303_bass_66::
	.incbin "sound/direct_sound_samples/bw_sd90_mg303_bass_66.bin"

	.align 2
DirectSoundWaveData_bw_sd90_saw_wave_66::
	.incbin "sound/direct_sound_samples/bw_sd90_saw_wave_66.bin"

	.align 2
DirectSoundWaveData_bw_sd90_saw_wave_85::
	.incbin "sound/direct_sound_samples/bw_sd90_saw_wave_85.bin"

	.align 2
DirectSoundWaveData_bw_sd90_orch_hit2::
	.incbin "sound/direct_sound_samples/bw_sd90_orch_hit2.bin"

	.align 2
DirectSoundWaveData_bw_sd90_car_stop::
	.incbin "sound/direct_sound_samples/bw_sd90_car_stop.bin"

	.align 2
DirectSoundWaveData_bw_sd90_car_crash::
	.incbin "sound/direct_sound_samples/bw_sd90_car_crash.bin"

	.align 2
DirectSoundWaveData_bw_halionone_t9_analog_clap::
	.incbin "sound/direct_sound_samples/bw_halionone_t9_analog_clap.bin"

	.align 2
DirectSoundWaveData_bw_zg_cb_fx_loop6_kick::
	.incbin "sound/direct_sound_samples/bw_zg_cb_fx_loop6_kick.bin"

	.align 2
DirectSoundWaveData_bw_zg_cb_fx_loop6_snare::
	.incbin "sound/direct_sound_samples/bw_zg_cb_fx_loop6_snare.bin"

	.align 2
DirectSoundWaveData_bw_sd90_power2_snare_chorused::
	.incbin "sound/direct_sound_samples/bw_sd90_power2_snare_chorused.bin"

	.align 2
DirectSoundWaveData_bw_sd90_standard2_splash::
	.incbin "sound/direct_sound_samples/bw_sd90_standard2_splash.bin"

	.align 2
DirectSoundWaveData_bw_sd90_timpani2_37::
	.incbin "sound/direct_sound_samples/bw_sd90_timpani2_37.bin"

	.align 2
DirectSoundWaveData_bw_sd90_timpani2_49::
	.incbin "sound/direct_sound_samples/bw_sd90_timpani2_49.bin"

	.align 2
DirectSoundWaveData_bw_sd90_timpani2_61::
	.incbin "sound/direct_sound_samples/bw_sd90_timpani2_61.bin"

	.align 2
DirectSoundWaveData_bw_sd90_analog_snare_reverb::
	.incbin "sound/direct_sound_samples/bw_sd90_analog_snare_reverb.bin"

	.align 2
DirectSoundWaveData_bw_kfl_mark_i_classic_72::
	.incbin "sound/direct_sound_samples/bw_kfl_mark_i_classic_72.bin"

	.align 2
DirectSoundWaveData_b2_halion_t9_analog_kick::
	.incbin "sound/direct_sound_samples/b2_halion_t9_analog_kick.bin"

	.align 2
DirectSoundWaveData_b2_halionone_t9_analog_snare::
	.incbin "sound/direct_sound_samples/b2_halionone_t9_analog_snare.bin"

	.align 2
DirectSoundWaveData_b2_independence_pro_reso_bass_33::
	.incbin "sound/direct_sound_samples/b2_independence_pro_reso_bass_33.bin"

	.align 2
DirectSoundWaveData_b2_independence_pro_reso_bass_38::
	.incbin "sound/direct_sound_samples/b2_independence_pro_reso_bass_38.bin"

	.align 2
DirectSoundWaveData_b2_independence_pro_power_chords_combi_1::
	.incbin "sound/direct_sound_samples/b2_independence_pro_power_chords_combi_1.bin"

	.align 2
DirectSoundWaveData_b2_independence_pro_power_chords_combi_2::
	.incbin "sound/direct_sound_samples/b2_independence_pro_power_chords_combi_2.bin"

	.align 2
DirectSoundWaveData_b2_independence_pro_power_chords_combi_3::
	.incbin "sound/direct_sound_samples/b2_independence_pro_power_chords_combi_3.bin"

	.align 2
DirectSoundWaveData_b2_omnisphere_aggressive_tendencies::
	.incbin "sound/direct_sound_samples/b2_omnisphere_aggressive_tendencies.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_1::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_1.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_2::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_2.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_3::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_3.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_4::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_4.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_5::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_5.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_6::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_6.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_7::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_7.bin"

	.align 2
DirectSoundWaveData_b2_stylus_rmx_groove106_8::
	.incbin "sound/direct_sound_samples/b2_stylus_rmx_groove106_8.bin"

	.align 2
DirectSoundWaveData_b2_ewso_suspense_string_fx::
	.incbin "sound/direct_sound_samples/b2_ewso_suspense_string_fx.bin"

	.align 2
DirectSoundWaveData_b2_ew_ra_chinese_gong_vs::
	.incbin "sound/direct_sound_samples/b2_ew_ra_chinese_gong_vs.bin"

	.align 2
DirectSoundWaveData_b2_ewso_3_snares::
	.incbin "sound/direct_sound_samples/b2_ewso_3_snares.bin"

	.align 2
DirectSoundWaveData_undertale_vanish::
	.incbin "sound/direct_sound_samples/undertale_vanish.bin"

	.align 2
DirectSoundWaveData_vineboom::
	.incbin "sound/direct_sound_samples/cries/notcries/vineboom.bin"

	.align 2
DirectSoundWaveData_smwbass::
	.incbin "sound/direct_sound_samples/smwbass.bin"

	.align 2
DirectSoundWaveData_smwbrass1::
	.incbin "sound/direct_sound_samples/smwbrass1.bin"

	.align 2
DirectSoundWaveData_smwbrass2::
	.incbin "sound/direct_sound_samples/smwbrass2.bin"

	.align 2
DirectSoundWaveData_smwchime::
	.incbin "sound/direct_sound_samples/smwchime.bin"

	.align 2
DirectSoundWaveData_smwclar::
	.incbin "sound/direct_sound_samples/smwclar.bin"

	.align 2
DirectSoundWaveData_smwflute::
	.incbin "sound/direct_sound_samples/smwflute.bin"

	.align 2
DirectSoundWaveData_smwhat::
	.incbin "sound/direct_sound_samples/smwhat.bin"

	.align 2
DirectSoundWaveData_smwhatp::
	.incbin "sound/direct_sound_samples/smwhatp.bin"

	.align 2
DirectSoundWaveData_smwkick::
	.incbin "sound/direct_sound_samples/smwkick.bin"

	.align 2
DirectSoundWaveData_smwrhode::
	.incbin "sound/direct_sound_samples/smwrhode.bin"

	.align 2
DirectSoundWaveData_smwstring1::
	.incbin "sound/direct_sound_samples/smwstring1.bin"

	.align 2
DirectSoundWaveData_smwstring2::
	.incbin "sound/direct_sound_samples/smwstring2.bin"
