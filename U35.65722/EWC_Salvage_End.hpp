#ifndef UE4SS_SDK_EWC_Salvage_End_HPP
#define UE4SS_SDK_EWC_Salvage_End_HPP

class UEWC_Salvage_End_C : public UEnemyWaveController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;

    void StartWave();
    void ExecuteUbergraph_EWC_Salvage_End(int32 EntryPoint, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Variable, float CallFunc_FMax_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, int32 Temp_int_Variable_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_2);
};

#endif
