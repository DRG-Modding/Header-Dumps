// WidgetBlueprintGeneratedClass 026_UI.026_UI_C
// Size: 0x298 (Inherited: 0x230)
struct U026_UI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UEditableTextBox* CleanupDelay; // 0x238(0x08)
	struct UTextBlock* CurrentNitra; // 0x240(0x08)
	struct UCheckBox* DropsOnSpawns; // 0x248(0x08)
	struct UEditableTextBox* MaxDistance; // 0x250(0x08)
	struct UEditableTextBox* MaxDrops; // 0x258(0x08)
	struct UEditableTextBox* MinDistance; // 0x260(0x08)
	struct UEditableTextBox* MinDrops; // 0x268(0x08)
	struct UEditableTextBox* PodMultiplier; // 0x270(0x08)
	struct UCheckBox* ReplaceNormalDrops; // 0x278(0x08)
	struct UButton* SpawnNow; // 0x280(0x08)
	struct U026_SaveData_C* SaveData; // 0x288(0x08)
	struct AMod026_C* Main Mod; // 0x290(0x08)

	void Construct(); // Function 026_UI.026_UI_C.Construct
	void BndEvt__ReplaceNormalDrops_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 026_UI.026_UI_C.BndEvt__ReplaceNormalDrops_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__MinDrops_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 026_UI.026_UI_C.BndEvt__MinDrops_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__MaxDrops_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 026_UI.026_UI_C.BndEvt__MaxDrops_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function 026_UI.026_UI_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void BndEvt__MaxDistance_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 026_UI.026_UI_C.BndEvt__MaxDistance_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__DropsOnSpawns_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 026_UI.026_UI_C.BndEvt__DropsOnSpawns_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__PodMultiplier_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 026_UI.026_UI_C.BndEvt__PodMultiplier_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
	void Update Nitra(); // Function 026_UI.026_UI_C.Update Nitra
	void BndEvt__CleanupDelay_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 026_UI.026_UI_C.BndEvt__CleanupDelay_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__MinDistance_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 026_UI.026_UI_C.BndEvt__MinDistance_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
	void ExecuteUbergraph_026_UI(int32_t EntryPoint); // Function 026_UI.026_UI_C.ExecuteUbergraph_026_UI
};

