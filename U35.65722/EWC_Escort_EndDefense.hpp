#ifndef UE4SS_SDK_EWC_Escort_EndDefense_HPP
#define UE4SS_SDK_EWC_Escort_EndDefense_HPP

class UEWC_Escort_EndDefense_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FVector> SpawnLocations;
    FVector DestinationLocation;

    void GetDestinationLocation(FVector& Location, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void StartWave();
    void StopConstantPreassure();
    void LoopWave();
    void SpawnNewWave();
    void SpawnLastWave();
    void SpawnExtraEnemiesDurringRockAttack();
    void ExecuteUbergraph_EWC_Escort_EndDefense(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, bool Temp_bool_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_GetDestinationLocation_Location, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_1, bool Temp_bool_IsClosed_Variable, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, float K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_3, float K2Node_Select_Default_2, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_7, float CallFunc_RandomFloatInRange_ReturnValue_8, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_9, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool Temp_bool_Variable_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_4, float K2Node_Select_Default_3, float K2Node_Select_Default_4, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_5);
};

#endif
