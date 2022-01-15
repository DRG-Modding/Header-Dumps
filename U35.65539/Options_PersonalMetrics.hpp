#ifndef UE4SS_SDK_Options_PersonalMetrics_HPP
#define UE4SS_SDK_Options_PersonalMetrics_HPP

class UOptions_PersonalMetrics_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnPersonalMetricsChanged(bool AllowPersonalMetrics);
    void ExecuteUbergraph_Options_PersonalMetrics(int32 EntryPoint, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool K2Node_CustomEvent_AllowPersonalMetrics, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_SetPersonalAnalytics_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_SetPersonalAnalytics_ReturnValue_1, PersonalMatricsChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
