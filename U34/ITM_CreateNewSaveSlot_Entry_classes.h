// WidgetBlueprintGeneratedClass ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_CreateNewSaveSlot_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FlashingText; // 0x238(0x08)
	struct UBasic_ButtonCutCorner_C* Basic_CurrentProgress; // 0x240(0x08)
	struct UBasic_ButtonCutCorner_C* Basic_NewProgress; // 0x248(0x08)
	struct UImage* IMG_MissionIcon; // 0x250(0x08)
	struct UBasic_TextInputField_C* SaveslotName_Input; // 0x258(0x08)
	struct FString saveSlotName; // 0x260(0x10)
	bool ResetProgress; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
	struct FMulticastInlineDelegate OnSaveslotCreated; // 0x278(0x10)

	void ChangeSave(struct FString Name, bool Reset, bool StartTutorial); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ChangeSave
	void SaveSlotNameExists(bool Exists); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveSlotNameExists
	void SaveNameInputError(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveNameInputError
	void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature
	void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	void Answer(bool Yes); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.Answer
	void BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	void TutorialAnswer(bool Yes); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.TutorialAnswer
	void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText Text); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	void ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry(int32_t EntryPoint); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry
	void OnSaveslotCreated__DelegateSignature(); // Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.OnSaveslotCreated__DelegateSignature
};

