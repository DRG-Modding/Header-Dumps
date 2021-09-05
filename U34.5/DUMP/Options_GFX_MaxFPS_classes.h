// WidgetBlueprintGeneratedClass Options_GFX_MaxFPS.Options_GFX_MaxFPS_C
// Size: 0x248 (Inherited: 0x230)
struct UOptions_GFX_MaxFPS_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x240(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_Options_GFX_MaxFPS(int32_t EntryPoint);
};

