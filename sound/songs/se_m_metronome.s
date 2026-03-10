	.include "MPlayDef.s"

	.equ	se_m_metronome_grp, voicegroup128
	.equ	se_m_metronome_pri, 4
	.equ	se_m_metronome_rev, 0
	.equ	se_m_metronome_mvl, 127
	.equ	se_m_metronome_key, 0
	.equ	se_m_metronome_tbs, 1
	.equ	se_m_metronome_exg, 0
	.equ	se_m_metronome_cmp, 1

	.section .rodata
	.global	se_m_metronome
	.align	2

@********************** Track  1 **********************@

se_m_metronome_1:
	.byte	KEYSH , se_m_metronome_key+0
	.byte	TEMPO , 150*se_m_metronome_tbs/2
	.byte		VOICE , 37
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 115*se_m_metronome_mvl/mxv
	.byte		BEND  , c_b+(0*2)
	.byte		N15   , En3 , v127
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b-(4*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b-(7*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b-(5*2)
	.byte	W02
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(0*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(3*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(6*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(9*2)
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(14*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(20*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(25*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(46*2)
	.byte	W10
	.byte	FINE

@******************************************************@
	.align	2

se_m_metronome:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_metronome_pri	@ Priority
	.byte	se_m_metronome_rev	@ Reverb.

	.word	se_m_metronome_grp

	.word	se_m_metronome_1

	.end
