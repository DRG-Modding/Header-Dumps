#ifndef UE4SS_SDK_Options_HoldToBreakImmobilization_HPP
#define UE4SS_SDK_Options_HoldToBreakImmobilization_HPP

class UOptions_HoldToBreakImmobilization_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_Option_C* Basic_Option;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_HoldToBreakImmobilization(int32 EntryPoint);
};

#endif
