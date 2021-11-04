// WidgetBlueprintGeneratedClass Options_Tab_Privacy.Options_Tab_Privacy_C
// Size: 0x298 (Inherited: 0x230)
struct UOptions_Tab_Privacy_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* AggregatedText; // 0x238(0x08)
	UBasic_Option_C* AppearOfflineOption; // 0x240(0x08)
	UTextBlock* GranularText; // 0x248(0x08)
	UBasic_Option_C* OPT_AnonymousData; // 0x250(0x08)
	UBasic_Option_C* OPT_PersonalData; // 0x258(0x08)
	UOptions_AnonymousMetrics_C* Options_AnonymousMetrics; // 0x260(0x08)
	UOptions_AppearOffline_C* Options_AppearOffline; // 0x268(0x08)
	UOptions_PersonalMetrics_C* Options_PersonalMetrics; // 0x270(0x08)
	UTextBlock* PersonalText; // 0x278(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x280(0x10)
	UBasic_ToolTip_C* AppearOfflineOptionTooltip; // 0x290(0x08)

	UWidget* CreateAppearOfflineOptionToolTip();
	void Construct();
	void BndEvt__OPT_PersonalData_K2Node_ComponentBoundEvent_170_OnHoveringBegin__DelegateSignature();
	void BndEvt__OPT_PersonalData_K2Node_ComponentBoundEvent_186_OnHoveringEnd__DelegateSignature();
	void BndEvt__OPT_AnonymousData_K2Node_ComponentBoundEvent_215_OnHoveringBegin__DelegateSignature();
	void BndEvt__OPT_AnonymousData_K2Node_ComponentBoundEvent_221_OnHoveringEnd__DelegateSignature();
	void BndEvt__OPT_RequestData_K2Node_ComponentBoundEvent_46_OnHoveringBegin__DelegateSignature();
	void BndEvt__OPT_RequestData_K2Node_ComponentBoundEvent_80_OnHoveringEnd__DelegateSignature();
	void ExecuteUbergraph_Options_Tab_Privacy(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

