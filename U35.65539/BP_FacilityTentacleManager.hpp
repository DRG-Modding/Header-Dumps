#ifndef UE4SS_SDK_BP_FacilityTentacleManager_HPP
#define UE4SS_SDK_BP_FacilityTentacleManager_HPP

class ABP_FacilityTentacleManager_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    AENE_FacilityTentacle_C* spawned;
    float TentacleRespawnTime;
    FTimerHandle TentacleRespawnTimer;
    bool HasTentacle;
    FTimerHandle TentaclePauseTimer;

    void OnRep_HasTentacle();
    void CanSpawnTentacle(bool& IsBossfightActive, AActor* CallFunc_GetParentActor_ReturnValue, UBP_MainFacility_DataVault_C* K2Node_DynamicCast_AsBP_Main_Facility_Data_Vault, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
    void HasActiveTentacle(bool& HasSpawned, bool CallFunc_IsValid_ReturnValue);
    void SpawnTentacle();
    void KillTentacle();
    void OnTentacleDeath(UHealthComponentBase* HealthComponent);
    void RespawnTentacle();
    void OpenHatch();
    void CloseHatch();
    void PauseAction(float Duration);
    void UnpauseTentacles();
    void ExecuteUbergraph_BP_FacilityTentacleManager(int32 EntryPoint, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UAIController* CallFunc_GetAIController_ReturnValue_1, UAIC_FacilityTentacle_C* K2Node_DynamicCast_AsAIC_Facility_Tentacle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, UAIC_FacilityTentacle_C* K2Node_DynamicCast_AsAIC_Facility_Tentacle_1, bool K2Node_DynamicCast_bSuccess_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_HasActiveTentacle_HasSpawned, bool CallFunc_HasActiveTentacle_HasSpawned_1, bool CallFunc_CanSpawnTentacle_IsBossfightActive, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UABP_TentacleHatch_C* K2Node_DynamicCast_AsABP_Tentacle_Hatch, bool K2Node_DynamicCast_bSuccess_2, UABP_TentacleHatch_C* K2Node_DynamicCast_AsABP_Tentacle_Hatch_1, bool K2Node_DynamicCast_bSuccess_3, FVector CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, UENE_FacilityTentacle_Burrowing_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, float K2Node_CustomEvent_Duration, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1);
}

#endif
