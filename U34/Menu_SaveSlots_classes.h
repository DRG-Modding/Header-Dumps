// WidgetBlueprintGeneratedClass Menu_SaveSlots.Menu_SaveSlots_C
// Size: 0x2dc (Inherited: 0x230)
struct UMenu_SaveSlots_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* CharLevelBG; // 0x238(0x08)
	struct UITM_TopBar_ResourceCounter_C* CreditsCounter; // 0x240(0x08)
	struct UTextBlock* Header; // 0x248(0x08)
	struct UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveLevel; // 0x250(0x08)
	struct UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveRank; // 0x258(0x08)
	struct UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon; // 0x260(0x08)
	struct UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry; // 0x268(0x08)
	struct UITM_CurrentSaveSlot_Resources_C* ITM_CurrentSaveSlot_Resources; // 0x270(0x08)
	struct UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry; // 0x278(0x08)
	struct UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_2; // 0x280(0x08)
	struct UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_3; // 0x288(0x08)
	struct UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_4; // 0x290(0x08)
	struct UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry; // 0x298(0x08)
	struct UBorder* PlayerRankBG; // 0x2a0(0x08)
	struct UVerticalBox* SaveSlotsBox; // 0x2a8(0x08)
	struct UBorder* SelectedSlot; // 0x2b0(0x08)
	struct UBorder* SlotList; // 0x2b8(0x08)
	struct UTextBlock* TXT_NumberOfSlotsLeft; // 0x2c0(0x08)
	struct FMulticastInlineDelegate SettingsChanged; // 0x2c8(0x10)
	int32_t NumberOfSlots; // 0x2d8(0x04)

	void Set Create New Saveslot Entry(); // Function Menu_SaveSlots.Menu_SaveSlots_C.Set Create New Saveslot Entry
	void BindSaveslotEvents(struct UITM_SaveSlot_Entry_C* SaveslotWidget); // Function Menu_SaveSlots.Menu_SaveSlots_C.BindSaveslotEvents
	void Set Selected Save(struct UFSDSaveGame* SaveSlot); // Function Menu_SaveSlots.Menu_SaveSlots_C.Set Selected Save
	void SetColors(); // Function Menu_SaveSlots.Menu_SaveSlots_C.SetColors
	void SetInitialSelectedSave(); // Function Menu_SaveSlots.Menu_SaveSlots_C.SetInitialSelectedSave
	void CreateSaveSlots(); // Function Menu_SaveSlots.Menu_SaveSlots_C.CreateSaveSlots
	void OnFailure_E9E78193470C6DFEB6754298C681AA76(); // Function Menu_SaveSlots.Menu_SaveSlots_C.OnFailure_E9E78193470C6DFEB6754298C681AA76
	void OnSuccess_E9E78193470C6DFEB6754298C681AA76(); // Function Menu_SaveSlots.Menu_SaveSlots_C.OnSuccess_E9E78193470C6DFEB6754298C681AA76
	void Construct(); // Function Menu_SaveSlots.Menu_SaveSlots_C.Construct
	void SaveDeleted(); // Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDeleted
	void SaveConverted(); // Function Menu_SaveSlots.Menu_SaveSlots_C.SaveConverted
	void PreConstruct(bool IsDesignTime); // Function Menu_SaveSlots.Menu_SaveSlots_C.PreConstruct
	void SaveDetails(struct UFSDSaveGame* SaveSlot); // Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDetails
	void SaveLoaded(); // Function Menu_SaveSlots.Menu_SaveSlots_C.SaveLoaded
	void NewSaveslotCreated(); // Function Menu_SaveSlots.Menu_SaveSlots_C.NewSaveslotCreated
	void ExecuteUbergraph_Menu_SaveSlots(int32_t EntryPoint); // Function Menu_SaveSlots.Menu_SaveSlots_C.ExecuteUbergraph_Menu_SaveSlots
	void SettingsChanged__DelegateSignature(); // Function Menu_SaveSlots.Menu_SaveSlots_C.SettingsChanged__DelegateSignature
};

