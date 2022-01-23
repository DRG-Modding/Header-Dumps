#ifndef UE4SS_SDK_EWC_PumpSequence_ConstantPresure_Refinery_HPP
#define UE4SS_SDK_EWC_PumpSequence_ConstantPresure_Refinery_HPP

class UEWC_PumpSequence_ConstantPresure_Refinery_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;
    FTimerHandle ConstantWaveTimer;
    FTimerHandle WaveTimer;

    FVector Get Refinery Location(class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    class UEnemyWaveManager* GetWaveManager(class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue);
    void StartWave();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_PumpSequence_ConstantPresure_Refinery(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetPointExtractionScaler_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
};

#endif
