#ifndef UE4SS_SDK_ITM_Loadout_UpgradeBar_HPP
#define UE4SS_SDK_ITM_Loadout_UpgradeBar_HPP

class UITM_Loadout_UpgradeBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_0;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_1;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_2;
    class UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_3;
    TArray<class UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets;

    void ShowItemUpgrades(class UPlayerCharacterID* InCharacterID, TSubclassOf<class AActor> InItemClass, class AFSDPlayerState* InPlayerState, bool EnableHoverTooltip);
    void GetUpgradeFromList(int32 Index, TArray<class UItemUpgrade*>& upgrades, class UItemUpgrade*& Output);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Loadout_UpgradeBar(int32 EntryPoint);
};

#endif
