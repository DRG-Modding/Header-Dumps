// WidgetBlueprintGeneratedClass Options_Controller_AimAcceleration_Outer.Options_Controller_AimAcceleration_Outer_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_Controller_AimAcceleration_Outer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x238(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_Options_Controller_AimAcceleration_Outer(int32_t EntryPoint);
};

