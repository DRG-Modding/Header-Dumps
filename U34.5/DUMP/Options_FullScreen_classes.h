// WidgetBlueprintGeneratedClass Options_FullScreen.Options_FullScreen_C
// Size: 0x249 (Inherited: 0x230)
struct UOptions_FullScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	UBasic_CheckBox_C* LockMouseCheckbox; // 0x240(0x08)
	bool FromWindowToFullscreen; // 0x248(0x01)

	void Construct();
	void UINeedsUpdate();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void BndEvt__LockMouseCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_Options_FullScreen(int32_t EntryPoint);
};

