#ifndef UE4SS_SDK_ENE_PlagueShark_HPP
#define UE4SS_SDK_ENE_PlagueShark_HPP

class AENE_PlagueShark_C : public ASharkEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Trail;
    class UProjectileAttackComponent* ProjectileAttack;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class UCapsuleComponent* ProjectileCollision;
    class UAudioComponent* VulnerableSound;
    class UParticleSystemComponent* VulnerableParticles;
    class UAudioComponent* AttackSound;
    class UAudioComponent* DiveSound;
    class UAudioComponent* CirclingSound;
    class UOutlineComponent* outline;
    FENE_PlagueShark_COnDamagedTarget OnDamagedTarget;
    void OnDamagedTarget();
    bool DiedbyCritical;
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;
    class UParticleSystemComponent* Dirt particles;
    TSubclassOf<class AActor> AcidCloudClass;

    void ToggleInAir(bool IsInAir);
    void FadeOutIfPlaying(class UAudioComponent* Sound);
    void SoundHandling(bool IdleSound, bool CirclingSound, bool AttackSound, bool DiveSound, bool Vulnerable);
    void OnRep_DiedbyCritical();
    void TryDamage(class AActor* self2);
    void OnLandedEvent();
    void OnEnterState(ESharkEnemyState State);
    void OnExitState(ESharkEnemyState State);
    void BndEvt__ENE_Shark_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void BndEvt__ENE_PlagueShark_RestrictedGrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedActorSig__DelegateSignature(class AActor* aGrabbedActor);
    void BndEvt__ENE_PlagueShark_RestrictedGrabberComponent_K2Node_ComponentBoundEvent_3_ReleasedActorSig__DelegateSignature(class AActor* aGrabbedActor, bool fullGrabElapsed);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void EventOnScatterPlagueBarf(int32 DesiredPuddleAmount);
    void OnJumpEvent();
    void ExecuteUbergraph_ENE_PlagueShark(int32 EntryPoint);
    void OnDamagedTarget__DelegateSignature();
};

#endif
