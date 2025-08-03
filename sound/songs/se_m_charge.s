	.include "MPlayDef.s"

	.equ	se_m_charge_grp, voicegroup_rs_sfx_2
	.equ	se_m_charge_pri, 4
	.equ	se_m_charge_rev, 0
	.equ	se_m_charge_mvl, 127
	.equ	se_m_charge_key, 0
	.equ	se_m_charge_tbs, 1
	.equ	se_m_charge_exg, 0
	.equ	se_m_charge_cmp, 1

	.section .rodata
	.global	se_m_charge
	.align	2

@********************** Track  1 **********************@

se_m_charge_1:
	.byte	KEYSH , se_m_charge_key+0
	.byte	TEMPO , 150*se_m_charge_tbs/2
	.byte		VOICE , 18
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 34*se_m_charge_mvl/mxv
	.byte		BEND  , c_b+(0*2)
	.byte		N66   , Cn5 , v127
	.byte	W01
	.byte		PAN   , c_v-2
	.byte	W01
	.byte		VOL   , 43*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		        c_v+2
	.byte		BEND  , c_b-(2*2)
	.byte	W01
	.byte		VOL   , 58*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W02
	.byte		        c_v-2
	.byte	W01
	.byte		VOL   , 70*se_m_charge_mvl/mxv
	.byte		PAN   , c_v-4
	.byte		BEND  , c_b-(4*2)
	.byte	W01
	.byte		PAN   , c_v-2
	.byte	W01
	.byte		VOL   , 76*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		        c_v+2
	.byte		BEND  , c_b-(6*2)
	.byte	W02
	.byte		VOL   , 90*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+4
	.byte	W01
	.byte		        c_v+2
	.byte	W01
	.byte		        c_v+0
	.byte		BEND  , c_b-(8*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		        c_v-2
	.byte	W02
	.byte		        c_v+0
	.byte		BEND  , c_b-(13*2)
	.byte	W01
	.byte		PAN   , c_v+2
	.byte	W01
	.byte		        c_v+0
	.byte	W01
	.byte		        c_v-2
	.byte		BEND  , c_b-(15*2)
	.byte	W01
	.byte		PAN   , c_v-4
	.byte	W02
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v+0
	.byte		BEND  , c_b-(19*2)
	.byte	W01
	.byte		PAN   , c_v+2
	.byte	W01
	.byte		        c_v+4
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+2
	.byte	W02
	.byte		        c_v+0
	.byte		BEND  , c_b-(19*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		        c_v-2
	.byte		BEND  , c_b-(17*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		        c_v+2
	.byte	W02
	.byte		        c_v+0
	.byte		BEND  , c_b-(19*2)
	.byte	W01
	.byte		PAN   , c_v-2
	.byte	W01
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-2
	.byte		BEND  , c_b-(22*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W02
	.byte		        c_v+2
	.byte		BEND  , c_b-(28*2)
	.byte	W01
	.byte		PAN   , c_v+4
	.byte		BEND  , c_b-(24*2)
	.byte	W01
	.byte		PAN   , c_v+2
	.byte	W01
	.byte		VOL   , 84*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		        c_v+0
	.byte	W02
	.byte		        c_v-2
	.byte	W01
	.byte		VOL   , 78*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		        c_v+2
	.byte		BEND  , c_b-(27*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 70*se_m_charge_mvl/mxv
	.byte		PAN   , c_v-2
	.byte	W02
	.byte		        c_v-4
	.byte	W01
	.byte		VOL   , 55*se_m_charge_mvl/mxv
	.byte		PAN   , c_v-2
	.byte		BEND  , c_b-(29*2)
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 46*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+2
	.byte	W01
	.byte		        c_v+4
	.byte		BEND  , c_b-(31*2)
	.byte	W02
	.byte		VOL   , 36*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+2
	.byte	W01
	.byte		        c_v+0
	.byte	W01
	.byte		VOL   , 24*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b-(36*2)
	.byte	W01
	.byte		PAN   , c_v-2
	.byte	W01
	.byte		VOL   , 13*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_b-(42*2)
	.byte	W02
	.byte		VOL   , 5*se_m_charge_mvl/mxv
	.byte		PAN   , c_v+2
	.byte	W06
	.byte	FINE

@******************************************************@
	.align	2

se_m_charge:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_charge_pri	@ Priority
	.byte	se_m_charge_rev	@ Reverb.

	.word	se_m_charge_grp

	.word	se_m_charge_1

	.end
