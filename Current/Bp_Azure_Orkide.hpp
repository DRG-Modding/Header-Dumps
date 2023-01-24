#ifndef UE4SS_SDK_Bp_Azure_Orkide_HPP
#define UE4SS_SDK_Bp_Azure_Orkide_HPP

class ABp_Azure_Orkide_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UCapsuleComponent* HitBox_Closed;
    class UCapsuleComponent* HitBox_Open;
    class UBoxComponent* Box;
    class USphereComponent* WalkinTrigger;
    class USimpleHealthComponent* SimpleHealth;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class USphereComponent* Trigger;
    class USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Orkid;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Close Flower();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void PlayCloseSequence();
    void ExecuteUbergraph_Bp_Azure_Orkide(int32 EntryPoint);
};

#endif
