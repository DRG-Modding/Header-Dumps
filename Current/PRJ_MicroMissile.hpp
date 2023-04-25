#ifndef UE4SS_SDK_PRJ_MicroMissile_HPP
#define UE4SS_SDK_PRJ_MicroMissile_HPP

class APRJ_MicroMissile_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
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
    float Timeline_0_Brightness_243709694A5DDD44F4F9208FBF929C26;
    float Timeline_0_Height_243709694A5DDD44F4F9208FBF929C26;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_243709694A5DDD44F4F9208FBF929C26;
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

    void StopMissile();
    void IncreaseDamage();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void UnstableFuelMixUpdate();
    void StartLightIntensityIncrease();
    void StartBlink();
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void TurnUpLightIndicator();
    void OnInitialized();
    void CountSeconds();
    void Explode(const FHitResult& HitResult);
    void Impact(const FHitResult& HitResult);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_MicroMissile(int32 EntryPoint);
};

#endif
