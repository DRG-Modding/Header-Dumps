#ifndef UE4SS_SDK_ENE_Shark_HPP
#define UE4SS_SDK_ENE_Shark_HPP

class AENE_Shark_C : public ASharkEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* ProjectileCollision;
    class UAudioComponent* VulnerableSound;
    class UParticleSystemComponent* VulnerableParticles;
    class UAudioComponent* AttackSound;
    class UAudioComponent* DiveSound;
    class UAudioComponent* CirclingSound;
    class UOutlineComponent* outline;
    FENE_Shark_COnDamagedTarget OnDamagedTarget;
    void OnDamagedTarget();
    bool DiedbyCritical;
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;
    class UParticleSystemComponent* Dirt particles;

    void FadeOutIfPlaying(class UAudioComponent* Sound);
    void SoundHandling(bool IdleSound, bool CirclingSound, bool AttackSound, bool DiveSound, bool Vulnerable);
    void OnRep_DiedbyCritical();
    void TryDamage(class AActor* self2);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnLandedEvent();
    void OnEnterState(ESharkEnemyState State);
    void OnExitState(ESharkEnemyState State);
    void BndEvt__ENE_Shark_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_Shark(int32 EntryPoint);
    void OnDamagedTarget__DelegateSignature();
};

#endif
