#ifndef UE4SS_SDK_EWC_Hatchling_KillFailed_HPP
#define UE4SS_SDK_EWC_Hatchling_KillFailed_HPP

class UEWC_Hatchling_KillFailed_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FVector> SpawnLocations;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_Hatchling_KillFailed(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_2);
};

#endif
