#ifndef UE4SS_SDK_Options_Console_QualitySetting_HPP
#define UE4SS_SDK_Options_Console_QualitySetting_HPP

class UOptions_Console_QualitySetting_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    FText CustomText;
    EConsoleGraphicsMode NewVar_0;
    class UBasic_ToolTip_C* ToolTip;

    void Construct();
    void UINeedsUpdate();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void PreConstruct(bool IsDesignTime);
    void ShowOptions();
    void ExecuteUbergraph_Options_Console_QualitySetting(int32 EntryPoint);
};

#endif
