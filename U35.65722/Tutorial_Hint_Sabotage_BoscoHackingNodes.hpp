#ifndef UE4SS_SDK_Tutorial_Hint_Sabotage_BoscoHackingNodes_HPP
#define UE4SS_SDK_Tutorial_Hint_Sabotage_BoscoHackingNodes_HPP

class UTutorial_Hint_Sabotage_BoscoHackingNodes_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveOnInitialized();
    void OnBoscoChanged(class ABosco* Bosco);
    void OnOverChargerCalled_Event_0(FVector Location, int32 roomIndex);
    void TetherPickedup(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_Tutorial_Hint_Sabotage_BoscoHackingNodes(int32 EntryPoint, FExecuteUbergraph_Tutorial_Hint_Sabotage_BoscoHackingNodesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Tutorial_Hint_Sabotage_BoscoHackingNodesK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FExecuteUbergraph_Tutorial_Hint_Sabotage_BoscoHackingNodesK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UObjective> CallFunc_GetObjectClass_ReturnValue, TSubclassOf<class UFacilityObjective> K2Node_ClassDynamicCast_AsFacility_Objective, bool K2Node_ClassDynamicCast_bSuccess, class ABosco* K2Node_CustomEvent_Bosco, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, FVector K2Node_CustomEvent_Location, int32 K2Node_CustomEvent_RoomIndex, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, TArray<class ABP_TetherDispenser_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AActor*>& CallFunc_GetShieldGenerators_ReturnValue, class ABP_TetherDispenser_C* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, class ABP_Facility_PowerStation_ShieldGenerator_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Shield_Generator, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, class APlayerCharacter* K2Node_CustomEvent_User, EInputKeys K2Node_CustomEvent_key, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_2, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective_1, bool K2Node_DynamicCast_bSuccess_2, TArray<class AActor*>& CallFunc_GetShieldGenerators_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, class ABP_Facility_PowerStation_ShieldGenerator_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Shield_Generator_1, bool K2Node_DynamicCast_bSuccess_3);
};

#endif