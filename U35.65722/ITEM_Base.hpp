#ifndef UE4SS_SDK_ITEM_Base_HPP
#define UE4SS_SDK_ITEM_Base_HPP

class UITEM_Base_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class AActor> itemClass;
    FITEM_Base_COnClicked OnClicked;
    void OnClicked(TSubclassOf<class AActor> Item);
    int32 ItemEquipIndex;
    EItemCategory ItemCategory;
    TSubclassOf<class APlayerCharacter> PlayerCharacter;

    void GetNumberOfItems(TSubclassOf<class APlayerCharacter> playerClass, int32& ItemCount, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, int32 CallFunc_GetNumberOfItems_ReturnValue);
    void GetItemCountString(TSubclassOf<class APlayerCharacter> playerClass, FText& Result, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, int32 CallFunc_GetNumberOfItems_ItemCount, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, class UItemID* CallFunc_GetItemID_ReturnValue, int32 CallFunc_GetItemIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Clear();
    void Construct();
    void OnClear();
    void UpdateEquipment(TSubclassOf<class APlayerCharacter> PlayerCharacter);
    void OnItemUpdated();
    void ExecuteUbergraph_ITEM_Base(int32 EntryPoint, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_PlayerCharacter, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue);
    void OnClicked__DelegateSignature(TSubclassOf<class AActor> Item);
};

#endif
