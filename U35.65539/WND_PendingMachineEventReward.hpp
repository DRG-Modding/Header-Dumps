#ifndef UE4SS_SDK_WND_PendingMachineEventReward_HPP
#define UE4SS_SDK_WND_PendingMachineEventReward_HPP

class UWND_PendingMachineEventReward_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimFadeIn;
    UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBlurBackground_C* BlurBackground;
    UUI_Forge_Schematic_C* UI_Forge_Schematic;
    USchematic* Reward;

    void OnShown();
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
    void ExecuteUbergraph_WND_PendingMachineEventReward(int32 EntryPoint, USchematic* CallFunc_TryGivePendingReward_ReturnValue, bool CallFunc_IsValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
