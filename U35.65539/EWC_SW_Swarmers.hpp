#ifndef UE4SS_SDK_EWC_SW_Swarmers_HPP
#define UE4SS_SDK_EWC_SW_Swarmers_HPP

class UEWC_SW_Swarmers_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    UEnemyGroupDescriptor* EnemyGroup;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_SW_Swarmers(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, FVector CallFunc_GetSpawnPointInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_2, FVector CallFunc_GetSpawnPointInRange_ReturnValue_1, FVector CallFunc_GetSpawnPointInRange_ReturnValue_2, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4);
}

#endif
