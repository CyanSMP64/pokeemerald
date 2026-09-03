	.include "MPlayDef.s"

	.equ	se_m_sketch_grp, voicegroup128
	.equ	se_m_sketch_pri, 5
	.equ	se_m_sketch_rev, 0
	.equ	se_m_sketch_mvl, 127
	.equ	se_m_sketch_key, 0
	.equ	se_m_sketch_tbs, 1
	.equ	se_m_sketch_exg, 0
	.equ	se_m_sketch_cmp, 1

	.section .rodata
	.global	se_m_sketch
	.align	2

@********************** Track  1 **********************@

se_m_sketch_1:
	.byte	KEYSH , se_m_sketch_key+0
	.byte	TEMPO , 180*se_m_sketch_tbs/2
	.byte		VOICE , 38
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 110*se_m_sketch_mvl/mxv
	.byte		BEND  , c_b+(0*2)
	.byte		N02   , Gn4 , v127
	.byte	W01
	.byte		VOL   , 74*se_m_sketch_mvl/mxv
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		VOICE , 31
	.byte		VOL   , 40*se_m_sketch_mvl/mxv
	.byte		BEND  , c_b-(1*2)
	.byte		N03   , Cs5
	.byte	W01
	.byte		VOL   , 64*se_m_sketch_mvl/mxv
	.byte		PAN   , c_v-6
	.byte		BEND  , c_b-(12*2)
	.byte	W01
	.byte		VOL   , 86*se_m_sketch_mvl/mxv
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b-(16*2)
	.byte	W02
	.byte		VOL   , 110*se_m_sketch_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(0*2)
	.byte		N02   , As5
	.byte	W01
	.byte		BEND  , c_b+(12*2)
	.byte	W01
	.byte		VOL   , 0*se_m_sketch_mvl/mxv
	.byte	W04
	.byte	FINE

@******************************************************@
	.align	2

se_m_sketch:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_sketch_pri	@ Priority
	.byte	se_m_sketch_rev	@ Reverb.

	.word	se_m_sketch_grp

	.word	se_m_sketch_1

	.end
