#ifndef UE4SS_SDK_ITM_Loadout_PerksEquip_HPP
#define UE4SS_SDK_ITM_Loadout_PerksEquip_HPP

class UITM_Loadout_PerksEquip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ActiveSlotsBox;
    class UITM_Loadout_PerksEquip_Selection_C* ITM_Loadout_PerksEquip_Selection;
    class UVerticalBox* PassiveSlotsBox;
    class UImage* PerkStar;
    class UPlayerCharacterID* CharacterClass;
    class UITM_LoadOut_PerksEquip_Slot_C* SelectedSlot;

    void GetEquippedPerksByType(class UPlayerCharacterID* InCharacterClass, EPerkUsageType InType, TArray<class UPerkAsset*>& OutPerks);
    void SelectSlot(class UITM_LoadOut_PerksEquip_Slot_C* InSlot);
    void CreateSlots(class UVerticalBox* InSlotsBox, class UPlayerCharacterID* InCharacter, EPerkUsageType InType);
    void UpdateSlots();
    class UWidget* Get_PerkStar_ToolTipWidget_0();
    void GetEquippedPerkAt(int32 Index, const TArray<class UPerkAsset*>& TargetArray, class UPerkAsset*& Perk);
    void UpdateEquippedPerks();
    void Set Character Class(class UPlayerCharacterID* characterID);
    void BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Loadout_PerksEquip(int32 EntryPoint);
};

#endif
