#ifndef UE4SS_SDK_Options_Bloom_HPP
#define UE4SS_SDK_Options_Bloom_HPP

class UOptions_Bloom_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ShowOptions();
    void UINeedsUpdate();
    void ExecuteUbergraph_Options_Bloom(int32 EntryPoint);
};

#endif
