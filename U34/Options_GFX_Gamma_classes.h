// WidgetBlueprintGeneratedClass Options_GFX_Gamma.Options_GFX_Gamma_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_GFX_Gamma_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Slider_C* Basic_Slider; // 0x238(0x08)

	void Construct(); // Function Options_GFX_Gamma.Options_GFX_Gamma_C.Construct
	void UINeedsUpdate(); // Function Options_GFX_Gamma.Options_GFX_Gamma_C.UINeedsUpdate
	void ShowUI(); // Function Options_GFX_Gamma.Options_GFX_Gamma_C.ShowUI
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent); // Function Options_GFX_Gamma.Options_GFX_Gamma_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature
	void ExecuteUbergraph_Options_GFX_Gamma(int32_t EntryPoint); // Function Options_GFX_Gamma.Options_GFX_Gamma_C.ExecuteUbergraph_Options_GFX_Gamma
};

