// WidgetBlueprintGeneratedClass Options_InputAudioSource.Options_InputAudioSource_C
// Size: 0x254 (Inherited: 0x230)
struct UOptions_InputAudioSource_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	UBasic_Slider_C* MicAmplitudeSlider; // 0x240(0x08)
	FTimerHandle NewDevicesTimerHandle; // 0x248(0x08)
	int32_t NumOfDevices; // 0x250(0x04)

	void FillAudioDevices();
	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void CheckForNewDevices();
	void Destruct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ReenableSlider();
	void ExecuteUbergraph_Options_InputAudioSource(int32_t EntryPoint);
};

