// WidgetBlueprintGeneratedClass Popup_ModdedSave.Popup_ModdedSave_C
// Size: 0x2c0 (Inherited: 0x270)
struct UPopup_ModdedSave_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	struct UBorder* Border_1; // 0x280(0x08)
	struct UTextBlock* Header; // 0x288(0x08)
	struct UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry; // 0x290(0x08)
	struct UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry; // 0x298(0x08)
	struct UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry; // 0x2a0(0x08)
	struct UScrollBox* SaveSlotContainer; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnModdedSaveLoaded; // 0x2b0(0x10)

	void Reset Color on Non Selected Save(struct UFSDSaveGame* SaveSlot); // Function Popup_ModdedSave.Popup_ModdedSave_C.Reset Color on Non Selected Save
	void BindSaveslotEvents(struct UITM_SaveSlot_Entry_C* SaveslotWidget); // Function Popup_ModdedSave.Popup_ModdedSave_C.BindSaveslotEvents
	void SetColors(); // Function Popup_ModdedSave.Popup_ModdedSave_C.SetColors
	void Set Create New Saveslot Entry(); // Function Popup_ModdedSave.Popup_ModdedSave_C.Set Create New Saveslot Entry
	void Construct(); // Function Popup_ModdedSave.Popup_ModdedSave_C.Construct
	void PreConstruct(bool IsDesignTime); // Function Popup_ModdedSave.Popup_ModdedSave_C.PreConstruct
	void OnSaveDeleted(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveDeleted
	void OnSaveLoaded(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveLoaded
	void OnSaveCreated(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveCreated
	void ExecuteUbergraph_Popup_ModdedSave(int32_t EntryPoint); // Function Popup_ModdedSave.Popup_ModdedSave_C.ExecuteUbergraph_Popup_ModdedSave
	void OnModdedSaveLoaded__DelegateSignature(); // Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveLoaded__DelegateSignature
};

