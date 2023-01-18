#ifndef UE4SS_SDK_ITEM_UpgradesSmall_Bar_HPP
#define UE4SS_SDK_ITEM_UpgradesSmall_Bar_HPP

class UITEM_UpgradesSmall_Bar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITEM_UpgradesSmall_SingleIcon_Connector_C* Connector1-2;
    class UITEM_UpgradesSmall_SingleIcon_Connector_C* Connector2-3;
    class UITEM_UpgradesSmall_SingleIcon_Connector_C* Connector3-4;
    class UITEM_UpgradesSmall_SingleIcon_Connector_C* Connector4-5;
    class UITEM_UpgradesSmall_SingleIcon_C* Upgrade1;
    class UITEM_UpgradesSmall_SingleIcon_C* Upgrade2;
    class UITEM_UpgradesSmall_SingleIcon_C* Upgrade3;
    class UITEM_UpgradesSmall_SingleIcon_C* Upgrade4;
    class UITEM_UpgradesSmall_SingleIcon_C* Upgrade5;
    TArray<class UITEM_UpgradesSmall_SingleIcon_C*> upgrades;
    TArray<class UITEM_UpgradesSmall_SingleIcon_Connector_C*> Connectors;
    FITEM_UpgradesSmall_Bar_COnUpgradeSelected OnUpgradeSelected;
    void OnUpgradeSelected(class UItemUpgrade* Upgrade);
    FITEM_UpgradesSmall_Bar_COnUpgradeHover OnUpgradeHover;
    void OnUpgradeHover(class UItemUpgrade* Upgrade);
    TSubclassOf<class AActor> Item;
    class UITEM_UpgradesSmall_SingleIcon_C* NewVar_0;

    void GetFSDPlayerState(class AFSDPlayerState*& AsFSDPlayer State);
    void ShowUpgradeBar(TSubclassOf<class AActor> Item);
    void OnUpgradeClicked(class UItemUpgrade* Upgrade);
    void Construct();
    void OnHoverStart(class UItemUpgrade* Upgrade);
    void OnHoverEnd(class UItemUpgrade* Upgrade);
    void OnItemUpgraded();
    void OnCreditsChanged();
    void ExecuteUbergraph_ITEM_UpgradesSmall_Bar(int32 EntryPoint);
    void OnUpgradeHover__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnUpgradeSelected__DelegateSignature(class UItemUpgrade* Upgrade);
};

#endif
