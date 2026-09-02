	.macro camelot_synth_sound type:req offset:req step:req depth:req init:req
	.4byte 0x40000000, 0x01058920, 0, 0
	.byte 0x80
	.byte \type
	.if \type == 0
	.byte \offset
	.byte \step
	.byte \depth
	.byte \init
	.byte 0
	.elseif \type == 3
	.byte \offset
	.else
	.byte 0
	.endif
	.byte 0
	.endm

	.macro camelot_square_basic_loud duty_cycle:req
	camelot_synth_sound 3, \duty_cycle, 0, 0, 0
	.endm
	
	.align 2
DirectSoundSynthData_squ12::
	camelot_square_basic_loud 32
	
	.align 2
DirectSoundSynthData_squ25::
	camelot_square_basic_loud 64
	
	.align 2
DirectSoundSynthData_squ37::
	camelot_square_basic_loud 96

	.align 2
DirectSoundSynthData_squ50::
	camelot_square_basic_loud 128

	.align 2
DirectSoundSynthData_squ62::
	camelot_square_basic_loud 160

	.align 2
DirectSoundSynthData_squ75::
	camelot_square_basic_loud 192

	.align 2
DirectSoundSynthData_squ87::
	camelot_square_basic_loud 224

	.align 2
DirectSoundWaveData_dp_sd90_mg303_bass::
	.incbin "sound/direct_sound_samples/pl/synbass2_c1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_61::
	.incbin "sound/direct_sound_samples/pl/tp_cs3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_73::
	.incbin "sound/direct_sound_samples/pl/tp_cs4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_pop_brass_3tp_sus_83::
	.incbin "sound/direct_sound_samples/pl/tp_b4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_harmonica2::
	.incbin "sound/direct_sound_samples/pl/harmonica_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_retro_sampler_organ_b3_ham_60::
	.incbin "sound/direct_sound_samples/pl/org4_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_retro_sampler_organ_b3_ham_72::
	.incbin "sound/direct_sound_samples/pl/org4_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_accordion_36::
	.incbin "sound/direct_sound_samples/pl/accordion_c1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_accordion_48::
	.incbin "sound/direct_sound_samples/pl/accordion_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_accordion_60::
	.incbin "sound/direct_sound_samples/pl/accordion_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_accordion_72::
	.incbin "sound/direct_sound_samples/pl/accordion_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_36::
	.incbin "sound/direct_sound_samples/pl/strings_c1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_48::
	.incbin "sound/direct_sound_samples/pl/strings_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_60::
	.incbin "sound/direct_sound_samples/pl/strings_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_strings2_72::
	.incbin "sound/direct_sound_samples/pl/strings_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_24::
	.incbin "sound/direct_sound_samples/pl/sty_piano_c0_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_36::
	.incbin "sound/direct_sound_samples/pl/sty_piano_c1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_43::
	.incbin "sound/direct_sound_samples/pl/sty_piano_g1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_48::
	.incbin "sound/direct_sound_samples/pl/sty_piano_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_60::
	.incbin "sound/direct_sound_samples/pl/sty_piano_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_67::
	.incbin "sound/direct_sound_samples/pl/sty_piano_g3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_72::
	.incbin "sound/direct_sound_samples/pl/sty_piano_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_77::
	.incbin "sound/direct_sound_samples/pl/sty_piano_f4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_84::
	.incbin "sound/direct_sound_samples/pl/sty_piano_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ew_grand_piano_96::
	.incbin "sound/direct_sound_samples/pl/sty_piano_c6_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_marimba2_60::
	.incbin "sound/direct_sound_samples/pl/marin_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_marimba2_72::
	.incbin "sound/direct_sound_samples/pl/marin_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_marimba2_84::
	.incbin "sound/direct_sound_samples/pl/marin_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_organ2::
	.incbin "sound/direct_sound_samples/pl/org5_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_crash::
	.incbin "sound/direct_sound_samples/pl/cymbal1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_clap::
	.incbin "sound/direct_sound_samples/pl/handclap_16.bin"

	.align 2
DirectSoundWaveData_dp_dance_drums_kick::
	.incbin "sound/direct_sound_samples/pl/bassdr2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_kick::
	.incbin "sound/direct_sound_samples/pl/bassdr1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_power2_snare::
	.incbin "sound/direct_sound_samples/pl/power_snare_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_chh::
	.incbin "sound/direct_sound_samples/pl/closed_hihat_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_ohh::
	.incbin "sound/direct_sound_samples/pl/open_hihat_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_dpt_ambient_16_crash_3::
	.incbin "sound/direct_sound_samples/pl/china_cynbal.bin"
	
	.align 2
DirectSoundWaveData_dp_sc88pro_p5_bass::
	.incbin "sound/direct_sound_samples/pl/synbass_c1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_slap_bass1::
	.incbin "sound/direct_sound_samples/pl/slapbass_c1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_solo_bone_48::
	.incbin "sound/direct_sound_samples/pl/trombone_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_solo_bone_60::
	.incbin "sound/direct_sound_samples/pl/trombone_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_solo_bone_72::
	.incbin "sound/direct_sound_samples/pl/trombone_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_horns2_48::
	.incbin "sound/direct_sound_samples/pl/f_horn_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_french_horns2_72::
	.incbin "sound/direct_sound_samples/pl/f_horn_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_violin_vib_36::
	.incbin "sound/direct_sound_samples/pl/violin_c1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_violin_vib_60::
	.incbin "sound/direct_sound_samples/pl/violin_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_violin_vib_72::
	.incbin "sound/direct_sound_samples/pl/violin_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_violin_vib_84::
	.incbin "sound/direct_sound_samples/pl/violin_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_qy70_doublsaw::
	.incbin "sound/direct_sound_samples/pl/europat_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_60::
	.incbin "sound/direct_sound_samples/pl/harp_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_72::
	.incbin "sound/direct_sound_samples/pl/harp_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_84::
	.incbin "sound/direct_sound_samples/pl/harp_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_2_harp_long_96::
	.incbin "sound/direct_sound_samples/pl/harp_c6_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_40::
	.incbin "sound/direct_sound_samples/pl/disgt_e1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_48::
	.incbin "sound/direct_sound_samples/pl/disgt_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_64::
	.incbin "sound/direct_sound_samples/pl/disgt_e3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_76::
	.incbin "sound/direct_sound_samples/pl/disgt_e4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ps16_dist_gtr_83::
	.incbin "sound/direct_sound_samples/pl/disgt_b4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_of_tutti_hit_major::
	.incbin "sound/direct_sound_samples/pl/majorhit_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_of_tutti_hit_minor::
	.incbin "sound/direct_sound_samples/pl/minorhit_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_48::
	.incbin "sound/direct_sound_samples/pl/org1_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_60::
	.incbin "sound/direct_sound_samples/pl/org1_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_72::
	.incbin "sound/direct_sound_samples/pl/org1_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_perky_spin_84::
	.incbin "sound/direct_sound_samples/pl/org1_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_reverse_cymbal::
	.incbin "sound/direct_sound_samples/pl/reverscyn_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_timpani2_48::
	.incbin "sound/direct_sound_samples/pl/merotim_c2_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_timpani2_60::
	.incbin "sound/direct_sound_samples/pl/merotim_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_pick_bass::
	.incbin "sound/direct_sound_samples/pl/pickbass_e1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tuba2_36::
	.incbin "sound/direct_sound_samples/pl/tuba_c1_22.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tuba2_48::
	.incbin "sound/direct_sound_samples/pl/tuba_c2_22.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_flute2_72::
	.incbin "sound/direct_sound_samples/pl/flute_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_flute2_84::
	.incbin "sound/direct_sound_samples/pl/flute_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_flute2_96::
	.incbin "sound/direct_sound_samples/pl/flute_c6_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_woody_bass_31::
	.incbin "sound/direct_sound_samples/pl/woodbass_g1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_woody_bass_44::
	.incbin "sound/direct_sound_samples/pl/woodbass_gs2_16.bin"

	.align 2
DirectSoundWaveData_dp_zg_woody_bass_50::
	.incbin "sound/direct_sound_samples/pl/woodbass_d3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_woody_bass_38::
	.incbin "sound/direct_sound_samples/pl/fretlessbass_d1_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_glocken2::
	.incbin "sound/direct_sound_samples/pl/glocken_c6_16.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_timpani_41::
	.incbin "sound/direct_sound_samples/pl/timpany_e_16.bin"
	
	.align 2
DirectSoundWaveData_dp_classic_orchestra_timpani_46::
	.incbin "sound/direct_sound_samples/pl/timpany_as_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_orchestra_snare::
	.incbin "sound/direct_sound_samples/pl/oct_snare_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_36::
	.incbin "sound/direct_sound_samples/pl/vibra_c1_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_48::
	.incbin "sound/direct_sound_samples/pl/vibra_c2_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_60::
	.incbin "sound/direct_sound_samples/pl/vibra_c3_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_72::
	.incbin "sound/direct_sound_samples/pl/vibra_c4_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_84::
	.incbin "sound/direct_sound_samples/pl/vibra_c5_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_vibraphone2_96::
	.incbin "sound/direct_sound_samples/pl/vibra_c6_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_soft_rhodes_60::
	.incbin "sound/direct_sound_samples/pl/el_pia_c3_22.bin"

	.align 2
DirectSoundWaveData_dp_sd90_soft_rhodes_72::
	.incbin "sound/direct_sound_samples/pl/el_pia_c4_22.bin"

	.align 2
DirectSoundWaveData_dp_trinity_pop_u_wit_dis::
	.incbin "sound/direct_sound_samples/pl/octhit_c2_16.bin"

	.align 2
DirectSoundWaveData_dp_zg_bass_filter_slaps::
	.incbin "sound/direct_sound_samples/pl/synbass1_c2_16.bin"

	.align 2
DirectSoundWaveData_dp_ps13_classic_choir_ahh_48::
	.incbin "sound/direct_sound_samples/pl/osu_choirs_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_ps13_classic_choir_ahh_60::
	.incbin "sound/direct_sound_samples/pl/mesu_choirs_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tubular_bell2_48::
	.incbin "sound/direct_sound_samples/pl/tub_bell_c3_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tubular_bell2_60::
	.incbin "sound/direct_sound_samples/pl/tub_bell_c4_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tubular_bell2_72::
	.incbin "sound/direct_sound_samples/pl/tub_bell_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tubular_bell2_84::
	.incbin "sound/direct_sound_samples/pl/tub_bell_c6_16.bin"
	
	.align 2
DirectSoundWaveData_dp_qy70_dance_kick::
	.incbin "sound/direct_sound_samples/pl/eurobass_16.bin"
	
	.align 2
DirectSoundWaveData_dp_qy70_dance_snare::
	.incbin "sound/direct_sound_samples/pl/eurosne_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_tom::
	.incbin "sound/direct_sound_samples/pl/tom_16.bin"
	
	.align 2
DirectSoundWaveData_dp_dance_drums_ride_bell::
	.incbin "sound/direct_sound_samples/pl/ridecap.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_panned_hats_open_closed_1::
	.incbin "sound/direct_sound_samples/pl/openhight.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_wet_tight_thunder::
	.incbin "sound/direct_sound_samples/pl/bass2.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_room2_tom::
	.incbin "sound/direct_sound_samples/pl/tom1_16.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_panned_hats_ped3::
	.incbin "sound/direct_sound_samples/pl/pedalhight.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_wet_crossfade_snare2::
	.incbin "sound/direct_sound_samples/pl/sne2_loop.bin"
	
	.align 2
DirectSoundWaveData_dp_zg_radio_compressor_kick::
	.incbin "sound/direct_sound_samples/pl/bassdr1.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_standard2_cabasa::
	.incbin "sound/direct_sound_samples/pl/cabassa_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_whistle2::
	.incbin "sound/direct_sound_samples/pl/whistle_c5_16.bin"
	
	.align 2
DirectSoundWaveData_dp_sd90_tr808_snare::
	.incbin "sound/direct_sound_samples/pl/808snare_16.bin"

	.align 2
DirectSoundWaveData_dp_dance_drums_ride::
	.incbin "sound/direct_sound_samples/pl/ridecynbal.bin"

	.align 2
DirectSoundWaveData_dp_sd90_standard2_high_conga::
	.incbin "sound/direct_sound_samples/pl/high_conga_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_standard2_muted_high_conga::
	.incbin "sound/direct_sound_samples/pl/mute_conga_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_standard2_open_triangle::
	.incbin "sound/direct_sound_samples/pl/triangle_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_fm_e_piano_60::
	.incbin "sound/direct_sound_samples/pl/el_pia2_c3_22.bin"

	.align 2
DirectSoundWaveData_dp_sd90_fm_e_piano_72::
	.incbin "sound/direct_sound_samples/pl/el_pia2_c4_22.bin"

	.align 2
DirectSoundWaveData_dp_ps41_violin_pizzicato_forte_67::
	.incbin "sound/direct_sound_samples/pl/pic_g4_16.bin"

	.align 2
DirectSoundWaveData_dp_ps41_violin_pizzicato_forte_79::
	.incbin "sound/direct_sound_samples/pl/pic_g5_16.bin"

	.align 2
DirectSoundWaveData_dp_ps16_stingray_bass_hard::
	.incbin "sound/direct_sound_samples/pl/sting_bass_e1_16.bin"

	.align 2
DirectSoundWaveData_dp_ps55_cello_section_61::
	.incbin "sound/direct_sound_samples/pl/octlow_cs2_16.bin"

	.align 2
DirectSoundWaveData_dp_ps51_french_horns_59::
	.incbin "sound/direct_sound_samples/pl/octlowbra_b2_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_atack_clav1_36::
	.incbin "sound/direct_sound_samples/pl/clavi_c1_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_atack_clav1_48::
	.incbin "sound/direct_sound_samples/pl/clavi_c2_16.bin"

	.align 2
DirectSoundWaveData_dp_sd90_atack_clav1_60::
	.incbin "sound/direct_sound_samples/pl/clavi_c3_16.bin"

	.align 2
DirectSoundWaveData_dp_sy77_clarinet_60::
	.incbin "sound/direct_sound_samples/pl/sy_clarinet_c3_16.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_60::
	.incbin "sound/direct_sound_samples/wb/strings_c4_22.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_69::
	.incbin "sound/direct_sound_samples/wb/strings_a4_22.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_77::
	.incbin "sound/direct_sound_samples/wb/strings_f5_22.bin"

	.align 2
DirectSoundWaveData_hg_sampletank_string_orchestra_84::
	.incbin "sound/direct_sound_samples/wb/strings_c6_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_53::
	.incbin "sound/direct_sound_samples/wb/bright_horn_f3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_62::
	.incbin "sound/direct_sound_samples/wb/bright_horn_d4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_71::
	.incbin "sound/direct_sound_samples/wb/bright_horn_b4_22.bin"

	.align 2
DirectSoundWaveData_bw_kfl_french_horn_ensemble_48::
	.incbin "sound/direct_sound_samples/wb/french_horn_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_ensemble_53::
	.incbin "sound/direct_sound_samples/wb/french_horn_f3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_ensemble_62::
	.incbin "sound/direct_sound_samples/wb/french_horn_d4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_french_horn_ensemble_71::
	.incbin "sound/direct_sound_samples/wb/french_horn_b4_22.bin"

	.align 2
DirectSoundWaveData_hg_kfl_trumpet_ensemble_60::
	.incbin "sound/direct_sound_samples/wb/trumpet_section_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trumpet_ensemble_69::
	.incbin "sound/direct_sound_samples/wb/trumpet_section_a4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trumpet_ensemble_79::
	.incbin "sound/direct_sound_samples/wb/trumpet_section_g5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_double_bass_hard_36::
	.incbin "sound/direct_sound_samples/wb/ac_bass_c2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_double_bass_hard_48::
	.incbin "sound/direct_sound_samples/wb/ac_bass_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_60::
	.incbin "sound/direct_sound_samples/wb/piccolo_flute_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_69::
	.incbin "sound/direct_sound_samples/wb/piccolo_flute_a4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_77::
	.incbin "sound/direct_sound_samples/wb/piccolo_flute_f5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_flute_sus_84::
	.incbin "sound/direct_sound_samples/wb/piccolo_flute_c6_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_oboe_64::
	.incbin "sound/direct_sound_samples/wb/oboe_e4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_oboe_72::
	.incbin "sound/direct_sound_samples/wb/oboe_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_oboe_81::
	.incbin "sound/direct_sound_samples/wb/oboe_a5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_cello_sus_43::
	.incbin "sound/direct_sound_samples/wb/chello_solo_g2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_cello_sus_52::
	.incbin "sound/direct_sound_samples/wb/chello_solo_e3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_cello_sus_60::
	.incbin "sound/direct_sound_samples/wb/chello_solo_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_elastik_36::
	.incbin "sound/direct_sound_samples/wb/synth_bass_c2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_elastik_48::
	.incbin "sound/direct_sound_samples/wb/synth_bass_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trombone_ensemble_43::
	.incbin "sound/direct_sound_samples/wb/trombone_g2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trombone_ensemble_52::
	.incbin "sound/direct_sound_samples/wb/trombone_e3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_trombone_ensemble_60::
	.incbin "sound/direct_sound_samples/wb/trombone_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_violin_sus_64::
	.incbin "sound/direct_sound_samples/wb/violin_solo_e4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_violin_sus_72::
	.incbin "sound/direct_sound_samples/wb/violin_solo_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_violin_sus_81::
	.incbin "sound/direct_sound_samples/wb/violin_solo_a5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_ewso_orch_chimes_67::
	.incbin "sound/direct_sound_samples/wb/tublar_bell_g4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_ewso_orch_chimes_72::
	.incbin "sound/direct_sound_samples/wb/tublar_bell_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_cello_ensemble_pizz_43::
	.incbin "sound/direct_sound_samples/wb/pizzicato_strings_g2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_cello_ensemble_pizz_52::
	.incbin "sound/direct_sound_samples/wb/pizzicato_strings_e3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_60::
	.incbin "sound/direct_sound_samples/wb/pizzicato_strings_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_69::
	.incbin "sound/direct_sound_samples/wb/pizzicato_strings_a4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_violin_ensemble_pizz_77::
	.incbin "sound/direct_sound_samples/wb/pizzicato_strings_f5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_xylophone_60::
	.incbin "sound/direct_sound_samples/wb/xylophone_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_xylophone_69::
	.incbin "sound/direct_sound_samples/wb/xylophone_a4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_xylophone_77::
	.incbin "sound/direct_sound_samples/wb/xylophone_f5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_sampletank_clarinet_55::
	.incbin "sound/direct_sound_samples/wb/clarinet_g3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_sampletank_clarinet_64::
	.incbin "sound/direct_sound_samples/wb/clarinet_e4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_sampletank_clarinet_72::
	.incbin "sound/direct_sound_samples/wb/clarinet_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_marimba_60::
	.incbin "sound/direct_sound_samples/wb/marimba_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_marimba_72::
	.incbin "sound/direct_sound_samples/wb/marimba_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_marimba_84::
	.incbin "sound/direct_sound_samples/wb/marimba_c6_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_vibraphone1_60::
	.incbin "sound/direct_sound_samples/wb/vibraphone_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_vibraphone1_72::
	.incbin "sound/direct_sound_samples/wb/vibraphone_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_glockenspiel_60::
	.incbin "sound/direct_sound_samples/wb/glockenspiel_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_glockenspiel_72::
	.incbin "sound/direct_sound_samples/wb/glockenspiel_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_timpani_55::
	.incbin "sound/direct_sound_samples/wb/timpani_g3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_timpani_60::
	.incbin "sound/direct_sound_samples/wb/timpani_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_timpani_67::
	.incbin "sound/direct_sound_samples/wb/timpani_g4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_crash_cymbal2::
	.incbin "sound/direct_sound_samples/wb/crash_cym_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_cymbals_a_due::
	.incbin "sound/direct_sound_samples/wb/cymbal_orch_22.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_rack_tom1::
	.incbin "sound/direct_sound_samples/wb/tom_h_16.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_rack_tom2::
	.incbin "sound/direct_sound_samples/wb/tom_m_16.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_floor_tom1::
	.incbin "sound/direct_sound_samples/wb/tom_l_16.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_rock_floor_tom2::
	.incbin "sound/direct_sound_samples/wb/tom_f_16.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_chinese::
	.incbin "sound/direct_sound_samples/wb/chinese_cym_22.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_hihat_open::
	.incbin "sound/direct_sound_samples/wb/hihat_open_22.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_hihat_closed::
	.incbin "sound/direct_sound_samples/wb/hihat_closed_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_60::
	.incbin "sound/direct_sound_samples/wb/orch_hit_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_72::
	.incbin "sound/direct_sound_samples/wb/orch_hit_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_79::
	.incbin "sound/direct_sound_samples/wb/orch_hit_g5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_orchestra_hit_84::
	.incbin "sound/direct_sound_samples/wb/orch_hit_c6_22.bin"
	
	.align 2
DirectSoundWaveData_hg_ps13_classic_choir_ahh_60::
	.incbin "sound/direct_sound_samples/wb/choirs_female_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_36::
	.incbin "sound/direct_sound_samples/wb/grand_piano_c2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_48::
	.incbin "sound/direct_sound_samples/wb/grand_piano_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_60::
	.incbin "sound/direct_sound_samples/wb/grand_piano_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_72::
	.incbin "sound/direct_sound_samples/wb/grand_piano_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_84::
	.incbin "sound/direct_sound_samples/wb/grand_piano_c6_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_48::
	.incbin "sound/direct_sound_samples/wb/drawbar_organ_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_60::
	.incbin "sound/direct_sound_samples/wb/drawbar_organ_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_full_organ_slow_72::
	.incbin "sound/direct_sound_samples/wb/drawbar_organ_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_harp_48::
	.incbin "sound/direct_sound_samples/wb/harp_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_harp_60::
	.incbin "sound/direct_sound_samples/wb/harp_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kfl_harp_72::
	.incbin "sound/direct_sound_samples/wb/harp_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_36::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_48::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_60::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_acoustic_grand_piano_oct_72::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_ampeg_ac_bass_full_45::
	.incbin "sound/direct_sound_samples/wb/e_bass_a2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_ampeg_ac_bass_full_57::
	.incbin "sound/direct_sound_samples/wb/e_bass_a3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_battery3_splash::
	.incbin "sound/direct_sound_samples/wb/splash_cym_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kaeru_cafe_hyoshigi::
	.incbin "sound/direct_sound_samples/wb/hyoushigi_16.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_taiko::
	.incbin "sound/direct_sound_samples/wb/body_hit1_22.bin"
	
	.align 2
DirectSoundWaveData_hg_kaeru_cafe_kotsu::
	.incbin "sound/direct_sound_samples/wb/kotsu_16.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_shamisen1_50::
	.incbin "sound/direct_sound_samples/wb/shamisen_d3_16.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_shamisen1_58::
	.incbin "sound/direct_sound_samples/wb/shamisen_as3_16.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_shamisen1_67::
	.incbin "sound/direct_sound_samples/wb/shamisen_g4_16.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_bassoon_sus_40::
	.incbin "sound/direct_sound_samples/wb/basson_e2_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_bassoon_sus_48::
	.incbin "sound/direct_sound_samples/wb/basson_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_bassoon_sus_57::
	.incbin "sound/direct_sound_samples/wb/basson_a3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_a_suitcase_medium_60::
	.incbin "sound/direct_sound_samples/wb/electric_piano_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_a_suitcase_medium_72::
	.incbin "sound/direct_sound_samples/wb/electric_piano_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_koto3_52::
	.incbin "sound/direct_sound_samples/wb/koto_pick_e3_16.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_koto3_60::
	.incbin "sound/direct_sound_samples/wb/koto_pick_c4_16.bin"
	
	.align 2
DirectSoundWaveData_hg_machfive2_koto3_69::
	.incbin "sound/direct_sound_samples/wb/koto_pick_a4_16.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_organ_48::
	.incbin "sound/direct_sound_samples/wb/perc_organ_c3_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_organ_60::
	.incbin "sound/direct_sound_samples/wb/perc_organ_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_jazz_organ_72::
	.incbin "sound/direct_sound_samples/wb/perc_organ_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_music_box_60::
	.incbin "sound/direct_sound_samples/wb/musicbox_c4_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_music_box_72::
	.incbin "sound/direct_sound_samples/wb/musicbox_c5_22.bin"
	
	.align 2
DirectSoundWaveData_hg_plugsound_pro_music_box_84::
	.incbin "sound/direct_sound_samples/wb/musicbox_c6_22.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_taiko2::
	.incbin "sound/direct_sound_samples/wb/taiko1_16.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_taiko3::
	.incbin "sound/direct_sound_samples/wb/taiko2_16.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_okedo_ohdaiko_rim::
	.incbin "sound/direct_sound_samples/wb/taiko_rim_16.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_martin_soft2_43::
	.incbin "sound/direct_sound_samples/wb/steel_guitar_g2_22.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_martin_soft2_55::
	.incbin "sound/direct_sound_samples/wb/steel_guitar_g3_22.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_martin_soft2_64::
	.incbin "sound/direct_sound_samples/wb/steel_guitar_e4_22.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_martin_soft2_72::
	.incbin "sound/direct_sound_samples/wb/steel_guitar_c5_22.bin"

	.align 2
DirectSoundWaveData_hg_discovery_japan_suzu::
	.incbin "sound/direct_sound_samples/wb/suzu_22.bin"

	.align 2
DirectSoundWaveData_hg_kaeru_cafe_kodaiko2::
	.incbin "sound/direct_sound_samples/wb/kodaiko_16.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_square_wave_72::
	.incbin "sound/direct_sound_samples/wb/synth_lead_c5_22.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_rock_piano_60::
	.incbin "sound/direct_sound_samples/wb/attack_piano_c4_22.bin"

	.align 2
DirectSoundWaveData_hg_plugsound_pro_rock_piano_72::
	.incbin "sound/direct_sound_samples/wb/attack_piano_c5_22.bin"

	.align 2
DirectSoundWaveData_bw_zg_of_tutti_hit_major::
	.incbin "sound/direct_sound_samples/wb/oche_hit_major_c4_32.bin"

	.align 2
DirectSoundWaveData_bw_independence_pro_khso_trombones_stc::
	.incbin "sound/direct_sound_samples/wb/ind_tronc#1_32.bin"

	.align 2
DirectSoundWaveData_bw_independence_pro_khso_all_strings_spc_up::
	.incbin "sound/direct_sound_samples/wb/conbas_spic_e1_32.bin"

	.align 2
DirectSoundWaveData_bw_unknown_snare_roll::
	.incbin "sound/direct_sound_samples/wb/snareroll_22.bin"

	.align 2
DirectSoundWaveData_bw_kfl_harp_55::
	.incbin "sound/direct_sound_samples/wb/harp_wb_g3_22.bin"

	.align 2
DirectSoundWaveData_bw_kfl_harp_67::
	.incbin "sound/direct_sound_samples/wb/harp_wb_g4_22.bin"

	.align 2
DirectSoundWaveData_bw_kfl_harp_76::
	.incbin "sound/direct_sound_samples/wb/harp_wb_e5_22.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_72::
	.incbin "sound/direct_sound_samples/wb/piano_wb_c5_22.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_acoustic_grand_piano_84::
	.incbin "sound/direct_sound_samples/wb/piano_wb_c6_22.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_glockenspiel_72::
	.incbin "sound/direct_sound_samples/wb/glocken_c5_22.bin"

	.align 2
DirectSoundWaveData_bw_halionone_hard_sync_solo_35::
	.incbin "sound/direct_sound_samples/wb/cool3_basE0_22.bin"

	.align 2
DirectSoundWaveData_bw_ewso_6fh_rips_f::
	.incbin "sound/direct_sound_samples/wb/forn_a_c2_22.bin"

	.align 2
DirectSoundWaveData_bw_ewso_6fh_rips_s::
	.incbin "sound/direct_sound_samples/wb/forn_c3_22.bin"

	.align 2
DirectSoundWaveData_bw_ps15_hihat20::
	.incbin "sound/direct_sound_samples/wb/dance_open_hat_32.bin"

	.align 2
DirectSoundWaveData_bw_ps15_hihat21::
	.incbin "sound/direct_sound_samples/wb/dance_close_hat_32.bin"

	.align 2
DirectSoundWaveData_bw_ps15_kick66::
	.incbin "sound/direct_sound_samples/wb/bass_ana01_32.bin"

	.align 2
DirectSoundWaveData_bw_ps15_kick120::
	.incbin "sound/direct_sound_samples/wb/bass_hit01_32.bin"

	.align 2
DirectSoundWaveData_bw_ps55_flute_81_22::
	.incbin "sound/direct_sound_samples/wb/flute_akai_wb_a5_22.bin"

	.align 2
DirectSoundWaveData_bw_ps55_flute_89_22::
	.incbin "sound/direct_sound_samples/wb/flute_akai_wb_f6_22.bin"

	.align 2
DirectSoundWaveData_bw_ps19_trumpet_sus_f_72::
	.incbin "sound/direct_sound_samples/wb/pbrasslop_c4_max32.bin"

	.align 2
DirectSoundWaveData_bw_sfx_reshiram_flame::
	.incbin "sound/direct_sound_samples/wb/resi_fire2_22.bin"

	.align 2
DirectSoundWaveData_bw_sfx_zekrom_zap::
	.incbin "sound/direct_sound_samples/wb/wb_w348_blade.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_fend_slap1_pull_43::
	.incbin "sound/direct_sound_samples/wb/slapbass_g2_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_mg303_bass_42::
	.incbin "sound/direct_sound_samples/wb/shiten_bass_fs1_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_mg303_bass_66::
	.incbin "sound/direct_sound_samples/wb/shiten_bass_fs3_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_saw_wave_66::
	.incbin "sound/direct_sound_samples/wb/shiten_read_max2_fs3_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_saw_wave_85::
	.incbin "sound/direct_sound_samples/wb/shiten_read_max3_cs5_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_orch_hit2::
	.incbin "sound/direct_sound_samples/wb/sd_octhit_as3_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_car_stop::
	.incbin "sound/direct_sound_samples/wb/noizy_01_22kh.bin"

	.align 2
DirectSoundWaveData_bw_sd90_car_crash::
	.incbin "sound/direct_sound_samples/wb/clash_02_22.bin"

	.align 2
DirectSoundWaveData_bw_halionone_t9_analog_clap::
	.incbin "sound/direct_sound_samples/wb/cool_snare2_22.bin"

	.align 2
DirectSoundWaveData_bw_zg_cb_fx_loop6_kick::
	.incbin "sound/direct_sound_samples/wb/drumn_bass_32.bin"

	.align 2
DirectSoundWaveData_bw_zg_cb_fx_loop6_snare::
	.incbin "sound/direct_sound_samples/wb/drumn_snare2_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_power2_snare_chorused::
	.incbin "sound/direct_sound_samples/wb/snare_power_max_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_standard2_splash::
	.incbin "sound/direct_sound_samples/wb/splash_cym_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_timpani2_37::
	.incbin "sound/direct_sound_samples/wb/g_timpany_cs1_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_timpani2_49::
	.incbin "sound/direct_sound_samples/wb/g_timpany_cs2_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_timpani2_61::
	.incbin "sound/direct_sound_samples/wb/g_timpany_cs3_32.bin"

	.align 2
DirectSoundWaveData_bw_sd90_analog_snare_reverb::
	.incbin "sound/direct_sound_samples/wb/shiten_snare_max2_32.bin"

	.align 2
DirectSoundWaveData_bw_kfl_mark_i_classic_72::
	.incbin "sound/direct_sound_samples/wb/e_piano_wb_c5_22.bin"

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
DirectSoundWaveData_bw_ewsc_full_chorus_ah_43::
	.incbin "sound/direct_sound_samples/wb/choir_male_g2_32.bin"

	.align 2
DirectSoundWaveData_bw_ewsc_full_chorus_ah_52::
	.incbin "sound/direct_sound_samples/wb/choir_male_e3_32.bin"

	.align 2
DirectSoundWaveData_bw_ewsc_full_chorus_ah_60::
	.incbin "sound/direct_sound_samples/wb/choir_male_c4_32.bin"

	.align 2
DirectSoundWaveData_bw_zg_cb_guitar_squeal::
	.incbin "sound/direct_sound_samples/wb/plasma_gtrif3_22.bin"

	.align 2
DirectSoundWaveData_bw_unknown_suspended_cymbal_40::
	.incbin "sound/direct_sound_samples/wb/crushroll_32.bin"

	.align 2
DirectSoundWaveData_bw_zg_total_drum_bass_160_leonora::
	.incbin "sound/direct_sound_samples/wb/drum_loop_wcs_01_22.bin"

	.align 2
DirectSoundWaveData_bw_zg_dpt_orch_snare_16_18_02::
	.incbin "sound/direct_sound_samples/wb/snare3_trinity_32.bin"

	.align 2
DirectSoundWaveData_bw_unknown_synth_kick_wcs::
	.incbin "sound/direct_sound_samples/wb/kick_groove_02_32.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_analog_snare_e2::
	.incbin "sound/direct_sound_samples/wb/snare2_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_bw_zg_of_tutti_hit_minor_60::
	.incbin "sound/direct_sound_samples/wb/oche_hit_minor_c4_32.bin"

	.align 2
DirectSoundWaveData_b2_halionone_t9_analog_hihat_closed::
	.incbin "sound/direct_sound_samples/b2_halionone_t9_analog_hihat_closed.bin"

	.align 2
DirectSoundWaveData_b2_halionone_t9_analog_hihat_open::
	.incbin "sound/direct_sound_samples/b2_halionone_t9_analog_hihat_open.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_analog_hihat_closed::
	.incbin "sound/direct_sound_samples/wb/hihat_closed_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_bw_plugsound_pro_analog_hihat_open::
	.incbin "sound/direct_sound_samples/wb/hihat_open_analog_kit_32.bin"

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
