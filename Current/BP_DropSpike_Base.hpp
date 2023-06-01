#ifndef UE4SS_SDK_BP_DropSpike_Base_HPP
#define UE4SS_SDK_BP_DropSpike_Base_HPP

class ABP_DropSpike_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* DirectDamage;
    class UDamageComponent* Damage;
    class UExplosionComponent* Explosion;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UCapsuleComponent* SpikeCapsule;
    class USceneComponent* SpikeScaler;
    class UStaticMeshComponent* Spike;
    class USphereComponent* DamageTrigger;
    class USphereComponent* GrenadeSphere;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    float LifespanAfterTrigger;
    bool IsTriggered;
    float MinAcceptableDistanceToFloor;
    float MaxAcceptableDistanceToFloor;
    float DistanceToFloor;
    FVector FloorHitLocation;
    bool DoWarning;
    float TriggerDropProbability;
    float MaxTriggerDelay;
    float BaseDamageAmmount;
    bool DoClearNearbyDebris;
    bool IsSilent;
    FVector2D DamageMinMax;
    float ChainReactionProbability;
    float ChainReactionDistance;
    class UTerrainMaterial* SpikeCarveMaterial;
    class UStaticMesh* SpikeCarveMesh;
    class UMaterialInterface* SpikeStaticMeshMaterial;
    class UStaticMesh* BaseCarveMesh;
    FTransform BaseCarveTransform;
    FVector impactLocation;
    class UParticleSystem* WarningParticles;
    class UParticleSystem* ImpactParticles;
    bool ExplodeOnImpact;
    class UParticleSystem* ExplosionParticles;
    class USoundBase* SpikeBreakOffSound;
    class USoundBase* ImpactSound;
    bool CheckForGround;
    float WaitBeforeInit;

    void StartChainReaction();
    void OnRep_DistanceToFloor();
    void ClearNearbyDebris();
    void OnRep_DoClearNearbyDebris();
    void DoDamageToTarget(class AActor* DamageReceiver);
    void OnRep_DoWarning();
    void OnRep_IsTriggered();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnMatchStarted();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void ChainReaction();
    void Explode();
    void ImpactGround(FVector HitLocation);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_DropSpike_Base(int32 EntryPoint);
};

#endif
