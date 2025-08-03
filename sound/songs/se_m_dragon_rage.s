	.include "MPlayDef.s"

	.equ	se_m_dragon_rage_grp, voicegroup_rs_sfx_2
	.equ	se_m_dragon_rage_pri, 4
	.equ	se_m_dragon_rage_rev, 0
	.equ	se_m_dragon_rage_mvl, 127
	.equ	se_m_dragon_rage_key, 0
	.equ	se_m_dragon_rage_tbs, 1
	.equ	se_m_dragon_rage_exg, 0
	.equ	se_m_dragon_rage_cmp, 1

	.section .rodata
	.global	se_m_dragon_rage
	.align	2

@********************** Track  1 **********************@

se_m_dragon_rage_1:
	.byte	KEYSH , se_m_dragon_rage_key+0
	.byte	TEMPO , 150*se_m_dragon_rage_tbs/2
	.byte		VOICE , 29
	.byte		BENDR , 12
	.byte		PAN   , c_v+5
	.byte		VOL   , 21*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(0*2)
	.byte		N10   , An2 , v127
	.byte	W02
	.byte		VOL   , 47*se_m_dragon_rage_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 88*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v-5
	.byte	W01
	.byte		VOL   , 120*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 21*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(10*2)
	.byte		N10   , Bn2
	.byte	W02
	.byte		PAN   , c_v+5
	.byte	W01
	.byte		VOL   , 47*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 88*se_m_dragon_rage_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v-5
	.byte		VOL   , 120*se_m_dragon_rage_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v-2
	.byte		VOL   , 21*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(18*2)
	.byte		N10   , Cs3
	.byte	W03
	.byte		PAN   , c_v+5
	.byte		VOL   , 47*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		        88*se_m_dragon_rage_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 120*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v-5
	.byte	W02
	.byte		VOL   , 20*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(29*2)
	.byte		N10   , Dn3
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 47*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+5
	.byte	W01
	.byte		VOL   , 88*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 120*se_m_dragon_rage_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v-5
	.byte	W01
	.byte		VOL   , 21*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(37*2)
	.byte		N10   , En3
	.byte	W02
	.byte		PAN   , c_v-2
	.byte		VOL   , 46*se_m_dragon_rage_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v+5
	.byte		VOL   , 102*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		        120*se_m_dragon_rage_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W03
	.byte		        c_v-5
	.byte		VOL   , 20*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(42*2)
	.byte		N20   , Fs3
	.byte	W02
	.byte		VOL   , 47*se_m_dragon_rage_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 88*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+5
	.byte	W01
	.byte		VOL   , 120*se_m_dragon_rage_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 99*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(50*2)
	.byte	W02
	.byte		PAN   , c_v-5
	.byte	W01
	.byte		VOL   , 74*se_m_dragon_rage_mvl/mxv
	.byte	W01
	.byte		BEND  , c_b+(56*2)
	.byte	W01
	.byte		PAN   , c_v-2
	.byte		VOL   , 53*se_m_dragon_rage_mvl/mxv
	.byte	W03
	.byte		        34*se_m_dragon_rage_mvl/mxv
	.byte		BEND  , c_b+(63*2)
	.byte	W01
	.byte		VOL   , 15*se_m_dragon_rage_mvl/mxv
	.byte	W23
	.byte	FINE

@******************************************************@
	.align	2

se_m_dragon_rage:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_dragon_rage_pri	@ Priority
	.byte	se_m_dragon_rage_rev	@ Reverb.

	.word	se_m_dragon_rage_grp

	.word	se_m_dragon_rage_1

	.end
