#ifndef UE4SS_SDK_PRJ_Grenade_HackeShredder_HPP
#define UE4SS_SDK_PRJ_Grenade_HackeShredder_HPP

class APRJ_Grenade_HackeShredder_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* DamageTrigger;
    class USkeletalMeshComponent* SkeletalMesh;
    class UParticleSystemComponent* Particle_Exhaust;
    class UParticleSystemComponent* Particle_Exhaust_HighVelocity;
    class UPointLightComponent* Light_DistanceIndicator;
    class UPointLightComponent* Light_Exhaust;
    class UParticleSystemComponent* particle_Trail;
    class UPointLightComponent* UnstableFuelMixIndicator;
    class UAudioComponent* MicroMissileProjectileLoop_Cue;
    class UStaticMeshComponent* MeshRocket;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    float Timeline_0_Brightness_21DBF96B4E1C7EDB71BECA87BE4B155E;
    float Timeline_0_Height_21DBF96B4E1C7EDB71BECA87BE4B155E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_21DBF96B4E1C7EDB71BECA87BE4B155E;
    class UTimelineComponent* Timeline_0;
    float TimeToTarget;
    bool HasNitroglycerinCompound;
    float MaxLifetime;
    float CurrentLifetime;
    bool HasBuckOC;
    bool NoHoming;
    float DeltaSeconds;
    bool BlinkStarted;
    float BlinkInterval;
    bool IsAlive;
    float HomingDelayAmount;
    float NitroglycerinDamageIncrease;
    int32 NitroglycerinMaxIncreaseTicks;
    class AFSDPawn* Target;

    void StopMissile();
    void IncreaseDamage();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void UnstableFuelMixUpdate();
    void StartLightIntensityIncrease();
    void StartBlink();
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void OnInitialized();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void TurnUpLightIndicator();
    void CountSeconds();
    void Explode(const FHitResult& HitResult);
    void Impact(const FHitResult& HitResult);
    void FindTarget();
    void BndEvt__PRJ_Grenade_HackeShredder_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TargetDied(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_PRJ_Grenade_HackeShredder(int32 EntryPoint);
};

#endif
