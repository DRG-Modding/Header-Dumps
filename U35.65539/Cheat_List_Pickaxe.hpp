#ifndef UE4SS_SDK_Cheat_List_Pickaxe_HPP
#define UE4SS_SDK_Cheat_List_Pickaxe_HPP

class UCheat_List_Pickaxe_C : UCheat_EquipList_C
{
    TArray<EPickaxePartLocation> PickaxeParts;

    void GetPickaxeID(UItemID*& ItemID, UPlayerCharacter* CallFunc_GetCharacter_OutCharacter, bool CallFunc_IsValid_ReturnValue, AItem* CallFunc_GetItem_ReturnValue);
    void Refresh(int32 Index, bool Owned, bool Equipped, UPickaxePart* PickaxePart, EPickaxePartLocation Location, FText Category, UCheat_EquipList_Entry_C* Entry, UItemID* pickaxeID, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable, UItemID* CallFunc_GetPickaxeID_ItemID, UCheat_EquipList_Entry_C* CallFunc_AddEntry_OutEntryWidget, bool CallFunc_GetIsPickAxePartAcquired_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsPickaxePartEquipped_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<UPickaxePart*>& CallFunc_GetPickaxeParts_ReturnValue, FText K2Node_Select_Default, UPickaxePart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, EPickaxePartLocation CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, OnOwnedClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnEquipClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
    void GetCharacter(UPlayerCharacter*& OutCharacter, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void ReceiveEntryOwnedClick(UCheat_EquipList_Entry_C* InEntryWidget, UObject* InData, bool InOwned, UPickaxePart* K2Node_DynamicCast_AsPickaxe_Part, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemovePickaxePartFromOwned_ReturnValue);
    void ReceiveEntryEquipClick(UCheat_EquipList_Entry_C* InEntryWidget, UObject* InData, bool InEquipped, UCheat_EquipList_Entry_C* OtherEntry, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, UItemID* CallFunc_GetPickaxeID_ItemID, int32 CallFunc_Add_IntInt_ReturnValue, EPickaxePartLocation CallFunc_Array_Get_Item, UPickaxePart* K2Node_DynamicCast_AsPickaxe_Part, bool K2Node_DynamicCast_bSuccess, TArray<UCheat_EquipList_Entry_C*>& CallFunc_GetEntries_OutEntries, UCheat_EquipList_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void GetCharacterID(UPlayerCharacterID*& characterID, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
