#ifndef UE4SS_SDK_EWC_Refinery_BokenPipe_LocalWave_HPP
#define UE4SS_SDK_EWC_Refinery_BokenPipe_LocalWave_HPP

class UEWC_Refinery_BokenPipe_LocalWave_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;

    void StartWave();
    void ExecuteUbergraph_EWC_Refinery_BokenPipe_LocalWave(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_1);
}

#endif
