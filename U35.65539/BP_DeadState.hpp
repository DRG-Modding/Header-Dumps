#ifndef UE4SS_SDK_BP_DeadState_HPP
#define UE4SS_SDK_BP_DeadState_HPP

class UBP_DeadState_C : UDeadStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTransform Start Transform;
    UParticleSystem* deathEffect;
    UAnimMontage* deathMontage;
    UParticleSystemComponent* Active DeathParticle system;
    float Effect start delay;

    void ReceiveBeginPlay();
    void ReceiveStateExit();
    void ReceiveStateEnter();
    void SetDeathParameters(float respawnDelay, float effectDelay, UAnimMontage* deathMontage, UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime);
    void ExecuteUbergraph_BP_DeadState(int32 EntryPoint, bool CallFunc_GetStateActive_ReturnValue, bool CallFunc_GetStateActive_ReturnValue_1, UGameModeBase* CallFunc_GetGameMode_ReturnValue, AController* CallFunc_GetController_ReturnValue, UFSDGameModeSpaceRig* K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig, bool K2Node_DynamicCast_bSuccess, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_GetFreeSpawnOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, USpacerigStart* K2Node_DynamicCast_AsSpacerig_Start, bool K2Node_DynamicCast_bSuccess_2, const FTransform CallFunc_GetTransform_ReturnValue_1, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_Event_respawnDelay, float K2Node_Event_effectDelay, UAnimMontage* K2Node_Event_deathMontage, UParticleSystem* K2Node_Event_deathEffect, bool K2Node_Event_useAnimationTimeAsRespawnTime);
}

#endif
