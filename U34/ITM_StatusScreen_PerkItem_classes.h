// WidgetBlueprintGeneratedClass ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_StatusScreen_PerkItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* ItemButton; // 0x238(0x08)
	struct UBorder* SelectionBorder; // 0x240(0x08)
	struct UUI_PerkBackground_C* UI_PerkBackground; // 0x248(0x08)
	struct UUI_PerkIcon_C* UI_PerkIcon; // 0x250(0x08)
	bool ItemHovered; // 0x258(0x01)
	bool ItemSelected; // 0x259(0x01)
	char UnknownData_25A[0x6]; // 0x25a(0x06)
	struct UPerkAsset* PerkAsset; // 0x260(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x268(0x10)
	struct USoundBase* ClickAudio; // 0x278(0x08)

	struct UWidget* Get_ItemButton_ToolTipWidget(); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Get_ItemButton_ToolTipWidget
	void GetPerkAsset(struct UPerkAsset* PerkAsset); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.GetPerkAsset
	void Set Perk(struct UPerkAsset* PerkAsset); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Perk
	void Set Selected(bool IsSelected); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Selected
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void Refresh(); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Refresh
	void Construct(); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.PreConstruct
	void ExecuteUbergraph_ITM_StatusScreen_PerkItem(int32_t EntryPoint); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.ExecuteUbergraph_ITM_StatusScreen_PerkItem
	void OnClicked__DelegateSignature(struct UITM_StatusScreen_PerkItem_C* Item); // Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.OnClicked__DelegateSignature
};

