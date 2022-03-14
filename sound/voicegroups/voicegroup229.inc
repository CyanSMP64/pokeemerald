	.align 2
voicegroup229:: @ HGSS main
	voice_keysplit voicegroup233, KeySplitTable35    @ piano
	voice_keysplit voicegroup234, KeySplitTable36    @ piano 2
	voice_keysplit voicegroup235, KeySplitTable37    @ piano octave
	voice_keysplit voicegroup236, KeySplitTable9     @ rhodes 1
	voice_keysplit voicegroup237, KeySplitTable9     @ rhodes 2
	voice_keysplit voicegroup238, KeySplitTable36    @ vibraphone
	voice_keysplit voicegroup239, KeySplitTable38    @ marimba
	voice_keysplit voicegroup240, KeySplitTable39    @ xylophone
	voice_keysplit voicegroup241, KeySplitTable25    @ tubular bell
	voice_keysplit voicegroup242, KeySplitTable36    @ glockenspiel
	voice_keysplit voicegroup243, KeySplitTable38    @ music box
	voice_keysplit voicegroup244, KeySplitTable40    @ drawbar organ
	voice_keysplit voicegroup245, KeySplitTable40    @ jazz organ
	voice_keysplit voicegroup246, KeySplitTable40    @ accordion
	voice_keysplit voicegroup247, KeySplitTable41    @ nylon guitar
	voice_keysplit voicegroup248, KeySplitTable41    @ martin guitar
	voice_keysplit voicegroup249, KeySplitTable32    @ distortion guitar 1
	voice_keysplit voicegroup250, KeySplitTable32    @ distortion guitar 2
	voice_keysplit voicegroup251, KeySplitTable41    @ clean guitar
	voice_keysplit voicegroup252, KeySplitTable42    @ upright bass
	voice_keysplit voicegroup253, KeySplitTable43    @ fingered bass
	voice_directsound 60, 0, DirectSoundWaveData_dp_slapbass_c1_16, 255, 0, 255, 192
	voice_keysplit voicegroup254, KeySplitTable44    @ synth bass
	voice_keysplit voicegroup255, KeySplitTable45    @ strings
	voice_keysplit voicegroup256, KeySplitTable46    @ violin
	voice_keysplit voicegroup257, KeySplitTable47    @ cello
	voice_keysplit voicegroup258, KeySplitTable48    @ pizzicato
	voice_keysplit voicegroup259, KeySplitTable40    @ harp
	voice_keysplit voicegroup260, KeySplitTable40    @ timpani
	voice_keysplit voicegroup261, KeySplitTable39    @ trumpets
	voice_keysplit voicegroup262, KeySplitTable47    @ trombones
	voice_keysplit voicegroup263, KeySplitTable49    @ french horn solo
	voice_keysplit voicegroup264, KeySplitTable50    @ french horns
	voice_keysplit voicegroup265, KeySplitTable51    @ oboe
	voice_keysplit voicegroup266, KeySplitTable52    @ clarinet
	voice_keysplit voicegroup267, KeySplitTable53    @ flute
	voice_keysplit voicegroup268, KeySplitTable54    @ bassoon
	voice_keysplit voicegroup269, KeySplitTable55    @ orchestra hit
	voice_keysplit voicegroup270, KeySplitTable38    @ square wave
	voice_keysplit_all voicegroup230				 @ drums
	voice_keysplit_all voicegroup231				 @ taiko drums
	voice_directsound 60, 0, DirectSoundWaveData_dp_woodbass_d3_16, 255, 251, 0, 171
	voice_keysplit voicegroup271, KeySplitTable56    @ koto
	voice_square_2 60, 0, 2, 0, 2, 2, 1
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_wind, 67, 243, 155, 224
	voice_directsound 60, 0, DirectSoundWaveData_dp_explosion, 67, 255, 0, 245
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 250, 0, 171 @ 1 octave too low
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_bubbles, 255, 0, 255, 0
	voice_square_2 60, 0, 2, 0, 2, 2, 0 @  duplicated in BATTLE4 and DUNGEON4 as program 66
	voice_square_2 60, 0, 2, 0, 7, 0, 0
	voice_square_2 60, 0, 2, 0, 5, 0, 2
	voice_square_2 60, 0, 2, 0, 2, 6, 2
	voice_square_2 60, 0, 2, 0, 2, 6, 1
	voice_noise 60, 0, 0, 1, 0, 3, 1
	voice_noise 60, 0, 0, 0, 3, 0, 1
	voice_directsound 60, 0, DirectSoundWaveData_dp_whistle_c5_16, 255, 246, 78, 192
	voice_directsound 60, 0, DirectSoundWaveData_dp_reverscyn_16, 255, 0, 255, 16
	voice_directsound 60, 0, DirectSoundWaveData_dp_org5_c3_16, 255, 167, 235, 171
	voice_programmable_wave 60, 0, ProgrammableWaveData_sq37half, 0, 2, 11, 1
	voice_square_2 60, 0, 0, 0, 2, 11, 1 @ END OF BASIC BANK
	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitmajor60, 255, 197, 255, 171								@ 60
@	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitminor60, 255, 197, 255, 171								@ 61
@	voice_keysplit_all voicegroup232				 @ synth kick+snare												@ 62
@	voice_keysplit voicegroup216, KeySplitTable27    @ DPPt timpani													@ 63
@	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass1_c2_16, 255, 42, 255, 192								@ 64
@	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass2_c1_16, 255, 0, 255, 220								@ 65
@	voice_directsound 60, 0, DirectSoundWaveData_dp_sawtoothlead60, 255, 197, 255, 171								@ 66
@	voice_keysplit voicegroup272, KeySplitTable57    @ shamisen														@ 67
@	voice_directsound 60, 0, DirectSoundWaveData_hg_hyoshigi, 255, 0, 255, 171										@ 68
@	voice_directsound 60, 0, DirectSoundWaveData_hg_ecruteaklow, 255, 0, 255, 171									@ 69
@	voice_directsound 60, 0, DirectSoundWaveData_hg_tsuzumi, 255, 0, 255, 171										@ 70
@	voice_directsound 60, 0, DirectSoundWaveData_hg_jinglebell, 255, 0, 255, 171									@ 71
@	voice_directsound 60, 0, DirectSoundWaveData_hg_hoohclap, 255, 0, 255, 0										@ 72
@	voice_directsound 60, 0, DirectSoundWaveData_dp_tenorchoir48, 255, 197, 255, 171								@ 73
@	voice_directsound 60, 0, DirectSoundWaveData_dp_sopranochoir60, 255, 197, 255, 171								@ 74
@	voice_directsound 60, 0, DirectSoundWaveData_hg_choirc5, 255, 197, 255, 171 @ 1 octave too low					@ 75
@	voice_directsound 60, 0, DirectSoundWaveData_dp_reverscyn_16, 255, 197, 255, 171 @ 1 octave too high			@ 76
@	voice_directsound 60, 0, DirectSoundWaveData_dp_spearpillarwind60, 255, 0, 255, 32								@ 77
@	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 216, 252, 192								@ 78
@	voice_directsound 60, 0, DirectSoundWaveData_dp_synthsnare, 255, 0, 255, 171									@ 79
@	voice_keysplit voicegroup273, KeySplitTable58    @ piano (national park)										@ 80
@	voice_directsound 60, 0, DirectSoundWaveData_dp_tom1_16, 255, 0, 255, 32										@ 81
@	voice_keysplit voicegroup219, KeySplitTable29    @ dp trumpets (arceus)											@ 82
@	voice_keysplit voicegroup220, KeySplitTable30    @ dp trombone (arceus)											@ 83
@	voice_square_1 60, 0, 0, 2, 0, 2, 6, 2									 @ double up of 051						@ 84
@	voice_square_1 60, 0, 0, 2, 0, 2, 2, 0									 @ double up of 048						@ 85
@	voice_programmable_wave 60, 0, ProgrammableWaveData_sq50half, 0, 2, 2, 0 @ triple up of 048 (half volume)		@ 86
@	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 242, 25, 0  @ 4x and up of 048					@ 87
@	voice_square_1 60, 0, 0, 2, 0, 7, 0, 0									 @ double up of 049						@ 88
@	voice_square_1 60, 0, 2, 0, 0, 2, 6, 1									 @ double up of 052						@ 89
