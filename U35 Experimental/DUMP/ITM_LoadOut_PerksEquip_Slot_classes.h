// WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C
// Size: 0x2b8 (Inherited: 0x230)
struct UITM_LoadOut_PerksEquip_Slot_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetSwitcher* ContentSwitcher; // 0x238(0x08)
	UUI_ImageTinted_C* LockedIcon; // 0x240(0x08)
	UBorder* SelectionBorder; // 0x248(0x08)
	UButton* SlotButton; // 0x250(0x08)
	UUI_PerkBackground_C* UI_PerkBackground; // 0x258(0x08)
	UUI_PerkIcon_C* UI_PerkIcon; // 0x260(0x08)
	enum class EPerkUsageType SlotType; // 0x268(0x01)
	UPerkAsset* PerkAsset; // 0x270(0x08)
	bool IsLocked; // 0x278(0x01)
	bool Hovered; // 0x279(0x01)
	bool IsSelected; // 0x27a(0x01)
	UTexture2D* OverrideLockIcon; // 0x280(0x08)
	FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	FText LockedToolTip; // 0x298(0x18)
	UUI_Perk_ToolTip_C* PerkToolTip; // 0x2b0(0x08)

	UWidget* GetPerkToolTip();
	void GetIsSelected(bool IsSelected);
	void UpdateSelectionBorder();
	void SetSelected(bool InSelected);
	void SetHovered(bool Hovered);
	void GetIsLocked(bool IsLocked);
	void GetSlotType(enum class EPerkUsageType SlotType);
	void GetPerkAsset(UPerkAsset* PerkAsset);
	void SetPerkAsset(UPerkAsset* PerkAsset);
	void SetLocked(bool IsLocked);
	void SetLockedIcon(UTexture2D* InTexture);
	void UpdateIconAndBackground();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UITM_LoadOut_PerksEquip_Slot_C* SlotWidget);
};

