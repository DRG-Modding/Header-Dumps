// WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C
// Size: 0x441 (Inherited: 0x230)
struct UITM_SaveSlot_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBasic_ButtonScalable_C* Button_Convert; // 0x240(0x08)
	UBasic_ButtonScalable_C* Button_Delete; // 0x248(0x08)
	UBasic_ButtonScalable_C* Button_Load; // 0x250(0x08)
	UITM_SaveSlot_Entry_ClassIcon_C* Driller; // 0x258(0x08)
	UITM_SaveSlot_Entry_ClassIcon_C* Engineer; // 0x260(0x08)
	UITM_SaveSlot_Entry_ClassIcon_C* Gunner; // 0x268(0x08)
	UImage* Image_2; // 0x270(0x08)
	UImage* IMG_MissionIcon; // 0x278(0x08)
	UButton* MainButton; // 0x280(0x08)
	UITM_SaveSlot_Entry_ClassIcon_C* Scout; // 0x288(0x08)
	UTextBlock* Text_Rank; // 0x290(0x08)
	UTextBlock* TXT_MainSave; // 0x298(0x08)
	UTextBlock* TXT_Modded; // 0x2a0(0x08)
	UTextBlock* TXT_SaveName; // 0x2a8(0x08)
	UTextBlock* TXT_TimeStamp; // 0x2b0(0x08)
	FBlueprintSessionResult Session; // 0x2b8(0x108)
	UBasic_ToolTip_C* MutatorToolTip; // 0x3c0(0x08)
	UBasic_ToolTip_C* WarningToolTip; // 0x3c8(0x08)
	UBiome_ToolTip_C* BiomeToolTip; // 0x3d0(0x08)
	FString saveSlotName; // 0x3d8(0x10)
	FString FullSaveSlotName; // 0x3e8(0x10)
	FMulticastInlineDelegate OnSaveDeleted; // 0x3f8(0x10)
	FMulticastInlineDelegate OnSaveConverted; // 0x408(0x10)
	UFSDSaveGame* SaveInstance; // 0x418(0x08)
	FMulticastInlineDelegate OnSaveDetails; // 0x420(0x10)
	FMulticastInlineDelegate OnSaveLoaded; // 0x430(0x10)
	bool ActiveSave; // 0x440(0x01)

	void SetIfSaveIsActive(bool IsMainSlot);
	void SaveNameExists(FString Name, bool Exists);
	void SetSelectedColor();
	void SetHeroRanks();
	void GetSaveSlotName(UFSDSaveGame* SaveGame, bool ReturnEmptyOnNonUser, FString OutSaveSlotName);
	void SetValues(UFSDSaveGame* SaveGameInstance, bool MainSlot);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void LoadAnswer(bool Yes);
	void BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
	void DeleteAnswer(bool Yes);
	void BndEvt__Convert_Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
	void ConvertAnswer(bool Yes);
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_SaveSlot_Entry(int32_t EntryPoint);
	void OnSaveLoaded__DelegateSignature();
	void OnSaveDetails__DelegateSignature(UFSDSaveGame* SaveSlot);
	void OnSaveConverted__DelegateSignature();
	void OnSaveDeleted__DelegateSignature();
};

