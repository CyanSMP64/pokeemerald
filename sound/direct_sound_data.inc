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

	.align 2
DirectSoundWaveData_sc88pro_glockenspiel::
.if MUX_SMP_SC88PRO_GLOCKENSPIEL == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_glockenspiel.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_organ2::
.if MUX_SMP_SC88PRO_ORGAN2 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_organ2.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_fretless_bass::
.if MUX_SMP_SC88PRO_FRETLESS_BASS == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_fretless_bass.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_slap_bass::
.if MUX_SMP_SC88PRO_SLAP_BASS == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_slap_bass.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_synth_bass::
.if MUX_SMP_SC88PRO_SYNTH_BASS == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_synth_bass.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_timpani::
.if MUX_SMP_SC88PRO_TIMPANI == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_timpani.bin"
.else
.endif

	.align 2
DirectSoundWaveData_classical_choir_voice_ahhs::
.if MUX_SMP_CLASSICAL_CHOIR_VOICE_AHHS == TRUE
	.incbin "sound/direct_sound_samples/classical_choir_voice_ahhs.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_oboe::
.if MUX_SMP_SD90_CLASSICAL_OBOE == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_oboe.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unused_sd90_oboe::
.if MUX_SMP_UNUSED_SD90_OBOE == TRUE
	.incbin "sound/direct_sound_samples/unused_sd90_oboe.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unused_guitar_separates_power_chord::
.if MUX_SMP_UNUSED_GUITAR_SEPARATES_POWER_CHORD == TRUE
	.incbin "sound/direct_sound_samples/unused_guitar_separates_power_chord.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unused_sc88pro_unison_slap::
.if MUX_SMP_UNUSED_SC88PRO_UNISON_SLAP == TRUE
	.incbin "sound/direct_sound_samples/unused_sc88pro_unison_slap.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_snare::
.if MUX_SMP_UNKNOWN_SNARE == TRUE
	.incbin "sound/direct_sound_samples/unknown_snare.bin"
.else
.endif

	.align 2
DirectSoundWaveData_ethnic_flavours_ohtsuzumi::
.if MUX_SMP_ETHNIC_FLAVOURS_OHTSUZUMI == TRUE
	.incbin "sound/direct_sound_samples/ethnic_flavours_ohtsuzumi.bin"
.else
.endif

	.align 2
DirectSoundWaveData_ethnic_flavours_hyoushigi::
.if MUX_SMP_ETHNIC_FLAVOURS_HYOUSHIGI == TRUE
	.incbin "sound/direct_sound_samples/ethnic_flavours_hyoushigi.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_rnd_kick::
.if MUX_SMP_SC88PRO_RND_KICK == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_rnd_kick.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_rnd_snare::
.if MUX_SMP_SC88PRO_RND_SNARE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_rnd_snare.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_tr909_hand_clap::
.if MUX_SMP_SC88PRO_TR909_HAND_CLAP == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_tr909_hand_clap.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_orchestra_snare::
.if MUX_SMP_SC88PRO_ORCHESTRA_SNARE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_orchestra_snare.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unused_sc55_tom::
.if MUX_SMP_UNUSED_SC55_TOM == TRUE
	.incbin "sound/direct_sound_samples/unused_sc55_tom.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_close_hihat::
.if MUX_SMP_UNKNOWN_CLOSE_HIHAT == TRUE
	.incbin "sound/direct_sound_samples/unknown_close_hihat.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_open_hihat::
.if MUX_SMP_UNKNOWN_OPEN_HIHAT == TRUE
	.incbin "sound/direct_sound_samples/unknown_open_hihat.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_bell::
.if MUX_SMP_UNKNOWN_BELL == TRUE
	.incbin "sound/direct_sound_samples/unknown_bell.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_tambourine::
.if MUX_SMP_SC88PRO_TAMBOURINE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_tambourine.bin"
.else
.endif

	.align 2
DirectSoundWaveData_trinity_cymbal_crash::
.if MUX_SMP_TRINITY_CYMBAL_CRASH == TRUE
	.incbin "sound/direct_sound_samples/trinity_cymbal_crash.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_orchestra_cymbal_crash::
.if MUX_SMP_SC88PRO_ORCHESTRA_CYMBAL_CRASH == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_orchestra_cymbal_crash.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_mute_high_conga::
.if MUX_SMP_SC88PRO_MUTE_HIGH_CONGA == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_mute_high_conga.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_open_low_conga::
.if MUX_SMP_SC88PRO_OPEN_LOW_CONGA == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_open_low_conga.bin"
.else
.endif

	.align 2
DirectSoundWaveData_drum_and_percussion_kick::
.if MUX_SMP_DRUM_AND_PERCUSSION_KICK == TRUE
	.incbin "sound/direct_sound_samples/drum_and_percussion_kick.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_solo_snare::
.if MUX_SMP_SD90_SOLO_SNARE == TRUE
	.incbin "sound/direct_sound_samples/sd90_solo_snare.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_ambient_tom::
.if MUX_SMP_SD90_AMBIENT_TOM == TRUE
	.incbin "sound/direct_sound_samples/sd90_ambient_tom.bin"
.else
.endif

	.align 2
DirectSoundWaveData_dance_drums_ride_bell::
.if MUX_SMP_DANCE_DRUMS_RIDE_BELL == TRUE
	.incbin "sound/direct_sound_samples/dance_drums_ride_bell.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_cowbell::
.if MUX_SMP_SD90_COWBELL == TRUE
	.incbin "sound/direct_sound_samples/sd90_cowbell.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unused_heart_of_asia_indian_drum::
.if MUX_SMP_UNUSED_HEART_OF_ASIA_INDIAN_DRUM == TRUE
	.incbin "sound/direct_sound_samples/unused_heart_of_asia_indian_drum.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_open_triangle::
.if MUX_SMP_SD90_OPEN_TRIANGLE == TRUE
	.incbin "sound/direct_sound_samples/sd90_open_triangle.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_jingle_bell::
.if MUX_SMP_SC88PRO_JINGLE_BELL == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_jingle_bell.bin"
.else
.endif

	.align 2
DirectSoundWaveData_ethnic_flavours_atarigane::
.if MUX_SMP_ETHNIC_FLAVOURS_ATARIGANE == TRUE
	.incbin "sound/direct_sound_samples/ethnic_flavours_atarigane.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_taiko::
.if MUX_SMP_SC88PRO_TAIKO == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_taiko.bin"
.else
.endif

	.align 2
DirectSoundWaveData_ethnic_flavours_kotsuzumi::
.if MUX_SMP_ETHNIC_FLAVOURS_KOTSUZUMI == TRUE
	.incbin "sound/direct_sound_samples/ethnic_flavours_kotsuzumi.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_piano1_48::
.if MUX_SMP_SC88PRO_PIANO1_48 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_piano1_48.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_piano1_60::
.if MUX_SMP_SC88PRO_PIANO1_60 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_piano1_60.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_piano1_72::
.if MUX_SMP_SC88PRO_PIANO1_72 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_piano1_72.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_piano1_84::
.if MUX_SMP_SC88PRO_PIANO1_84 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_piano1_84.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_string_ensemble_60::
.if MUX_SMP_SC88PRO_STRING_ENSEMBLE_60 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_string_ensemble_60.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_string_ensemble_72::
.if MUX_SMP_SC88PRO_STRING_ENSEMBLE_72 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_string_ensemble_72.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_string_ensemble_84::
.if MUX_SMP_SC88PRO_STRING_ENSEMBLE_84 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_string_ensemble_84.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_trumpet_60::
.if MUX_SMP_SC88PRO_TRUMPET_60 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_trumpet_60.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_trumpet_72::
.if MUX_SMP_SC88PRO_TRUMPET_72 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_trumpet_72.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_trumpet_84::
.if MUX_SMP_SC88PRO_TRUMPET_84 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_trumpet_84.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_tuba_39:: @N.B.: These tuba samples are actually sampled at 36 and 48, then pitched up
.if MUX_SMP_SC88PRO_TUBA_39 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_tuba_39.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_tuba_51::
.if MUX_SMP_SC88PRO_TUBA_51 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_tuba_51.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_french_horn_60::
.if MUX_SMP_SC88PRO_FRENCH_HORN_60 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_french_horn_60.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_french_horn_72::
.if MUX_SMP_SC88PRO_FRENCH_HORN_72 == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_french_horn_72.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_flute::
.if MUX_SMP_SC88PRO_FLUTE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_flute.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_fingered_bass::
.if MUX_SMP_SC88PRO_FINGERED_BASS == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_fingered_bass.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_koto_high::
.if MUX_SMP_UNKNOWN_KOTO_HIGH == TRUE
	.incbin "sound/direct_sound_samples/unknown_koto_high.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_shakuhachi::
.if MUX_SMP_SD90_CLASSICAL_SHAKUHACHI == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_shakuhachi.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_koto_low::
.if MUX_SMP_UNKNOWN_KOTO_LOW == TRUE
	.incbin "sound/direct_sound_samples/unknown_koto_low.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_overdrive_guitar::
.if MUX_SMP_SD90_CLASSICAL_OVERDRIVE_GUITAR == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_overdrive_guitar.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_distortion_guitar_high::
.if MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_HIGH == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_distortion_guitar_high.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_distortion_guitar_low::
.if MUX_SMP_SD90_CLASSICAL_DISTORTION_GUITAR_LOW == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_distortion_guitar_low.bin"
.else
.endif

	.align 2
DirectSoundWaveData_heart_of_asia_gamelan::
.if MUX_SMP_HEART_OF_ASIA_GAMELAN == TRUE
	.incbin "sound/direct_sound_samples/heart_of_asia_gamelan.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_church_organ3_low::
.if MUX_SMP_SC88PRO_CHURCH_ORGAN3_LOW == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_church_organ3_low.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_church_organ3_high::
.if MUX_SMP_SC88PRO_CHURCH_ORGAN3_HIGH == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_church_organ3_high.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_female_voice::
.if MUX_SMP_UNKNOWN_FEMALE_VOICE == TRUE
	.incbin "sound/direct_sound_samples/unknown_female_voice.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unused_unknown_male_voice::
.if MUX_SMP_UNUSED_UNKNOWN_MALE_VOICE == TRUE
	.incbin "sound/direct_sound_samples/unused_unknown_male_voice.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_detuned_ep1_low::
.if MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_LOW == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_detuned_ep1_low.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_detuned_ep1_high::
.if MUX_SMP_SD90_CLASSICAL_DETUNED_EP1_HIGH == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_detuned_ep1_high.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_timpani_with_snare::
.if MUX_SMP_SC88PRO_TIMPANI_WITH_SNARE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_timpani_with_snare.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_synth_snare::
.if MUX_SMP_UNKNOWN_SYNTH_SNARE == TRUE
	.incbin "sound/direct_sound_samples/unknown_synth_snare.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_square_wave::
.if MUX_SMP_SC88PRO_SQUARE_WAVE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_square_wave.bin"
.else
.endif

	.align 2
DirectSoundWaveData_bicycle_bell::
.if MUX_SMP_BICYCLE_BELL == TRUE
	.incbin "sound/direct_sound_samples/bicycle_bell.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_1::
.if MUX_SMP_UNKNOWN_1 == TRUE
	.incbin "sound/direct_sound_samples/unknown_01.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_pizzicato_strings::
.if MUX_SMP_SC88PRO_PIZZICATO_STRINGS == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_pizzicato_strings.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_2::
.if MUX_SMP_UNKNOWN_2 == TRUE
	.incbin "sound/direct_sound_samples/unknown_02.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_3::
.if MUX_SMP_UNKNOWN_3 == TRUE
	.incbin "sound/direct_sound_samples/unknown_03.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_4::
.if MUX_SMP_UNKNOWN_4 == TRUE
	.incbin "sound/direct_sound_samples/unknown_04.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_wind::
.if MUX_SMP_SC88PRO_WIND == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_wind.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_bubbles::
.if MUX_SMP_SC88PRO_BUBBLES == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_bubbles.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_5::
.if MUX_SMP_UNKNOWN_5 == TRUE
	.incbin "sound/direct_sound_samples/unknown_05.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_6::
.if MUX_SMP_UNKNOWN_6 == TRUE
	.incbin "sound/direct_sound_samples/unknown_06.bin"
.else
.endif

	.align 2
DirectSoundWaveData_trinity_30303_mega_bass::
.if MUX_SMP_TRINITY_30303_MEGA_BASS == TRUE
	.incbin "sound/direct_sound_samples/trinity_30303_mega_bass.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_7::
.if MUX_SMP_UNKNOWN_7 == TRUE
	.incbin "sound/direct_sound_samples/unknown_07.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_8::
.if MUX_SMP_UNKNOWN_8 == TRUE
	.incbin "sound/direct_sound_samples/unknown_08.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_tubular_bell::
.if MUX_SMP_SC88PRO_TUBULAR_BELL == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_tubular_bell.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_9::
.if MUX_SMP_UNKNOWN_9 == TRUE
	.incbin "sound/direct_sound_samples/unknown_09.bin"
.else
.endif

	.align 2
DirectSoundWaveData_trinity_big_boned::
.if MUX_SMP_TRINITY_BIG_BONED == TRUE
	.incbin "sound/direct_sound_samples/trinity_big_boned.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_harp::
.if MUX_SMP_SC88PRO_HARP == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_harp.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_xylophone::
.if MUX_SMP_SC88PRO_XYLOPHONE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_xylophone.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_10::
.if MUX_SMP_UNKNOWN_10 == TRUE
	.incbin "sound/direct_sound_samples/unknown_10.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_11::
.if MUX_SMP_UNKNOWN_11 == TRUE
	.incbin "sound/direct_sound_samples/unknown_11.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_accordion::
.if MUX_SMP_SC88PRO_ACCORDION == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_accordion.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_12::
.if MUX_SMP_UNKNOWN_12 == TRUE
	.incbin "sound/direct_sound_samples/unknown_12.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_13::
.if MUX_SMP_UNKNOWN_13 == TRUE
	.incbin "sound/direct_sound_samples/unknown_13.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_14::
.if MUX_SMP_UNKNOWN_14 == TRUE
	.incbin "sound/direct_sound_samples/unknown_14.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_15::
.if MUX_SMP_UNKNOWN_15 == TRUE
	.incbin "sound/direct_sound_samples/unknown_15.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_16::
.if MUX_SMP_UNKNOWN_16 == TRUE
	.incbin "sound/direct_sound_samples/unknown_16.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_17::
.if MUX_SMP_UNKNOWN_17 == TRUE
	.incbin "sound/direct_sound_samples/unknown_17.bin"
.else
.endif

	.align 2
Cry_Bulbasaur::
	.incbin "sound/direct_sound_samples/cries/bulbasaur.bin"

	.align 2
Cry_Ivysaur::
	.incbin "sound/direct_sound_samples/cries/ivysaur.bin"

	.align 2
Cry_Venusaur::
	.incbin "sound/direct_sound_samples/cries/venusaur.bin"

	.align 2
Cry_Charmander::
	.incbin "sound/direct_sound_samples/cries/charmander.bin"

	.align 2
Cry_Charmeleon::
	.incbin "sound/direct_sound_samples/cries/charmeleon.bin"

	.align 2
Cry_Charizard::
	.incbin "sound/direct_sound_samples/cries/charizard.bin"

	.align 2
Cry_Squirtle::
	.incbin "sound/direct_sound_samples/cries/squirtle.bin"

	.align 2
Cry_Wartortle::
	.incbin "sound/direct_sound_samples/cries/wartortle.bin"

	.align 2
Cry_Blastoise::
	.incbin "sound/direct_sound_samples/cries/blastoise.bin"

	.align 2
Cry_Caterpie::
	.incbin "sound/direct_sound_samples/cries/caterpie.bin"

	.align 2
Cry_Metapod::
	.incbin "sound/direct_sound_samples/cries/metapod.bin"

	.align 2
Cry_Butterfree::
	.incbin "sound/direct_sound_samples/cries/butterfree.bin"

	.align 2
Cry_Weedle::
	.incbin "sound/direct_sound_samples/cries/weedle.bin"

	.align 2
Cry_Kakuna::
	.incbin "sound/direct_sound_samples/cries/kakuna.bin"

	.align 2
Cry_Beedrill::
	.incbin "sound/direct_sound_samples/cries/beedrill.bin"

	.align 2
Cry_Pidgey::
	.incbin "sound/direct_sound_samples/cries/pidgey.bin"

	.align 2
Cry_Pidgeotto::
	.incbin "sound/direct_sound_samples/cries/pidgeotto.bin"

	.align 2
Cry_Pidgeot::
	.incbin "sound/direct_sound_samples/cries/pidgeot.bin"

	.align 2
Cry_Rattata::
	.incbin "sound/direct_sound_samples/cries/rattata.bin"

	.align 2
Cry_Raticate::
	.incbin "sound/direct_sound_samples/cries/raticate.bin"

	.align 2
Cry_Spearow::
	.incbin "sound/direct_sound_samples/cries/spearow.bin"

	.align 2
Cry_Fearow::
	.incbin "sound/direct_sound_samples/cries/fearow.bin"

	.align 2
Cry_Ekans::
	.incbin "sound/direct_sound_samples/cries/ekans.bin"

	.align 2
Cry_Arbok::
	.incbin "sound/direct_sound_samples/cries/arbok.bin"

	.align 2
Cry_Pikachu::
	.incbin "sound/direct_sound_samples/cries/pikachu.bin"

	.align 2
Cry_Raichu::
	.incbin "sound/direct_sound_samples/cries/raichu.bin"

	.align 2
Cry_Sandshrew::
	.incbin "sound/direct_sound_samples/cries/sandshrew.bin"

	.align 2
Cry_Sandslash::
	.incbin "sound/direct_sound_samples/cries/sandslash.bin"

	.align 2
Cry_NidoranF::
	.incbin "sound/direct_sound_samples/cries/nidoran_f.bin"

	.align 2
Cry_Nidorina::
	.incbin "sound/direct_sound_samples/cries/nidorina.bin"

	.align 2
Cry_Nidoqueen::
	.incbin "sound/direct_sound_samples/cries/nidoqueen.bin"

	.align 2
Cry_NidoranM::
	.incbin "sound/direct_sound_samples/cries/nidoran_m.bin"

	.align 2
Cry_Nidorino::
	.incbin "sound/direct_sound_samples/cries/nidorino.bin"

	.align 2
Cry_Nidoking::
	.incbin "sound/direct_sound_samples/cries/nidoking.bin"

	.align 2
Cry_Clefairy::
	.incbin "sound/direct_sound_samples/cries/clefairy.bin"

	.align 2
Cry_Clefable::
	.incbin "sound/direct_sound_samples/cries/clefable.bin"

	.align 2
Cry_Vulpix::
	.incbin "sound/direct_sound_samples/cries/vulpix.bin"

	.align 2
Cry_Ninetales::
	.incbin "sound/direct_sound_samples/cries/ninetales.bin"

	.align 2
Cry_Jigglypuff::
	.incbin "sound/direct_sound_samples/cries/jigglypuff.bin"

	.align 2
Cry_Wigglytuff::
	.incbin "sound/direct_sound_samples/cries/wigglytuff.bin"

	.align 2
Cry_Zubat::
	.incbin "sound/direct_sound_samples/cries/zubat.bin"

	.align 2
Cry_Golbat::
	.incbin "sound/direct_sound_samples/cries/golbat.bin"

	.align 2
Cry_Oddish::
	.incbin "sound/direct_sound_samples/cries/oddish.bin"

	.align 2
Cry_Gloom::
	.incbin "sound/direct_sound_samples/cries/gloom.bin"

	.align 2
Cry_Vileplume::
	.incbin "sound/direct_sound_samples/cries/vileplume.bin"

	.align 2
Cry_Paras::
	.incbin "sound/direct_sound_samples/cries/paras.bin"

	.align 2
Cry_Parasect::
	.incbin "sound/direct_sound_samples/cries/parasect.bin"

	.align 2
Cry_Venonat::
	.incbin "sound/direct_sound_samples/cries/venonat.bin"

	.align 2
Cry_Venomoth::
	.incbin "sound/direct_sound_samples/cries/venomoth.bin"

	.align 2
Cry_Diglett::
	.incbin "sound/direct_sound_samples/cries/diglett.bin"

	.align 2
Cry_Dugtrio::
	.incbin "sound/direct_sound_samples/cries/dugtrio.bin"

	.align 2
Cry_Meowth::
	.incbin "sound/direct_sound_samples/cries/meowth.bin"

	.align 2
Cry_Persian::
	.incbin "sound/direct_sound_samples/cries/persian.bin"

	.align 2
Cry_Psyduck::
	.incbin "sound/direct_sound_samples/cries/psyduck.bin"

	.align 2
Cry_Golduck::
	.incbin "sound/direct_sound_samples/cries/golduck.bin"

	.align 2
Cry_Mankey::
	.incbin "sound/direct_sound_samples/cries/mankey.bin"

	.align 2
Cry_Primeape::
	.incbin "sound/direct_sound_samples/cries/primeape.bin"

	.align 2
Cry_Growlithe::
	.incbin "sound/direct_sound_samples/cries/growlithe.bin"

	.align 2
Cry_Arcanine::
	.incbin "sound/direct_sound_samples/cries/arcanine.bin"

	.align 2
Cry_Poliwag::
	.incbin "sound/direct_sound_samples/cries/poliwag.bin"

	.align 2
Cry_Poliwhirl::
	.incbin "sound/direct_sound_samples/cries/poliwhirl.bin"

	.align 2
Cry_Poliwrath::
	.incbin "sound/direct_sound_samples/cries/poliwrath.bin"

	.align 2
Cry_Abra::
	.incbin "sound/direct_sound_samples/cries/abra.bin"

	.align 2
Cry_Kadabra::
	.incbin "sound/direct_sound_samples/cries/kadabra.bin"

	.align 2
Cry_Alakazam::
	.incbin "sound/direct_sound_samples/cries/alakazam.bin"

	.align 2
Cry_Machop::
	.incbin "sound/direct_sound_samples/cries/machop.bin"

	.align 2
Cry_Machoke::
	.incbin "sound/direct_sound_samples/cries/machoke.bin"

	.align 2
Cry_Machamp::
	.incbin "sound/direct_sound_samples/cries/machamp.bin"

	.align 2
Cry_Bellsprout::
	.incbin "sound/direct_sound_samples/cries/bellsprout.bin"

	.align 2
Cry_Weepinbell::
	.incbin "sound/direct_sound_samples/cries/weepinbell.bin"

	.align 2
Cry_Victreebel::
	.incbin "sound/direct_sound_samples/cries/victreebel.bin"

	.align 2
Cry_Tentacool::
	.incbin "sound/direct_sound_samples/cries/tentacool.bin"

	.align 2
Cry_Tentacruel::
	.incbin "sound/direct_sound_samples/cries/tentacruel.bin"

	.align 2
Cry_Geodude::
	.incbin "sound/direct_sound_samples/cries/geodude.bin"

	.align 2
Cry_Graveler::
	.incbin "sound/direct_sound_samples/cries/graveler.bin"

	.align 2
Cry_Golem::
	.incbin "sound/direct_sound_samples/cries/golem.bin"

	.align 2
Cry_Ponyta::
	.incbin "sound/direct_sound_samples/cries/ponyta.bin"

	.align 2
Cry_Rapidash::
	.incbin "sound/direct_sound_samples/cries/rapidash.bin"

	.align 2
Cry_Slowpoke::
	.incbin "sound/direct_sound_samples/cries/slowpoke.bin"

	.align 2
Cry_Slowbro::
	.incbin "sound/direct_sound_samples/cries/slowbro.bin"

	.align 2
Cry_Magnemite::
	.incbin "sound/direct_sound_samples/cries/magnemite.bin"

	.align 2
Cry_Magneton::
	.incbin "sound/direct_sound_samples/cries/magneton.bin"

	.align 2
Cry_Farfetchd::
	.incbin "sound/direct_sound_samples/cries/farfetchd.bin"

	.align 2
Cry_Doduo::
	.incbin "sound/direct_sound_samples/cries/doduo.bin"

	.align 2
Cry_Dodrio::
	.incbin "sound/direct_sound_samples/cries/dodrio.bin"

	.align 2
Cry_Seel::
	.incbin "sound/direct_sound_samples/cries/seel.bin"

	.align 2
Cry_Dewgong::
	.incbin "sound/direct_sound_samples/cries/dewgong.bin"

	.align 2
Cry_Grimer::
	.incbin "sound/direct_sound_samples/cries/grimer.bin"

	.align 2
Cry_Muk::
	.incbin "sound/direct_sound_samples/cries/muk.bin"

	.align 2
Cry_Shellder::
	.incbin "sound/direct_sound_samples/cries/shellder.bin"

	.align 2
Cry_Cloyster::
	.incbin "sound/direct_sound_samples/cries/cloyster.bin"

	.align 2
Cry_Gastly::
	.incbin "sound/direct_sound_samples/cries/gastly.bin"

	.align 2
Cry_Haunter::
	.incbin "sound/direct_sound_samples/cries/haunter.bin"

	.align 2
Cry_Gengar::
	.incbin "sound/direct_sound_samples/cries/gengar.bin"

	.align 2
Cry_Onix::
	.incbin "sound/direct_sound_samples/cries/onix.bin"

	.align 2
Cry_Drowzee::
	.incbin "sound/direct_sound_samples/cries/drowzee.bin"

	.align 2
Cry_Hypno::
	.incbin "sound/direct_sound_samples/cries/hypno.bin"

	.align 2
Cry_Krabby::
	.incbin "sound/direct_sound_samples/cries/krabby.bin"

	.align 2
Cry_Kingler::
	.incbin "sound/direct_sound_samples/cries/kingler.bin"

	.align 2
Cry_Voltorb::
	.incbin "sound/direct_sound_samples/cries/voltorb.bin"

	.align 2
Cry_Electrode::
	.incbin "sound/direct_sound_samples/cries/electrode.bin"

	.align 2
Cry_Exeggcute::
	.incbin "sound/direct_sound_samples/cries/exeggcute.bin"

	.align 2
Cry_Exeggutor::
	.incbin "sound/direct_sound_samples/cries/exeggutor.bin"

	.align 2
Cry_Cubone::
	.incbin "sound/direct_sound_samples/cries/cubone.bin"

	.align 2
Cry_Marowak::
	.incbin "sound/direct_sound_samples/cries/marowak.bin"

	.align 2
Cry_Hitmonlee::
	.incbin "sound/direct_sound_samples/cries/hitmonlee.bin"

	.align 2
Cry_Hitmonchan::
	.incbin "sound/direct_sound_samples/cries/hitmonchan.bin"

	.align 2
Cry_Lickitung::
	.incbin "sound/direct_sound_samples/cries/lickitung.bin"

	.align 2
Cry_Koffing::
	.incbin "sound/direct_sound_samples/cries/koffing.bin"

	.align 2
Cry_Weezing::
	.incbin "sound/direct_sound_samples/cries/weezing.bin"

	.align 2
Cry_Rhyhorn::
	.incbin "sound/direct_sound_samples/cries/rhyhorn.bin"

	.align 2
Cry_Rhydon::
	.incbin "sound/direct_sound_samples/cries/rhydon.bin"

	.align 2
Cry_Chansey::
	.incbin "sound/direct_sound_samples/cries/chansey.bin"

	.align 2
Cry_Tangela::
	.incbin "sound/direct_sound_samples/cries/tangela.bin"

	.align 2
Cry_Kangaskhan::
	.incbin "sound/direct_sound_samples/cries/kangaskhan.bin"

	.align 2
Cry_Horsea::
	.incbin "sound/direct_sound_samples/cries/horsea.bin"

	.align 2
Cry_Seadra::
	.incbin "sound/direct_sound_samples/cries/seadra.bin"

	.align 2
Cry_Goldeen::
	.incbin "sound/direct_sound_samples/cries/goldeen.bin"

	.align 2
Cry_Seaking::
	.incbin "sound/direct_sound_samples/cries/seaking.bin"

	.align 2
Cry_Staryu::
	.incbin "sound/direct_sound_samples/cries/staryu.bin"

	.align 2
Cry_Starmie::
	.incbin "sound/direct_sound_samples/cries/starmie.bin"

	.align 2
Cry_MrMime::
	.incbin "sound/direct_sound_samples/cries/mr_mime.bin"

	.align 2
Cry_Scyther::
	.incbin "sound/direct_sound_samples/cries/scyther.bin"

	.align 2
Cry_Jynx::
	.incbin "sound/direct_sound_samples/cries/jynx.bin"

	.align 2
Cry_Electabuzz::
	.incbin "sound/direct_sound_samples/cries/electabuzz.bin"

	.align 2
Cry_Magmar::
	.incbin "sound/direct_sound_samples/cries/magmar.bin"

	.align 2
Cry_Pinsir::
	.incbin "sound/direct_sound_samples/cries/pinsir.bin"

	.align 2
Cry_Tauros::
	.incbin "sound/direct_sound_samples/cries/tauros.bin"

	.align 2
Cry_Magikarp::
	.incbin "sound/direct_sound_samples/cries/magikarp.bin"

	.align 2
Cry_Gyarados::
	.incbin "sound/direct_sound_samples/cries/gyarados.bin"

	.align 2
Cry_Lapras::
	.incbin "sound/direct_sound_samples/cries/lapras.bin"

	.align 2
Cry_Ditto::
	.incbin "sound/direct_sound_samples/cries/ditto.bin"

	.align 2
Cry_Eevee::
	.incbin "sound/direct_sound_samples/cries/eevee.bin"

	.align 2
Cry_Vaporeon::
	.incbin "sound/direct_sound_samples/cries/vaporeon.bin"

	.align 2
Cry_Jolteon::
	.incbin "sound/direct_sound_samples/cries/jolteon.bin"

	.align 2
Cry_Flareon::
	.incbin "sound/direct_sound_samples/cries/flareon.bin"

	.align 2
Cry_Porygon::
	.incbin "sound/direct_sound_samples/cries/porygon.bin"

	.align 2
Cry_Omanyte::
	.incbin "sound/direct_sound_samples/cries/omanyte.bin"

	.align 2
Cry_Omastar::
	.incbin "sound/direct_sound_samples/cries/omastar.bin"

	.align 2
Cry_Kabuto::
	.incbin "sound/direct_sound_samples/cries/kabuto.bin"

	.align 2
Cry_Kabutops::
	.incbin "sound/direct_sound_samples/cries/kabutops.bin"

	.align 2
Cry_Aerodactyl::
	.incbin "sound/direct_sound_samples/cries/aerodactyl.bin"

	.align 2
Cry_Snorlax::
	.incbin "sound/direct_sound_samples/cries/snorlax.bin"

	.align 2
Cry_Articuno::
	.incbin "sound/direct_sound_samples/cries/articuno.bin"

	.align 2
Cry_Zapdos::
	.incbin "sound/direct_sound_samples/cries/zapdos.bin"

	.align 2
Cry_Moltres::
	.incbin "sound/direct_sound_samples/cries/moltres.bin"

	.align 2
Cry_Dratini::
	.incbin "sound/direct_sound_samples/cries/dratini.bin"

	.align 2
Cry_Dragonair::
	.incbin "sound/direct_sound_samples/cries/dragonair.bin"

	.align 2
Cry_Dragonite::
	.incbin "sound/direct_sound_samples/cries/dragonite.bin"

	.align 2
Cry_Mewtwo::
	.incbin "sound/direct_sound_samples/cries/mewtwo.bin"

	.align 2
Cry_Mew::
	.incbin "sound/direct_sound_samples/cries/mew.bin"

	.align 2
Cry_Chikorita::
	.incbin "sound/direct_sound_samples/cries/chikorita.bin"

	.align 2
Cry_Bayleef::
	.incbin "sound/direct_sound_samples/cries/bayleef.bin"

	.align 2
Cry_Meganium::
	.incbin "sound/direct_sound_samples/cries/meganium.bin"

	.align 2
Cry_Cyndaquil::
	.incbin "sound/direct_sound_samples/cries/cyndaquil.bin"

	.align 2
Cry_Quilava::
	.incbin "sound/direct_sound_samples/cries/quilava.bin"

	.align 2
Cry_Typhlosion::
	.incbin "sound/direct_sound_samples/cries/typhlosion.bin"

	.align 2
Cry_Totodile::
	.incbin "sound/direct_sound_samples/cries/totodile.bin"

	.align 2
Cry_Croconaw::
	.incbin "sound/direct_sound_samples/cries/croconaw.bin"

	.align 2
Cry_Feraligatr::
	.incbin "sound/direct_sound_samples/cries/feraligatr.bin"

	.align 2
Cry_Sentret::
	.incbin "sound/direct_sound_samples/cries/sentret.bin"

	.align 2
Cry_Furret::
	.incbin "sound/direct_sound_samples/cries/furret.bin"

	.align 2
Cry_Hoothoot::
	.incbin "sound/direct_sound_samples/cries/hoothoot.bin"

	.align 2
Cry_Noctowl::
	.incbin "sound/direct_sound_samples/cries/noctowl.bin"

	.align 2
Cry_Ledyba::
	.incbin "sound/direct_sound_samples/cries/ledyba.bin"

	.align 2
Cry_Ledian::
	.incbin "sound/direct_sound_samples/cries/ledian.bin"

	.align 2
Cry_Spinarak::
	.incbin "sound/direct_sound_samples/cries/spinarak.bin"

	.align 2
Cry_Ariados::
	.incbin "sound/direct_sound_samples/cries/ariados.bin"

	.align 2
Cry_Crobat::
	.incbin "sound/direct_sound_samples/cries/crobat.bin"

	.align 2
Cry_Chinchou::
	.incbin "sound/direct_sound_samples/cries/chinchou.bin"

	.align 2
Cry_Lanturn::
	.incbin "sound/direct_sound_samples/cries/lanturn.bin"

	.align 2
Cry_Pichu::
	.incbin "sound/direct_sound_samples/cries/pichu.bin"

	.align 2
Cry_Cleffa::
	.incbin "sound/direct_sound_samples/cries/cleffa.bin"

	.align 2
Cry_Igglybuff::
	.incbin "sound/direct_sound_samples/cries/igglybuff.bin"

	.align 2
Cry_Togepi::
	.incbin "sound/direct_sound_samples/cries/togepi.bin"

	.align 2
Cry_Togetic::
	.incbin "sound/direct_sound_samples/cries/togetic.bin"

	.align 2
Cry_Natu::
	.incbin "sound/direct_sound_samples/cries/natu.bin"

	.align 2
Cry_Xatu::
	.incbin "sound/direct_sound_samples/cries/xatu.bin"

	.align 2
Cry_Mareep::
	.incbin "sound/direct_sound_samples/cries/mareep.bin"

	.align 2
Cry_Flaaffy::
	.incbin "sound/direct_sound_samples/cries/flaaffy.bin"

	.align 2
Cry_Ampharos::
	.incbin "sound/direct_sound_samples/cries/ampharos.bin"

	.align 2
Cry_Bellossom::
	.incbin "sound/direct_sound_samples/cries/bellossom.bin"

	.align 2
Cry_Marill::
	.incbin "sound/direct_sound_samples/cries/marill.bin"

	.align 2
Cry_Azumarill::
	.incbin "sound/direct_sound_samples/cries/azumarill.bin"

	.align 2
Cry_Sudowoodo::
	.incbin "sound/direct_sound_samples/cries/sudowoodo.bin"

	.align 2
Cry_Politoed::
	.incbin "sound/direct_sound_samples/cries/politoed.bin"

	.align 2
Cry_Hoppip::
	.incbin "sound/direct_sound_samples/cries/hoppip.bin"

	.align 2
Cry_Skiploom::
	.incbin "sound/direct_sound_samples/cries/skiploom.bin"

	.align 2
Cry_Jumpluff::
	.incbin "sound/direct_sound_samples/cries/jumpluff.bin"

	.align 2
Cry_Aipom::
	.incbin "sound/direct_sound_samples/cries/aipom.bin"

	.align 2
Cry_Sunkern::
	.incbin "sound/direct_sound_samples/cries/sunkern.bin"

	.align 2
Cry_Sunflora::
	.incbin "sound/direct_sound_samples/cries/sunflora.bin"

	.align 2
Cry_Yanma::
	.incbin "sound/direct_sound_samples/cries/yanma.bin"

	.align 2
Cry_Wooper::
	.incbin "sound/direct_sound_samples/cries/wooper.bin"

	.align 2
Cry_Quagsire::
	.incbin "sound/direct_sound_samples/cries/quagsire.bin"

	.align 2
Cry_Espeon::
	.incbin "sound/direct_sound_samples/cries/espeon.bin"

	.align 2
Cry_Umbreon::
	.incbin "sound/direct_sound_samples/cries/umbreon.bin"

	.align 2
Cry_Murkrow::
	.incbin "sound/direct_sound_samples/cries/murkrow.bin"

	.align 2
Cry_Slowking::
	.incbin "sound/direct_sound_samples/cries/slowking.bin"

	.align 2
Cry_Misdreavus::
	.incbin "sound/direct_sound_samples/cries/misdreavus.bin"

	.align 2
Cry_Unown::
	.incbin "sound/direct_sound_samples/cries/unown.bin"

	.align 2
Cry_Wobbuffet::
	.incbin "sound/direct_sound_samples/cries/wobbuffet.bin"

	.align 2
Cry_Girafarig::
	.incbin "sound/direct_sound_samples/cries/girafarig.bin"

	.align 2
Cry_Pineco::
	.incbin "sound/direct_sound_samples/cries/pineco.bin"

	.align 2
Cry_Forretress::
	.incbin "sound/direct_sound_samples/cries/forretress.bin"

	.align 2
Cry_Dunsparce::
	.incbin "sound/direct_sound_samples/cries/dunsparce.bin"

	.align 2
Cry_Gligar::
	.incbin "sound/direct_sound_samples/cries/gligar.bin"

	.align 2
Cry_Steelix::
	.incbin "sound/direct_sound_samples/cries/steelix.bin"

	.align 2
Cry_Snubbull::
	.incbin "sound/direct_sound_samples/cries/snubbull.bin"

	.align 2
Cry_Granbull::
	.incbin "sound/direct_sound_samples/cries/granbull.bin"

	.align 2
Cry_Qwilfish::
	.incbin "sound/direct_sound_samples/cries/qwilfish.bin"

	.align 2
Cry_Scizor::
	.incbin "sound/direct_sound_samples/cries/scizor.bin"

	.align 2
Cry_Shuckle::
	.incbin "sound/direct_sound_samples/cries/shuckle.bin"

	.align 2
Cry_Heracross::
	.incbin "sound/direct_sound_samples/cries/heracross.bin"

	.align 2
Cry_Sneasel::
	.incbin "sound/direct_sound_samples/cries/sneasel.bin"

	.align 2
Cry_Teddiursa::
	.incbin "sound/direct_sound_samples/cries/teddiursa.bin"

	.align 2
Cry_Ursaring::
	.incbin "sound/direct_sound_samples/cries/ursaring.bin"

	.align 2
Cry_Slugma::
	.incbin "sound/direct_sound_samples/cries/slugma.bin"

	.align 2
Cry_Magcargo::
	.incbin "sound/direct_sound_samples/cries/magcargo.bin"

	.align 2
Cry_Swinub::
	.incbin "sound/direct_sound_samples/cries/swinub.bin"

	.align 2
Cry_Piloswine::
	.incbin "sound/direct_sound_samples/cries/piloswine.bin"

	.align 2
Cry_Corsola::
	.incbin "sound/direct_sound_samples/cries/corsola.bin"

	.align 2
Cry_Remoraid::
	.incbin "sound/direct_sound_samples/cries/remoraid.bin"

	.align 2
Cry_Octillery::
	.incbin "sound/direct_sound_samples/cries/octillery.bin"

	.align 2
Cry_Delibird::
	.incbin "sound/direct_sound_samples/cries/delibird.bin"

	.align 2
Cry_Mantine::
	.incbin "sound/direct_sound_samples/cries/mantine.bin"

	.align 2
Cry_Skarmory::
	.incbin "sound/direct_sound_samples/cries/skarmory.bin"

	.align 2
Cry_Houndour::
	.incbin "sound/direct_sound_samples/cries/houndour.bin"

	.align 2
Cry_Houndoom::
	.incbin "sound/direct_sound_samples/cries/houndoom.bin"

	.align 2
Cry_Kingdra::
	.incbin "sound/direct_sound_samples/cries/kingdra.bin"

	.align 2
Cry_Phanpy::
	.incbin "sound/direct_sound_samples/cries/phanpy.bin"

	.align 2
Cry_Donphan::
	.incbin "sound/direct_sound_samples/cries/donphan.bin"

	.align 2
Cry_Porygon2::
	.incbin "sound/direct_sound_samples/cries/porygon2.bin"

	.align 2
Cry_Stantler::
	.incbin "sound/direct_sound_samples/cries/stantler.bin"

	.align 2
Cry_Smeargle::
	.incbin "sound/direct_sound_samples/cries/smeargle.bin"

	.align 2
Cry_Tyrogue::
	.incbin "sound/direct_sound_samples/cries/tyrogue.bin"

	.align 2
Cry_Hitmontop::
	.incbin "sound/direct_sound_samples/cries/hitmontop.bin"

	.align 2
Cry_Smoochum::
	.incbin "sound/direct_sound_samples/cries/smoochum.bin"

	.align 2
Cry_Elekid::
	.incbin "sound/direct_sound_samples/cries/elekid.bin"

	.align 2
Cry_Magby::
	.incbin "sound/direct_sound_samples/cries/magby.bin"

	.align 2
Cry_Miltank::
	.incbin "sound/direct_sound_samples/cries/miltank.bin"

	.align 2
Cry_Blissey::
	.incbin "sound/direct_sound_samples/cries/blissey.bin"

	.align 2
Cry_Raikou::
	.incbin "sound/direct_sound_samples/cries/raikou.bin"

	.align 2
Cry_Entei::
	.incbin "sound/direct_sound_samples/cries/entei.bin"

	.align 2
Cry_Suicune::
	.incbin "sound/direct_sound_samples/cries/suicune.bin"

	.align 2
Cry_Larvitar::
	.incbin "sound/direct_sound_samples/cries/larvitar.bin"

	.align 2
Cry_Pupitar::
	.incbin "sound/direct_sound_samples/cries/pupitar.bin"

	.align 2
Cry_Tyranitar::
	.incbin "sound/direct_sound_samples/cries/tyranitar.bin"

	.align 2
Cry_Lugia::
	.incbin "sound/direct_sound_samples/cries/lugia.bin"

	.align 2
Cry_HoOh::
	.incbin "sound/direct_sound_samples/cries/ho_oh.bin"

	.align 2
Cry_Celebi::
	.incbin "sound/direct_sound_samples/cries/celebi.bin"

	.align 2
Cry_Kecleon::
	.incbin "sound/direct_sound_samples/cries/kecleon.bin"

	.align 2
Cry_Roselia::
	.incbin "sound/direct_sound_samples/cries/roselia.bin"

	.align 2
Cry_Torkoal::
	.incbin "sound/direct_sound_samples/cries/torkoal.bin"

	.align 2
Cry_Electrike::
	.incbin "sound/direct_sound_samples/cries/electrike.bin"

	.align 2
Cry_Manectric::
	.incbin "sound/direct_sound_samples/cries/manectric.bin"

	.align 2
Cry_Duskull::
	.incbin "sound/direct_sound_samples/cries/duskull.bin"

	.align 2
Cry_Latias::
	.incbin "sound/direct_sound_samples/cries/latias.bin"

	.align 2
Cry_Wynaut::
	.incbin "sound/direct_sound_samples/cries/wynaut.bin"

	.align 2
Cry_Seviper::
	.incbin "sound/direct_sound_samples/cries/seviper.bin"

	.align 2
Cry_Sharpedo::
	.incbin "sound/direct_sound_samples/cries/sharpedo.bin"

	.align 2
Cry_Zangoose::
	.incbin "sound/direct_sound_samples/cries/zangoose.bin"

	.align 2
Cry_Azurill::
	.incbin "sound/direct_sound_samples/cries/azurill.bin"

	.align 2
Cry_Swablu::
	.incbin "sound/direct_sound_samples/cries/swablu.bin"

	.align 2
Cry_Altaria::
	.incbin "sound/direct_sound_samples/cries/altaria.bin"

	.align 2
Cry_Unused265::
	.incbin "sound/direct_sound_samples/cries/unused_265.bin"

	.align 2
Cry_Taillow::
	.incbin "sound/direct_sound_samples/cries/taillow.bin"

	.align 2
Cry_Swellow::
	.incbin "sound/direct_sound_samples/cries/swellow.bin"

	.align 2
Cry_Unused268::
	.incbin "sound/direct_sound_samples/cries/unused_268.bin"

	.align 2
Cry_Spinda::
	.incbin "sound/direct_sound_samples/cries/spinda.bin"

	.align 2
Cry_Torchic::
	.incbin "sound/direct_sound_samples/cries/torchic.bin"

	.align 2
Cry_Combusken::
	.incbin "sound/direct_sound_samples/cries/combusken.bin"

	.align 2
Cry_Blaziken::
	.incbin "sound/direct_sound_samples/cries/blaziken.bin"

	.align 2
Cry_Treecko::
	.incbin "sound/direct_sound_samples/cries/treecko.bin"

	.align 2
Cry_Grovyle::
	.incbin "sound/direct_sound_samples/cries/grovyle.bin"

	.align 2
Cry_Sceptile::
	.incbin "sound/direct_sound_samples/cries/sceptile.bin"

	.align 2
Cry_Mudkip::
	.incbin "sound/direct_sound_samples/cries/mudkip.bin"

	.align 2
Cry_Marshtomp::
	.incbin "sound/direct_sound_samples/cries/marshtomp.bin"

	.align 2
Cry_Swampert::
	.incbin "sound/direct_sound_samples/cries/swampert.bin"

	.align 2
Cry_Pelipper::
	.incbin "sound/direct_sound_samples/cries/pelipper.bin"

	.align 2
Cry_Wingull::
	.incbin "sound/direct_sound_samples/cries/wingull.bin"

	.align 2
Cry_Banette::
	.incbin "sound/direct_sound_samples/cries/banette.bin"

	.align 2
Cry_Shuppet::
	.incbin "sound/direct_sound_samples/cries/shuppet.bin"

	.align 2
Cry_Lotad::
	.incbin "sound/direct_sound_samples/cries/lotad.bin"

	.align 2
Cry_Lombre::
	.incbin "sound/direct_sound_samples/cries/lombre.bin"

	.align 2
Cry_Ludicolo::
	.incbin "sound/direct_sound_samples/cries/ludicolo.bin"

	.align 2
Cry_Seedot::
	.incbin "sound/direct_sound_samples/cries/seedot.bin"

	.align 2
Cry_Nuzleaf::
	.incbin "sound/direct_sound_samples/cries/nuzleaf.bin"

	.align 2
Cry_Shiftry::
	.incbin "sound/direct_sound_samples/cries/shiftry.bin"

	.align 2
Cry_Carvanha::
	.incbin "sound/direct_sound_samples/cries/carvanha.bin"

	.align 2
Cry_Wurmple::
	.incbin "sound/direct_sound_samples/cries/wurmple.bin"

	.align 2
Cry_Silcoon::
	.incbin "sound/direct_sound_samples/cries/silcoon.bin"

	.align 2
Cry_Beautifly::
	.incbin "sound/direct_sound_samples/cries/beautifly.bin"

	.align 2
Cry_Cascoon::
	.incbin "sound/direct_sound_samples/cries/cascoon.bin"

	.align 2
Cry_Dustox::
	.incbin "sound/direct_sound_samples/cries/dustox.bin"

	.align 2
Cry_Ralts::
	.incbin "sound/direct_sound_samples/cries/ralts.bin"

	.align 2
Cry_Kirlia::
	.incbin "sound/direct_sound_samples/cries/kirlia.bin"

	.align 2
Cry_Gardevoir::
	.incbin "sound/direct_sound_samples/cries/gardevoir.bin"

	.align 2
Cry_Slakoth::
	.incbin "sound/direct_sound_samples/cries/slakoth.bin"

	.align 2
Cry_Vigoroth::
	.incbin "sound/direct_sound_samples/cries/vigoroth.bin"

	.align 2
Cry_Slaking::
	.incbin "sound/direct_sound_samples/cries/slaking.bin"

	.align 2
Cry_Nincada::
	.incbin "sound/direct_sound_samples/cries/nincada.bin"

	.align 2
Cry_Ninjask::
	.incbin "sound/direct_sound_samples/cries/ninjask.bin"

	.align 2
Cry_Shedinja::
	.incbin "sound/direct_sound_samples/cries/shedinja.bin"

	.align 2
Cry_Makuhita::
	.incbin "sound/direct_sound_samples/cries/makuhita.bin"

	.align 2
Cry_Hariyama::
	.incbin "sound/direct_sound_samples/cries/hariyama.bin"

	.align 2
Cry_Nosepass::
	.incbin "sound/direct_sound_samples/cries/nosepass.bin"

	.align 2
Cry_Glalie::
	.incbin "sound/direct_sound_samples/cries/glalie.bin"

	.align 2
Cry_Plusle::
	.incbin "sound/direct_sound_samples/cries/plusle.bin"

	.align 2
Cry_Minun::
	.incbin "sound/direct_sound_samples/cries/minun.bin"

	.align 2
Cry_Surskit::
	.incbin "sound/direct_sound_samples/cries/surskit.bin"

	.align 2
Cry_Masquerain::
	.incbin "sound/direct_sound_samples/cries/masquerain.bin"

	.align 2
Cry_Skitty::
	.incbin "sound/direct_sound_samples/cries/skitty.bin"

	.align 2
Cry_Delcatty::
	.incbin "sound/direct_sound_samples/cries/delcatty.bin"

	.align 2
Cry_Gulpin::
	.incbin "sound/direct_sound_samples/cries/gulpin.bin"

	.align 2
Cry_Swalot::
	.incbin "sound/direct_sound_samples/cries/swalot.bin"

	.align 2
Cry_Numel::
	.incbin "sound/direct_sound_samples/cries/numel.bin"

	.align 2
Cry_Camerupt::
	.incbin "sound/direct_sound_samples/cries/camerupt.bin"

	.align 2
Cry_Barboach::
	.incbin "sound/direct_sound_samples/cries/barboach.bin"

	.align 2
Cry_Whiscash::
	.incbin "sound/direct_sound_samples/cries/whiscash.bin"

	.align 2
Cry_Corphish::
	.incbin "sound/direct_sound_samples/cries/corphish.bin"

	.align 2
Cry_Crawdaunt::
	.incbin "sound/direct_sound_samples/cries/crawdaunt.bin"

	.align 2
Cry_Spoink::
	.incbin "sound/direct_sound_samples/cries/spoink.bin"

	.align 2
Cry_Grumpig::
	.incbin "sound/direct_sound_samples/cries/grumpig.bin"

	.align 2
Cry_Trapinch::
	.incbin "sound/direct_sound_samples/cries/trapinch.bin"

	.align 2
Cry_Vibrava::
	.incbin "sound/direct_sound_samples/cries/vibrava.bin"

	.align 2
Cry_Flygon::
	.incbin "sound/direct_sound_samples/cries/flygon.bin"

	.align 2
Cry_Cacnea::
	.incbin "sound/direct_sound_samples/cries/cacnea.bin"

	.align 2
Cry_Cacturne::
	.incbin "sound/direct_sound_samples/cries/cacturne.bin"

	.align 2
Cry_Baltoy::
	.incbin "sound/direct_sound_samples/cries/baltoy.bin"

	.align 2
Cry_Claydol::
	.incbin "sound/direct_sound_samples/cries/claydol.bin"

	.align 2
Cry_Lunatone::
	.incbin "sound/direct_sound_samples/cries/lunatone.bin"

	.align 2
Cry_Solrock::
	.incbin "sound/direct_sound_samples/cries/solrock.bin"

	.align 2
Cry_Feebas::
	.incbin "sound/direct_sound_samples/cries/feebas.bin"

	.align 2
Cry_Milotic::
	.incbin "sound/direct_sound_samples/cries/milotic.bin"

	.align 2
Cry_Absol::
	.incbin "sound/direct_sound_samples/cries/absol.bin"

	.align 2
Cry_Meditite::
	.incbin "sound/direct_sound_samples/cries/meditite.bin"

	.align 2
Cry_Medicham::
	.incbin "sound/direct_sound_samples/cries/medicham.bin"

	.align 2
Cry_Spheal::
	.incbin "sound/direct_sound_samples/cries/spheal.bin"

	.align 2
Cry_Sealeo::
	.incbin "sound/direct_sound_samples/cries/sealeo.bin"

	.align 2
Cry_Walrein::
	.incbin "sound/direct_sound_samples/cries/walrein.bin"

	.align 2
Cry_Clamperl::
	.incbin "sound/direct_sound_samples/cries/clamperl.bin"

	.align 2
Cry_Huntail::
	.incbin "sound/direct_sound_samples/cries/huntail.bin"

	.align 2
Cry_Gorebyss::
	.incbin "sound/direct_sound_samples/cries/gorebyss.bin"

	.align 2
Cry_Lileep::
	.incbin "sound/direct_sound_samples/cries/lileep.bin"

	.align 2
Cry_Cradily::
	.incbin "sound/direct_sound_samples/cries/cradily.bin"

	.align 2
Cry_Anorith::
	.incbin "sound/direct_sound_samples/cries/anorith.bin"

	.align 2
Cry_Armaldo::
	.incbin "sound/direct_sound_samples/cries/armaldo.bin"

	.align 2
Cry_Beldum::
	.incbin "sound/direct_sound_samples/cries/beldum.bin"

	.align 2
Cry_Metang::
	.incbin "sound/direct_sound_samples/cries/metang.bin"

	.align 2
Cry_Metagross::
	.incbin "sound/direct_sound_samples/cries/metagross.bin"

	.align 2
Cry_Bagon::
	.incbin "sound/direct_sound_samples/cries/bagon.bin"

	.align 2
Cry_Shelgon::
	.incbin "sound/direct_sound_samples/cries/shelgon.bin"

	.align 2
Cry_Regirock::
	.incbin "sound/direct_sound_samples/cries/regirock.bin"

	.align 2
Cry_Regice::
	.incbin "sound/direct_sound_samples/cries/regice.bin"

	.align 2
Cry_Registeel::
	.incbin "sound/direct_sound_samples/cries/registeel.bin"

	.align 2
Cry_Castform::
	.incbin "sound/direct_sound_samples/cries/castform.bin"

	.align 2
Cry_Volbeat::
	.incbin "sound/direct_sound_samples/cries/volbeat.bin"

	.align 2
Cry_Illumise::
	.incbin "sound/direct_sound_samples/cries/illumise.bin"

	.align 2
Cry_Poochyena::
	.incbin "sound/direct_sound_samples/cries/poochyena.bin"

	.align 2
Cry_Mightyena::
	.incbin "sound/direct_sound_samples/cries/mightyena.bin"

	.align 2
Cry_Dusclops::
	.incbin "sound/direct_sound_samples/cries/dusclops.bin"

	.align 2
Cry_Sableye::
	.incbin "sound/direct_sound_samples/cries/sableye.bin"

	.align 2
Cry_Mawile::
	.incbin "sound/direct_sound_samples/cries/mawile.bin"

	.align 2
Cry_Aron::
	.incbin "sound/direct_sound_samples/cries/aron.bin"

	.align 2
Cry_Lairon::
	.incbin "sound/direct_sound_samples/cries/lairon.bin"

	.align 2
Cry_Aggron::
	.incbin "sound/direct_sound_samples/cries/aggron.bin"

	.align 2
Cry_Relicanth::
	.incbin "sound/direct_sound_samples/cries/relicanth.bin"

	.align 2
Cry_Luvdisc::
	.incbin "sound/direct_sound_samples/cries/luvdisc.bin"

	.align 2
Cry_Groudon::
	.incbin "sound/direct_sound_samples/cries/groudon.bin"

	.align 2
Cry_Kyogre::
	.incbin "sound/direct_sound_samples/cries/kyogre.bin"

	.align 2
Cry_Rayquaza::
	.incbin "sound/direct_sound_samples/cries/rayquaza.bin"

	.align 2
Cry_Salamence::
	.incbin "sound/direct_sound_samples/cries/salamence.bin"

	.align 2
Cry_Breloom::
	.incbin "sound/direct_sound_samples/cries/breloom.bin"

	.align 2
Cry_Shroomish::
	.incbin "sound/direct_sound_samples/cries/shroomish.bin"

	.align 2
Cry_Linoone::
	.incbin "sound/direct_sound_samples/cries/linoone.bin"

	.align 2
Cry_Tropius::
	.incbin "sound/direct_sound_samples/cries/tropius.bin"

	.align 2
Cry_Wailmer::
	.incbin "sound/direct_sound_samples/cries/wailmer.bin"

	.align 2
Cry_Zigzagoon::
	.incbin "sound/direct_sound_samples/cries/zigzagoon.bin"

	.align 2
Cry_Exploud::
	.incbin "sound/direct_sound_samples/cries/exploud.bin"

	.align 2
Cry_Loudred::
	.incbin "sound/direct_sound_samples/cries/loudred.bin"

	.align 2
Cry_Wailord::
	.incbin "sound/direct_sound_samples/cries/wailord.bin"

	.align 2
Cry_Whismur::
	.incbin "sound/direct_sound_samples/cries/whismur.bin"

	.align 2
Cry_Snorunt::
	.incbin "sound/direct_sound_samples/cries/snorunt.bin"

	.align 2
Cry_Latios::
	.incbin "sound/direct_sound_samples/cries/latios.bin"

	.align 2
Cry_Jirachi::
	.incbin "sound/direct_sound_samples/cries/jirachi.bin"

	.align 2
Cry_Deoxys::
	.incbin "sound/direct_sound_samples/cries/deoxys.bin"

	.align 2
Cry_Chimecho::
	.incbin "sound/direct_sound_samples/cries/chimecho.bin"

	.align 2
DirectSoundWaveData_register_noise::
.if MUX_SMP_REGISTER_NOISE == TRUE
	.incbin "sound/direct_sound_samples/register_noise.bin"
.else
.endif

	.align 2
DirectSoundWaveData_unknown_18::
.if MUX_SMP_UNKNOWN_18 == TRUE
	.incbin "sound/direct_sound_samples/unknown_18.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_nylon_str_guitar::
.if MUX_SMP_SC88PRO_NYLON_STR_GUITAR == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_nylon_str_guitar.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_special_scream_drive::
.if MUX_SMP_SD90_SPECIAL_SCREAM_DRIVE == TRUE
	.incbin "sound/direct_sound_samples/sd90_special_scream_drive.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_1::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/01.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_2::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/02.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_3::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/03.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_4::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/04.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_5::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/05.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_6::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/06.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_7::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/07.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_8::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/08.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_9::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/09.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_10::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/10.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_11::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/11.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_12::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/12.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_13::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/13.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_14::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/14.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_15::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/15.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_16::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/16.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_17::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/17.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_18::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/18.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_19::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/19.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_20::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/20.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_21::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/21.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_22::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/22.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_23::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/23.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_24::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/24.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_25::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/25.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_26::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/26.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_27::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/27.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_28::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/28.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_29::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/29.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_30::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/30.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_31::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/31.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_32::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/32.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_33::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/33.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_34::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/34.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_35::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/35.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_36::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/36.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_37::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/37.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_38::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/38.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_39::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/39.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_40::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/40.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_41::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/41.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_42::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/42.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_43::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/43.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_44::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/44.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_45::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/45.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_46::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/46.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_47::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/47.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_48::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/48.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_49::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/49.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_50::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/50.bin"
.else
.endif

	.align 2
DirectSoundWaveData_Phoneme_51::
.if MUX_SMP_PHONEMES == TRUE
	.incbin "sound/direct_sound_samples/phonemes/51.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sc88pro_accordion_duplicate::
.if MUX_SMP_SC88PRO_ACCORDION_DUPLICATE == TRUE
	.incbin "sound/direct_sound_samples/sc88pro_accordion_duplicate.bin"
.else
.endif

	.align 2
DirectSoundWaveData_steinway_b_piano::
.if MUX_SMP_STEINWAY_B_PIANO == TRUE
	.incbin "sound/direct_sound_samples/steinway_b_piano.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_classical_whistle::
.if MUX_SMP_SD90_CLASSICAL_WHISTLE == TRUE
	.incbin "sound/direct_sound_samples/sd90_classical_whistle.bin"
.else
.endif

	.align 2
DirectSoundWaveData_sd90_enhanced_delay_shaku::
.if MUX_SMP_SD90_ENHANCED_DELAY_SHAKU == TRUE
	.incbin "sound/direct_sound_samples/sd90_enhanced_delay_shaku.bin"
.else
.endif

	.align 2
DirectSoundSynthData_dummy::
	camelot_synth_sound 3, 128, 0, 0, 0
