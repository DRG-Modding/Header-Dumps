// WidgetBlueprintGeneratedClass Options_TutorialHints.Options_TutorialHints_C
// Size: 0x248 (Inherited: 0x230)
struct UOptions_TutorialHints_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	UBasic_ButtonScalable_C* Button_Reset; // 0x240(0x08)

	void Construct();
	void OnEnableTutorialHintsChanged(bool NewValue);
	void BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_Options_TutorialHints(int32_t EntryPoint);
};

