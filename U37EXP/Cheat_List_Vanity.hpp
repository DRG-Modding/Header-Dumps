#ifndef UE4SS_SDK_Cheat_List_Vanity_HPP
#define UE4SS_SDK_Cheat_List_Vanity_HPP

class UCheat_List_Vanity_C : public UCheat_EquipList_C
{
    TArray<EVanitySlot> Vanity Types;

    void Refresh();
    void GetCharacter(class APlayerCharacter*& OutCharacter);
    void ReceiveEntryOwnedClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void ReceiveEntryEquipClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    void GetCharacterID(class UPlayerCharacterID*& characterID);
};

#endif
