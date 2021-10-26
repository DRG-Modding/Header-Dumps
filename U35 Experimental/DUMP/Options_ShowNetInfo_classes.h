// WidgetBlueprintGeneratedClass Options_ShowNetInfo.Options_ShowNetInfo_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_ShowNetInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)

	void OnShowFPSChanged(bool NewValue);
	void Construct();
	void OnShowNetLevelChanged(int32_t NewValue);
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void ExecuteUbergraph_Options_ShowNetInfo(int32_t EntryPoint);
};

