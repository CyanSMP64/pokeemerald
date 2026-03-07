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

	.macro camelot_square_basic duty_cycle:req
	camelot_synth_sound 0, \duty_cycle, 0, 0, 0
	.endm

	.align 2
DirectSoundSynthData_saw::
	camelot_synth_sound 1, 0, 0, 0, 0

	.align 2
DirectSoundSynthData_squ06::
	camelot_square_basic 16

	.align 2
DirectSoundSynthData_squ12::
	camelot_square_basic 32

	.align 2
DirectSoundSynthData_squ18::
	camelot_square_basic 48

	.align 2
DirectSoundSynthData_squ25::
	camelot_square_basic 64

	.align 2
DirectSoundSynthData_squ31::
	camelot_square_basic 80

	.align 2
DirectSoundSynthData_squ37::
	camelot_square_basic 96

	.align 2
DirectSoundSynthData_squ43::
	camelot_square_basic 112

	.align 2
DirectSoundSynthData_squ50::
	camelot_square_basic 128

	.align 2
DirectSoundSynthData_tri::
	camelot_synth_sound 2, 0, 0, 0, 0

	.align 2
DirectSoundWaveData_Accordion_It8P1::
	.incbin "sound/direct_sound_samples/new/Accordion_It8P1.bin"

	.align 2
DirectSoundWaveData_Accordion_It8P2::
	.incbin "sound/direct_sound_samples/new/Accordion_It8P2.bin"

	.align 2
DirectSoundWaveData_Accordion_It8P3::
	.incbin "sound/direct_sound_samples/new/Accordion_It8P3.bin"

	.align 2
DirectSoundWaveData_Acoustic_Bs___1::
	.incbin "sound/direct_sound_samples/new/Acoustic_Bs___1.bin"

	.align 2
DirectSoundWaveData_Acoustic_Bs___2::
	.incbin "sound/direct_sound_samples/new/Acoustic_Bs___2.bin"

	.align 2
DirectSoundWaveData_Atmosphere__551::
	.incbin "sound/direct_sound_samples/new/Atmosphere__551.bin"

	.align 2
DirectSoundWaveData_Bandoneon___8P1::
	.incbin "sound/direct_sound_samples/new/Bandoneon___8P1.bin"

	.align 2
DirectSoundWaveData_Bandoneon___8P2::
	.incbin "sound/direct_sound_samples/new/Bandoneon___8P2.bin"

	.align 2
DirectSoundWaveData_Bandoneon___8P3::
	.incbin "sound/direct_sound_samples/new/Bandoneon___8P3.bin"

	.align 2
DirectSoundWaveData_Bassoon_____881::
	.incbin "sound/direct_sound_samples/new/Bassoon_____881.bin"

	.align 2
DirectSoundWaveData_Brightness__551::
	.incbin "sound/direct_sound_samples/new/Brightness__551.bin"

	.align 2
DirectSoundWaveData_Choir_Aahs__8P1::
	.incbin "sound/direct_sound_samples/new/Choir_Aahs__8P1.bin"

	.align 2
DirectSoundWaveData_Choir_Aahs__8P2::
	.incbin "sound/direct_sound_samples/new/Choir_Aahs__8P2.bin"

	.align 2
DirectSoundWaveData_DR55Elec_SD_::
	.incbin "sound/direct_sound_samples/new/DR55Elec_SD_.bin"

	.align 2
DirectSoundWaveData_DR55Gated_SD::
	.incbin "sound/direct_sound_samples/new/DR55Gated_SD.bin"

	.align 2
DirectSoundWaveData_DR55Kick_1__::
	.incbin "sound/direct_sound_samples/new/DR55Kick_1__.bin"

	.align 2
DirectSoundWaveData_DR55Kick_2__::
	.incbin "sound/direct_sound_samples/new/DR55Kick_2__.bin"

	.align 2
DirectSoundWaveData_DR55Snare_2_::
	.incbin "sound/direct_sound_samples/new/DR55Snare_2_.bin"

	.align 2
DirectSoundWaveData_DR88808_BD__::
	.incbin "sound/direct_sound_samples/new/DR88808_BD__.bin"

	.align 2
DirectSoundWaveData_DR88808_S1__::
	.incbin "sound/direct_sound_samples/new/DR88808_S1__.bin"

	.align 2
DirectSoundWaveData_DR88808_S2__::
	.incbin "sound/direct_sound_samples/new/DR88808_S2__.bin"

	.align 2
DirectSoundWaveData_DR88909_BD__::
	.incbin "sound/direct_sound_samples/new/DR88909_BD__.bin"

	.align 2
DirectSoundWaveData_DR88909_S1__::
	.incbin "sound/direct_sound_samples/new/DR88909_S1__.bin"

	.align 2
DirectSoundWaveData_DR88909_S2__::
	.incbin "sound/direct_sound_samples/new/DR88909_S2__.bin"

	.align 2
DirectSoundWaveData_DR88Dance_K_::
	.incbin "sound/direct_sound_samples/new/DR88Dance_K_.bin"

	.align 2
DirectSoundWaveData_DR88Dance_S1::
	.incbin "sound/direct_sound_samples/new/DR88Dance_S1.bin"

	.align 2
DirectSoundWaveData_DR88Dance_S2::
	.incbin "sound/direct_sound_samples/new/DR88Dance_S2.bin"

	.align 2
DirectSoundWaveData_DR88Disco_S_::
	.incbin "sound/direct_sound_samples/new/DR88Disco_S_.bin"

	.align 2
DirectSoundWaveData_DR88Elec_K1_::
	.incbin "sound/direct_sound_samples/new/DR88Elec_K1_.bin"

	.align 2
DirectSoundWaveData_DR88Elec_K2_::
	.incbin "sound/direct_sound_samples/new/DR88Elec_K2_.bin"

	.align 2
DirectSoundWaveData_DR88Elec_S2_::
	.incbin "sound/direct_sound_samples/new/DR88Elec_S2_.bin"

	.align 2
DirectSoundWaveData_DR88Elec_S3_::
	.incbin "sound/direct_sound_samples/new/DR88Elec_S3_.bin"

	.align 2
DirectSoundWaveData_DR88House_S_::
	.incbin "sound/direct_sound_samples/new/DR88House_S_.bin"

	.align 2
DirectSoundWaveData_DR88Jazz_K1_::
	.incbin "sound/direct_sound_samples/new/DR88Jazz_K1_.bin"

	.align 2
DirectSoundWaveData_DR88Jazz_K2_::
	.incbin "sound/direct_sound_samples/new/DR88Jazz_K2_.bin"

	.align 2
DirectSoundWaveData_DR88Jazz_S1_::
	.incbin "sound/direct_sound_samples/new/DR88Jazz_S1_.bin"

	.align 2
DirectSoundWaveData_DR88Jazz_S2_::
	.incbin "sound/direct_sound_samples/new/DR88Jazz_S2_.bin"

	.align 2
DirectSoundWaveData_DR88Power_K1::
	.incbin "sound/direct_sound_samples/new/DR88Power_K1.bin"

	.align 2
DirectSoundWaveData_DR88Power_K2::
	.incbin "sound/direct_sound_samples/new/DR88Power_K2.bin"

	.align 2
DirectSoundWaveData_DR88Power_S1::
	.incbin "sound/direct_sound_samples/new/DR88Power_S1.bin"

	.align 2
DirectSoundWaveData_DR88Power_S2::
	.incbin "sound/direct_sound_samples/new/DR88Power_S2.bin"

	.align 2
DirectSoundWaveData_DR88Room_K1_::
	.incbin "sound/direct_sound_samples/new/DR88Room_K1_.bin"

	.align 2
DirectSoundWaveData_DR88Room_K2_::
	.incbin "sound/direct_sound_samples/new/DR88Room_K2_.bin"

	.align 2
DirectSoundWaveData_DR88Room_S1_::
	.incbin "sound/direct_sound_samples/new/DR88Room_S1_.bin"

	.align 2
DirectSoundWaveData_DR88Room_S2_::
	.incbin "sound/direct_sound_samples/new/DR88Room_S2_.bin"

	.align 2
DirectSoundWaveData_DR88Std_1_K1::
	.incbin "sound/direct_sound_samples/new/DR88Std_1_K1.bin"

	.align 2
DirectSoundWaveData_DR88Std_1_K2::
	.incbin "sound/direct_sound_samples/new/DR88Std_1_K2.bin"

	.align 2
DirectSoundWaveData_DR88Std_1_S1::
	.incbin "sound/direct_sound_samples/new/DR88Std_1_S1.bin"

	.align 2
DirectSoundWaveData_DR88Std_1_S2::
	.incbin "sound/direct_sound_samples/new/DR88Std_1_S2.bin"

	.align 2
DirectSoundWaveData_DR88Std_2_K1::
	.incbin "sound/direct_sound_samples/new/DR88Std_2_K1.bin"

	.align 2
DirectSoundWaveData_DR88Std_2_K2::
	.incbin "sound/direct_sound_samples/new/DR88Std_2_K2.bin"

	.align 2
DirectSoundWaveData_DR88Std_2_S1::
	.incbin "sound/direct_sound_samples/new/DR88Std_2_S1.bin"

	.align 2
DirectSoundWaveData_DR88Std_2_S2::
	.incbin "sound/direct_sound_samples/new/DR88Std_2_S2.bin"

	.align 2
DirectSoundWaveData_DR8P707_S1__::
	.incbin "sound/direct_sound_samples/new/DR8P707_S1__.bin"

	.align 2
DirectSoundWaveData_DR8PHouse_S2::
	.incbin "sound/direct_sound_samples/new/DR8PHouse_S2.bin"

	.align 2
DirectSoundWaveData_DR8PJungleS1::
	.incbin "sound/direct_sound_samples/new/DR8PJungleS1.bin"

	.align 2
DirectSoundWaveData_DR8PRapSnare::
	.incbin "sound/direct_sound_samples/new/DR8PRapSnare.bin"

	.align 2
DirectSoundWaveData_DR8PStd_1_S1::
	.incbin "sound/direct_sound_samples/new/DR8PStd_1_S1.bin"

	.align 2
DirectSoundWaveData_DR8PStd_1_S2::
	.incbin "sound/direct_sound_samples/new/DR8PStd_1_S2.bin"

	.align 2
DirectSoundWaveData_DR8PStd_1_S3::
	.incbin "sound/direct_sound_samples/new/DR8PStd_1_S3.bin"

	.align 2
DirectSoundWaveData_DR8PVoice_1_::
	.incbin "sound/direct_sound_samples/new/DR8PVoice_1_.bin"

	.align 2
DirectSoundWaveData_DR8PVoice_2_::
	.incbin "sound/direct_sound_samples/new/DR8PVoice_2_.bin"

	.align 2
DirectSoundWaveData_DR8PVoice_3_::
	.incbin "sound/direct_sound_samples/new/DR8PVoice_3_.bin"

	.align 2
DirectSoundWaveData_DR__909_Clap::
	.incbin "sound/direct_sound_samples/new/DR__909_Clap.bin"

	.align 2
DirectSoundWaveData_DR__Applaus2::
	.incbin "sound/direct_sound_samples/new/DR__Applaus2.bin"

	.align 2
DirectSoundWaveData_DR__BellTree::
	.incbin "sound/direct_sound_samples/new/DR__BellTree.bin"

	.align 2
DirectSoundWaveData_DR__C_Hi_Hat::
	.incbin "sound/direct_sound_samples/new/DR__C_Hi_Hat.bin"

	.align 2
DirectSoundWaveData_DR__Cabasa__::
	.incbin "sound/direct_sound_samples/new/DR__Cabasa__.bin"

	.align 2
DirectSoundWaveData_DR__Castanet::
	.incbin "sound/direct_sound_samples/new/DR__Castanet.bin"

	.align 2
DirectSoundWaveData_DR__Chin_Cym::
	.incbin "sound/direct_sound_samples/new/DR__Chin_Cym.bin"

	.align 2
DirectSoundWaveData_DR__Claves__::
	.incbin "sound/direct_sound_samples/new/DR__Claves__.bin"

	.align 2
DirectSoundWaveData_DR__CncrtSnr::
	.incbin "sound/direct_sound_samples/new/DR__CncrtSnr.bin"

	.align 2
DirectSoundWaveData_DR__Cowbell_::
	.incbin "sound/direct_sound_samples/new/DR__Cowbell_.bin"

	.align 2
DirectSoundWaveData_DR__CrshCym1::
	.incbin "sound/direct_sound_samples/new/DR__CrshCym1.bin"

	.align 2
DirectSoundWaveData_DR__CrshCym2::
	.incbin "sound/direct_sound_samples/new/DR__CrshCym2.bin"

	.align 2
DirectSoundWaveData_DR__FingSnp2::
	.incbin "sound/direct_sound_samples/new/DR__FingSnp2.bin"

	.align 2
DirectSoundWaveData_DR__Hi_Bongo::
	.incbin "sound/direct_sound_samples/new/DR__Hi_Bongo.bin"

	.align 2
DirectSoundWaveData_DR__Hi_Timbl::
	.incbin "sound/direct_sound_samples/new/DR__Hi_Timbl.bin"

	.align 2
DirectSoundWaveData_DR__Hi_Tom_1::
	.incbin "sound/direct_sound_samples/new/DR__Hi_Tom_1.bin"

	.align 2
DirectSoundWaveData_DR__High_Q__::
	.incbin "sound/direct_sound_samples/new/DR__High_Q__.bin"

	.align 2
DirectSoundWaveData_DR__Jng_Bell::
	.incbin "sound/direct_sound_samples/new/DR__Jng_Bell.bin"

	.align 2
DirectSoundWaveData_DR__LL_Whisl::
	.incbin "sound/direct_sound_samples/new/DR__LL_Whisl.bin"

	.align 2
DirectSoundWaveData_DR__L_Guiro_::
	.incbin "sound/direct_sound_samples/new/DR__L_Guiro_.bin"

	.align 2
DirectSoundWaveData_DR__LowAgogo::
	.incbin "sound/direct_sound_samples/new/DR__LowAgogo.bin"

	.align 2
DirectSoundWaveData_DR__LowBongo::
	.incbin "sound/direct_sound_samples/new/DR__LowBongo.bin"

	.align 2
DirectSoundWaveData_DR__LowConga::
	.incbin "sound/direct_sound_samples/new/DR__LowConga.bin"

	.align 2
DirectSoundWaveData_DR__LowTimbl::
	.incbin "sound/direct_sound_samples/new/DR__LowTimbl.bin"

	.align 2
DirectSoundWaveData_DR__LowTom_1::
	.incbin "sound/direct_sound_samples/new/DR__LowTom_1.bin"

	.align 2
DirectSoundWaveData_DR__LowW_Blk::
	.incbin "sound/direct_sound_samples/new/DR__LowW_Blk.bin"

	.align 2
DirectSoundWaveData_DR__MC_Beep1::
	.incbin "sound/direct_sound_samples/new/DR__MC_Beep1.bin"

	.align 2
DirectSoundWaveData_DR__MH_Conga::
	.incbin "sound/direct_sound_samples/new/DR__MH_Conga.bin"

	.align 2
DirectSoundWaveData_DR__Maracas_::
	.incbin "sound/direct_sound_samples/new/DR__Maracas_.bin"

	.align 2
DirectSoundWaveData_DR__MidTom_1::
	.incbin "sound/direct_sound_samples/new/DR__MidTom_1.bin"

	.align 2
DirectSoundWaveData_DR__Mt_Click::
	.incbin "sound/direct_sound_samples/new/DR__Mt_Click.bin"

	.align 2
DirectSoundWaveData_DR__Mt_Cuica::
	.incbin "sound/direct_sound_samples/new/DR__Mt_Cuica.bin"

	.align 2
DirectSoundWaveData_DR__Mt_Surdo::
	.incbin "sound/direct_sound_samples/new/DR__Mt_Surdo.bin"

	.align 2
DirectSoundWaveData_DR__Mt_Trigl::
	.incbin "sound/direct_sound_samples/new/DR__Mt_Trigl.bin"

	.align 2
DirectSoundWaveData_DR__Mt__Bell::
	.incbin "sound/direct_sound_samples/new/DR__Mt__Bell.bin"

	.align 2
DirectSoundWaveData_DR__OH_Conga::
	.incbin "sound/direct_sound_samples/new/DR__OH_Conga.bin"

	.align 2
DirectSoundWaveData_DR__O_Hi_Hat::
	.incbin "sound/direct_sound_samples/new/DR__O_Hi_Hat.bin"

	.align 2
DirectSoundWaveData_DR__Op_Cuica::
	.incbin "sound/direct_sound_samples/new/DR__Op_Cuica.bin"

	.align 2
DirectSoundWaveData_DR__Op_Surdo::
	.incbin "sound/direct_sound_samples/new/DR__Op_Surdo.bin"

	.align 2
DirectSoundWaveData_DR__Op_Trigl::
	.incbin "sound/direct_sound_samples/new/DR__Op_Trigl.bin"

	.align 2
DirectSoundWaveData_DR__P_Hi_Hat::
	.incbin "sound/direct_sound_samples/new/DR__P_Hi_Hat.bin"

	.align 2
DirectSoundWaveData_DR__RideBell::
	.incbin "sound/direct_sound_samples/new/DR__RideBell.bin"

	.align 2
DirectSoundWaveData_DR__RideCym1::
	.incbin "sound/direct_sound_samples/new/DR__RideCym1.bin"

	.align 2
DirectSoundWaveData_DR__RideCym2::
	.incbin "sound/direct_sound_samples/new/DR__RideCym2.bin"

	.align 2
DirectSoundWaveData_DR__Room_K1_::
	.incbin "sound/direct_sound_samples/new/DR__Room_K1_.bin"

	.align 2
DirectSoundWaveData_DR__Room_K2_::
	.incbin "sound/direct_sound_samples/new/DR__Room_K2_.bin"

	.align 2
DirectSoundWaveData_DR__Room_S1_::
	.incbin "sound/direct_sound_samples/new/DR__Room_S1_.bin"

	.align 2
DirectSoundWaveData_DR__Room_S2_::
	.incbin "sound/direct_sound_samples/new/DR__Room_S2_.bin"

	.align 2
DirectSoundWaveData_DR__S_Guiro_::
	.incbin "sound/direct_sound_samples/new/DR__S_Guiro_.bin"

	.align 2
DirectSoundWaveData_DR__Scr_Pull::
	.incbin "sound/direct_sound_samples/new/DR__Scr_Pull.bin"

	.align 2
DirectSoundWaveData_DR__Scr_Push::
	.incbin "sound/direct_sound_samples/new/DR__Scr_Push.bin"

	.align 2
DirectSoundWaveData_DR__Sd_Stick::
	.incbin "sound/direct_sound_samples/new/DR__Sd_Stick.bin"

	.align 2
DirectSoundWaveData_DR__Shaker__::
	.incbin "sound/direct_sound_samples/new/DR__Shaker__.bin"

	.align 2
DirectSoundWaveData_DR__Slap____::
	.incbin "sound/direct_sound_samples/new/DR__Slap____.bin"

	.align 2
DirectSoundWaveData_DR__Snr_Roll::
	.incbin "sound/direct_sound_samples/new/DR__Snr_Roll.bin"

	.align 2
DirectSoundWaveData_DR__SplshCym::
	.incbin "sound/direct_sound_samples/new/DR__SplshCym.bin"

	.align 2
DirectSoundWaveData_DR__Sq_Click::
	.incbin "sound/direct_sound_samples/new/DR__Sq_Click.bin"

	.align 2
DirectSoundWaveData_DR__Std1_K1_::
	.incbin "sound/direct_sound_samples/new/DR__Std1_K1_.bin"

	.align 2
DirectSoundWaveData_DR__Std1_K2_::
	.incbin "sound/direct_sound_samples/new/DR__Std1_K2_.bin"

	.align 2
DirectSoundWaveData_DR__Std1_S1_::
	.incbin "sound/direct_sound_samples/new/DR__Std1_S1_.bin"

	.align 2
DirectSoundWaveData_DR__Std1_S2_::
	.incbin "sound/direct_sound_samples/new/DR__Std1_S2_.bin"

	.align 2
DirectSoundWaveData_DR__Sticks__::
	.incbin "sound/direct_sound_samples/new/DR__Sticks__.bin"

	.align 2
DirectSoundWaveData_DR__Tambourn::
	.incbin "sound/direct_sound_samples/new/DR__Tambourn.bin"

	.align 2
DirectSoundWaveData_DR__Vib_slap::
	.incbin "sound/direct_sound_samples/new/DR__Vib_slap.bin"

	.align 2
DirectSoundWaveData_E_Piano_1___8P1::
	.incbin "sound/direct_sound_samples/new/E_Piano_1___8P1.bin"

	.align 2
DirectSoundWaveData_E_Piano_1___8P2::
	.incbin "sound/direct_sound_samples/new/E_Piano_1___8P2.bin"

	.align 2
DirectSoundWaveData_E_Piano_1___8P3::
	.incbin "sound/direct_sound_samples/new/E_Piano_1___8P3.bin"

	.align 2
DirectSoundWaveData_E_Piano_2___881::
	.incbin "sound/direct_sound_samples/new/E_Piano_2___881.bin"

	.align 2
DirectSoundWaveData_EnglishHorn_881::
	.incbin "sound/direct_sound_samples/new/EnglishHorn_881.bin"

	.align 2
DirectSoundWaveData_Fingered_Bs_8P1::
	.incbin "sound/direct_sound_samples/new/Fingered_Bs_8P1.bin"

	.align 2
DirectSoundWaveData_Fingered_Bs_8P2::
	.incbin "sound/direct_sound_samples/new/Fingered_Bs_8P2.bin"

	.align 2
DirectSoundWaveData_Flute_2_____8P1::
	.incbin "sound/direct_sound_samples/new/Flute_2_____8P1.bin"

	.align 2
DirectSoundWaveData_Flute_2_____8P2::
	.incbin "sound/direct_sound_samples/new/Flute_2_____8P2.bin"

	.align 2
DirectSoundWaveData_French_Horns881::
	.incbin "sound/direct_sound_samples/new/French_Horns881.bin"

	.align 2
DirectSoundWaveData_Harp________881::
	.incbin "sound/direct_sound_samples/new/Harp________881.bin"

	.align 2
DirectSoundWaveData_Harp________882::
	.incbin "sound/direct_sound_samples/new/Harp________882.bin"

	.align 2
DirectSoundWaveData_Harp________883::
	.incbin "sound/direct_sound_samples/new/Harp________883.bin"

	.align 2
DirectSoundWaveData_Harp________884::
	.incbin "sound/direct_sound_samples/new/Harp________884.bin"

	.align 2
DirectSoundWaveData_Harpsichord___1::
	.incbin "sound/direct_sound_samples/new/Harpsichord___1.bin"

	.align 2
DirectSoundWaveData_Harpsichord___2::
	.incbin "sound/direct_sound_samples/new/Harpsichord___2.bin"

	.align 2
DirectSoundWaveData_Harpsichord___3::
	.incbin "sound/direct_sound_samples/new/Harpsichord___3.bin"

	.align 2
DirectSoundWaveData_Kalimba_____8P1::
	.incbin "sound/direct_sound_samples/new/Kalimba_____8P1.bin"

	.align 2
DirectSoundWaveData_Marimba_____881::
	.incbin "sound/direct_sound_samples/new/Marimba_____881.bin"

	.align 2
DirectSoundWaveData_Marimba_____882::
	.incbin "sound/direct_sound_samples/new/Marimba_____882.bin"

	.align 2
DirectSoundWaveData_Music_Box_____1::
	.incbin "sound/direct_sound_samples/new/Music_Box_____1.bin"

	.align 2
DirectSoundWaveData_Nylon_str_Gt8P1::
	.incbin "sound/direct_sound_samples/new/Nylon_str_Gt8P1.bin"

	.align 2
DirectSoundWaveData_Nylon_str_Gt8P2::
	.incbin "sound/direct_sound_samples/new/Nylon_str_Gt8P2.bin"

	.align 2
DirectSoundWaveData_Oboe__________1::
	.incbin "sound/direct_sound_samples/new/Oboe__________1.bin"

	.align 2
DirectSoundWaveData_Oboe__________2::
	.incbin "sound/direct_sound_samples/new/Oboe__________2.bin"

	.align 2
DirectSoundWaveData_Piano_2_______1::
	.incbin "sound/direct_sound_samples/new/Piano_2_______1.bin"

	.align 2
DirectSoundWaveData_Piano_2_______2::
	.incbin "sound/direct_sound_samples/new/Piano_2_______2.bin"

	.align 2
DirectSoundWaveData_Piano_2_______3::
	.incbin "sound/direct_sound_samples/new/Piano_2_______3.bin"

	.align 2
DirectSoundWaveData_Piano_2_______4::
	.incbin "sound/direct_sound_samples/new/Piano_2_______4.bin"

	.align 2
DirectSoundWaveData_Piccolo_____881::
	.incbin "sound/direct_sound_samples/new/Piccolo_____881.bin"

	.align 2
DirectSoundWaveData_PizzicatoStr881::
	.incbin "sound/direct_sound_samples/new/PizzicatoStr881.bin"

	.align 2
DirectSoundWaveData_PizzicatoStr882::
	.incbin "sound/direct_sound_samples/new/PizzicatoStr882.bin"

	.align 2
DirectSoundWaveData_PizzicatoStr883::
	.incbin "sound/direct_sound_samples/new/PizzicatoStr883.bin"

	.align 2
DirectSoundWaveData_PizzicatoStr884::
	.incbin "sound/direct_sound_samples/new/PizzicatoStr884.bin"

	.align 2
DirectSoundWaveData_Steel_str_Gt8P1::
	.incbin "sound/direct_sound_samples/new/Steel_str_Gt8P1.bin"

	.align 2
DirectSoundWaveData_Steel_str_Gt8P2::
	.incbin "sound/direct_sound_samples/new/Steel_str_Gt8P2.bin"

	.align 2
DirectSoundWaveData_Timpani_____881::
	.incbin "sound/direct_sound_samples/new/Timpani_____881.bin"

	.align 2
DirectSoundWaveData_Trombone______1::
	.incbin "sound/direct_sound_samples/new/Trombone______1.bin"

	.align 2
DirectSoundWaveData_Trombone______2::
	.incbin "sound/direct_sound_samples/new/Trombone______2.bin"

	.align 2
DirectSoundWaveData_Trumpet_______1::
	.incbin "sound/direct_sound_samples/new/Trumpet_______1.bin"

	.align 2
DirectSoundWaveData_Tubular_bell__1::
	.incbin "sound/direct_sound_samples/new/Tubular_bell__1.bin"

	.align 2
DirectSoundWaveData_Viola_______8P1::
	.incbin "sound/direct_sound_samples/new/Viola_______8P1.bin"

	.align 2
DirectSoundWaveData_Viola_______8P2::
	.incbin "sound/direct_sound_samples/new/Viola_______8P2.bin"

	.align 2
DirectSoundWaveData_Whistle_____551::
	.incbin "sound/direct_sound_samples/new/Whistle_____551.bin"

	.align 2
DirectSoundWaveData_acbass_a1::
	.incbin "sound/direct_sound_samples/new/acbass_a1.bin"

	.align 2
DirectSoundWaveData_acbass_a2::
	.incbin "sound/direct_sound_samples/new/acbass_a2.bin"

	.align 2
DirectSoundWaveData_acbass_a3::
	.incbin "sound/direct_sound_samples/new/acbass_a3.bin"

	.align 2
DirectSoundWaveData_acbass_ds2::
	.incbin "sound/direct_sound_samples/new/acbass_ds2.bin"

	.align 2
DirectSoundWaveData_bongolow::
	.incbin "sound/direct_sound_samples/new/bongolow.bin"

	.align 2
DirectSoundWaveData_celesta_c5::
	.incbin "sound/direct_sound_samples/new/celesta_c5.bin"

	.align 2
DirectSoundWaveData_clave::
	.incbin "sound/direct_sound_samples/new/clave.bin"

	.align 2
DirectSoundWaveData_congahimute::
	.incbin "sound/direct_sound_samples/new/congahimute.bin"

	.align 2
DirectSoundWaveData_congalow::
	.incbin "sound/direct_sound_samples/new/congalow.bin"

	.align 2
DirectSoundWaveData_crash1::
	.incbin "sound/direct_sound_samples/new/crash1.bin"

	.align 2
DirectSoundWaveData_ct_bassdrum::
	.incbin "sound/direct_sound_samples/new/ct_bassdrum.bin"

	.align 2
DirectSoundWaveData_ct_choir::
	.incbin "sound/direct_sound_samples/new/ct_choir.bin"

	.align 2
DirectSoundWaveData_ct_cymbal::
	.incbin "sound/direct_sound_samples/new/ct_cymbal.bin"

	.align 2
DirectSoundWaveData_ct_flute::
	.incbin "sound/direct_sound_samples/new/ct_flute.bin"

	.align 2
DirectSoundWaveData_ct_osnare::
	.incbin "sound/direct_sound_samples/new/ct_osnare.bin"

	.align 2
DirectSoundWaveData_ct_panflute::
	.incbin "sound/direct_sound_samples/new/ct_panflute.bin"

	.align 2
DirectSoundWaveData_ct_pbass::
	.incbin "sound/direct_sound_samples/new/ct_pbass.bin"

	.align 2
DirectSoundWaveData_ct_piano::
	.incbin "sound/direct_sound_samples/new/ct_piano.bin"

	.align 2
DirectSoundWaveData_ct_pizzicato::
	.incbin "sound/direct_sound_samples/new/ct_pizzicato.bin"

	.align 2
DirectSoundWaveData_ct_rhodes::
	.incbin "sound/direct_sound_samples/new/ct_rhodes.bin"

	.align 2
DirectSoundWaveData_ct_sax::
	.incbin "sound/direct_sound_samples/new/ct_sax.bin"

	.align 2
DirectSoundWaveData_ct_strings::
	.incbin "sound/direct_sound_samples/new/ct_strings.bin"

	.align 2
DirectSoundWaveData_ct_toms::
	.incbin "sound/direct_sound_samples/new/ct_toms.bin"

	.align 2
DirectSoundWaveData_eb_acousticbass::
	.incbin "sound/direct_sound_samples/new/eb_acousticbass.bin"

	.align 2
DirectSoundWaveData_eb_bazaarbongo::
	.incbin "sound/direct_sound_samples/new/eb_bazaarbongo.bin"

	.align 2
DirectSoundWaveData_eb_bongo::
	.incbin "sound/direct_sound_samples/new/eb_bongo.bin"

	.align 2
DirectSoundWaveData_eb_buzzbuzz::
	.incbin "sound/direct_sound_samples/new/eb_buzzbuzz.bin"

	.align 2
DirectSoundWaveData_eb_cashmoney::
	.incbin "sound/direct_sound_samples/new/eb_cashmoney.bin"

	.align 2
DirectSoundWaveData_eb_doorshut::
	.incbin "sound/direct_sound_samples/new/eb_doorshut.bin"

	.align 2
DirectSoundWaveData_eb_giygas3::
	.incbin "sound/direct_sound_samples/new/eb_giygas3.bin"

	.align 2
DirectSoundWaveData_eb_giygasbreath::
	.incbin "sound/direct_sound_samples/new/eb_giygasbreath.bin"

	.align 2
DirectSoundWaveData_eb_giygasstatic::
	.incbin "sound/direct_sound_samples/new/eb_giygasstatic.bin"

	.align 2
DirectSoundWaveData_eb_guica::
	.incbin "sound/direct_sound_samples/new/eb_guica.bin"

	.align 2
DirectSoundWaveData_eb_hihatopen::
	.incbin "sound/direct_sound_samples/new/eb_hihatopen.bin"

	.align 2
DirectSoundWaveData_eb_kick1::
	.incbin "sound/direct_sound_samples/new/eb_kick1.bin"

	.align 2
DirectSoundWaveData_eb_kick2::
	.incbin "sound/direct_sound_samples/new/eb_kick2.bin"

	.align 2
DirectSoundWaveData_eb_krakenstring::
	.incbin "sound/direct_sound_samples/new/eb_krakenstring.bin"

	.align 2
DirectSoundWaveData_eb_mellowpiano::
	.incbin "sound/direct_sound_samples/new/eb_mellowpiano.bin"

	.align 2
DirectSoundWaveData_eb_moonsidecafe::
	.incbin "sound/direct_sound_samples/new/eb_moonsidecafe.bin"

	.align 2
DirectSoundWaveData_eb_onettbass::
	.incbin "sound/direct_sound_samples/new/eb_onettbass.bin"

	.align 2
DirectSoundWaveData_eb_overdrivenguitar::
	.incbin "sound/direct_sound_samples/new/eb_overdrivenguitar.bin"

	.align 2
DirectSoundWaveData_eb_pokeybass::
	.incbin "sound/direct_sound_samples/new/eb_pokeybass.bin"

	.align 2
DirectSoundWaveData_eb_pokeyhihat::
	.incbin "sound/direct_sound_samples/new/eb_pokeyhihat.bin"

	.align 2
DirectSoundWaveData_eb_ride::
	.incbin "sound/direct_sound_samples/new/eb_ride.bin"

	.align 2
DirectSoundWaveData_eb_savetheminerspad::
	.incbin "sound/direct_sound_samples/new/eb_savetheminerspad.bin"

	.align 2
DirectSoundWaveData_eb_snare1::
	.incbin "sound/direct_sound_samples/new/eb_snare1.bin"

	.align 2
DirectSoundWaveData_eb_snare3::
	.incbin "sound/direct_sound_samples/new/eb_snare3.bin"

	.align 2
DirectSoundWaveData_eb_square::
	.incbin "sound/direct_sound_samples/new/eb_square.bin"

	.align 2
DirectSoundWaveData_eb_subsine::
	.incbin "sound/direct_sound_samples/new/eb_subsine.bin"

	.align 2
DirectSoundWaveData_eb_telephonering::
	.incbin "sound/direct_sound_samples/new/eb_telephonering.bin"

	.align 2
DirectSoundWaveData_eb_thepast::
	.incbin "sound/direct_sound_samples/new/eb_thepast.bin"

	.align 2
DirectSoundWaveData_eb_trumpet::
	.incbin "sound/direct_sound_samples/new/eb_trumpet.bin"

	.align 2
DirectSoundWaveData_eb_trumpetforalltime::
	.incbin "sound/direct_sound_samples/new/eb_trumpetforalltime.bin"

	.align 2
DirectSoundWaveData_eb_unsettlingopponent::
	.incbin "sound/direct_sound_samples/new/eb_unsettlingopponent.bin"

	.align 2
DirectSoundWaveData_eb_venus::
	.incbin "sound/direct_sound_samples/new/eb_venus.bin"

	.align 2
DirectSoundWaveData_eb_waspy::
	.incbin "sound/direct_sound_samples/new/eb_waspy.bin"

	.align 2
DirectSoundWaveData_eb_water::
	.incbin "sound/direct_sound_samples/new/eb_water.bin"

	.align 2
DirectSoundWaveData_eb_yournameplease2::
	.incbin "sound/direct_sound_samples/new/eb_yournameplease2.bin"

	.align 2
DirectSoundWaveData_fingersnap::
	.incbin "sound/direct_sound_samples/new/fingersnap.bin"

	.align 2
DirectSoundWaveData_floweylead_gs4::
	.incbin "sound/direct_sound_samples/new/floweylead_gs4.bin"

	.align 2
DirectSoundWaveData_floweylead_gs5::
	.incbin "sound/direct_sound_samples/new/floweylead_gs5.bin"

	.align 2
DirectSoundWaveData_fretlessbass_c3::
	.incbin "sound/direct_sound_samples/new/fretlessbass_c3.bin"

	.align 2
DirectSoundWaveData_glocken_cs6::
	.incbin "sound/direct_sound_samples/new/glocken_cs6.bin"

	.align 2
DirectSoundWaveData_glocken_g5::
	.incbin "sound/direct_sound_samples/new/glocken_g5.bin"

	.align 2
DirectSoundWaveData_glocken_g6::
	.incbin "sound/direct_sound_samples/new/glocken_g6.bin"

	.align 2
DirectSoundWaveData_glocken_g7::
	.incbin "sound/direct_sound_samples/new/glocken_g7.bin"

	.align 2
DirectSoundWaveData_hat_closed::
	.incbin "sound/direct_sound_samples/new/hat_closed.bin"

	.align 2
DirectSoundWaveData_hat_open::
	.incbin "sound/direct_sound_samples/new/hat_open.bin"

	.align 2
DirectSoundWaveData_kick1::
	.incbin "sound/direct_sound_samples/new/kick1.bin"

	.align 2
DirectSoundWaveData_mus_cymbal::
	.incbin "sound/direct_sound_samples/new/compressed/mus_cymbal.bin"

	.align 2
DirectSoundWaveData_mus_intronoise_l::
	.incbin "sound/direct_sound_samples/new/mus_intronoise_l.bin"

	.align 2
DirectSoundWaveData_mus_intronoise_r::
	.incbin "sound/direct_sound_samples/new/mus_intronoise_r.bin"

	.align 2
DirectSoundWaveData_piano1f_b2::
	.incbin "sound/direct_sound_samples/new/piano1f_b2.bin"

	.align 2
DirectSoundWaveData_piano1f_b4::
	.incbin "sound/direct_sound_samples/new/piano1f_b4.bin"

	.align 2
DirectSoundWaveData_piano1f_d2::
	.incbin "sound/direct_sound_samples/new/piano1f_d2.bin"

	.align 2
DirectSoundWaveData_piano1f_d7::
	.incbin "sound/direct_sound_samples/new/piano1f_d7.bin"

	.align 2
DirectSoundWaveData_piano1f_f1::
	.incbin "sound/direct_sound_samples/new/piano1f_f1.bin"

	.align 2
DirectSoundWaveData_piano1f_f4::
	.incbin "sound/direct_sound_samples/new/piano1f_f4.bin"

	.align 2
DirectSoundWaveData_piano1f_f6::
	.incbin "sound/direct_sound_samples/new/piano1f_f6.bin"

	.align 2
DirectSoundWaveData_piano1f_gs3::
	.incbin "sound/direct_sound_samples/new/piano1f_gs3.bin"

	.align 2
DirectSoundWaveData_piano1f_gs5::
	.incbin "sound/direct_sound_samples/new/piano1f_gs5.bin"

	.align 2
DirectSoundWaveData_piano1p_b2::
	.incbin "sound/direct_sound_samples/new/piano1p_b2.bin"

	.align 2
DirectSoundWaveData_piano1p_b4::
	.incbin "sound/direct_sound_samples/new/piano1p_b4.bin"

	.align 2
DirectSoundWaveData_piano1p_d2::
	.incbin "sound/direct_sound_samples/new/piano1p_d2.bin"

	.align 2
DirectSoundWaveData_piano1p_d7::
	.incbin "sound/direct_sound_samples/new/piano1p_d7.bin"

	.align 2
DirectSoundWaveData_piano1p_f1::
	.incbin "sound/direct_sound_samples/new/piano1p_f1.bin"

	.align 2
DirectSoundWaveData_piano1p_f4::
	.incbin "sound/direct_sound_samples/new/piano1p_f4.bin"

	.align 2
DirectSoundWaveData_piano1p_f6::
	.incbin "sound/direct_sound_samples/new/piano1p_f6.bin"

	.align 2
DirectSoundWaveData_piano1p_gs3::
	.incbin "sound/direct_sound_samples/new/piano1p_gs3.bin"

	.align 2
DirectSoundWaveData_piano1p_gs5::
	.incbin "sound/direct_sound_samples/new/piano1p_gs5.bin"

	.align 2
DirectSoundWaveData_roomkick::
	.incbin "sound/direct_sound_samples/new/roomkick.bin"

	.align 2
DirectSoundWaveData_roomsnare::
	.incbin "sound/direct_sound_samples/new/roomsnare.bin"

	.align 2
DirectSoundWaveData_sidestick::
	.incbin "sound/direct_sound_samples/new/sidestick.bin"

	.align 2
DirectSoundWaveData_sinewave_c5::
	.incbin "sound/direct_sound_samples/new/sinewave_c5.bin"

	.align 2
DirectSoundWaveData_snare1::
	.incbin "sound/direct_sound_samples/new/snare1.bin"

	.align 2
DirectSoundWaveData_strings_as5::
	.incbin "sound/direct_sound_samples/new/strings_as5.bin"

	.align 2
DirectSoundWaveData_strings_g2::
	.incbin "sound/direct_sound_samples/new/strings_g2.bin"

	.align 2
DirectSoundWaveData_strings_g3::
	.incbin "sound/direct_sound_samples/new/strings_g3.bin"

	.align 2
DirectSoundWaveData_strings_g4::
	.incbin "sound/direct_sound_samples/new/strings_g4.bin"

	.align 2
DirectSoundWaveData_strings_g6::
	.incbin "sound/direct_sound_samples/new/strings_g6.bin"

	.align 2
DirectSoundWaveData_tubularbell_a4::
	.incbin "sound/direct_sound_samples/new/tubularbell_a4.bin"

	.align 2
DirectSoundWaveData_tubularbell_fs5::
	.incbin "sound/direct_sound_samples/new/tubularbell_fs5.bin"

	.align 2
DirectSoundWaveData_whitenoise_c4::
	.incbin "sound/direct_sound_samples/new/whitenoise_c4.bin"

	.align 2
DirectSoundWaveData_windchime_c4::
	.incbin "sound/direct_sound_samples/new/windchime_c4.bin"
