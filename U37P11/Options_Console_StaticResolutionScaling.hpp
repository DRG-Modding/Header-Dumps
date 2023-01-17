#ifndef UE4SS_SDK_Options_Console_StaticResolutionScaling_HPP
#define UE4SS_SDK_Options_Console_StaticResolutionScaling_HPP

class UOptions_Console_StaticResolutionScaling_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Basic_Label_Dynamic;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UWidgetSwitcher* SwitcherDynamicStatic;
    FText dynamicOptionText;

    void AddResolutionOptions();
    void Construct();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void PreConstruct(bool IsDesignTime);
    void ShowOptions();
    void UINeedsUpdate();
    void ExecuteUbergraph_Options_Console_StaticResolutionScaling(int32 EntryPoint);
};

#endif
