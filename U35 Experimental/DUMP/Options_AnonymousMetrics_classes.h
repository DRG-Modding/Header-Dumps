// WidgetBlueprintGeneratedClass Options_AnonymousMetrics.Options_AnonymousMetrics_C
// Size: 0x244 (Inherited: 0x230)
struct UOptions_AnonymousMetrics_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	int32_t PreviousStatus; // 0x240(0x04)

	void Construct();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void OnAnonymousMetricsChanged(bool AllowAnonymousMetrics);
	void ExecuteUbergraph_Options_AnonymousMetrics(int32_t EntryPoint);
};

