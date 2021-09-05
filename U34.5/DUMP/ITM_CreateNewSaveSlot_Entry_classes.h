// WidgetBlueprintGeneratedClass ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_CreateNewSaveSlot_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FlashingText; // 0x238(0x08)
	UBasic_ButtonCutCorner_C* Basic_CurrentProgress; // 0x240(0x08)
	UBasic_ButtonCutCorner_C* Basic_NewProgress; // 0x248(0x08)
	UImage* IMG_MissionIcon; // 0x250(0x08)
	UBasic_TextInputField_C* SaveslotName_Input; // 0x258(0x08)
	FString saveSlotName; // 0x260(0x10)
	bool ResetProgress; // 0x270(0x01)
	FMulticastInlineDelegate OnSaveslotCreated; // 0x278(0x10)

	void ChangeSave(FString Name, bool Reset, bool StartTutorial);
	void SaveSlotNameExists(bool Exists);
	void SaveNameInputError();
	void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature(FText Text, char CommitMethod);
	void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
	void Answer(bool Yes);
	void BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
	void TutorialAnswer(bool Yes);
	void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text);
	void ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry(int32_t EntryPoint);
	void OnSaveslotCreated__DelegateSignature();
};

