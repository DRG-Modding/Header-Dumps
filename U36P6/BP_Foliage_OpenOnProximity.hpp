#ifndef UE4SS_SDK_BP_Foliage_OpenOnProximity_HPP
#define UE4SS_SDK_BP_Foliage_OpenOnProximity_HPP

class ABP_Foliage_OpenOnProximity_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UCapsuleComponent* HitBox_Closed;
    class UCapsuleComponent* HitBox_Open;
    class UBoxComponent* Box;
    class USphereComponent* WalkinTrigger;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class USkeletalMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;
    class UAnimSequenceBase* ReactAnimation;
    class USoundCue* deathSound;
    float AnimationDuration;

    void ReceiveBeginPlay();
    void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Close Flower();
    void PlayCloseSequence();
    void ExecuteUbergraph_BP_Foliage_OpenOnProximity(int32 EntryPoint);
};

#endif
