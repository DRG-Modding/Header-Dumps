#ifndef UE4SS_SDK_BP_BurrowAttackComponent_HPP
#define UE4SS_SDK_BP_BurrowAttackComponent_HPP

class UBP_BurrowAttackComponent_C : UDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float BurrowDuration;
    FVector TargetLocation;
    float TargetingDelay;
    UParticleSystem* ParticlesOnTarget;
    USoundBase* SoundOnTarget;
    UParticleSystem* ParticlesOnDamage;
    USoundBase* SoundOnDamage;

    void ReceiveAttackTarget(AActor* Target);
    void ShowTargetEffects(FVector_NetQuantize Location);
    void ShowDamageEffects(FVector_NetQuantize Location);
    void ExecuteUbergraph_BP_BurrowAttackComponent(int32 EntryPoint, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, UBP_BurrowComponent_C* CallFunc_GetComponentByClass_ReturnValue, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue_1, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue_1, AActor* K2Node_Event_target, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_SnapToGrid_ReturnValue, FVector_NetQuantize K2Node_CustomEvent_Location_1, FVector_NetQuantize K2Node_CustomEvent_Location, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
}

#endif
