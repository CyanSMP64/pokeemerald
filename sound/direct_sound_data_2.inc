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
DirectSoundWaveData_piano1f_a1::
	.incbin "sound/direct_sound_samples/new/piano1f_a1.bin"

	.align 2
DirectSoundWaveData_piano1f_a6::
	.incbin "sound/direct_sound_samples/new/piano1f_a6.bin"

	.align 2
DirectSoundWaveData_piano1f_c6::
	.incbin "sound/direct_sound_samples/new/piano1f_c6.bin"

	.align 2
DirectSoundWaveData_piano1f_cs4::
	.incbin "sound/direct_sound_samples/new/piano1f_cs4.bin"

	.align 2
DirectSoundWaveData_piano1f_ds5::
	.incbin "sound/direct_sound_samples/new/piano1f_ds5.bin"

	.align 2
DirectSoundWaveData_piano1f_e3::
	.incbin "sound/direct_sound_samples/new/piano1f_e3.bin"

	.align 2
DirectSoundWaveData_piano1f_fs2::
	.incbin "sound/direct_sound_samples/new/piano1f_fs2.bin"

	.align 2
DirectSoundWaveData_piano1f_gs4::
	.incbin "sound/direct_sound_samples/new/piano1f_gs4.bin"

	.align 2
DirectSoundWaveData_piano1p_a1::
	.incbin "sound/direct_sound_samples/new/piano1p_a1.bin"

	.align 2
DirectSoundWaveData_piano1p_a6::
	.incbin "sound/direct_sound_samples/new/piano1p_a6.bin"

	.align 2
DirectSoundWaveData_piano1p_c6::
	.incbin "sound/direct_sound_samples/new/piano1p_c6.bin"

	.align 2
DirectSoundWaveData_piano1p_cs4::
	.incbin "sound/direct_sound_samples/new/piano1p_cs4.bin"

	.align 2
DirectSoundWaveData_piano1p_ds5::
	.incbin "sound/direct_sound_samples/new/piano1p_ds5.bin"

	.align 2
DirectSoundWaveData_piano1p_e3::
	.incbin "sound/direct_sound_samples/new/piano1p_e3.bin"

	.align 2
DirectSoundWaveData_piano1p_fs2::
	.incbin "sound/direct_sound_samples/new/piano1p_fs2.bin"

	.align 2
DirectSoundWaveData_piano1p_gs4::
	.incbin "sound/direct_sound_samples/new/piano1p_gs4.bin"

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
DirectSoundWaveData_synstr1_ch_maj7::
	.incbin "sound/direct_sound_samples/new/synstr1_ch_maj7.bin"

	.align 2
DirectSoundWaveData_synstr1_ch_maji1::
	.incbin "sound/direct_sound_samples/new/synstr1_ch_maji1.bin"

	.align 2
DirectSoundWaveData_synstr1_ch_min7::
	.incbin "sound/direct_sound_samples/new/synstr1_ch_min7.bin"

	.align 2
DirectSoundWaveData_synstr1_ch_mini1::
	.incbin "sound/direct_sound_samples/new/synstr1_ch_mini1.bin"

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






@ wb samples for testing only

	.align 2
DirectSoundWaveData_wb_ac_bass_c2_22::
	.incbin "sound/direct_sound_samples/wb/ac_bass_c2_22.bin"

	.align 2
DirectSoundWaveData_wb_ac_bass_c3_22::
	.incbin "sound/direct_sound_samples/wb/ac_bass_c3_22.bin"

	.align 2
DirectSoundWaveData_wb_bass_ana01_32::
	.incbin "sound/direct_sound_samples/wb/bass_ana01_32.bin"

	.align 2
DirectSoundWaveData_wb_bass_hit01_32::
	.incbin "sound/direct_sound_samples/wb/bass_hit01_32.bin"

	.align 2
DirectSoundWaveData_wb_bassdr_1_16::
	.incbin "sound/direct_sound_samples/wb/bassdr_1_16.bin"

	.align 2
DirectSoundWaveData_wb_bassdr_2_16::
	.incbin "sound/direct_sound_samples/wb/bassdr_2_16.bin"

	.align 2
DirectSoundWaveData_wb_bassdr_3_16::
	.incbin "sound/direct_sound_samples/wb/bassdr_3_16.bin"

	.align 2
DirectSoundWaveData_wb_basson_a3_22::
	.incbin "sound/direct_sound_samples/wb/basson_a3_22.bin"

	.align 2
DirectSoundWaveData_wb_basson_c3_22::
	.incbin "sound/direct_sound_samples/wb/basson_c3_22.bin"

	.align 2
DirectSoundWaveData_wb_basson_e2_22::
	.incbin "sound/direct_sound_samples/wb/basson_e2_22.bin"

	.align 2
DirectSoundWaveData_wb_bongo_16::
	.incbin "sound/direct_sound_samples/wb/bongo_16.bin"

	.align 2
DirectSoundWaveData_wb_cabasa_16::
	.incbin "sound/direct_sound_samples/wb/cabasa_16.bin"

	.align 2
DirectSoundWaveData_wb_chinese_cym_22::
	.incbin "sound/direct_sound_samples/wb/chinese_cym_22.bin"

	.align 2
DirectSoundWaveData_wb_choirs_male_a3_32::
	.incbin "sound/direct_sound_samples/wb/choirs_male_a3_32.bin"

	.align 2
DirectSoundWaveData_wb_choirs_male_c5_32::
	.incbin "sound/direct_sound_samples/wb/choirs_male_c5_32.bin"

	.align 2
DirectSoundWaveData_wb_choirs_male_f4_32::
	.incbin "sound/direct_sound_samples/wb/choirs_male_f4_32.bin"

	.align 2
DirectSoundWaveData_wb_clean_guitar_c5_22::
	.incbin "sound/direct_sound_samples/wb/clean_guitar_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_clean_guitar_e4_22::
	.incbin "sound/direct_sound_samples/wb/clean_guitar_e4_22.bin"

	.align 2
DirectSoundWaveData_wb_clean_guitar_g2_22::
	.incbin "sound/direct_sound_samples/wb/clean_guitar_g2_22.bin"

	.align 2
DirectSoundWaveData_wb_clean_guitar_g3_22::
	.incbin "sound/direct_sound_samples/wb/clean_guitar_g3_22.bin"

	.align 2
DirectSoundWaveData_wb_clock_32::
	.incbin "sound/direct_sound_samples/wb/clock_32.bin"

	.align 2
DirectSoundWaveData_wb_clock_n_22::
	.incbin "sound/direct_sound_samples/wb/clock_n_22.bin"

	.align 2
DirectSoundWaveData_wb_cool3_basE0_22::
	.incbin "sound/direct_sound_samples/wb/cool3_basE0_22.bin"

	.align 2
DirectSoundWaveData_wb_cool_snare2_22::
	.incbin "sound/direct_sound_samples/wb/cool_snare2_22.bin"

	.align 2
DirectSoundWaveData_wb_cowbell_22::
	.incbin "sound/direct_sound_samples/wb/cowbell_22.bin"

	.align 2
DirectSoundWaveData_wb_crash_cym_22::
	.incbin "sound/direct_sound_samples/wb/crash_cym_22.bin"

	.align 2
DirectSoundWaveData_wb_crash_cym_32::
	.incbin "sound/direct_sound_samples/wb/crash_cym_32.bin"

	.align 2
DirectSoundWaveData_wb_cymbal_orch_22::
	.incbin "sound/direct_sound_samples/wb/cymbal_orch_22.bin"

	.align 2
DirectSoundWaveData_wb_dance_close_hat_32::
	.incbin "sound/direct_sound_samples/wb/dance_close_hat_32.bin"

	.align 2
DirectSoundWaveData_wb_dance_open_hat_32::
	.incbin "sound/direct_sound_samples/wb/dance_open_hat_32.bin"

	.align 2
DirectSoundWaveData_wb_e_bass_a2_22::
	.incbin "sound/direct_sound_samples/wb/e_bass_a2_22.bin"

	.align 2
DirectSoundWaveData_wb_e_bass_a3_22::
	.incbin "sound/direct_sound_samples/wb/e_bass_a3_22.bin"

	.align 2
DirectSoundWaveData_wb_electric_piano_c4_22::
	.incbin "sound/direct_sound_samples/wb/electric_piano_c4_22.bin"

	.align 2
DirectSoundWaveData_wb_electric_piano_c5_22::
	.incbin "sound/direct_sound_samples/wb/electric_piano_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_europat_c3_16::
	.incbin "sound/direct_sound_samples/wb/europat_c3_16.bin"

	.align 2
DirectSoundWaveData_wb_eurosne_16::
	.incbin "sound/direct_sound_samples/wb/eurosne_16.bin"

	.align 2
DirectSoundWaveData_wb_flute_akai_wb_a5_22::
	.incbin "sound/direct_sound_samples/wb/flute_akai_wb_a5_22.bin"

	.align 2
DirectSoundWaveData_wb_flute_akai_wb_f6_22::
	.incbin "sound/direct_sound_samples/wb/flute_akai_wb_f6_22.bin"

	.align 2
DirectSoundWaveData_wb_french_horn_d4_32::
	.incbin "sound/direct_sound_samples/wb/french_horn_d4_32.bin"

	.align 2
DirectSoundWaveData_wb_french_horn_f3_32::
	.incbin "sound/direct_sound_samples/wb/french_horn_f3_32.bin"

	.align 2
DirectSoundWaveData_wb_glocken_c5_32::
	.incbin "sound/direct_sound_samples/wb/glocken_c5_32.bin"

	.align 2
DirectSoundWaveData_wb_handclap_1_16::
	.incbin "sound/direct_sound_samples/wb/handclap_1_16.bin"

	.align 2
DirectSoundWaveData_wb_handclap_2_16::
	.incbin "sound/direct_sound_samples/wb/handclap_2_16.bin"

	.align 2
DirectSoundWaveData_wb_harpsichord_c3_32::
	.incbin "sound/direct_sound_samples/wb/harpsichord_c3_32.bin"

	.align 2
DirectSoundWaveData_wb_high_conga_16::
	.incbin "sound/direct_sound_samples/wb/high_conga_16.bin"

	.align 2
DirectSoundWaveData_wb_hihat_closed_22::
	.incbin "sound/direct_sound_samples/wb/hihat_closed_22.bin"

	.align 2
DirectSoundWaveData_wb_hihat_open_22::
	.incbin "sound/direct_sound_samples/wb/hihat_open_22.bin"

	.align 2
DirectSoundWaveData_wb_marimba_c4_22::
	.incbin "sound/direct_sound_samples/wb/marimba_c4_22.bin"

	.align 2
DirectSoundWaveData_wb_marimba_c5_22::
	.incbin "sound/direct_sound_samples/wb/marimba_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_marimba_c6_22::
	.incbin "sound/direct_sound_samples/wb/marimba_c6_22.bin"

	.align 2
DirectSoundWaveData_wb_minorhit_c3_16::
	.incbin "sound/direct_sound_samples/wb/minorhit_c3_16.bin"

	.align 2
DirectSoundWaveData_wb_mute_conga_16::
	.incbin "sound/direct_sound_samples/wb/mute_conga_16.bin"

	.align 2
DirectSoundWaveData_wb_n_brass_max_g4_32::
	.incbin "sound/direct_sound_samples/wb/n_brass_max_g4_32.bin"

	.align 2
DirectSoundWaveData_wb_n_organ_c4_32::
	.incbin "sound/direct_sound_samples/wb/n_organ_c4_32.bin"

	.align 2
DirectSoundWaveData_wb_n_organ_f5_32::
	.incbin "sound/direct_sound_samples/wb/n_organ_f5_32.bin"

	.align 2
DirectSoundWaveData_wb_oboe_a5_22::
	.incbin "sound/direct_sound_samples/wb/oboe_a5_22.bin"

	.align 2
DirectSoundWaveData_wb_oboe_c5_22::
	.incbin "sound/direct_sound_samples/wb/oboe_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_oboe_e4_22::
	.incbin "sound/direct_sound_samples/wb/oboe_e4_22.bin"

	.align 2
DirectSoundWaveData_wb_oct_piano_c2_22::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c2_22.bin"

	.align 2
DirectSoundWaveData_wb_oct_piano_c3_22::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c3_22.bin"

	.align 2
DirectSoundWaveData_wb_oct_piano_c4_22::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c4_22.bin"

	.align 2
DirectSoundWaveData_wb_oct_piano_c5_22::
	.incbin "sound/direct_sound_samples/wb/oct_piano_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_pbrasslop_c4_max32::
	.incbin "sound/direct_sound_samples/wb/pbrasslop_c4_max32.bin"

	.align 2
DirectSoundWaveData_wb_perc_organ_c3_22::
	.incbin "sound/direct_sound_samples/wb/perc_organ_c3_22.bin"

	.align 2
DirectSoundWaveData_wb_perc_organ_c4_22::
	.incbin "sound/direct_sound_samples/wb/perc_organ_c4_22.bin"

	.align 2
DirectSoundWaveData_wb_perc_organ_c5_22::
	.incbin "sound/direct_sound_samples/wb/perc_organ_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_reverse_cym_16::
	.incbin "sound/direct_sound_samples/wb/reverse_cym_16.bin"

	.align 2
DirectSoundWaveData_wb_ride_bell_16::
	.incbin "sound/direct_sound_samples/wb/ride_bell_16.bin"

	.align 2
DirectSoundWaveData_wb_ride_cym_22::
	.incbin "sound/direct_sound_samples/wb/ride_cym_22.bin"

	.align 2
DirectSoundWaveData_wb_rimshot_16::
	.incbin "sound/direct_sound_samples/wb/rimshot_16.bin"

	.align 2
DirectSoundWaveData_wb_shaker_16::
	.incbin "sound/direct_sound_samples/wb/shaker_16.bin"

	.align 2
DirectSoundWaveData_wb_snare_22::
	.incbin "sound/direct_sound_samples/wb/snare_22.bin"

	.align 2
DirectSoundWaveData_wb_snare_808_16::
	.incbin "sound/direct_sound_samples/wb/snare_808_16.bin"

	.align 2
DirectSoundWaveData_wb_snare_orch_16::
	.incbin "sound/direct_sound_samples/wb/snare_orch_16.bin"

	.align 2
DirectSoundWaveData_wb_snare_power_16::
	.incbin "sound/direct_sound_samples/wb/snare_power_16.bin"

	.align 2
DirectSoundWaveData_wb_splash_cym_22::
	.incbin "sound/direct_sound_samples/wb/splash_cym_22.bin"

	.align 2
DirectSoundWaveData_wb_steel_dr_wb_g4_22::
	.incbin "sound/direct_sound_samples/wb/steel_dr_wb_g4_22.bin"

	.align 2
DirectSoundWaveData_wb_strings_a4_22::
	.incbin "sound/direct_sound_samples/wb/strings_a4_22.bin"

	.align 2
DirectSoundWaveData_wb_strings_c4_22::
	.incbin "sound/direct_sound_samples/wb/strings_c4_22.bin"

	.align 2
DirectSoundWaveData_wb_strings_c6_22::
	.incbin "sound/direct_sound_samples/wb/strings_c6_22.bin"

	.align 2
DirectSoundWaveData_wb_strings_f5_22::
	.incbin "sound/direct_sound_samples/wb/strings_f5_22.bin"

	.align 2
DirectSoundWaveData_wb_synapse_burst_max_22::
	.incbin "sound/direct_sound_samples/wb/synapse_burst_max_22.bin"

	.align 2
DirectSoundWaveData_wb_synbass_fs0_32::
	.incbin "sound/direct_sound_samples/wb/synbass_fs0_32.bin"

	.align 2
DirectSoundWaveData_wb_synth_bass_c2_32::
	.incbin "sound/direct_sound_samples/wb/synth_bass_c2_32.bin"

	.align 2
DirectSoundWaveData_wb_tambourine_16::
	.incbin "sound/direct_sound_samples/wb/tambourine_16.bin"

	.align 2
DirectSoundWaveData_wb_timpani2_as_16::
	.incbin "sound/direct_sound_samples/wb/timpani2_as_16.bin"

	.align 2
DirectSoundWaveData_wb_tom_f_16::
	.incbin "sound/direct_sound_samples/wb/tom_f_16.bin"

	.align 2
DirectSoundWaveData_wb_tom_h_16::
	.incbin "sound/direct_sound_samples/wb/tom_h_16.bin"

	.align 2
DirectSoundWaveData_wb_tom_l_16::
	.incbin "sound/direct_sound_samples/wb/tom_l_16.bin"

	.align 2
DirectSoundWaveData_wb_tom_m_16::
	.incbin "sound/direct_sound_samples/wb/tom_m_16.bin"

	.align 2
DirectSoundWaveData_wb_triangle_16::
	.incbin "sound/direct_sound_samples/wb/triangle_16.bin"

	.align 2
DirectSoundWaveData_wb_trombone_g2_22::
	.incbin "sound/direct_sound_samples/wb/trombone_g2_22.bin"

	.align 2
DirectSoundWaveData_wb_tublar_bell_c5_22::
	.incbin "sound/direct_sound_samples/wb/tublar_bell_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_tublar_bell_g4_22::
	.incbin "sound/direct_sound_samples/wb/tublar_bell_g4_22.bin"

	.align 2
DirectSoundWaveData_wb_vibraphone_c4_22::
	.incbin "sound/direct_sound_samples/wb/vibraphone_c4_22.bin"

	.align 2
DirectSoundWaveData_wb_vibraphone_c5_22::
	.incbin "sound/direct_sound_samples/wb/vibraphone_c5_22.bin"

	.align 2
DirectSoundWaveData_wb_w_noise_32::
	.incbin "sound/direct_sound_samples/wb/w_noise_32.bin"


@ funny song

	.align 2
DirectSoundWaveData_penis_chh::
	.incbin "sound/direct_sound_samples/new/penis_chh.bin"

	.align 2
DirectSoundWaveData_penis_crash::
	.incbin "sound/direct_sound_samples/new/penis_crash.bin"

	.align 2
DirectSoundWaveData_penis_kick::
	.incbin "sound/direct_sound_samples/new/penis_kick.bin"

	.align 2
DirectSoundWaveData_penis_ohh::
	.incbin "sound/direct_sound_samples/new/penis_ohh.bin"

	.align 2
DirectSoundWaveData_penis_saw::
	.incbin "sound/direct_sound_samples/new/penis_saw.bin"

	.align 2
DirectSoundWaveData_penis_screm::
	.incbin "sound/direct_sound_samples/new/penis_screm.bin"

	.align 2
DirectSoundWaveData_penis_snare::
	.incbin "sound/direct_sound_samples/new/penis_snare.bin"

	.align 2
DirectSoundWaveData_penis_square::
	.incbin "sound/direct_sound_samples/new/penis_square.bin"

	.align 2
DirectSoundWaveData_penis_bass::
	.incbin "sound/direct_sound_samples/new/penis_bass.bin"

	.align 2
DirectSoundWaveData_penis_string::
	.incbin "sound/direct_sound_samples/new/penis_string.bin"

	.align 2
DirectSoundWaveData_penis_tom::
	.incbin "sound/direct_sound_samples/new/penis_tom.bin"

	.align 2
DirectSoundWaveData_penis_tri::
	.incbin "sound/direct_sound_samples/new/penis_tri.bin"
