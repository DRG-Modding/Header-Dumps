// WidgetBlueprintGeneratedClass 041_MatSelectionUI.041_MatSelectionUI_C
// Size: 0x7a8 (Inherited: 0x230)
struct U041_MatSelectionUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* ChutesMisc; // 0x238(0x08)
	struct UButton* Clear; // 0x240(0x08)
	struct UButton* Close; // 0x248(0x08)
	struct UTextBlock* CurrentPage; // 0x250(0x08)
	struct UButton* LegsTopBody; // 0x258(0x08)
	struct UButton* Lights; // 0x260(0x08)
	struct UTextBlock* LoadedMats; // 0x268(0x08)
	struct UButton* MainBody; // 0x270(0x08)
	struct UTextBlock* MatName; // 0x278(0x08)
	struct UButton* NextPage; // 0x280(0x08)
	struct UButton* PreviousPage; // 0x288(0x08)
	struct UButton* Randomise; // 0x290(0x08)
	struct UCheckBox* RandomisePerMission; // 0x298(0x08)
	struct UComboBoxString* SaveSlot; // 0x2a0(0x08)
	struct FButtonStyle Active Button Style; // 0x2a8(0x278)
	struct FButtonStyle Inactive Button Style; // 0x520(0x278)
	struct AMod041_C* Main Mod; // 0x798(0x08)
	int32_t Total Pages; // 0x7a0(0x04)
	int32_t Current Page; // 0x7a4(0x04)

	void BndEvt__ResetButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__ResetButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ResetButton_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__ResetButton_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ResetButton_4_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__ResetButton_4_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ResetButton_6_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__ResetButton_6_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Close_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	void BndEvt__PreviousPage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	void BndEvt__NextPage_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	void Construct(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.Construct
	void BndEvt__RandomisePerMission_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__RandomisePerMission_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Lights_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__Lights_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	void Update Mat Count(); // Function 041_MatSelectionUI.041_MatSelectionUI_C.Update Mat Count
	void BndEvt__SaveSlot_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function 041_MatSelectionUI.041_MatSelectionUI_C.BndEvt__SaveSlot_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
	void ExecuteUbergraph_041_MatSelectionUI(int32_t EntryPoint); // Function 041_MatSelectionUI.041_MatSelectionUI_C.ExecuteUbergraph_041_MatSelectionUI
};

