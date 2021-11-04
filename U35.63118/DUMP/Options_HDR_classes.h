// WidgetBlueprintGeneratedClass Options_HDR.Options_HDR_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_HDR_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_Options_HDR(int32_t EntryPoint);
};

