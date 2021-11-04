// WidgetBlueprintGeneratedClass Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C
// Size: 0x27c (Inherited: 0x230)
struct UItm_MinersManual_TabsHeader_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* HorizontalBox_Back; // 0x238(0x08)
	UImage* Image_BG; // 0x240(0x08)
	UItm_HeaderCategory_C* Itm_HeaderCategory0; // 0x248(0x08)
	UItm_HeaderCategory_C* Itm_HeaderCategory1; // 0x250(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x258(0x08)
	TArray<UItm_HeaderCategory_C*> Tabs; // 0x260(0x10)
	U_MENU_MinersManual_C* _Menu_Lore; // 0x270(0x08)
	int32_t CurrIndex; // 0x278(0x04)

	void SetSelected(int32_t Index, FText HeaderText);
	void Construct();
	void BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void SetData(U_MENU_MinersManual_C* _Menu_Lore);
	void ExecuteUbergraph_Itm_MinersManual_TabsHeader(int32_t EntryPoint);
};

