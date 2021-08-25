// WidgetBlueprintGeneratedClass Options_VolumeSlider.Options_VolumeSlider_C
// Size: 0x241 (Inherited: 0x230)
struct UOptions_VolumeSlider_C : USoundClassWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Slider_C* Basic_Slider; // 0x238(0x08)
	enum class EVolumeType volumeType; // 0x240(0x01)

	void Construct(); // Function Options_VolumeSlider.Options_VolumeSlider_C.Construct
	void PreConstruct(bool IsDesignTime); // Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value); // Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	void UINeedsUpdate(); // Function Options_VolumeSlider.Options_VolumeSlider_C.UINeedsUpdate
	void Update Percentage Text(); // Function Options_VolumeSlider.Options_VolumeSlider_C.Update Percentage Text
	void ExecuteUbergraph_Options_VolumeSlider(int32_t EntryPoint); // Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider
};

