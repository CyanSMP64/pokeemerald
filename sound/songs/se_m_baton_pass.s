	.include "MPlayDef.s"

	.equ	se_m_baton_pass_grp, voicegroup128
	.equ	se_m_baton_pass_pri, 5
	.equ	se_m_baton_pass_rev, 0
	.equ	se_m_baton_pass_mvl, 127
	.equ	se_m_baton_pass_key, 0
	.equ	se_m_baton_pass_tbs, 1
	.equ	se_m_baton_pass_exg, 0
	.equ	se_m_baton_pass_cmp, 1

	.section .rodata
	.global	se_m_baton_pass
	.align	2

@********************** Track  1 **********************@

se_m_baton_pass_1:
	.byte	KEYSH , se_m_baton_pass_key+0
	.byte		VOICE , 19
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 12*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(49*2)
	.byte		N06   , Gn4 , v080
	.byte	W01
	.byte		VOL   , 44*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(22*2)
	.byte	W01
	.byte		VOL   , 62*se_m_baton_pass_mvl/mxv
	.byte		PAN   , c_v+8
	.byte		VOL   , 75*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(20*2)
	.byte	W01
	.byte		VOL   , 87*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(33*2)
	.byte	W01
	.byte		VOL   , 96*se_m_baton_pass_mvl/mxv
	.byte		PAN   , c_v-7
	.byte		VOL   , 100*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(54*2)
	.byte	W01
	.byte		BEND  , c_b+(63*2)
	.byte	W01
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		N04   , Gn4 , v040
	.byte	W01
	.byte	W03
	.byte	W03
	.byte		VOICE , 45
	.byte		MOD   , 30
	.byte		BENDR , 24
	.byte		VOL   , 54*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(0*2)
	.byte		N06   , Gn3 , v108
	.byte	W01
	.byte		VOL   , 70*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(4*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 80*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(9*2)
	.byte	W01
	.byte		VOL   , 100*se_m_baton_pass_mvl/mxv
	.byte		BEND  , c_b+(16*2)
	.byte	W01
	.byte		BEND  , c_b+(24*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(2*2)
	.byte		N06   , An3 , v100
	.byte	W01
	.byte		BEND  , c_b+(7*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b+(12*2)
	.byte	W01
	.byte		BEND  , c_b+(18*2)
	.byte	W01
	.byte		BEND  , c_b+(27*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(4*2)
	.byte		N06   , Bn3 , v060
	.byte	W01
	.byte		BEND  , c_b+(9*2)
	.byte	W01
	.byte		PAN   , c_v+6
	.byte		BEND  , c_b+(14*2)
	.byte	W01
	.byte		BEND  , c_b+(20*2)
	.byte	W01
	.byte		BEND  , c_b+(29*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(6*2)
	.byte		N06   , Cn4 , v040
	.byte	W01
	.byte		BEND  , c_b+(11*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		BEND  , c_b+(15*2)
	.byte	W01
	.byte		BEND  , c_b+(22*2)
	.byte	W01
	.byte		BEND  , c_b+(31*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b+(9*2)
	.byte		N06   , Dn4 , v020
	.byte	W01
	.byte		BEND  , c_b+(14*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		BEND  , c_b+(18*2)
	.byte	W01
	.byte		BEND  , c_b+(25*2)
	.byte	W01
	.byte		BEND  , c_b+(34*2)
	.byte	W02
	.byte	FINE

@********************** Track  2 **********************@

se_m_baton_pass_2:
	.byte	KEYSH , se_m_baton_pass_key+0
	.byte		VOICE , 57
	.byte		VOL   , 59*se_m_baton_pass_mvl/mxv
	.byte		N06   , Gs4 , v052
	.byte	W01
	.byte		VOL   , 72*se_m_baton_pass_mvl/mxv
	.byte	W01
	.byte		        90*se_m_baton_pass_mvl/mxv
	.byte	W01
	.byte		        100*se_m_baton_pass_mvl/mxv
	.byte	W03
	.byte	W02
	.byte		N04   , Gs4 , v024
	.byte	W01
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	W03
	.byte	FINE

@******************************************************@
	.align	2

se_m_baton_pass:
	.byte	2	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_baton_pass_pri	@ Priority
	.byte	se_m_baton_pass_rev	@ Reverb.

	.word	se_m_baton_pass_grp

	.word	se_m_baton_pass_1
	.word	se_m_baton_pass_2

	.end
