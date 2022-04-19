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
    void ExecuteUbergraph_BP_BurrowAttackComponent(int32 EntryPoint);
};

#endif
