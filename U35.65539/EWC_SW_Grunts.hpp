#ifndef UE4SS_SDK_EWC_SW_Grunts_HPP
#define UE4SS_SDK_EWC_SW_Grunts_HPP

class UEWC_SW_Grunts_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    UEnemyGroupDescriptor* EnemyGroup;
    TArray<FVector> SpawnLocations;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_SW_Grunts(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_2, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_3, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_4);
}

#endif
