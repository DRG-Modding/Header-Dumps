#ifndef UE4SS_SDK_Options_ShowNetInfo_HPP
#define UE4SS_SDK_Options_ShowNetInfo_HPP

class UOptions_ShowNetInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;

    void Construct();
    void OnShowNetLevelChanged(int32 NewValue);
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_ShowNetInfo(int32 EntryPoint);
};

#endif
