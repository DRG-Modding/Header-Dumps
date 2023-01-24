#ifndef UE4SS_SDK_BP_CactusShooterPlant_HPP
#define UE4SS_SDK_BP_CactusShooterPlant_HPP

class ABP_CactusShooterPlant_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainDetectComponent* TerrainDetect;
    class UBoxComponent* ShootSpinesTrigger;
    class UCapsuleComponent* CapsuleCollision;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    bool CanTrigger;
    float ResetTime;
    FBP_CactusShooterPlant_COnChangeState OnChangeState;
    void OnChangeState(bool IsIdle);
    FRotator SpikeDirection;
    FRandomStream RandomSeedStream;
    FVector SpikeOrigin;
    float SpikeOriginHeight;
    int32 NumSpikes;
    float SpikeDistributionAngle;
    FVector2D SpikeOriginHeightMinMax;
    bool AnyPlayerNearby;
    float MinPlayerDistance;

    void ReceiveBeginPlay();
    void BndEvt__ShootSpinesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ShootTheSpikes();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void PlayerNearby(class APlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_CactusShooterPlant(int32 EntryPoint);
    void OnChangeState__DelegateSignature(bool IsIdle);
};

#endif
