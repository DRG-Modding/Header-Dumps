#ifndef UE4SS_SDK_Options_Scalability_ViewDistance_HPP
#define UE4SS_SDK_Options_Scalability_ViewDistance_HPP

class UOptions_Scalability_ViewDistance_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_Scalability_ViewDistance(int32 EntryPoint);
};

#endif
