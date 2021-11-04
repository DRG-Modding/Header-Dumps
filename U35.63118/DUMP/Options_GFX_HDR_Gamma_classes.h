// WidgetBlueprintGeneratedClass Options_GFX_HDR_Gamma.Options_GFX_HDR_Gamma_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_GFX_HDR_Gamma_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x238(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowUI();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent);
	void ExecuteUbergraph_Options_GFX_HDR_Gamma(int32_t EntryPoint);
};

