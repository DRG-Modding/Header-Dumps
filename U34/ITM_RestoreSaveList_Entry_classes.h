// WidgetBlueprintGeneratedClass ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C
// Size: 0x3d8 (Inherited: 0x230)
struct UITM_RestoreSaveList_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UImage* Image_1; // 0x248(0x08)
	struct UImage* Image_2; // 0x250(0x08)
	struct UImage* Image_3; // 0x258(0x08)
	struct UImage* IMG_MissionIcon; // 0x260(0x08)
	struct UTextBlock* Text_Credits; // 0x268(0x08)
	struct UTextBlock* Text_Rank; // 0x270(0x08)
	struct UTextBlock* Text_Star; // 0x278(0x08)
	struct UTextBlock* TXT_Modded; // 0x280(0x08)
	struct UTextBlock* TXT_SaveName; // 0x288(0x08)
	struct UTextBlock* TXT_TimeStamp; // 0x290(0x08)
	struct FBlueprintSessionResult Session; // 0x298(0x108)
	struct UBasic_ToolTip_C* MutatorToolTip; // 0x3a0(0x08)
	struct UBasic_ToolTip_C* WarningToolTip; // 0x3a8(0x08)
	struct UBiome_ToolTip_C* BiomeToolTip; // 0x3b0(0x08)
	struct UFSDSaveGame* SaveGame; // 0x3b8(0x08)
	int32_t CurrentIndex; // 0x3c0(0x04)
	char UnknownData_3C4[0x4]; // 0x3c4(0x04)
	struct FString CurrentName; // 0x3c8(0x10)

	void SetValues(int32_t PlayerRank, int32_t Credits, int32_t PromotionRank, struct FString slotName, bool CurrentSave, struct UFSDSaveGame* SaveGameInstance); // Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues
	void OnFailure_01B969514F5C76910A60AC87B4757BE7(); // Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnFailure_01B969514F5C76910A60AC87B4757BE7
	void OnSuccess_01B969514F5C76910A60AC87B4757BE7(); // Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnSuccess_01B969514F5C76910A60AC87B4757BE7
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	void Answer(bool Yes); // Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer
	void PreConstruct(bool IsDesignTime); // Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.PreConstruct
	void ExecuteUbergraph_ITM_RestoreSaveList_Entry(int32_t EntryPoint); // Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry
};

