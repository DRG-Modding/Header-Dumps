#ifndef UE4SS_SDK_Options_Gamepad_SwapThumbsticks_HPP
#define UE4SS_SDK_Options_Gamepad_SwapThumbsticks_HPP

class UOptions_Gamepad_SwapThumbsticks_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void OnRefresh();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_Gamepad_SwapThumbsticks(int32 EntryPoint);
};

#endif
