#ifndef UE4SS_SDK_Options_DX12_HPP
#define UE4SS_SDK_Options_DX12_HPP

class UOptions_DX12_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ShowOptions();
    void UINeedsUpdate();
    void ExecuteUbergraph_Options_DX12(int32 EntryPoint);
};

#endif
