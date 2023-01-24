#ifndef UE4SS_SDK_Cheat_List_Bosco_HPP
#define UE4SS_SDK_Cheat_List_Bosco_HPP

class UCheat_List_Bosco_C : public UCheat_EquipList_C
{

    void GetEquippedSkins(class UItemID* ItemID, TArray<class UItemSkin*>& OutSkins);
    class AFSDPlayerState* GetState();
    void GetItemID(class UItemID*& ItemID);
    void Refresh();
    void ReceiveEntryOwnedClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void ReceiveEntryEquipClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
};

#endif
