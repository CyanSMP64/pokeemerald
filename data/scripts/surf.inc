EventScript_UseSurf::
	lockall
	special GetHmModeOption
	call_if_eq VAR_RESULT, 0, EventScript_UseSurf_Classic
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
EventScript_UseSurf_Classic::
	checkpartymove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	setfieldeffectargument 0, VAR_RESULT
	return
