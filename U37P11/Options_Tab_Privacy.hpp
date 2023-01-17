#ifndef UE4SS_SDK_Options_Tab_Privacy_HPP
#define UE4SS_SDK_Options_Tab_Privacy_HPP

class UOptions_Tab_Privacy_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AggregatedText;
    class UBasic_Option_C* AppearOfflineOption;
    class UTextBlock* GranularText;
    class UBasic_Option_C* OPT_AnonymousData;
    class UBasic_Option_C* OPT_PersonalData;
    class UOptions_AnonymousMetrics_C* Options_AnonymousMetrics;
    class UOptions_AppearOffline_C* Options_AppearOffline;
    class UOptions_PersonalMetrics_C* Options_PersonalMetrics;
    class UTextBlock* PersonalText;
    FOptions_Tab_Privacy_CSettingsChanged SettingsChanged;
    void SettingsChanged();
    class UBasic_ToolTip_C* AppearOfflineOptionTooltip;

    class UWidget* CreateAppearOfflineOptionToolTip();
    void Construct();
    void BndEvt__OPT_PersonalData_K2Node_ComponentBoundEvent_170_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_PersonalData_K2Node_ComponentBoundEvent_186_OnHoveringEnd__DelegateSignature();
    void BndEvt__OPT_AnonymousData_K2Node_ComponentBoundEvent_215_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_AnonymousData_K2Node_ComponentBoundEvent_221_OnHoveringEnd__DelegateSignature();
    void ExecuteUbergraph_Options_Tab_Privacy(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
