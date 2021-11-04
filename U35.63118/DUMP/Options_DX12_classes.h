// WidgetBlueprintGeneratedClass Options_DX12.Options_DX12_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_DX12_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)

	void Construct();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ShowOptions();
	void UINeedsUpdate();
	void ExecuteUbergraph_Options_DX12(int32_t EntryPoint);
};

