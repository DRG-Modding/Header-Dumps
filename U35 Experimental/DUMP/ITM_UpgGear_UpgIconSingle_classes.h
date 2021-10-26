// WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C
// Size: 0x2ba (Inherited: 0x230)
struct UITM_UpgGear_UpgIconSingle_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* OnPurchased; // 0x238(0x08)
	UITM_BaseUpgradeIcon_C* UpgradeIcon; // 0x240(0x08)
	UItemUpgrade* Upgrade; // 0x248(0x08)
	enum class EItemUpgradeStatus Status; // 0x250(0x01)
	AActor* itemClass; // 0x258(0x08)
	AFSDPlayerState* PlayerState; // 0x260(0x08)
	bool IsItemHovered; // 0x268(0x01)
	FMulticastInlineDelegate OnUpgradeHovered; // 0x270(0x10)
	FMulticastInlineDelegate OnUpgradeUnhovered; // 0x280(0x10)
	FMulticastInlineDelegate OnUpgradeClicked; // 0x290(0x10)
	bool OverrideStatus; // 0x2a0(0x01)
	bool ShowEquippedAsBorder; // 0x2a1(0x01)
	UPlayerCharacterID* CharacerID; // 0x2a8(0x08)
	UTOOLTIP_UpgradeIcon_C* IconToolTip; // 0x2b0(0x08)
	bool ShowStatusOnTooltip; // 0x2b8(0x01)
	bool TierLocked; // 0x2b9(0x01)

	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	UWidget* Get_UpgradeIcon_ToolTip();
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void ToggleStatPreview(bool Preview);
	void GetTierLock(AFSDPlayerState* InPlayerState, FUpgradeTier InTierUpgrades, int32_t LockLevel, UTexture2D* LockIcon, enum class ENUM_MenuColors LockBackgroundTint);
	void TryUnequipUpgrade(bool success);
	void GetUpgradeCategory(UItemUpgradeCategory* Category);
	UTexture2D* GetUpgradeIcon();
	void GetGoogleAnalytics(UItemUpgrade* Upgrade);
	bool IsInteractable();
	void GetTierStatus(FUpgradeTier InTier, int32_t InTierIndex, UPlayerCharacterID* InCharacterID, AActor* InItem, AFSDPlayerState* InPlayer, enum class EItemUpgradeStatus DefaultStatus);
	void IsTierIsAffordable(FUpgradeTier TierUpgrades, AActor* InItemClass, AFSDPlayerState* InPlayer, APlayerCharacter* InCharacter, bool Is Affordable);
	void ShowTier(AActor* InItemClass, UPlayerCharacterID* InCharacterID, int32_t InTierIndex, FUpgradeTier InTier, AFSDPlayerState* InPlayerState, bool InShowLockRequirement, bool ShowToolTip);
	void GetPlayerState(AFSDPlayerState* PlayerState);
	void GetItemClass(AActor* itemClass);
	void GetItemUpgrade(UItemUpgrade* Upgrade);
	void TryEquipUpgrade(bool Equipped);
	void TryPurchaseUpgrade(bool Purchased);
	void GetUpgradeStatus(enum class EItemUpgradeStatus Status);
	void Show(UItemUpgrade* InUpgrade, AActor* InItemClass, UPlayerCharacterID* PlayerCharacterID, AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder, bool InTierLocked);
	void Refresh();
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
	void Refresh Tool Tip();
	void PlayPurchasedAnim();
	void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int32_t EntryPoint);
	void OnUpgradeClicked__DelegateSignature(UITM_UpgGear_UpgIconSingle_C* Widget);
	void OnUpgradeUnhovered__DelegateSignature(UITM_UpgGear_UpgIconSingle_C* Widget);
	void OnUpgradeHovered__DelegateSignature(UITM_UpgGear_UpgIconSingle_C* Widget);
};

