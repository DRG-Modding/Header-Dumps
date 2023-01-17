#ifndef UE4SS_SDK_ITM_PerkInfoBox_HPP
#define UE4SS_SDK_ITM_PerkInfoBox_HPP

class UITM_PerkInfoBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_165;
    class UHorizontalBox* HorizontalBox_ActrivePerks;
    class UHorizontalBox* HorizontalBox_PassivePerks;
    class UImage* Image_466;
    class UTextBlock* TextBlock_ItemName;
    class UUpgradableGearComponent* Upgradable;
    EItemCategory WeaponSlot;
    class UPlayerCharacterID* Character;
    int32 PerkIndex;
    TArray<class UITM_StatusScreen_PerkItem_C*> PerkItems;

    void GetEquippedPerkAt(int32 Idx, TArray<class UPerkAsset*>& perks, class UPerkAsset*& Perk);
    void CreateSlots(class UPanelWidget* InSlotsBox, EPerkUsageType InType);
    void GetEquippedPerksByType(class UPlayerCharacterID* InCharacter, EPerkUsageType InType, TArray<class UPerkAsset*>& perks);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Update();
    void ExecuteUbergraph_ITM_PerkInfoBox(int32 EntryPoint);
};

#endif
