// WidgetBlueprintGeneratedClass Options_Chat_FontSize.Options_Chat_FontSize_C
// Size: 0x250 (Inherited: 0x230)
struct UOptions_Chat_FontSize_C : USoundClassWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x238(0x08)
	FMulticastInlineDelegate OnVolumeChanged; // 0x240(0x10)

	void Construct();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_Options_Chat_FontSize(int32_t EntryPoint);
	void OnVolumeChanged__DelegateSignature(float Volume);
};

