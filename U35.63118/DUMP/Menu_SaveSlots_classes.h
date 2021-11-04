// WidgetBlueprintGeneratedClass Menu_SaveSlots.Menu_SaveSlots_C
// Size: 0x2dc (Inherited: 0x230)
struct UMenu_SaveSlots_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* CharLevelBG; // 0x238(0x08)
	UITM_TopBar_ResourceCounter_C* CreditsCounter; // 0x240(0x08)
	UTextBlock* Header; // 0x248(0x08)
	UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveLevel; // 0x250(0x08)
	UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveRank; // 0x258(0x08)
	UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon; // 0x260(0x08)
	UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry; // 0x268(0x08)
	UITM_CurrentSaveSlot_Resources_C* ITM_CurrentSaveSlot_Resources; // 0x270(0x08)
	UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry; // 0x278(0x08)
	UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_2; // 0x280(0x08)
	UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_3; // 0x288(0x08)
	UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_4; // 0x290(0x08)
	UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry; // 0x298(0x08)
	UBorder* PlayerRankBG; // 0x2a0(0x08)
	UVerticalBox* SaveSlotsBox; // 0x2a8(0x08)
	UBorder* SelectedSlot; // 0x2b0(0x08)
	UBorder* SlotList; // 0x2b8(0x08)
	UTextBlock* TXT_NumberOfSlotsLeft; // 0x2c0(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x2c8(0x10)
	int32_t NumberOfSlots; // 0x2d8(0x04)

	void Set Create New Saveslot Entry();
	void BindSaveslotEvents(UITM_SaveSlot_Entry_C* SaveslotWidget);
	void Set Selected Save(UFSDSaveGame* SaveSlot);
	void SetColors();
	void SetInitialSelectedSave();
	void CreateSaveSlots();
	void OnFailure_E9E78193470C6DFEB6754298C681AA76();
	void OnSuccess_E9E78193470C6DFEB6754298C681AA76();
	void Construct();
	void SaveDeleted();
	void SaveConverted();
	void PreConstruct(bool IsDesignTime);
	void SaveDetails(UFSDSaveGame* SaveSlot);
	void SaveLoaded();
	void NewSaveslotCreated();
	void ExecuteUbergraph_Menu_SaveSlots(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

