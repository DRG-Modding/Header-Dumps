// WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_LoadOut_PerksEquip_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Background; // 0x238(0x08)
	struct UBorder* FrameBorder; // 0x240(0x08)
	struct UImage* IconLocked; // 0x248(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x250(0x08)
	struct UButton* ItemButton; // 0x258(0x08)
	struct UBorder* SelectionBorder; // 0x260(0x08)
	struct UUI_PerkIcon_C* UI_PerkIcon; // 0x268(0x08)
	bool ItemHovered; // 0x270(0x01)
	bool ItemSelected; // 0x271(0x01)
	bool ItemLocked; // 0x272(0x01)
	char UnknownData_273[0x5]; // 0x273(0x05)
	struct UPerkAsset* PerkAsset; // 0x278(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	bool ShowBorder; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct USoundBase* ClickAudio; // 0x298(0x08)
	bool IsRetirementIcon; // 0x2a0(0x01)
	char UnknownData_2A1[0x7]; // 0x2a1(0x07)
	struct UPlayerCharacterID* CharacterClass; // 0x2a8(0x08)

	struct UWidget* CreateToolTip(); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.CreateToolTip
	void IsItemLocked(bool ItemLocked); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.IsItemLocked
	void GetPerkAsset(struct UPerkAsset* PerkAsset); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.GetPerkAsset
	void PreConstruct(bool IsDesignTime); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.PreConstruct
	void Construct(); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Construct
	void Refresh(); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Refresh
	void Set Perk(struct UPerkAsset* PerkAsset); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Set Perk
	void Set Selected(bool IsSelected); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Set Selected
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item(int32_t EntryPoint); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item
	void OnClicked__DelegateSignature(struct UITM_LoadOut_PerksEquip_Item_C* Item); // Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.OnClicked__DelegateSignature
};

