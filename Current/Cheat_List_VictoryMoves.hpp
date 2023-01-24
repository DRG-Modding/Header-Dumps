#ifndef UE4SS_SDK_Cheat_List_VictoryMoves_HPP
#define UE4SS_SDK_Cheat_List_VictoryMoves_HPP

class UCheat_List_VictoryMoves_C : public UCheat_EquipList_C
{

    void ReceiveEntrySchematicClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void Refresh();
    void GetCharacter(class APlayerCharacter*& OutCharacter);
    void ReceiveEntryOwnedClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void ReceiveEntryEquipClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    void GetCharacterID(class UPlayerCharacterID*& characterID);
};

#endif
