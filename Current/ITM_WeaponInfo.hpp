#ifndef UE4SS_SDK_ITM_WeaponInfo_HPP
#define UE4SS_SDK_ITM_WeaponInfo_HPP

class UITM_WeaponInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_165;
    class UImage* GearIcon_BG;
    class UImage* GearIcon_Outline;
    class UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UTextBlock* TextBlock_ItemName;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UBorder* Upgrades_BG;
    class UUpgradableGearComponent* Upgradable;
    EItemCategory WeaponSlot;
    FText IconName;
    class AFSDPlayerState* State;
    TSubclassOf<class APlayerCharacter> Character;
    TSubclassOf<class AActor> Item;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update();
    void ExecuteUbergraph_ITM_WeaponInfo(int32 EntryPoint);
};

#endif
