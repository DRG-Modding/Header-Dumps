#ifndef UE4SS_SDK_ENE_PatrolBot_HPP
#define UE4SS_SDK_ENE_PatrolBot_HPP

class AENE_PatrolBot_C : public APatrolBot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* SpawnParticles;
    class UNiagaraComponent* JetParticles3;
    class UNiagaraComponent* JetParticles2;
    class UNiagaraComponent* JetParticles1;
    class UNiagaraComponent* JetParticles;
    class UParticleSystemComponent* Trail1;
    class USphereComponent* HackUse;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight_HeadGlow;
    class UWeakpointGlowComponent* WeakpointGlow;
    class USingleUsableComponent* HackUsable;
    class UPawnStatsComponent* PawnStats;
    class UCapsuleComponent* ProjectileCollision;
    class UOutlineComponent* outline;
    class UParticleSystemComponent* Dirt particles;
    FTimerHandle RandomImpulseTimer;
    class USoundBase* LandingImpact_Cue;
    int32 RocketIndex;
    class UPhysicalMaterial* WeakPointMaterial;
    class UMaterialInstanceDynamic* HackpointDynamicMaterial;
    FLinearColor GreenColor;
    FLinearColor RedColor;
    TEnumAsByte<EPatrolBotDeathReason::Type> DeathReason;
    float HackedRegainModifier;
    float HackChance;
    bool WasFlyingDeath;
    FTimerHandle DisabledTimer;
    bool WasRevived;
    class USoundBase* WeakpointDeathSound;
    class UAudioComponent* HackableSoundInstance;

    void StopHackableSound();
    void UpdateLookAtShout();
    bool CheckCanBeHacked();
    void GetAIController(class AAIC_PatrolBot_C*& AsAIC Facility Drone);
    void OnRep_DeathReason();
    void SoundHandling(bool RollingSound, bool FlyingSound);
    void OnStateChangedEvent(EPatrolBotState CurrentState);
    void OnLandedEvent();
    void OnLockedOn();
    void NormalDeath();
    void WeakpointDeath();
    void ReceiveBeginPlay();
    void OnDroneHacked();
    void BndEvt__HackingUsable_K2Node_ComponentBoundEvent_3_HackedDelegate__DelegateSignature(class APlayerCharacter* InHackedBy);
    void BndEvt__CollisionSphere_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnMessageAI(FName TriggerName);
    void WeakpointDeath_Flying();
    void OnJumpEvent();
    void DisabledElapsed();
    void BndEvt__HackingUsable_K2Node_ComponentBoundEvent_5_UsableChangedSignature__DelegateSignature(bool CanUse);
    void OnRevived();
    void OnProjectileSpawned();
    void OnDisabled();
    void BndEvt__ENE_PatrolBot_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void BndEvt__ENE_PatrolBot_HackingUsable_K2Node_ComponentBoundEvent_1_ItemDelegate__DelegateSignature(class AItem* Item);
    void ExecuteUbergraph_ENE_PatrolBot(int32 EntryPoint);
};

#endif
