#ifndef UE4SS_SDK_BP_PoisonGasFungus_HPP
#define UE4SS_SDK_BP_PoisonGasFungus_HPP

class ABP_PoisonGasFungus_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* collider;
    class USkeletalMeshComponent* AnimatedBody;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class UBillboardComponent* GasReleasePoint;
    class USphereComponent* SporesTrigger;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class AActor> GasCloudClass;
    bool CanTrigger;
    float ResetTime;

    void SetCanAnimate(bool CanAnimate);
    void BndEvt__SporesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_PoisonGasFungus(int32 EntryPoint);
};

#endif
