#ifndef UE4SS_SDK_OnScreen_BoscoCurrentTaskDisplay_HPP
#define UE4SS_SDK_OnScreen_BoscoCurrentTaskDisplay_HPP

class UOnScreen_BoscoCurrentTaskDisplay_C : public UUserWidget
{
    class UImage* FightingIcon;
    class UImage* LightingIcon;
    class UImage* MiningIcon;
    class UImage* RevivingIcon;

    void HideAll();
    void SetTask(EDroneActions Mode, bool K2Node_SwitchEnum_CmpSuccess);
};

#endif
