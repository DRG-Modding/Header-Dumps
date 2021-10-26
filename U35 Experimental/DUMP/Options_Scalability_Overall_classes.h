// WidgetBlueprintGeneratedClass Options_Scalability_Overall.Options_Scalability_Overall_C
// Size: 0x258 (Inherited: 0x230)
struct UOptions_Scalability_Overall_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	FText CustomText; // 0x240(0x18)

	void Construct();
	void UINeedsUpdate();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void ExecuteUbergraph_Options_Scalability_Overall(int32_t EntryPoint);
};

