// WidgetBlueprintGeneratedClass Options_AnonymousMetrics.Options_AnonymousMetrics_C
// Size: 0x244 (Inherited: 0x230)
struct UOptions_AnonymousMetrics_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	int32_t PreviousStatus; // 0x240(0x04)

	void Construct(); // Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.Construct
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	void OnAnonymousMetricsChanged(bool AllowAnonymousMetrics); // Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.OnAnonymousMetricsChanged
	void ExecuteUbergraph_Options_AnonymousMetrics(int32_t EntryPoint); // Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.ExecuteUbergraph_Options_AnonymousMetrics
};

