	.include "MPlayDef.s"

	.equ	se_m_vital_throw2_grp, voicegroup_rs_sfx_2
	.equ	se_m_vital_throw2_pri, 4
	.equ	se_m_vital_throw2_rev, 0
	.equ	se_m_vital_throw2_mvl, 127
	.equ	se_m_vital_throw2_key, 0
	.equ	se_m_vital_throw2_tbs, 1
	.equ	se_m_vital_throw2_exg, 0
	.equ	se_m_vital_throw2_cmp, 1

	.section .rodata
	.global	se_m_vital_throw2
	.align	2

@********************** Track  1 **********************@

se_m_vital_throw2_1:
	.byte	KEYSH , se_m_vital_throw2_key+0
	.byte	TEMPO , 220*se_m_vital_throw2_tbs/2
	.byte		VOICE , 6
	.byte		VOL   , 110*se_m_vital_throw2_mvl/mxv
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(0*2)
	.byte		N06   , Cn3 , v127
	.byte	W01
	.byte		BEND  , c_b-(9*2)
	.byte	W01
	.byte		BEND  , c_b-(21*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		BEND  , c_b-(40*2)
	.byte	W01
	.byte		BEND  , c_b-(64*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(0*2)
	.byte		N06   , En3
	.byte	W01
	.byte		BEND  , c_b-(9*2)
	.byte	W01
	.byte		BEND  , c_b-(21*2)
	.byte	W01
	.byte		PAN   , c_v+7
	.byte		BEND  , c_b-(40*2)
	.byte	W01
	.byte		BEND  , c_b-(64*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(0*2)
	.byte		N09   , An2
	.byte	W01
	.byte		BEND  , c_b-(9*2)
	.byte	W01
	.byte		BEND  , c_b-(19*2)
	.byte	W01
	.byte		BEND  , c_b-(29*2)
	.byte	W01
	.byte		VOL   , 86*se_m_vital_throw2_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W02
	.byte		VOL   , 69*se_m_vital_throw2_mvl/mxv
	.byte		BEND  , c_b-(45*2)
	.byte	W01
	.byte		VOL   , 53*se_m_vital_throw2_mvl/mxv
	.byte		BEND  , c_b-(56*2)
	.byte	W01
	.byte		VOL   , 20*se_m_vital_throw2_mvl/mxv
	.byte		BEND  , c_b-(64*2)
	.byte	W04
	.byte		BEND  , c_b-(64*2)
	.byte	FINE

@********************** Track  2 **********************@

se_m_vital_throw2_2:
	.byte	KEYSH , se_m_vital_throw2_key+0
	.byte		VOICE , 5
	.byte		XCMD  , xIECV , 10
	.byte		        xIECL , 8
	.byte		VOL   , 110*se_m_vital_throw2_mvl/mxv
	.byte		PAN   , c_v+9
	.byte		N03   , Gs2 , v052
	.byte	W06
	.byte		PAN   , c_v-7
	.byte		N03
	.byte	W06
	.byte		PAN   , c_v+0
	.byte		N03
	.byte	W12
	.byte	FINE

@******************************************************@
	.align	2

se_m_vital_throw2:
	.byte	2	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_vital_throw2_pri	@ Priority
	.byte	se_m_vital_throw2_rev	@ Reverb.

	.word	se_m_vital_throw2_grp

	.word	se_m_vital_throw2_1
	.word	se_m_vital_throw2_2

	.end
