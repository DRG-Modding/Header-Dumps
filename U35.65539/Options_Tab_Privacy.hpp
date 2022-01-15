#ifndef UE4SS_SDK_Options_Tab_Privacy_HPP
#define UE4SS_SDK_Options_Tab_Privacy_HPP

class UOptions_Tab_Privacy_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* AggregatedText;
    UBasic_Option_C* AppearOfflineOption;
    UTextBlock* GranularText;
    UBasic_Option_C* OPT_AnonymousData;
    UBasic_Option_C* OPT_PersonalData;
    UOptions_AnonymousMetrics_C* Options_AnonymousMetrics;
    UOptions_AppearOffline_C* Options_AppearOffline;
    UOptions_PersonalMetrics_C* Options_PersonalMetrics;
    UTextBlock* PersonalText;
    FOptions_Tab_Privacy_CSettingsChanged SettingsChanged;
    void SettingsChanged();
    UBasic_ToolTip_C* AppearOfflineOptionTooltip;

    UWidget* CreateAppearOfflineOptionToolTip(bool CallFunc_IsValid_ReturnValue, UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget);
    void Construct();
    void BndEvt__OPT_PersonalData_K2Node_ComponentBoundEvent_170_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_PersonalData_K2Node_ComponentBoundEvent_186_OnHoveringEnd__DelegateSignature();
    void BndEvt__OPT_AnonymousData_K2Node_ComponentBoundEvent_215_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_AnonymousData_K2Node_ComponentBoundEvent_221_OnHoveringEnd__DelegateSignature();
    void BndEvt__OPT_RequestData_K2Node_ComponentBoundEvent_46_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_RequestData_K2Node_ComponentBoundEvent_80_OnHoveringEnd__DelegateSignature();
    void ExecuteUbergraph_Options_Tab_Privacy(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_HasAnalytics_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_AreModsInstalled_ReturnValue);
    void SettingsChanged__DelegateSignature();
}

#endif
