#ifndef UE4SS_SDK_Options_AnonymousMetrics_HPP
#define UE4SS_SDK_Options_AnonymousMetrics_HPP

class UOptions_AnonymousMetrics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnAnonymousMetricsChanged(bool AllowAnonymousMetrics);
    void ExecuteUbergraph_Options_AnonymousMetrics(int32 EntryPoint, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_SetAnonymousAnalytics_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool K2Node_CustomEvent_AllowAnonymousMetrics, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool CallFunc_SetAnonymousAnalytics_ReturnValue_1, FExecuteUbergraph_Options_AnonymousMetricsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
