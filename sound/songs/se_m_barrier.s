	.include "MPlayDef.s"

	.equ	se_m_barrier_grp, voicegroup128
	.equ	se_m_barrier_pri, 4
	.equ	se_m_barrier_rev, 0
	.equ	se_m_barrier_mvl, 127
	.equ	se_m_barrier_key, 0
	.equ	se_m_barrier_tbs, 1
	.equ	se_m_barrier_exg, 0
	.equ	se_m_barrier_cmp, 1

	.section .rodata
	.global	se_m_barrier
	.align	2

@********************** Track  1 **********************@

se_m_barrier_1:
	.byte	KEYSH , se_m_barrier_key+0
	.byte	TEMPO , 150*se_m_barrier_tbs/2
	.byte		VOICE , 19
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b+(3*2)
	.byte		N06   , Cn6 , v088
	.byte	W01
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(8*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(17*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(34*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(45*2)
	.byte	W02
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b+(0*2)
	.byte		N06   , Cn6 , v084
	.byte	W01
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(20*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(37*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(47*2)
	.byte	W02
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(1*2)
	.byte		N06   , Cn6 , v076
	.byte	W01
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(21*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(38*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(48*2)
	.byte	W02
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(1*2)
	.byte		N06   , Cn6 , v064
	.byte	W01
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(11*2)
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(21*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(38*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(48*2)
	.byte	W02
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Cn6 , v056
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(12*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Cn6 , v044
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(12*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Cn6 , v036
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(13*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(2*2)
	.byte		N06   , Cn6 , v028
	.byte	W01
	.byte		PAN   , c_v+5
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(13*2)
	.byte	W01
	.byte		PAN   , c_v-6
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+8
	.byte		VOL   , 24*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(39*2)
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		VOL   , 11*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(49*2)
	.byte	W02
	.byte	W06
	.byte	FINE

@********************** Track  2 **********************@

se_m_barrier_2:
	.byte	KEYSH , se_m_barrier_key+0
	.byte		VOICE , 53
	.byte		PAN   , c_v+0
	.byte		VOL   , 95*se_m_barrier_mvl/mxv
	.byte		BEND  , c_b-(5*2)
	.byte	W02
	.byte		N06   , An5 , v064
	.byte	W02
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte	W02
	.byte		        56*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        24*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        95*se_m_barrier_mvl/mxv
	.byte		N06   , An5 , v056
	.byte	W02
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte	W02
se_m_barrier_2_000:
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        24*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        95*se_m_barrier_mvl/mxv
	.byte		N06   , An5 , v052
	.byte	W02
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte	W02
	.byte	PEND
	.byte	PATT
	 .word	se_m_barrier_2_000
	.byte		VOL   , 56*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        24*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        95*se_m_barrier_mvl/mxv
	.byte		N06   , An5 , v048
	.byte	W02
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte	W02
	.byte		        56*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        24*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        95*se_m_barrier_mvl/mxv
	.byte		N06   , An5 , v044
	.byte	W02
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte	W02
	.byte		        56*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        24*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        95*se_m_barrier_mvl/mxv
	.byte		N06   , An5 , v040
	.byte	W02
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte	W02
	.byte		        56*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        24*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        95*se_m_barrier_mvl/mxv
	.byte		N06   , An5 , v036
	.byte	W02
	.byte		VOL   , 88*se_m_barrier_mvl/mxv
	.byte	W02
	.byte		        56*se_m_barrier_mvl/mxv
	.byte	W01
	.byte		        24*se_m_barrier_mvl/mxv
	.byte	W05
	.byte	FINE

@******************************************************@
	.align	2

se_m_barrier:
	.byte	2	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_barrier_pri	@ Priority
	.byte	se_m_barrier_rev	@ Reverb.

	.word	se_m_barrier_grp

	.word	se_m_barrier_1
	.word	se_m_barrier_2

	.end
