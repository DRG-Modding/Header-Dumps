#ifndef UE4SS_SDK_BP_DrippingPlant_HPP
#define UE4SS_SDK_BP_DrippingPlant_HPP

class ABP_DrippingPlant_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainDetectComponent* TerrainDetect;
    class UBillboardComponent* DripOrigin;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleHealthComponent* SimpleHealth;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* SM_DripingPlant_02;
    class USceneComponent* DefaultSceneRoot;
    float DripIntervalMin;
    float DripIntervalMax;
    bool DoDrip;
    float BurstIntervalMin;
    float BurstIntervalMax;
    int32 NumDripsInBurstMin;
    int32 NumDripsInBurstMax;
    int32 DripCount;
    int32 NumDripsInCurrentBurst;

    void ReceiveBeginPlay();
    void ProximityChanged(class APlayerCharacter* Player, bool enteredTrigger);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_DrippingPlant(int32 EntryPoint);
};

#endif
