// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C
// Size: 0x2d8 (Inherited: 0x230)
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimHover; // 0x238(0x08)
	UImage* BorderOuter; // 0x240(0x08)
	UImage* BorderOuterBG; // 0x248(0x08)
	UButton* ClickButton; // 0x250(0x08)
	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C* GrenadeLock; // 0x258(0x08)
	UImage* Icon; // 0x260(0x08)
	UImage* Icon_BG; // 0x268(0x08)
	UPlayerCharacterID* PlayerId; // 0x270(0x08)
	AGrenade* itemClass; // 0x278(0x08)
	FMulticastInlineDelegate ItemEquipped; // 0x280(0x10)
	enum class EItemUpgradeStatus PreviewItemStatus; // 0x290(0x01)
	bool Hovered; // 0x291(0x01)
	UTOOLTIP_UpgradeIcon_C* IconToolTip; // 0x298(0x08)
	FMulticastInlineDelegate ItemHovered; // 0x2a0(0x10)
	FMulticastInlineDelegate ItemUnhovered; // 0x2b0(0x10)
	FMulticastInlineDelegate ItemTryPurchase; // 0x2c0(0x10)
	UUpgradableGearComponent* UpgradableGear; // 0x2d0(0x08)

	UWidget* GetUpgradeToolTip();
	void SetIsHovered(bool InHovered);
	void EquipItem();
	void TryPurchaseItem(bool success);
	void GetGrenadeInfo(FText Name, FText Description);
	void GetCraftingCost(TArray<FCraftingCost> Cost);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void UpdateToolTip();
	bool IsInteractable();
	void GetCurrentState(enum class EItemUpgradeStatus Item State);
	void SetState(enum class EItemUpgradeStatus InItemStatus, int32_t InRequiredCharacterLevel);
	void Refresh(enum class EItemUpgradeStatus OutState);
	void SetItem(AGrenade* GrenadeClass, UPlayerCharacterID* characterID, enum class EItemUpgradeStatus OutState);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon(int32_t EntryPoint);
	void ItemTryPurchase__DelegateSignature(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
	void ItemUnhovered__DelegateSignature(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
	void ItemHovered__DelegateSignature(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
	void ItemEquipped__DelegateSignature(AActor* itemClass);
};

