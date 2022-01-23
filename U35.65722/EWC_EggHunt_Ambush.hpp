#ifndef UE4SS_SDK_EWC_EggHunt_Ambush_HPP
#define UE4SS_SDK_EWC_EggHunt_Ambush_HPP

class UEWC_EggHunt_Ambush_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;

    void StartWave();
    void ExecuteUbergraph_EWC_EggHunt_Ambush(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_GetSpawnPointInRange_ReturnValue, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const TArray<FVector>& K2Node_MakeArray_Array_1, float CallFunc_RandomFloatInRange_ReturnValue_3);
};

#endif
