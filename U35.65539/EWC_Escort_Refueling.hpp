#ifndef UE4SS_SDK_EWC_Escort_Refueling_HPP
#define UE4SS_SDK_EWC_Escort_Refueling_HPP

class UEWC_Escort_Refueling_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector TunnelEntranceLocation;
    float DelayBetweenWaves;
    int32 WaveCountConstantPressure;
    AActor* Drilldozer;

    void StartWave();
    void ExecuteUbergraph_EWC_Escort_Refueling(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_Variable_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default, FVector CallFunc_GetSpawnPointInRange_ReturnValue, FVector CallFunc_GetSpawnPointInRange_ReturnValue_1, const TArray<FVector>& K2Node_MakeArray_Array, const TArray<FVector>& K2Node_MakeArray_Array_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_RandomFloatInRange_ReturnValue_5);
}

#endif
