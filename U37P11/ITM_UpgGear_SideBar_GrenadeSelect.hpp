#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_HPP

class UITM_UpgGear_SideBar_GrenadeSelect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ItemBox;
    class UWidgetSwitcher* UpgradeBuySwitcher;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    class UUpgradableGearComponent* Upgradable;
    class UBasic_Popup_YesNoPrompt_C* YesNoPrompt;
    EItemCategory Category;
    TArray<class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*> Grenades;
    FITM_UpgGear_SideBar_GrenadeSelect_COnItemSelected OnItemSelected;
    void OnItemSelected(TSubclassOf<class AActor> itemClass, bool Equip, bool IsUnlocked);
    class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* PurchaseWidget;
    class UPlayerCharacterID* PlayerId;
    TSubclassOf<class AActor> ActiveClass;
    FITM_UpgGear_SideBar_GrenadeSelect_COnGrenadePurchased OnGrenadePurchased;
    void OnGrenadePurchased();

    void SetActiveGrenade(TSubclassOf<class AActor> NewClass, bool InEquip, bool IsUnlocked, TSubclassOf<class AActor>& itemClass);
    void SetItem(class UPlayerCharacterID* characterID);
    void OnWidgetCreated(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* YesNoPrompt);
    void RefreshItems();
    void Reset Grenade Preview();
    void ItemEquipped_Event(class UItemID* itemClass);
    void OnYesNo(bool Yes);
    void OnItemTryPurchase(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
    void OnItemUnhovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void OnItemHovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
    void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int32 EntryPoint);
    void OnGrenadePurchased__DelegateSignature();
    void OnItemSelected__DelegateSignature(TSubclassOf<class AActor> itemClass, bool Equip, bool IsUnlocked);
};

#endif
