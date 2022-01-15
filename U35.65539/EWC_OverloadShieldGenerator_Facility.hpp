#ifndef UE4SS_SDK_EWC_OverloadShieldGenerator_Facility_HPP
#define UE4SS_SDK_EWC_OverloadShieldGenerator_Facility_HPP

class UEWC_OverloadShieldGenerator_Facility_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ABP_Facility_PowerStation_GeneratorBase_C* FromGenerator;
    float NextWaveValue;
    float OldProgress;
    int32 WaveCount;
    int32 WavesSent;
    FVector WaveOrigin;
    UTetherComponent* origintether;
    UEnemyGroupDescriptor* DroneWave;

    void SetWaveOrigin(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherstart);
    void GetRandomPlayer(UPlayerCharacter*& NewParam, bool& PlayerFound, UPlayerCharacter* Player, UPlayerCharacter* CallFunc_GetRandomPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    FVector Get Refinery Location(UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    UEnemyWaveManager* GetWaveManager(UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue);
    void OnGeneratorSet(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherstart);
    void StartWave();
    void OnWaveCompleted();
    void OnThirdReached(float hackProgress);
    void ExecuteUbergraph_EWC_OverloadShieldGenerator_Facility(int32 EntryPoint, float CallFunc_SelectFloat_ReturnValue, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, UTetherComponent* K2Node_CustomEvent_tetherstart, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_1, Hackprogress_Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_2, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_CustomEvent_hackProgress, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue);
}

#endif
