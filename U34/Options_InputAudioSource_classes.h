// WidgetBlueprintGeneratedClass Options_InputAudioSource.Options_InputAudioSource_C
// Size: 0x254 (Inherited: 0x230)
struct UOptions_InputAudioSource_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	struct UBasic_Slider_C* MicAmplitudeSlider; // 0x240(0x08)
	struct FTimerHandle NewDevicesTimerHandle; // 0x248(0x08)
	int32_t NumOfDevices; // 0x250(0x04)

	void FillAudioDevices(); // Function Options_InputAudioSource.Options_InputAudioSource_C.FillAudioDevices
	void Construct(); // Function Options_InputAudioSource.Options_InputAudioSource_C.Construct
	void UINeedsUpdate(); // Function Options_InputAudioSource.Options_InputAudioSource_C.UINeedsUpdate
	void ShowOptions(); // Function Options_InputAudioSource.Options_InputAudioSource_C.ShowOptions
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_InputAudioSource.Options_InputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	void CheckForNewDevices(); // Function Options_InputAudioSource.Options_InputAudioSource_C.CheckForNewDevices
	void Destruct(); // Function Options_InputAudioSource.Options_InputAudioSource_C.Destruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Options_InputAudioSource.Options_InputAudioSource_C.Tick
	void ReenableSlider(); // Function Options_InputAudioSource.Options_InputAudioSource_C.ReenableSlider
	void ExecuteUbergraph_Options_InputAudioSource(int32_t EntryPoint); // Function Options_InputAudioSource.Options_InputAudioSource_C.ExecuteUbergraph_Options_InputAudioSource
};

