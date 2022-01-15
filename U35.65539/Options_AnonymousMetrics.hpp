#ifndef UE4SS_SDK_Options_AnonymousMetrics_HPP
#define UE4SS_SDK_Options_AnonymousMetrics_HPP

class UOptions_AnonymousMetrics_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnAnonymousMetricsChanged(bool AllowAnonymousMetrics);
    void ExecuteUbergraph_Options_AnonymousMetrics(int32 EntryPoint, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_SetAnonymousAnalytics_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool K2Node_CustomEvent_AllowAnonymousMetrics, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool CallFunc_SetAnonymousAnalytics_ReturnValue_1, AnonymousMatricsChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
