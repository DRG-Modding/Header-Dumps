// WidgetBlueprintGeneratedClass Options_OutputAudioSource.Options_OutputAudioSource_C
// Size: 0x2a8 (Inherited: 0x230)
struct UOptions_OutputAudioSource_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x240(0x08)
	TMap<FString, FString> AudioDevices; // 0x248(0x50)
	int32_t NumOfDevices; // 0x298(0x04)
	FTimerHandle CheckForNewDevicesTimer; // 0x2a0(0x08)

	void FillAudioDevices();
	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void CheckForNewDevices();
	void Destruct();
	void ExecuteUbergraph_Options_OutputAudioSource(int32_t EntryPoint);
};

