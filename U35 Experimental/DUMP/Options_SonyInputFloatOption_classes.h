// WidgetBlueprintGeneratedClass Options_SonyInputFloatOption.Options_SonyInputFloatOption_C
// Size: 0x258 (Inherited: 0x230)
struct UOptions_SonyInputFloatOption_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x238(0x08)
	enum class ESonyInputSettingsFloats Option; // 0x240(0x01)
	FMulticastInlineDelegate StateChanged; // 0x248(0x10)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_Options_SonyInputFloatOption(int32_t EntryPoint);
	void StateChanged__DelegateSignature(float NewValue);
};

