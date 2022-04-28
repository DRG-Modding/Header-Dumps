#ifndef UE4SS_SDK_Options_Ctrl_InvertMouse_HPP
#define UE4SS_SDK_Options_Ctrl_InvertMouse_HPP

class UOptions_Ctrl_InvertMouse_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_Ctrl_InvertMouse(int32 EntryPoint);
};

#endif
