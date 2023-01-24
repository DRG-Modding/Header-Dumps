#ifndef UE4SS_SDK_UI_Perks_Column_Items_HPP
#define UE4SS_SDK_UI_Perks_Column_Items_HPP

class UUI_Perks_Column_Items_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUniformGridPanel* PerksGrid;
    class UBorder* TierBorder;
    class UUI_Perks_Column_Unlocks_C* UI_Perks_Column_Unlocks;
    int32 Tier;
    TArray<class UUI_Perks_Item_C*> PerkWidgets;
    int32 PerkRows;
    FUI_Perks_Column_Items_COnPerkClicked OnPerkClicked;
    void OnPerkClicked(class UUI_Perks_Item_C* PerkWidget);
    bool TierUnLocked;

    bool IsInteractable();
    void RefreshTier();
    void AddPerk(class UPerkAsset* Perk, class UPerkAsset*& OutPerk, class UUI_Perks_Item_C*& OutWidget);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPerkClicked_Event(class UUI_Perks_Item_C* Widget);
    void OnPerkClaimed_Event(class UPerkAsset* Perk, int32 ClaimedTier);
    void SetPerks(TArray<class UPerkAsset*>& Array);
    void ExecuteUbergraph_UI_Perks_Column_Items(int32 EntryPoint);
    void OnPerkClicked__DelegateSignature(class UUI_Perks_Item_C* PerkWidget);
};

#endif
