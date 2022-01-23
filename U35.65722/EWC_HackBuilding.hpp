#ifndef UE4SS_SDK_EWC_HackBuilding_HPP
#define UE4SS_SDK_EWC_HackBuilding_HPP

class UEWC_HackBuilding_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Facility_PowerStation_GeneratorBase_C* FromGenerator;
    FVector WaveOrigin;
    class UTetherComponent* origintether;
    class UEnemyGroupDescriptor* DroneWave;
    class ABP_Facility_PowerStation_GeneratorBase_C* Generator;

    void SpawnWave(float Difficulty, bool IsConstantPressure, TArray<FVector>& CallFunc_GetSpawnPointsAroundLocation_ReturnValue);
    void SetWaveOrigin(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void GetRandomPlayer(class APlayerCharacter*& NewParam, bool& PlayerFound, class APlayerCharacter* Player, class APlayerCharacter* CallFunc_GetRandomPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    FVector Get Refinery Location(class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    class UEnemyWaveManager* GetWaveManager(class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue);
    void OnWaveCompleted();
    void OnGeneratorSet(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void OnThirdReached(float hackProgress);
    void StartWave();
    void ExecuteUbergraph_EWC_HackBuilding(int32 EntryPoint, TArray<FVector>& CallFunc_GetSpawnPointsAroundLocation_ReturnValue, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, class UTetherComponent* K2Node_CustomEvent_tetherstart, class AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float K2Node_CustomEvent_hackProgress, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, FExecuteUbergraph_EWC_HackBuildingK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
