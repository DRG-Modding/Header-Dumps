// WidgetBlueprintGeneratedClass Options_Chat_FadeTime.Options_Chat_FadeTime_C
// Size: 0x250 (Inherited: 0x230)
struct UOptions_Chat_FadeTime_C : USoundClassWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Slider_C* Basic_Slider; // 0x238(0x08)
	struct FMulticastInlineDelegate OnVolumeChanged; // 0x240(0x10)

	void Construct(); // Function Options_Chat_FadeTime.Options_Chat_FadeTime_C.Construct
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value); // Function Options_Chat_FadeTime.Options_Chat_FadeTime_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
	void ExecuteUbergraph_Options_Chat_FadeTime(int32_t EntryPoint); // Function Options_Chat_FadeTime.Options_Chat_FadeTime_C.ExecuteUbergraph_Options_Chat_FadeTime
	void OnVolumeChanged__DelegateSignature(float Volume); // Function Options_Chat_FadeTime.Options_Chat_FadeTime_C.OnVolumeChanged__DelegateSignature
};

