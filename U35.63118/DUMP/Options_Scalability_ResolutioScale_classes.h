// WidgetBlueprintGeneratedClass Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_Scalability_ResolutioScale_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x238(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowUI();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent);
	void ExecuteUbergraph_Options_Scalability_ResolutioScale(int32_t EntryPoint);
};

