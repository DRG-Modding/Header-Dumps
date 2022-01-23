#ifndef UE4SS_SDK_Options_PersonalMetrics_HPP
#define UE4SS_SDK_Options_PersonalMetrics_HPP

class UOptions_PersonalMetrics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnPersonalMetricsChanged(bool AllowPersonalMetrics);
    void ExecuteUbergraph_Options_PersonalMetrics(int32 EntryPoint, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool K2Node_CustomEvent_AllowPersonalMetrics, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_SetPersonalAnalytics_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_SetPersonalAnalytics_ReturnValue_1, FExecuteUbergraph_Options_PersonalMetricsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
