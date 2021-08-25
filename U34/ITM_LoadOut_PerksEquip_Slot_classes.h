// WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C
// Size: 0x2b8 (Inherited: 0x230)
struct UITM_LoadOut_PerksEquip_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x238(0x08)
	struct UUI_ImageTinted_C* LockedIcon; // 0x240(0x08)
	struct UBorder* SelectionBorder; // 0x248(0x08)
	struct UButton* SlotButton; // 0x250(0x08)
	struct UUI_PerkBackground_C* UI_PerkBackground; // 0x258(0x08)
	struct UUI_PerkIcon_C* UI_PerkIcon; // 0x260(0x08)
	enum class EPerkUsageType SlotType; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct UPerkAsset* PerkAsset; // 0x270(0x08)
	bool IsLocked; // 0x278(0x01)
	bool Hovered; // 0x279(0x01)
	bool IsSelected; // 0x27a(0x01)
	char UnknownData_27B[0x5]; // 0x27b(0x05)
	struct UTexture2D* OverrideLockIcon; // 0x280(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	struct FText LockedToolTip; // 0x298(0x18)
	struct UUI_Perk_ToolTip_C* PerkToolTip; // 0x2b0(0x08)

	struct UWidget* GetPerkToolTip(); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip
	void GetIsSelected(bool IsSelected); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected
	void UpdateSelectionBorder(); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder
	void SetSelected(bool inSelected); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected
	void SetHovered(bool Hovered); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered
	void GetIsLocked(bool IsLocked); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked
	void GetSlotType(enum class EPerkUsageType SlotType); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType
	void GetPerkAsset(struct UPerkAsset* PerkAsset); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset
	void SetPerkAsset(struct UPerkAsset* PerkAsset); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset
	void SetLocked(bool IsLocked); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked
	void SetLockedIcon(struct UTexture2D* InTexture); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon
	void UpdateIconAndBackground(); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground
	void PreConstruct(bool IsDesignTime); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot(int32_t EntryPoint); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot
	void OnClicked__DelegateSignature(struct UITM_LoadOut_PerksEquip_Slot_C* SlotWidget); // Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature
};

