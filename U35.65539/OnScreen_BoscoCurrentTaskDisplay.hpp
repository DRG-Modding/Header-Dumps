#ifndef UE4SS_SDK_OnScreen_BoscoCurrentTaskDisplay_HPP
#define UE4SS_SDK_OnScreen_BoscoCurrentTaskDisplay_HPP

class UOnScreen_BoscoCurrentTaskDisplay_C : UUserWidget
{
    UImage* FightingIcon;
    UImage* LightingIcon;
    UImage* MiningIcon;
    UImage* RevivingIcon;

    void HideAll();
    void SetTask(EDroneActions Mode, bool K2Node_SwitchEnum_CmpSuccess);
}

#endif
