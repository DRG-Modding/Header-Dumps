// WidgetBlueprintGeneratedClass ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C
// Size: 0x2f8 (Inherited: 0x230)
struct UITM_UpgGear_GearTab_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* Button_1; // 0x238(0x08)
	UTextBlock* DATA_GearName; // 0x240(0x08)
	UBorder* GearIconBG; // 0x248(0x08)
	UImage* ICON_GearFiller; // 0x250(0x08)
	UImage* ICON_GearOutline; // 0x258(0x08)
	UImage* ICON_Locked; // 0x260(0x08)
	UWidgetSwitcher* IconSwitch; // 0x268(0x08)
	UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x270(0x08)
	UBorder* NameBG; // 0x278(0x08)
	UOverlay* Overlay_1; // 0x280(0x08)
	USizeBox* SizeBox_1; // 0x288(0x08)
	UOverlay* UnlockedOverlay; // 0x290(0x08)
	bool ItemHovered; // 0x298(0x01)
	UUpgradableGearComponent* UpgradableGear; // 0x2a0(0x08)
	FMulticastInlineDelegate OnClicked; // 0x2a8(0x10)
	FMulticastInlineDelegate OnHovered; // 0x2b8(0x10)
	FMulticastInlineDelegate OnUnhovered; // 0x2c8(0x10)
	AActor* itemClass; // 0x2d8(0x08)
	UMENU_UpgradeScreen_C* Menu; // 0x2e0(0x08)
	bool ItemSelected; // 0x2e8(0x01)
	bool HasNewItem; // 0x2e9(0x01)
	APlayerCharacter* CharacterClass; // 0x2f0(0x08)

	void UpdateNotification(bool IsItemUnlocked);
	void GetItemClass(AActor* itemClass);
	bool IsItemClass(AActor* InItemClass);
	void Refresh();
	void SetHovered(bool InItemHovered);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void SetSelected(bool ItemSelected);
	void PreConstruct(bool IsDesignTime);
	void OnItemChanged_Event(AActor* NewItemClass);
	void OnItemUINotificationChange();
	void Destruct();
	void ExecuteUbergraph_ITM_UpgGear_GearTab(int32_t EntryPoint);
	void OnUnhovered__DelegateSignature(UITM_UpgGear_GearTab_C* Tab);
	void OnHovered__DelegateSignature(UITM_UpgGear_GearTab_C* Tab);
	void OnClicked__DelegateSignature(UITM_UpgGear_GearTab_C* Tab);
};

