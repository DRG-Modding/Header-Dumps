#ifndef UE4SS_SDK_Options_HDR_HPP
#define UE4SS_SDK_Options_HDR_HPP

class UOptions_HDR_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_HDR(int32 EntryPoint);
};

#endif
