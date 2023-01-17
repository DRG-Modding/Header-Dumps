#ifndef UE4SS_SDK_Options_SonyInputLightOption_HPP
#define UE4SS_SDK_Options_SonyInputLightOption_HPP

class UOptions_SonyInputLightOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_SonyInputLightOption(int32 EntryPoint);
};

#endif
