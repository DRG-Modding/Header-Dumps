// WidgetBlueprintGeneratedClass Options_VolumeSlider.Options_VolumeSlider_C
// Size: 0x241 (Inherited: 0x230)
struct UOptions_VolumeSlider_C : USoundClassWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x238(0x08)
	enum class EVolumeType volumeType; // 0x240(0x01)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
	void UINeedsUpdate();
	void Update Percentage Text();
	void ExecuteUbergraph_Options_VolumeSlider(int32_t EntryPoint);
};

