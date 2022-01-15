#ifndef UE4SS_SDK_EWC_HackBuilding_HPP
#define UE4SS_SDK_EWC_HackBuilding_HPP

class UEWC_HackBuilding_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ABP_Facility_PowerStation_GeneratorBase_C* FromGenerator;
    FVector WaveOrigin;
    UTetherComponent* origintether;
    UEnemyGroupDescriptor* DroneWave;
    ABP_Facility_PowerStation_GeneratorBase_C* Generator;

    void SpawnWave(float Difficulty, bool IsConstantPressure, TArray<FVector>& CallFunc_GetSpawnPointsAroundLocation_ReturnValue);
    void SetWaveOrigin(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherstart);
    void GetRandomPlayer(UPlayerCharacter*& NewParam, bool& PlayerFound, UPlayerCharacter* Player, UPlayerCharacter* CallFunc_GetRandomPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    FVector Get Refinery Location(UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    UEnemyWaveManager* GetWaveManager(UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue);
    void OnWaveCompleted();
    void OnGeneratorSet(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherstart);
    void OnThirdReached(float hackProgress);
    void StartWave();
    void ExecuteUbergraph_EWC_HackBuilding(int32 EntryPoint, TArray<FVector>& CallFunc_GetSpawnPointsAroundLocation_ReturnValue, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, UTetherComponent* K2Node_CustomEvent_tetherstart, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float K2Node_CustomEvent_hackProgress, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, Hackprogress_Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
