// WidgetBlueprintGeneratedClass Options_TutorialHints.Options_TutorialHints_C
// Size: 0x248 (Inherited: 0x230)
struct UOptions_TutorialHints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)
	struct UBasic_ButtonScalable_C* Button_Reset; // 0x240(0x08)

	void Construct(); // Function Options_TutorialHints.Options_TutorialHints_C.Construct
	void OnEnableTutorialHintsChanged(bool NewValue); // Function Options_TutorialHints.Options_TutorialHints_C.OnEnableTutorialHintsChanged
	void BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void ExecuteUbergraph_Options_TutorialHints(int32_t EntryPoint); // Function Options_TutorialHints.Options_TutorialHints_C.ExecuteUbergraph_Options_TutorialHints
};

