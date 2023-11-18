#ifndef UE4SS_SDK_PRJ_OmmoranEnergySprite_HPP
#define UE4SS_SDK_PRJ_OmmoranEnergySprite_HPP

class APRJ_OmmoranEnergySprite_C : public AHomingDroneBomb
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPawnStatsComponent* PawnStats;
    class UParticleSystemComponent* P_SpriteAttackTell;
    class UStaticMeshComponent* SM_Crystal_01_Low;
    class UStaticMeshComponent* Sphere;
    class UParticleSystemComponent* Particle_Trail1;
    class UStaticMeshComponent* MeshRocket1;
    class UPointLightComponent* Light_Exhaust1;
    class UParticleSystemComponent* Particle_Exhaust;
    class USceneComponent* Visuals;
    class UAudioComponent* HomingDroneIdle_Cue;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    class UDamageComponent* Damage;
    bool Explode;
    float BaseHomingstrength;
    float SlowHomingStrength;
    float RepHomingStrength;
    class ABP_EscortDestination_C* Ommoran;
    float MaxProjectileHomingDuration;
    bool CanFlyArround;
    bool Impact;
    FVector2D MinMaxSpeed;
    float RepMaxSpeed;
    float CoordinatedAttackDuration;
    float RepMovementSpeed;
    float BaseMovementSpeed;
    float AttackMovementSpeed;

    bool GetIsTargetable();
    FVector GetTargetCenterMass();
    class UHealthComponentBase* GetTargetHealthComponent();
    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void OnRep_RepMovementSpeed();
    void OnRep_RepHomingStrength();
    void OnRep_RepMaxSpeed();
    void OnRep_Impact();
    void OnRep_Explode();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ResetTargeting();
    void TurnHomingOff();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ForceResetTargeting();
    void FlyArround();
    void Attack();
    void ExecuteUbergraph_PRJ_OmmoranEnergySprite(int32 EntryPoint);
};

#endif
