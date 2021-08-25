// WidgetBlueprintGeneratedClass Options_OutputAudioSource.Options_OutputAudioSource_C
// Size: 0x2a8 (Inherited: 0x230)
struct UOptions_OutputAudioSource_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x240(0x08)
	struct TMap<struct FString, struct FString> AudioDevices; // 0x248(0x50)
	int32_t NumOfDevices; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct FTimerHandle CheckForNewDevicesTimer; // 0x2a0(0x08)

	void FillAudioDevices(); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.FillAudioDevices
	void Construct(); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.Construct
	void UINeedsUpdate(); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.UINeedsUpdate
	void ShowOptions(); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.ShowOptions
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	void CheckForNewDevices(); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.CheckForNewDevices
	void Destruct(); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.Destruct
	void ExecuteUbergraph_Options_OutputAudioSource(int32_t EntryPoint); // Function Options_OutputAudioSource.Options_OutputAudioSource_C.ExecuteUbergraph_Options_OutputAudioSource
};

