#ifndef UE4SS_SDK_Cheat_List_Overclocks_HPP
#define UE4SS_SDK_Cheat_List_Overclocks_HPP

class UCheat_List_Overclocks_C : public UCheat_EquipList_C
{
    TArray<EItemCategory> WeaponCategories;

    void GetOwningItem(class USchematic* Schematic, class UItemID*& Owning Item);
    void GetOverClock(class USchematic* Schematic, class UItemUpgrade*& Overclock);
    void ReceiveEntrySchematicClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    void Refresh();
    void GetCharacter(class APlayerCharacter*& OutCharacter);
    void ReceiveEntryOwnedClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void ReceiveEntryEquipClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    void GetCharacterID(class UPlayerCharacterID*& characterID);
};

#endif
