#ifndef UE4SS_SDK_ITM_Loadout_PerksEquip_Selection_HPP
#define UE4SS_SDK_ITM_Loadout_PerksEquip_Selection_HPP

class UITM_Loadout_PerksEquip_Selection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UUniformGridPanel* ItemsGridBox;
    class UTextBlock* SelectionTitle;
    FITM_Loadout_PerksEquip_Selection_COnPerkClicked OnPerkClicked;
    void OnPerkClicked(class UPerkAsset* PerkAsset);
    class UPlayerCharacterID* CharacterClass;

    void PreConstruct(bool IsDesignTime);
    void Refresh(class UPlayerCharacterID* characterID, EPerkUsageType PerkType);
    void Add Perk(class UPerkAsset* Perk);
    void OnClicked_Event(class UITM_LoadOut_PerksEquip_Item_C* Item);
    void Add None();
    void OnNoneClicked_Event();
    void AddWidgetToBox(class UUserWidget* InWidget);
    void ClearWidgetBox();
    void ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection(int32 EntryPoint);
    void OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset);
};

#endif
