// WidgetBlueprintGeneratedClass Options_FullScreen.Options_FullScreen_C
// Size: 0x249 (Inherited: 0x230)
struct UOptions_FullScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	struct UBasic_CheckBox_C* LockMouseCheckbox; // 0x240(0x08)
	bool FromWindowToFullscreen; // 0x248(0x01)

	void Construct(); // Function Options_FullScreen.Options_FullScreen_C.Construct
	void UINeedsUpdate(); // Function Options_FullScreen.Options_FullScreen_C.UINeedsUpdate
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_FullScreen.Options_FullScreen_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature
	void BndEvt__LockMouseCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Options_FullScreen.Options_FullScreen_C.BndEvt__LockMouseCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void ExecuteUbergraph_Options_FullScreen(int32_t EntryPoint); // Function Options_FullScreen.Options_FullScreen_C.ExecuteUbergraph_Options_FullScreen
};

