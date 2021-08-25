// WidgetBlueprintGeneratedClass Options_GFX_MaxFPS.Options_GFX_MaxFPS_C
// Size: 0x248 (Inherited: 0x230)
struct UOptions_GFX_MaxFPS_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	struct UBasic_Slider_C* Basic_Slider; // 0x240(0x08)

	void Construct(); // Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.Construct
	void UINeedsUpdate(); // Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.UINeedsUpdate
	void ShowOptions(); // Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.ShowOptions
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value); // Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	void ExecuteUbergraph_Options_GFX_MaxFPS(int32_t EntryPoint); // Function Options_GFX_MaxFPS.Options_GFX_MaxFPS_C.ExecuteUbergraph_Options_GFX_MaxFPS
};

