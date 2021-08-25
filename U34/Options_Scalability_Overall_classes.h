// WidgetBlueprintGeneratedClass Options_Scalability_Overall.Options_Scalability_Overall_C
// Size: 0x258 (Inherited: 0x230)
struct UOptions_Scalability_Overall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	struct FText CustomText; // 0x240(0x18)

	void Construct(); // Function Options_Scalability_Overall.Options_Scalability_Overall_C.Construct
	void UINeedsUpdate(); // Function Options_Scalability_Overall.Options_Scalability_Overall_C.UINeedsUpdate
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_Scalability_Overall.Options_Scalability_Overall_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
	void ExecuteUbergraph_Options_Scalability_Overall(int32_t EntryPoint); // Function Options_Scalability_Overall.Options_Scalability_Overall_C.ExecuteUbergraph_Options_Scalability_Overall
};

