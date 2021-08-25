// WidgetBlueprintGeneratedClass Options_FOV.Options_FOV_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_FOV_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Slider_C* Basic_Slider; // 0x238(0x08)

	void Construct(); // Function Options_FOV.Options_FOV_C.Construct
	void UINeedsUpdate(); // Function Options_FOV.Options_FOV_C.UINeedsUpdate
	void ShowUI(); // Function Options_FOV.Options_FOV_C.ShowUI
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value); // Function Options_FOV.Options_FOV_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature
	void ExecuteUbergraph_Options_FOV(int32_t EntryPoint); // Function Options_FOV.Options_FOV_C.ExecuteUbergraph_Options_FOV
};

