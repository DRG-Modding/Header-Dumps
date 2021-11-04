// WidgetBlueprintGeneratedClass Popup_ModdedSave.Popup_ModdedSave_C
// Size: 0x2e9 (Inherited: 0x270)
struct UPopup_ModdedSave_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	UBorder* Border_1; // 0x280(0x08)
	UBasic_ButtonScalable_C* Button_Cancel; // 0x288(0x08)
	UTextBlock* Header; // 0x290(0x08)
	UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry; // 0x298(0x08)
	UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry; // 0x2a0(0x08)
	UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry; // 0x2a8(0x08)
	UScrollBox* SaveSlotContainer; // 0x2b0(0x08)
	FMulticastInlineDelegate OnModdedSaveLoaded; // 0x2b8(0x10)
	bool CanCancel; // 0x2c8(0x01)
	FMulticastInlineDelegate OnModdedSaveCancelled; // 0x2d0(0x10)
	UBasic_ToolTip_C* CancelTooltip; // 0x2e0(0x08)
	bool LoadVanillaSaves; // 0x2e8(0x01)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	UWidget* CancelButtonTooltip();
	void SetCanCancel(bool Can, FText OptionalTooltipText);
	void Reset Color on Non Selected Save(UFSDSaveGame* SaveSlot);
	void BindSaveslotEvents(UITM_SaveSlot_Entry_C* SaveslotWidget);
	void SetColors();
	void Set Create New Saveslot Entry();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnSaveDeleted();
	void OnSaveLoaded();
	void OnSaveCreated();
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
	void Cancel();
	void ExecuteUbergraph_Popup_ModdedSave(int32_t EntryPoint);
	void OnModdedSaveCancelled__DelegateSignature();
	void OnModdedSaveLoaded__DelegateSignature();
};

