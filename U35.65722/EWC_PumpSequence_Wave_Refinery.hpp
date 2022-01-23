#ifndef UE4SS_SDK_EWC_PumpSequence_Wave_Refinery_HPP
#define UE4SS_SDK_EWC_PumpSequence_Wave_Refinery_HPP

class UEWC_PumpSequence_Wave_Refinery_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;
    FTimerHandle ConstantWaveTimer;
    FTimerHandle WaveTimer;

    FVector Get Refinery Location(class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    class UEnemyWaveManager* GetWaveManager(class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue);
    void StartWave();
    void ExecuteUbergraph_EWC_PumpSequence_Wave_Refinery(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, FVector CallFunc_Get_Refinery_Location_ReturnValue, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_PercentageCheck_ReturnValue, FVector CallFunc_Get_Refinery_Location_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue_1, const TArray<FVector>& K2Node_MakeArray_Array_1, float CallFunc_RandomFloatInRange_ReturnValue_3);
};

#endif
