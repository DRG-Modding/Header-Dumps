#ifndef UE4SS_SDK_EWC_OverloadShieldGenerator_Facility_HPP
#define UE4SS_SDK_EWC_OverloadShieldGenerator_Facility_HPP

class UEWC_OverloadShieldGenerator_Facility_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Facility_PowerStation_GeneratorBase_C* FromGenerator;
    float NextWaveValue;
    float OldProgress;
    int32 WaveCount;
    int32 WavesSent;
    FVector WaveOrigin;
    class UTetherComponent* origintether;
    class UEnemyGroupDescriptor* DroneWave;

    void SetWaveOrigin(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void GetRandomPlayer(class APlayerCharacter*& NewParam, bool& PlayerFound, class APlayerCharacter* Player, class APlayerCharacter* CallFunc_GetRandomPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    FVector Get Refinery Location(class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    class UEnemyWaveManager* GetWaveManager(class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue);
    void OnGeneratorSet(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void StartWave();
    void OnWaveCompleted();
    void OnThirdReached(float hackProgress);
    void ExecuteUbergraph_EWC_OverloadShieldGenerator_Facility(int32 EntryPoint, float CallFunc_SelectFloat_ReturnValue, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, class UTetherComponent* K2Node_CustomEvent_tetherstart, class AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_1, FExecuteUbergraph_EWC_OverloadShieldGenerator_FacilityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue_2, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_CustomEvent_hackProgress, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue);
};

#endif
