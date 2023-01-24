#ifndef UE4SS_SDK_Cheat_PerkListTier_HPP
#define UE4SS_SDK_Cheat_PerkListTier_HPP

class UCheat_PerkListTier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TierText;
    class UVerticalBox* VerticalBox_113;
    FUpgradeTier myUpgradeTier;
    EItemCategory myCategory;
    FCheat_PerkListTier_COnItemActivationStateChange OnItemActivationStateChange;
    void OnItemActivationStateChange(bool Is Checked, class UItemUpgrade* Upgrade item, EItemCategory Category);
    TArray<class UCheat_PerkListItem_C*> my PerkList items;
    int32 my Tier index;

    void Initiate widget(EItemCategory input category, FUpgradeTier Upgrade struct, int32 Tier Index, TSubclassOf<class AActor> itemClass);
    void On state change(bool Is Checked, class UItemUpgrade* Item, EItemCategory Item Category);
    void Initiate Bosco-tier(FUpgradeTier Upgrade struct, int32 Tier Index, TSubclassOf<class AActor> Item Class);
    void On bosco state change(bool Is Checked, class UItemUpgrade* Item, EItemCategory Item Category);
    void ExecuteUbergraph_Cheat_PerkListTier(int32 EntryPoint);
    void OnItemActivationStateChange__DelegateSignature(bool Is Checked, class UItemUpgrade* Upgrade item, EItemCategory Category);
};

#endif
