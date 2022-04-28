#ifndef UE4SS_SDK_Cheat_List_Vanity_HPP
#define UE4SS_SDK_Cheat_List_Vanity_HPP

class UCheat_List_Vanity_C : public UCheat_EquipList_C
{
    TArray<EVanitySlot> Vanity Types;

    void Refresh(FText Category, class UCheat_EquipList_Entry_C* Entry, class UVanityItem* Vanity, int32 VanityIndex, EVanitySlot VanityType, class UPlayerCharacterID* characterID, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, const FText CallFunc_GetCraftableDescription_ReturnValue, const FText CallFunc_GetCraftableName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FRefreshK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FRefreshK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsEquipped_ReturnValue, FText Temp_text_Variable, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText K2Node_Select_Default, bool CallFunc_IsOwned_ReturnValue, class UCheat_EquipList_Entry_C* CallFunc_AddEntry_OutEntryWidget, class UPlayerCharacterID* CallFunc_GetCharacterID_CharacterID, TArray<class UVanityItem*>& CallFunc_GetUnLockedVanityItems_ReturnValue, class UVanityItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, EVanitySlot CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
    void GetCharacter(class APlayerCharacter*& OutCharacter, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void ReceiveEntryOwnedClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned, class UVanityItem* K2Node_DynamicCast_AsVanity_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveFromOwned_ReturnValue);
    void ReceiveEntryEquipClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped, class UVanityItem* Vanity, class UCheat_EquipList_Entry_C* OtherEntry, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UCheat_EquipList_Entry_C*>& CallFunc_GetEntries_OutEntries, class UPlayerCharacterID* CallFunc_GetCharacterID_CharacterID, class UCheat_EquipList_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_OutCharacter, class UVanityItem* K2Node_DynamicCast_AsVanity_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void GetCharacterID(class UPlayerCharacterID*& characterID, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif