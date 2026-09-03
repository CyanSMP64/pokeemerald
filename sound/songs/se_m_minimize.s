	.include "MPlayDef.s"

	.equ	se_m_minimize_grp, voicegroup128
	.equ	se_m_minimize_pri, 5
	.equ	se_m_minimize_rev, 0
	.equ	se_m_minimize_mvl, 127
	.equ	se_m_minimize_key, 0
	.equ	se_m_minimize_tbs, 1
	.equ	se_m_minimize_exg, 0
	.equ	se_m_minimize_cmp, 1

	.section .rodata
	.global	se_m_minimize
	.align	2

@********************** Track  1 **********************@

se_m_minimize_1:
	.byte	KEYSH , se_m_minimize_key+0
	.byte	TEMPO , 150*se_m_minimize_tbs/2
	.byte		VOICE , 45
	.byte		BENDR , 24
	.byte		PAN   , c_v+0
	.byte		VOL   , 32*se_m_minimize_mvl/mxv
	.byte		MOD   , 30
	.byte		BEND  , c_b+(39*2)
	.byte		N06   , Dn4 , v127
	.byte	W01
	.byte		BEND  , c_b+(31*2)
	.byte	W01
	.byte		VOL   , 49*se_m_minimize_mvl/mxv
	.byte		PAN   , c_v+5
	.byte		BEND  , c_b+(23*2)
	.byte	W01
	.byte		BEND  , c_b+(15*2)
	.byte	W01
	.byte		VOL   , 61*se_m_minimize_mvl/mxv
	.byte		BEND  , c_b+(8*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(35*2)
	.byte		N06   , Cn4 , v116
	.byte	W01
	.byte		VOL   , 71*se_m_minimize_mvl/mxv
	.byte		BEND  , c_b+(27*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(19*2)
	.byte	W01
	.byte		VOL   , 81*se_m_minimize_mvl/mxv
	.byte		BEND  , c_b+(12*2)
	.byte	W01
	.byte		BEND  , c_b+(5*2)
	.byte	W02
	.byte		VOL   , 95*se_m_minimize_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(32*2)
	.byte		N06   , Bn3 , v112
	.byte	W01
	.byte		BEND  , c_b+(24*2)
	.byte	W01
	.byte		PAN   , c_v+6
	.byte		BEND  , c_b+(16*2)
	.byte	W01
	.byte		BEND  , c_b+(8*2)
	.byte	W01
	.byte		BEND  , c_b+(1*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(28*2)
	.byte		N06   , An3
	.byte	W01
	.byte		BEND  , c_b+(20*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		BEND  , c_b+(12*2)
	.byte	W01
	.byte		BEND  , c_b+(5*2)
	.byte	W01
	.byte		        c_b-(2*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(24*2)
	.byte		N06   , Gn3 , v108
	.byte	W01
	.byte		BEND  , c_b+(16*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		BEND  , c_b+(9*2)
	.byte	W01
	.byte		BEND  , c_b+(1*2)
	.byte	W01
	.byte		        c_b-(6*2)
	.byte	W02
	.byte		VOL   , 82*se_m_minimize_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(21*2)
	.byte		N06   , Fn3 , v100
	.byte	W01
	.byte		BEND  , c_b+(13*2)
	.byte	W01
	.byte		VOL   , 71*se_m_minimize_mvl/mxv
	.byte		PAN   , c_v-8
	.byte		BEND  , c_b+(5*2)
	.byte	W01
	.byte		        c_b-(2*2)
	.byte	W01
	.byte		VOL   , 61*se_m_minimize_mvl/mxv
	.byte		BEND  , c_b-(10*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(17*2)
	.byte		N06   , En3 , v060
	.byte	W01
	.byte		BEND  , c_b+(9*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		BEND  , c_b+(2*2)
	.byte	W01
	.byte		        c_b-(6*2)
	.byte	W01
	.byte		        c_b-(13*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(14*2)
	.byte		N06   , Dn3 , v040
	.byte	W01
	.byte		BEND  , c_b+(6*2)
	.byte	W01
	.byte		PAN   , c_v-8
	.byte		BEND  , c_b-(2*2)
	.byte	W01
	.byte		        c_b-(10*2)
	.byte	W01
	.byte		        c_b-(17*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(12*2)
	.byte		N06   , Cn3 , v020
	.byte	W01
	.byte		BEND  , c_b+(4*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		BEND  , c_b-(4*2)
	.byte	W01
	.byte		        c_b-(11*2)
	.byte	W01
	.byte		        c_b-(18*2)
	.byte	W02
	.byte	FINE

@******************************************************@
	.align	2

se_m_minimize:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_minimize_pri	@ Priority
	.byte	se_m_minimize_rev	@ Reverb.

	.word	se_m_minimize_grp

	.word	se_m_minimize_1

	.end
