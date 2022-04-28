#ifndef UE4SS_SDK_ITM_UpgGear_TierRow_HPP
#define UE4SS_SDK_ITM_UpgGear_TierRow_HPP

class UITM_UpgGear_TierRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BackBar;
    class UTextBlock* DATA_Level;
    class UBorder* IconColorer;
    class UHorizontalBox* IconsHolder;
    class UImage* LevelIcon;
    class UBorder* LevelLock_BG;
    class UOverlay* LevelLock_Holder;
    class UITM_UpgGear_UpgIconSingle_C* TierIcon;
    FUpgradeTier Tier;
    int32 Index;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    bool IsRowLocked;
    TArray<class UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets;
    class UITM_UpgGear_SideBar_C* UpgradesMenu;
    class UITM_UpgGear_UpgIconSingle_C* PurchaseUpgradeWidget;
    class UDialogDataAsset* ShoutUpgradePurchased;

    void UpdateBackBar();
    void SetPurchasedShout(class UDialogDataAsset* InShout);
    bool GetIsRowLocked();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Initialize Upgrade Widget(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void Refresh();
    void EquipUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget);
    void PurchaseUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget);
    void OnPurchaseConfirmation(bool Yes);
    void Refresh Tier Icon();
    void Unequip Upgrade(class UITM_UpgGear_UpgIconSingle_C* Upgrade);
    void OnUpgradeHovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeUnhovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgrade Clicked(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void ExecuteUbergraph_ITM_UpgGear_TierRow(int32 EntryPoint);
};

#endif
