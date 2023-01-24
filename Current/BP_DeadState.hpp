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
    void ExecuteUbergraph_BP_DeadState(int32 EntryPoint);
};

#endif
