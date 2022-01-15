#ifndef UE4SS_SDK_ITEM_Base_HPP
#define UE4SS_SDK_ITEM_Base_HPP

class UITEM_Base_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<AActor> itemClass;
    FITEM_Base_COnClicked OnClicked;
    void OnClicked(TSubclassOf<AActor> Item);
    int32 ItemEquipIndex;
    EItemCategory ItemCategory;
    TSubclassOf<APlayerCharacter> PlayerCharacter;

    void GetNumberOfItems(TSubclassOf<UPlayerCharacter> playerClass, int32& ItemCount, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, int32 CallFunc_GetNumberOfItems_ReturnValue);
    void GetItemCountString(TSubclassOf<UPlayerCharacter> playerClass, FText& Result, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, int32 CallFunc_GetNumberOfItems_ItemCount, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, UItemID* CallFunc_GetItemID_ReturnValue, int32 CallFunc_GetItemIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Clear();
    void Construct();
    void OnClear();
    void UpdateEquipment(TSubclassOf<UPlayerCharacter> PlayerCharacter);
    void OnItemUpdated();
    void ExecuteUbergraph_ITEM_Base(int32 EntryPoint, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_PlayerCharacter, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue);
    void OnClicked__DelegateSignature(TSubclassOf<AActor> Item);
}

#endif
