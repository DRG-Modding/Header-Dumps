#ifndef UE4SS_SDK_BP_FallingState_HPP
#define UE4SS_SDK_BP_FallingState_HPP

class UBP_FallingState_C : public UFallingStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USoundBase* JumpBootsActivated_Cue;
    class UParticleSystem* JumpBootsActivated_Particles;
    class USoundBase* ImpactCompensation_Impact_Cue;
    class UParticleSystem* Impactcompensation_Impact_Particles;
    class USoundBase* ImpactCompensation_Activate_Cue;
    class USoundBase* ImpactCompensationDeactivateCue;
    bool IC_WasActivated;
    float HoverBootsBreakingSpeed;
    class UParticleSystem* JumpBootsActivated_Particles_FirstPerson;

    void ShowJumpBootsActivation();
    void ReceiveHoverBootsTick(float DeltaSeconds);
    void ReceiveHoverBootsActiveChanged(bool IsActive);
    void ExecuteUbergraph_BP_FallingState(int32 EntryPoint, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool K2Node_Event_isActive, bool CallFunc_IsLocallyControlled_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_HoverBootsBurnTrigger_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
