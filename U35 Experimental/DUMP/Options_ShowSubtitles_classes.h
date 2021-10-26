// WidgetBlueprintGeneratedClass Options_ShowSubtitles.Options_ShowSubtitles_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_ShowSubtitles_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)

	void Construct();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void OnGameUserSettingsChanged();
	void ExecuteUbergraph_Options_ShowSubtitles(int32_t EntryPoint);
};

