HMMenu_EventScript_ShowHMMenu::
    lockall
    multichoice 0, 0, MULTI_HM_MOVES, FALSE
    switch VAR_RESULT
    case 0, HMMenu_EventScript_TryUseHM01Cut
    case 1, HMMenu_EventScript_TryUseHM02Fly
    case 2, HMMenu_EventScript_TryUseHM03Surf
    case 3, HMMenu_EventScript_TryUseHM04Strength
    case 4, HMMenu_EventScript_TryUseHM05Flash
    case 5, HMMenu_EventScript_TryUseHM06RockSmash
    case 6, HMMenu_EventScript_TryUseHM07Waterfall
    case 7, HMMenu_EventScript_TryUseHM08Dive
    case MULTI_B_PRESSED, HMMenu_EventScript_Cancel
    end

HMMenu_EventScript_TryUseHM01Cut::
	checkitem ITEM_HM01
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE01_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    callnative IsPlayerInFrontOfCutTree_Scr
    goto_if_eq VAR_RESULT, TRUE, EventScript_UseCut
    callnative IsCuttableGrassNearPlayer_Scr
    goto_if_eq VAR_RESULT, TRUE, EventScript_UseCutOnGrass
    msgbox HMMenu_Text_TheresNothingToCut, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_TryUseHM02Fly::
HMMenu_EventScript_TryUseHM03Surf::
HMMenu_EventScript_TryUseHM04Strength::
HMMenu_EventScript_TryUseHM05Flash::
HMMenu_EventScript_TryUseHM06RockSmash::
HMMenu_EventScript_TryUseHM07Waterfall::
HMMenu_EventScript_TryUseHM08Dive::
HMMenu_EventScript_Cancel::
    releaseall
    end

HMMenu_EventScript_YouDontHaveThisHMYet::
    msgbox HMMenu_Text_YouDontHaveThisHMYet, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_CantBeUsedUntilBadge::
    msgbox HMMenu_Text_CantBeUsedUntilBadge, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_Text_YouDontHaveThisHMYet:
    .string "You don't have this HM yet.$"

HMMenu_Text_CantBeUsedUntilBadge:
    .string "This can't be used until a new\n"
    .string "Badge is obtained.$"

HMMenu_Text_TheresNothingToCut:
    .string "There's nothing to Cut.$"
