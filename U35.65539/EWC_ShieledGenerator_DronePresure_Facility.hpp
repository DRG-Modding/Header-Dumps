#ifndef UE4SS_SDK_EWC_ShieledGenerator_DronePresure_Facility_HPP
#define UE4SS_SDK_EWC_ShieledGenerator_DronePresure_Facility_HPP

class UEWC_ShieledGenerator_DronePresure_Facility_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;
    FTimerHandle ConstantWaveTimer;
    FTimerHandle WaveTimer;

    FVector Get Refinery Location(UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void StartWave();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_ShieledGenerator_DronePresure_Facility(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2);
}

#endif
