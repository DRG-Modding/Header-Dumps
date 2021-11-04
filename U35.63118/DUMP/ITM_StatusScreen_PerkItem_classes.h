// WidgetBlueprintGeneratedClass ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_StatusScreen_PerkItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* ItemButton; // 0x238(0x08)
	UBorder* SelectionBorder; // 0x240(0x08)
	UUI_PerkBackground_C* UI_PerkBackground; // 0x248(0x08)
	UUI_PerkIcon_C* UI_PerkIcon; // 0x250(0x08)
	bool ItemHovered; // 0x258(0x01)
	bool ItemSelected; // 0x259(0x01)
	UPerkAsset* PerkAsset; // 0x260(0x08)
	FMulticastInlineDelegate OnClicked; // 0x268(0x10)
	USoundBase* ClickAudio; // 0x278(0x08)

	UWidget* Get_ItemButton_ToolTipWidget();
	void GetPerkAsset(UPerkAsset* PerkAsset);
	void Set Perk(UPerkAsset* PerkAsset);
	void Set Selected(bool IsSelected);
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Refresh();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_StatusScreen_PerkItem(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UITM_StatusScreen_PerkItem_C* Item);
};

