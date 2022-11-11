#ifndef UE4SS_SDK_Options_AMD_FSR2_Quality_HPP
#define UE4SS_SDK_Options_AMD_FSR2_Quality_HPP

class UOptions_AMD_FSR2_Quality_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Options_AMD_FSR_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_AMD_FSR2_Quality(int32 EntryPoint);
};

#endif
