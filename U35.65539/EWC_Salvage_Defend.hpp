#ifndef UE4SS_SDK_EWC_Salvage_Defend_HPP
#define UE4SS_SDK_EWC_Salvage_Defend_HPP

class UEWC_Salvage_Defend_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    UEnemyGroupDescriptor* EnemyGroup;
    int32 Wave Count Waves;
    int32 Wave Count Constant Pressure;

    void StartWave();
    void ExecuteUbergraph_EWC_Salvage_Defend(int32 EntryPoint, int32 Temp_int_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_2);
}

#endif
