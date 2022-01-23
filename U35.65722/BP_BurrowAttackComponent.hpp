#ifndef UE4SS_SDK_BP_BurrowAttackComponent_HPP
#define UE4SS_SDK_BP_BurrowAttackComponent_HPP

class UBP_BurrowAttackComponent_C : public UDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float BurrowDuration;
    FVector TargetLocation;
    float TargetingDelay;
    class UParticleSystem* ParticlesOnTarget;
    class USoundBase* SoundOnTarget;
    class UParticleSystem* ParticlesOnDamage;
    class USoundBase* SoundOnDamage;

    void ReceiveAttackTarget(class AActor* Target);
    void ShowTargetEffects(FVector_NetQuantize Location);
    void ShowDamageEffects(FVector_NetQuantize Location);
    void ExecuteUbergraph_BP_BurrowAttackComponent(int32 EntryPoint, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_BurrowComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue_1, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue_1, class AActor* K2Node_Event_target, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_SnapToGrid_ReturnValue, FVector_NetQuantize K2Node_CustomEvent_Location_1, FVector_NetQuantize K2Node_CustomEvent_Location, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
};

#endif
