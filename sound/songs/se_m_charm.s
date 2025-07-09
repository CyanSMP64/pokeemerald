	.include "MPlayDef.s"

	.equ	se_m_charm_grp, voicegroup128
	.equ	se_m_charm_pri, 4
	.equ	se_m_charm_rev, 0
	.equ	se_m_charm_mvl, 127
	.equ	se_m_charm_key, 0
	.equ	se_m_charm_tbs, 1
	.equ	se_m_charm_exg, 0
	.equ	se_m_charm_cmp, 1

	.section .rodata
	.global	se_m_charm
	.align	2

@********************** Track  1 **********************@

se_m_charm_1:
	.byte	KEYSH , se_m_charm_key+0
	.byte	TEMPO , 150*se_m_charm_tbs/2
	.byte		VOICE , 37
	.byte		BENDR , 24
	.byte		PAN   , c_v+0
	.byte		VOL   , 25*se_m_charm_mvl/mxv
	.byte		BEND  , c_b+(11*2)
	.byte		N02   , Fn4 , v127
	.byte	W01
	.byte		VOL   , 42*se_m_charm_mvl/mxv
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(5*2)
	.byte	W01
	.byte		VOL   , 62*se_m_charm_mvl/mxv
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(0*2)
	.byte		N15
	.byte	W01
	.byte		VOL   , 77*se_m_charm_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(5*2)
	.byte	W01
	.byte		VOL   , 84*se_m_charm_mvl/mxv
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(12*2)
	.byte	W02
	.byte		VOL   , 96*se_m_charm_mvl/mxv
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(20*2)
	.byte	W01
	.byte		VOL   , 100*se_m_charm_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(25*2)
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(30*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(34*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(40*2)
	.byte	W02
	.byte		VOL   , 94*se_m_charm_mvl/mxv
	.byte		PAN   , c_v+4
	.byte	W01
	.byte		VOL   , 85*se_m_charm_mvl/mxv
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(37*2)
	.byte	W01
	.byte		VOL   , 66*se_m_charm_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(36*2)
	.byte	W01
	.byte		VOL   , 49*se_m_charm_mvl/mxv
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b+(34*2)
	.byte	W01
	.byte		VOL   , 32*se_m_charm_mvl/mxv
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(32*2)
	.byte	W02
	.byte	FINE

@******************************************************@
	.align	2

se_m_charm:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_charm_pri	@ Priority
	.byte	se_m_charm_rev	@ Reverb.

	.word	se_m_charm_grp

	.word	se_m_charm_1

	.end
