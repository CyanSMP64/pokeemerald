	.include "MPlayDef.s"

	.equ	se_m_lick_grp, voicegroup_rs_sfx_2
	.equ	se_m_lick_pri, 4
	.equ	se_m_lick_rev, 0
	.equ	se_m_lick_mvl, 127
	.equ	se_m_lick_key, 0
	.equ	se_m_lick_tbs, 1
	.equ	se_m_lick_exg, 0
	.equ	se_m_lick_cmp, 1

	.section .rodata
	.global	se_m_lick
	.align	2

@********************** Track  1 **********************@

se_m_lick_1:
	.byte	KEYSH , se_m_lick_key+0
	.byte	TEMPO , 150*se_m_lick_tbs/2
	.byte		VOICE , 31
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 110*se_m_lick_mvl/mxv
	.byte		BEND  , c_b-(5*2)
	.byte		N32   , Cn3 , v127
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b-(9*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b-(13*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b-(20*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b-(25*2)
	.byte	W02
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b-(6*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b-(3*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(6*2)
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(3*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(9*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(6*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(12*2)
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(8*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(16*2)
	.byte	W02
	.byte		PAN   , c_v-4
	.byte		VOL   , 102*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(12*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(16*2)
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		VOL   , 97*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(18*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(14*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		VOL   , 92*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(18*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(20*2)
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		VOL   , 88*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(17*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(12*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		VOL   , 81*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(16*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 64*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(12*2)
	.byte	W02
	.byte		PAN   , c_v+4
	.byte		VOL   , 49*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(14*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 25*se_m_lick_mvl/mxv
	.byte		BEND  , c_b+(11*2)
	.byte	W05
	.byte	FINE

@******************************************************@
	.align	2

se_m_lick:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_lick_pri	@ Priority
	.byte	se_m_lick_rev	@ Reverb.

	.word	se_m_lick_grp

	.word	se_m_lick_1

	.end
