#ifndef UE4SS_SDK_ITM_UpgGear_UpgIconSingle_HPP
#define UE4SS_SDK_ITM_UpgGear_UpgIconSingle_HPP

class UITM_UpgGear_UpgIconSingle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnPurchased;
    class UITM_BaseUpgradeIcon_C* UpgradeIcon;
    class UItemUpgrade* Upgrade;
    EItemUpgradeStatus Status;
    TSubclassOf<class AActor> itemClass;
    class AFSDPlayerState* PlayerState;
    bool IsItemHovered;
    FITM_UpgGear_UpgIconSingle_COnUpgradeHovered OnUpgradeHovered;
    void OnUpgradeHovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    FITM_UpgGear_UpgIconSingle_COnUpgradeUnhovered OnUpgradeUnhovered;
    void OnUpgradeUnhovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    FITM_UpgGear_UpgIconSingle_COnUpgradeClicked OnUpgradeClicked;
    void OnUpgradeClicked(class UITM_UpgGear_UpgIconSingle_C* Widget);
    bool OverrideStatus;
    bool ShowEquippedAsBorder;
    class UPlayerCharacterID* CharacerID;
    class UTOOLTIP_UpgradeIcon_C* IconToolTip;
    bool ShowStatusOnTooltip;
    bool TierLocked;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    class UWidget* Get_UpgradeIcon_ToolTip();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ToggleStatPreview(bool Preview);
    void GetTierLock(class AFSDPlayerState* InPlayerState, FUpgradeTier InTierUpgrades, int32& LockLevel, class UTexture2D*& LockIcon, TEnumAsByte<ENUM_MenuColors::Type>& LockBackgroundTint);
    void TryUnequipUpgrade(bool& success);
    void GetUpgradeCategory(class UItemUpgradeCategory*& Category);
    class UTexture2D* GetUpgradeIcon();
    void GetGoogleAnalytics(class UItemUpgrade* Upgrade);
    bool IsInteractable();
    void GetTierStatus(FUpgradeTier InTier, int32 InTierIndex, class UPlayerCharacterID* InCharacterID, TSubclassOf<class AActor> InItem, class AFSDPlayerState* InPlayer, EItemUpgradeStatus& DefaultStatus);
    void IsTierIsAffordable(FUpgradeTier& TierUpgrades, TSubclassOf<class AActor> InItemClass, class AFSDPlayerState* InPlayer, TSubclassOf<class APlayerCharacter> InCharacter, bool& Is Affordable);
    void ShowTier(TSubclassOf<class AActor> InItemClass, class UPlayerCharacterID* InCharacterID, int32 InTierIndex, FUpgradeTier InTier, class AFSDPlayerState* InPlayerState, bool InShowLockRequirement, bool ShowToolTip);
    void GetPlayerState(class AFSDPlayerState*& PlayerState);
    void GetItemClass(TSubclassOf<class AActor>& itemClass);
    void GetItemUpgrade(class UItemUpgrade*& Upgrade);
    void TryEquipUpgrade(bool& Equipped);
    void TryPurchaseUpgrade(bool& Purchased);
    void GetUpgradeStatus(EItemUpgradeStatus& Status);
    void Show(class UItemUpgrade* InUpgrade, TSubclassOf<class AActor> InItemClass, class UPlayerCharacterID* PlayerCharacterID, class AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder, bool InTierLocked);
    void Refresh();
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void Refresh Tool Tip();
    void PlayPurchasedAnim();
    void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int32 EntryPoint);
    void OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
};

#endif
