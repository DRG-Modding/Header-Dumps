#ifndef UE4SS_SDK_Options_Scalability_Overall_HPP
#define UE4SS_SDK_Options_Scalability_Overall_HPP

class UOptions_Scalability_Overall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    FText CustomText;

    void Construct();
    void UINeedsUpdate();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_Scalability_Overall(int32 EntryPoint);
};

#endif
