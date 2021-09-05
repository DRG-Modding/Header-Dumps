// WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_LoadOut_PerksEquip_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Background; // 0x238(0x08)
	UBorder* FrameBorder; // 0x240(0x08)
	UImage* IconLocked; // 0x248(0x08)
	UWidgetSwitcher* IconSwitcher; // 0x250(0x08)
	UButton* ItemButton; // 0x258(0x08)
	UBorder* SelectionBorder; // 0x260(0x08)
	UUI_PerkIcon_C* UI_PerkIcon; // 0x268(0x08)
	bool ItemHovered; // 0x270(0x01)
	bool ItemSelected; // 0x271(0x01)
	bool ItemLocked; // 0x272(0x01)
	UPerkAsset* PerkAsset; // 0x278(0x08)
	FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	bool ShowBorder; // 0x290(0x01)
	USoundBase* ClickAudio; // 0x298(0x08)
	bool IsRetirementIcon; // 0x2a0(0x01)
	UPlayerCharacterID* CharacterClass; // 0x2a8(0x08)

	UWidget* CreateToolTip();
	void IsItemLocked(bool ItemLocked);
	void GetPerkAsset(UPerkAsset* PerkAsset);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Refresh();
	void Set Perk(UPerkAsset* PerkAsset);
	void Set Selected(bool IsSelected);
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UITM_LoadOut_PerksEquip_Item_C* Item);
};

