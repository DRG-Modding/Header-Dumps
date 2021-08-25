// WidgetBlueprintGeneratedClass ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C
// Size: 0x2f8 (Inherited: 0x230)
struct UITM_UpgGear_GearTab_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* Button_1; // 0x238(0x08)
	struct UTextBlock* DATA_GearName; // 0x240(0x08)
	struct UBorder* GearIconBG; // 0x248(0x08)
	struct UImage* ICON_GearFiller; // 0x250(0x08)
	struct UImage* ICON_GearOutline; // 0x258(0x08)
	struct UImage* ICON_Locked; // 0x260(0x08)
	struct UWidgetSwitcher* IconSwitch; // 0x268(0x08)
	struct UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x270(0x08)
	struct UBorder* NameBG; // 0x278(0x08)
	struct UOverlay* Overlay_1; // 0x280(0x08)
	struct USizeBox* SizeBox_1; // 0x288(0x08)
	struct UOverlay* UnlockedOverlay; // 0x290(0x08)
	bool ItemHovered; // 0x298(0x01)
	char UnknownData_299[0x7]; // 0x299(0x07)
	struct UUpgradableGearComponent* UpgradableGear; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2c8(0x10)
	struct AActor* itemClass; // 0x2d8(0x08)
	struct UMENU_UpgradeScreen_C* Menu; // 0x2e0(0x08)
	bool ItemSelected; // 0x2e8(0x01)
	bool HasNewItem; // 0x2e9(0x01)
	char UnknownData_2EA[0x6]; // 0x2ea(0x06)
	struct APlayerCharacter* CharacterClass; // 0x2f0(0x08)

	void UpdateNotification(bool IsItemUnlocked); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.UpdateNotification
	void GetItemClass(struct AActor* itemClass); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass
	bool IsItemClass(struct AActor* InItemClass); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass
	void Refresh(); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh
	void SetHovered(bool InItemHovered); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered
	void Construct(); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature(); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void SetSelected(bool ItemSelected); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected
	void PreConstruct(bool IsDesignTime); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct
	void OnItemChanged_Event(struct AActor* NewItemClass); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event
	void OnItemUINotificationChange(); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemUINotificationChange
	void Destruct(); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Destruct
	void ExecuteUbergraph_ITM_UpgGear_GearTab(int32_t EntryPoint); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab
	void OnUnhovered__DelegateSignature(struct UITM_UpgGear_GearTab_C* Tab); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UITM_UpgGear_GearTab_C* Tab); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UITM_UpgGear_GearTab_C* Tab); // Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature
};

