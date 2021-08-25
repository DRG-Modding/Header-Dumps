// WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C
// Size: 0x2ba (Inherited: 0x230)
struct UITM_UpgGear_UpgIconSingle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* OnPurchased; // 0x238(0x08)
	struct UITM_BaseUpgradeIcon_C* UpgradeIcon; // 0x240(0x08)
	struct UItemUpgrade* Upgrade; // 0x248(0x08)
	enum class EItemUpgradeStatus Status; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct AActor* itemClass; // 0x258(0x08)
	struct AFSDPlayerState* PlayerState; // 0x260(0x08)
	bool IsItemHovered; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct FMulticastInlineDelegate OnUpgradeHovered; // 0x270(0x10)
	struct FMulticastInlineDelegate OnUpgradeUnhovered; // 0x280(0x10)
	struct FMulticastInlineDelegate OnUpgradeClicked; // 0x290(0x10)
	bool OverrideStatus; // 0x2a0(0x01)
	bool ShowEquippedAsBorder; // 0x2a1(0x01)
	char UnknownData_2A2[0x6]; // 0x2a2(0x06)
	struct UPlayerCharacterID* CharacerID; // 0x2a8(0x08)
	struct UTOOLTIP_UpgradeIcon_C* IconToolTip; // 0x2b0(0x08)
	bool ShowStatusOnTooltip; // 0x2b8(0x01)
	bool TierLocked; // 0x2b9(0x01)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnMouseButtonDown
	struct UWidget* Get_UpgradeIcon_ToolTip(); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown
	void ToggleStatPreview(bool Preview); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview
	void GetTierLock(struct AFSDPlayerState* InPlayerState, struct FUpgradeTier InTierUpgrades, int32_t LockLevel, struct UTexture2D* LockIcon, char LockBackgroundTint); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock
	void TryUnequipUpgrade(bool success); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade
	void GetUpgradeCategory(struct UItemUpgradeCategory* Category); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory
	struct UTexture2D* GetUpgradeIcon(); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon
	void GetGoogleAnalytics(struct UItemUpgrade* Upgrade); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics
	bool IsInteractable(); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable
	void GetTierStatus(struct FUpgradeTier InTier, int32_t InTierIndex, struct UPlayerCharacterID* InCharacterID, struct AActor* InItem, struct AFSDPlayerState* InPlayer, enum class EItemUpgradeStatus DefaultStatus); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus
	void IsTierIsAffordable(struct FUpgradeTier TierUpgrades, struct AActor* InItemClass, struct AFSDPlayerState* InPlayer, struct APlayerCharacter* InCharacter, bool Is Affordable); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable
	void ShowTier(struct AActor* InItemClass, struct UPlayerCharacterID* InCharacterID, int32_t InTierIndex, struct FUpgradeTier InTier, struct AFSDPlayerState* InPlayerState, bool InShowLockRequirement, bool ShowToolTip); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier
	void GetPlayerState(struct AFSDPlayerState* PlayerState); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState
	void GetItemClass(struct AActor* itemClass); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass
	void GetItemUpgrade(struct UItemUpgrade* Upgrade); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade
	void TryEquipUpgrade(bool Equipped); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade
	void TryPurchaseUpgrade(bool Purchased); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade
	void GetUpgradeStatus(enum class EItemUpgradeStatus Status); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus
	void Show(struct UItemUpgrade* InUpgrade, struct AActor* InItemClass, struct UPlayerCharacterID* PlayerCharacterID, struct AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder, bool InTierLocked); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show
	void Refresh(); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(struct UITM_BaseUpgradeIcon_C* Widget); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(struct UITM_BaseUpgradeIcon_C* Widget); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(struct UITM_BaseUpgradeIcon_C* Widget); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature
	void Refresh Tool Tip(); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip
	void PlayPurchasedAnim(); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.PlayPurchasedAnim
	void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int32_t EntryPoint); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle
	void OnUpgradeClicked__DelegateSignature(struct UITM_UpgGear_UpgIconSingle_C* Widget); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature
	void OnUpgradeUnhovered__DelegateSignature(struct UITM_UpgGear_UpgIconSingle_C* Widget); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature
	void OnUpgradeHovered__DelegateSignature(struct UITM_UpgGear_UpgIconSingle_C* Widget); // Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature
};

