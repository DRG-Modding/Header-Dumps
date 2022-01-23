#ifndef UE4SS_SDK_Options_ShowNetInfo_HPP
#define UE4SS_SDK_Options_ShowNetInfo_HPP

class UOptions_ShowNetInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;

    void OnShowFPSChanged(bool NewValue);
    void Construct();
    void OnShowNetLevelChanged(int32 NewValue);
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_ShowNetInfo(int32 EntryPoint, bool K2Node_CustomEvent_NewValue_1, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, int32 CallFunc_GetShowNetInfoLevel_ReturnValue, int32 K2Node_CustomEvent_NewValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1);
};

#endif
