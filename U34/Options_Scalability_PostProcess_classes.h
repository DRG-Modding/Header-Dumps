// WidgetBlueprintGeneratedClass Options_Scalability_PostProcess.Options_Scalability_PostProcess_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_Scalability_PostProcess_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)

	void Construct(); // Function Options_Scalability_PostProcess.Options_Scalability_PostProcess_C.Construct
	void UINeedsUpdate(); // Function Options_Scalability_PostProcess.Options_Scalability_PostProcess_C.UINeedsUpdate
	void ShowOptions(); // Function Options_Scalability_PostProcess.Options_Scalability_PostProcess_C.ShowOptions
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_Scalability_PostProcess.Options_Scalability_PostProcess_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
	void ExecuteUbergraph_Options_Scalability_PostProcess(int32_t EntryPoint); // Function Options_Scalability_PostProcess.Options_Scalability_PostProcess_C.ExecuteUbergraph_Options_Scalability_PostProcess
};

