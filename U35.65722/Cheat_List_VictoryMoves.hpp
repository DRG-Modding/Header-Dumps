#ifndef UE4SS_SDK_Cheat_List_VictoryMoves_HPP
#define UE4SS_SDK_Cheat_List_VictoryMoves_HPP

class UCheat_List_VictoryMoves_C : public UCheat_EquipList_C
{

    void Refresh(class UVictoryPose* Equipped, class UPlayerCharacterID* characterID, class UVictoryPose* VictoryPose, class UCheat_EquipList_Entry_C* Entry, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsUnlockedNotFromStart_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UVictoryPose* CallFunc_GetEquippedVictoryPose_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_CharacterID, FRefreshK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UCheat_EquipList_Entry_C* CallFunc_AddEntry_OutEntryWidget, FRefreshK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, const TArray<class UVictoryPose*>& CallFunc_GetVictoryPoses_ReturnValue, class UVictoryPose* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetCharacter(class APlayerCharacter*& OutCharacter, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void ReceiveEntryOwnedClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned, class UPlayerCharacterID* CallFunc_GetCharacterID_CharacterID, class UVictoryPose* K2Node_DynamicCast_AsVictory_Pose, bool K2Node_DynamicCast_bSuccess);
    void ReceiveEntryEquipClick(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped, class UCheat_EquipList_Entry_C* OtherEntry, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UCheat_EquipList_Entry_C*>& CallFunc_GetEntries_OutEntries, class UCheat_EquipList_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_CharacterID, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UVictoryPose* K2Node_DynamicCast_AsVictory_Pose, bool K2Node_DynamicCast_bSuccess);
    void GetCharacterID(class UPlayerCharacterID*& characterID, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
