#ifndef UE4SS_SDK_Options_MouseSmooting_HPP
#define UE4SS_SDK_Options_MouseSmooting_HPP

class UOptions_MouseSmooting_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_MouseSmooting(int32 EntryPoint);
};

#endif
