// WidgetBlueprintGeneratedClass Options_CameraShake.Options_CameraShake_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_CameraShake_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x238(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowUI();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_Options_CameraShake(int32_t EntryPoint);
};

