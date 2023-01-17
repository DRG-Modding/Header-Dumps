#ifndef UE4SS_SDK_ITM_UpgGear_GearTab_HPP
#define UE4SS_SDK_ITM_UpgGear_GearTab_HPP

class UITM_UpgGear_GearTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* ClickButton;
    class UOverlay* ContentOverlay;
    class UBorder* GearIconBG;
    class UImage* ICON_GearFiller;
    class UImage* ICON_GearOutline;
    class UWidgetSwitcher* IconSwitch;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UImage* Locked;
    class UOverlay* Unlocked;
    bool ItemHovered;
    class UUpgradableGearComponent* UpgradableGear;
    FITM_UpgGear_GearTab_COnClicked OnClicked;
    void OnClicked(class UITM_UpgGear_GearTab_C* Tab);
    FITM_UpgGear_GearTab_COnHovered OnHovered;
    void OnHovered(class UITM_UpgGear_GearTab_C* Tab);
    FITM_UpgGear_GearTab_COnUnhovered OnUnhovered;
    void OnUnhovered(class UITM_UpgGear_GearTab_C* Tab);
    TSubclassOf<class AActor> itemClass;
    class UMENU_UpgradeScreen_C* Menu;
    bool ItemSelected;
    bool HasNewItem;
    TSubclassOf<class APlayerCharacter> CharacterClass;

    class UWidget* CreateToolTip();
    void UpdateNotification(bool IsItemUnlocked);
    void GetItemClass(TSubclassOf<class AActor>& itemClass);
    bool IsItemClass(TSubclassOf<class AActor> InItemClass);
    void Refresh();
    void SetHovered(bool InItemHovered);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void SetSelected(bool ItemSelected);
    void PreConstruct(bool IsDesignTime);
    void OnItemChanged_Event(TSubclassOf<class AActor> NewItemClass);
    void OnItemUINotificationChange();
    void Destruct();
    void ExecuteUbergraph_ITM_UpgGear_GearTab(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab);
    void OnHovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab);
    void OnClicked__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab);
};

#endif
