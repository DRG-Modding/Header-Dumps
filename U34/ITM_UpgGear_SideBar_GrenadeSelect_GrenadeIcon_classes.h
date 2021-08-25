// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C
// Size: 0x2d8 (Inherited: 0x230)
struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimHover; // 0x238(0x08)
	struct UImage* BorderOuter; // 0x240(0x08)
	struct UImage* BorderOuterBG; // 0x248(0x08)
	struct UButton* ClickButton; // 0x250(0x08)
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C* GrenadeLock; // 0x258(0x08)
	struct UImage* Icon; // 0x260(0x08)
	struct UImage* Icon_BG; // 0x268(0x08)
	struct UPlayerCharacterID* PlayerId; // 0x270(0x08)
	struct AGrenade* itemClass; // 0x278(0x08)
	struct FMulticastInlineDelegate ItemEquipped; // 0x280(0x10)
	enum class EItemUpgradeStatus PreviewItemStatus; // 0x290(0x01)
	bool Hovered; // 0x291(0x01)
	char UnknownData_292[0x6]; // 0x292(0x06)
	struct UTOOLTIP_UpgradeIcon_C* IconToolTip; // 0x298(0x08)
	struct FMulticastInlineDelegate ItemHovered; // 0x2a0(0x10)
	struct FMulticastInlineDelegate ItemUnhovered; // 0x2b0(0x10)
	struct FMulticastInlineDelegate ItemTryPurchase; // 0x2c0(0x10)
	struct UUpgradableGearComponent* UpgradableGear; // 0x2d0(0x08)

	struct UWidget* GetUpgradeToolTip(); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetUpgradeToolTip
	void SetIsHovered(bool InHovered); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetIsHovered
	void EquipItem(); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.EquipItem
	void TryPurchaseItem(bool success); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.TryPurchaseItem
	void GetGrenadeInfo(struct FText Name, struct FText Description); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetGrenadeInfo
	void GetCraftingCost(struct TArray<struct FCraftingCost> Cost); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCraftingCost
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.OnKeyDown
	void UpdateToolTip(); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.UpdateToolTip
	bool IsInteractable(); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.IsInteractable
	void GetCurrentState(enum class EItemUpgradeStatus Item State); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCurrentState
	void SetState(enum class EItemUpgradeStatus InItemStatus, int32_t InRequiredCharacterLevel); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetState
	void Refresh(enum class EItemUpgradeStatus OutState); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.Refresh
	void SetItem(struct AGrenade* GrenadeClass, struct UPlayerCharacterID* characterID, enum class EItemUpgradeStatus OutState); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetItem
	void PreConstruct(bool IsDesignTime); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon(int32_t EntryPoint); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon
	void ItemTryPurchase__DelegateSignature(struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemTryPurchase__DelegateSignature
	void ItemUnhovered__DelegateSignature(struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemUnhovered__DelegateSignature
	void ItemHovered__DelegateSignature(struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemHovered__DelegateSignature
	void ItemEquipped__DelegateSignature(struct AActor* itemClass); // Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemEquipped__DelegateSignature
};

