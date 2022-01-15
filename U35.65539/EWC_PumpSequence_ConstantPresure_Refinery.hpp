#ifndef UE4SS_SDK_EWC_PumpSequence_ConstantPresure_Refinery_HPP
#define UE4SS_SDK_EWC_PumpSequence_ConstantPresure_Refinery_HPP

class UEWC_PumpSequence_ConstantPresure_Refinery_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;
    FTimerHandle ConstantWaveTimer;
    FTimerHandle WaveTimer;

    FVector Get Refinery Location(UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    UEnemyWaveManager* GetWaveManager(UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue);
    void StartWave();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_PumpSequence_ConstantPresure_Refinery(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetPointExtractionScaler_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
}

#endif
