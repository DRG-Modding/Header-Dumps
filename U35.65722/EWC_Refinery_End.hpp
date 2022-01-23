#ifndef UE4SS_SDK_EWC_Refinery_End_HPP
#define UE4SS_SDK_EWC_Refinery_End_HPP

class UEWC_Refinery_End_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;

    void StartWave();
    void ExecuteUbergraph_EWC_Refinery_End(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Variable, float CallFunc_FMax_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 Temp_int_Variable_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_2);
};

#endif
