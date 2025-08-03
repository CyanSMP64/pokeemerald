	.include "MPlayDef.s"

	.equ	se_m_reflect_grp, voicegroup_rs_sfx_2
	.equ	se_m_reflect_pri, 4
	.equ	se_m_reflect_rev, 0
	.equ	se_m_reflect_mvl, 127
	.equ	se_m_reflect_key, 0
	.equ	se_m_reflect_tbs, 1
	.equ	se_m_reflect_exg, 0
	.equ	se_m_reflect_cmp, 1

	.section .rodata
	.global	se_m_reflect
	.align	2

@********************** Track  1 **********************@

se_m_reflect_1:
	.byte	KEYSH , se_m_reflect_key+0
	.byte	TEMPO , 150*se_m_reflect_tbs/2
	.byte		VOICE , 19
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b+(6*2)
	.byte		N06   , Gn6 , v080
	.byte	W01
	.byte		BEND  , c_b-(4*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(14*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(31*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(41*2)
	.byte	W02
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b+(0*2)
	.byte		N06   , Gn6 , v072
	.byte	W01
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(20*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(37*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(47*2)
	.byte	W02
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(1*2)
	.byte		N06   , Gn6 , v068
	.byte	W01
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(21*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(38*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(48*2)
	.byte	W02
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(1*2)
	.byte		N06   , Gn6 , v060
	.byte	W01
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(21*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(38*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(48*2)
	.byte	W02
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Gn6 , v052
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		BEND  , c_b-(12*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Gn6 , v048
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		BEND  , c_b-(12*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Gn6 , v040
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		BEND  , c_b-(13*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Gn6 , v032
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		BEND  , c_b-(13*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 20*se_m_reflect_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte	W06
	.byte	FINE

@********************** Track  2 **********************@

se_m_reflect_2:
	.byte	KEYSH , se_m_reflect_key+0
	.byte		VOICE , 53
	.byte		PAN   , c_v+0
	.byte		VOL   , 90*se_m_reflect_mvl/mxv
	.byte	W02
	.byte		N06   , En6 , v064
	.byte	W02
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte	W02
	.byte		        60*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        20*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        90*se_m_reflect_mvl/mxv
	.byte		N06   , En6 , v056
	.byte	W02
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte	W02
se_m_reflect_2_000:
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        20*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        90*se_m_reflect_mvl/mxv
	.byte		N06   , En6 , v052
	.byte	W02
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte	W02
	.byte	PEND
	.byte	PATT
	 .word	se_m_reflect_2_000
	.byte		VOL   , 60*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        20*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        90*se_m_reflect_mvl/mxv
	.byte		N06   , En6 , v048
	.byte	W02
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte	W02
	.byte		        60*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        20*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        90*se_m_reflect_mvl/mxv
	.byte		N06   , En6 , v044
	.byte	W02
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte	W02
	.byte		        60*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        20*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        90*se_m_reflect_mvl/mxv
	.byte		N06   , En6 , v040
	.byte	W02
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte	W02
	.byte		        60*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        20*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        90*se_m_reflect_mvl/mxv
	.byte		N06   , En6 , v036
	.byte	W02
	.byte		VOL   , 74*se_m_reflect_mvl/mxv
	.byte	W02
	.byte		        60*se_m_reflect_mvl/mxv
	.byte	W01
	.byte		        20*se_m_reflect_mvl/mxv
	.byte	W05
	.byte	FINE

@******************************************************@
	.align	2

se_m_reflect:
	.byte	2	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_reflect_pri	@ Priority
	.byte	se_m_reflect_rev	@ Reverb.

	.word	se_m_reflect_grp

	.word	se_m_reflect_1
	.word	se_m_reflect_2

	.end
