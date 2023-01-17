#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_HPP

class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UImage* BorderOuter;
    class UImage* BorderOuterBG;
    class UButton* ClickButton;
    class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C* GrenadeLock;
    class UImage* Icon;
    class UImage* ICON_BG;
    class UPlayerCharacterID* PlayerId;
    class UItemID* itemClass;
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemEquipped ItemEquipped;
    void ItemEquipped(class UItemID* itemClass);
    EItemUpgradeStatus PreviewItemStatus;
    bool Hovered;
    class UTOOLTIP_UpgradeIcon_C* IconToolTip;
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemHovered ItemHovered;
    void ItemHovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemUnhovered ItemUnhovered;
    void ItemUnhovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemTryPurchase ItemTryPurchase;
    void ItemTryPurchase(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
    class UUpgradableGearComponent* UpgradableGear;
    class UItemData* ItemData;

    class UWidget* GetUpgradeToolTip();
    void SetIsHovered(bool InHovered);
    void EquipItem();
    void TryPurchaseItem(bool& success);
    void GetGrenadeInfo(FText& Name, FText& Description);
    void GetCraftingCost(TArray<FCraftingCost>& Cost);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateToolTip();
    bool IsInteractable();
    void GetCurrentState(EItemUpgradeStatus& Item State);
    void SetState(EItemUpgradeStatus InItemStatus, int32 InRequiredCharacterLevel);
    void Refresh(EItemUpgradeStatus& OutState);
    void SetItem(class UItemID* GrenadeClass, class UPlayerCharacterID* characterID, EItemUpgradeStatus& OutState);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon(int32 EntryPoint);
    void ItemTryPurchase__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
    void ItemUnhovered__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void ItemHovered__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
    void ItemEquipped__DelegateSignature(class UItemID* itemClass);
};

#endif
