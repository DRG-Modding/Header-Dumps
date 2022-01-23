#ifndef UE4SS_SDK_BP_DeadState_HPP
#define UE4SS_SDK_BP_DeadState_HPP

class UBP_DeadState_C : public UDeadStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTransform Start Transform;
    class UParticleSystem* deathEffect;
    class UAnimMontage* deathMontage;
    class UParticleSystemComponent* Active DeathParticle system;
    float Effect start delay;

    void ReceiveBeginPlay();
    void ReceiveStateExit();
    void ReceiveStateEnter();
    void SetDeathParameters(float respawnDelay, float effectDelay, class UAnimMontage* deathMontage, class UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime);
    void ExecuteUbergraph_BP_DeadState(int32 EntryPoint, bool CallFunc_GetStateActive_ReturnValue, bool CallFunc_GetStateActive_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFSDGameModeSpaceRig* K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_GetFreeSpawnOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ASpacerigStart* K2Node_DynamicCast_AsSpacerig_Start, bool K2Node_DynamicCast_bSuccess_2, const FTransform CallFunc_GetTransform_ReturnValue_1, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_Event_respawnDelay, float K2Node_Event_effectDelay, class UAnimMontage* K2Node_Event_deathMontage, class UParticleSystem* K2Node_Event_deathEffect, bool K2Node_Event_useAnimationTimeAsRespawnTime);
};

#endif
