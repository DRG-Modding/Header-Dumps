// WidgetBlueprintGeneratedClass Options_Scalability_Shadows.Options_Scalability_Shadows_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_Scalability_Shadows_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void ExecuteUbergraph_Options_Scalability_Shadows(int32_t EntryPoint);
};

