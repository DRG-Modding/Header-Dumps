#ifndef UE4SS_SDK_Options_ShowFPS_HPP
#define UE4SS_SDK_Options_ShowFPS_HPP

class UOptions_ShowFPS_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void OnShowFPSChanged(bool NewValue);
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_ShowFPS(int32 EntryPoint);
};

#endif
