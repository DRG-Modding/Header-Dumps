// WidgetBlueprintGeneratedClass 017_UI.017_UI_C
// Size: 0x298 (Inherited: 0x230)
struct U017_UI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCheckBox* CullLowFPSCheckBox; // 0x238(0x08)
	struct UComboBoxString* CullMode; // 0x240(0x08)
	struct UTextBlock* CurrentEnemies; // 0x248(0x08)
	struct UTextBlock* CurrentSwarmers; // 0x250(0x08)
	struct UCheckBox* EnemyCounter; // 0x258(0x08)
	struct UTextBlock* FPS; // 0x260(0x08)
	struct UEditableTextBox* FPSLimitTextBox; // 0x268(0x08)
	struct UButton* KillAll; // 0x270(0x08)
	struct UEditableTextBox* MaxEnemies; // 0x278(0x08)
	struct UEditableTextBox* MaxSwarmers; // 0x280(0x08)
	struct U017_SaveData_C* Data; // 0x288(0x08)
	struct AMod017_C* Main Mod; // 0x290(0x08)

	void Construct(); // Function 017_UI.017_UI_C.Construct
	void BndEvt__MaxEnemiesTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 017_UI.017_UI_C.BndEvt__MaxEnemiesTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__CullLowFPSCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 017_UI.017_UI_C.BndEvt__CullLowFPSCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__FPSLimitTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 017_UI.017_UI_C.BndEvt__FPSLimitTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__MaxEnemies_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 017_UI.017_UI_C.BndEvt__MaxEnemies_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__CullMode_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function 017_UI.017_UI_C.BndEvt__CullMode_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	void BndEvt__KillAll_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function 017_UI.017_UI_C.BndEvt__KillAll_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	void Update FPS(); // Function 017_UI.017_UI_C.Update FPS
	void BndEvt__EnemyCounter_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 017_UI.017_UI_C.BndEvt__EnemyCounter_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	void ExecuteUbergraph_017_UI(int32_t EntryPoint); // Function 017_UI.017_UI_C.ExecuteUbergraph_017_UI
};

