#ifndef UE4SS_SDK_BP_CreeperVine_Base_HPP
#define UE4SS_SDK_BP_CreeperVine_Base_HPP

class ABP_CreeperVine_Base_C : public ASplinePlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* HurtAudioComponent;
    class UParticleSystemComponent* Trail;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* SM_brokenFloor_01;
    class UTerrainDetectComponent* TerrainDetect;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    FTimerHandle CheckPlayersTimer;
    bool IsRetracted;
    float SplineNodeRandomOffset;
    class USoundBase* HurtAudio;
    float SpeedRetraction;
    float SpeedExtending;
    float LengthRetracted;
    float LastPlayerHitTime;

    void HandleActorOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void HandleActorHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void PrepareSpline(class USplineComponent* InSplineComponent, int32 InSeed);
    void OnRep_IsRetracted();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ReceivePrepareSpline(class USplineComponent* InSplineComponent, int32 InSeed);
    void InitiateChainRetract();
    void PlayHurtAudio(float InDamage);
    void Retract();
    void ReceiveMovementFinished(float InDistanceProgress);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health);
    void ExecuteUbergraph_BP_CreeperVine_Base(int32 EntryPoint);
};

#endif
