#ifndef UE4SS_SDK_Cheat_List_Skins_HPP
#define UE4SS_SDK_Cheat_List_Skins_HPP

class UCheat_List_Skins_C : public UCheat_EquipList_C
{
    TArray<EItemCategory> WeaponCategories;
    EItemSkinType Skin Type;

    void GetSchematicState(class UItemSkin* ItemSkin, class UPlayerCharacterID* characterID, bool& HasSchematic, bool& IsOwned);
    void ReceiveEntrySchematicClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    void Refresh();
    void GetCharacter(class APlayerCharacter*& OutCharacter);
    void ReceiveEntryOwnedClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void ReceiveEntryEquipClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    void GetCharacterID(class UPlayerCharacterID*& characterID);
};

#endif
