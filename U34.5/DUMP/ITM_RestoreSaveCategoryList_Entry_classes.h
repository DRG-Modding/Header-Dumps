// WidgetBlueprintGeneratedClass ITM_RestoreSaveCategoryList_Entry.ITM_RestoreSaveCategoryList_Entry_C
// Size: 0x380 (Inherited: 0x230)
struct UITM_RestoreSaveCategoryList_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UButton* Button_1; // 0x240(0x08)
	UImage* IMG_MissionIcon; // 0x248(0x08)
	UTextBlock* Text_CreditsDescription; // 0x250(0x08)
	UTextBlock* Text_RankDescription; // 0x258(0x08)
	UTextBlock* Text_StarDescription; // 0x260(0x08)
	UTextBlock* TXT_SaveName; // 0x268(0x08)
	UTextBlock* TXT_TimeStamp; // 0x270(0x08)
	FBlueprintSessionResult Session; // 0x278(0x108)

	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry(int32_t EntryPoint);
};

