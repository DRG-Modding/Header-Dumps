// WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C
// Size: 0x441 (Inherited: 0x230)
struct UITM_SaveSlot_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_ButtonScalable_C* Button_Convert; // 0x240(0x08)
	struct UBasic_ButtonScalable_C* Button_Delete; // 0x248(0x08)
	struct UBasic_ButtonScalable_C* Button_Load; // 0x250(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Driller; // 0x258(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Engineer; // 0x260(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Gunner; // 0x268(0x08)
	struct UImage* Image_2; // 0x270(0x08)
	struct UImage* IMG_MissionIcon; // 0x278(0x08)
	struct UButton* MainButton; // 0x280(0x08)
	struct UITM_SaveSlot_Entry_ClassIcon_C* Scout; // 0x288(0x08)
	struct UTextBlock* Text_Rank; // 0x290(0x08)
	struct UTextBlock* TXT_MainSave; // 0x298(0x08)
	struct UTextBlock* TXT_Modded; // 0x2a0(0x08)
	struct UTextBlock* TXT_SaveName; // 0x2a8(0x08)
	struct UTextBlock* TXT_TimeStamp; // 0x2b0(0x08)
	struct FBlueprintSessionResult Session; // 0x2b8(0x108)
	struct UBasic_ToolTip_C* MutatorToolTip; // 0x3c0(0x08)
	struct UBasic_ToolTip_C* WarningToolTip; // 0x3c8(0x08)
	struct UBiome_ToolTip_C* BiomeToolTip; // 0x3d0(0x08)
	struct FString saveSlotName; // 0x3d8(0x10)
	struct FString FullSaveSlotName; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnSaveDeleted; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnSaveConverted; // 0x408(0x10)
	struct UFSDSaveGame* SaveInstance; // 0x418(0x08)
	struct FMulticastInlineDelegate OnSaveDetails; // 0x420(0x10)
	struct FMulticastInlineDelegate OnSaveLoaded; // 0x430(0x10)
	bool ActiveSave; // 0x440(0x01)

	void SetIfSaveIsActive(bool IsMainSlot); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetIfSaveIsActive
	void SaveNameExists(struct FString Name, bool Exists); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SaveNameExists
	void SetSelectedColor(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetSelectedColor
	void SetHeroRanks(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetHeroRanks
	void GetSaveSlotName(struct UFSDSaveGame* SaveGame, bool ReturnEmptyOnNonUser, struct FString OutSaveSlotName); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.GetSaveSlotName
	void SetValues(struct UFSDSaveGame* SaveGameInstance, bool MainSlot); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetValues
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	void LoadAnswer(bool Yes); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.LoadAnswer
	void BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	void DeleteAnswer(bool Yes); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.DeleteAnswer
	void BndEvt__Convert_Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Convert_Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	void ConvertAnswer(bool Yes); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.ConvertAnswer
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.PreConstruct
	void ExecuteUbergraph_ITM_SaveSlot_Entry(int32_t EntryPoint); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.ExecuteUbergraph_ITM_SaveSlot_Entry
	void OnSaveLoaded__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveLoaded__DelegateSignature
	void OnSaveDetails__DelegateSignature(struct UFSDSaveGame* SaveSlot); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDetails__DelegateSignature
	void OnSaveConverted__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveConverted__DelegateSignature
	void OnSaveDeleted__DelegateSignature(); // Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeleted__DelegateSignature
};

