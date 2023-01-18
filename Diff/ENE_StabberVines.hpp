#ifndef UE4SS_SDK_ENE_StabberVines_HPP
#define UE4SS_SDK_ENE_StabberVines_HPP

class AENE_StabberVines_C : public AEnemyPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class UBillboardComponent* AttackPosition;
    class UStaticMeshComponent* U33_BiomPlant_ThornBlob_003;
    class UTerrainDetectComponent* TerrainDetect;
    class UBillboardComponent* HeadSpawnPosition1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* HeadSpawnPosition3;
    class UBillboardComponent* HeadSpawnPosition2;
    class UStaticMeshComponent* Body;
    class USceneComponent* DefaultSceneRoot;
    float HeadMovementDuration;
    TArray<class AENE_StabberVine_Tentacle_C*> TentaclesCPP;
    bool IsBusy;
    TArray<FTransform> HydraHeadsSpawnRelativeTransforms;
    FName MaterialColourParamString;
    FLinearColor IdleColor;
    class UMaterialInstanceDynamic* DynamicMaterial;
    float NormalHeadMovementDurration;
    float AttackTimer;
    float AttackDistance;
    FTimerHandle AttackTimerHandle;

    void TryStartMeleeAttack();
    void AreAllTentaclesDead(bool& OutAllDead);
    void GenerateRandomSpikePositions(int32 SpikeIndex, FVector& SpikeLocation, FRotator& SpikeRotation);
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void RemoveHead(class AENE_StabberVine_Tentacle_C* HeadRef);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void SetupTargetDetection();
    void SetupTentacles();
    void Kill Root();
    void BndEvt__Outline_K2Node_ComponentBoundEvent_1_OutlineChanged__DelegateSignature(EOutline InOutline);
    void ExecuteUbergraph_ENE_StabberVines(int32 EntryPoint);
};

#endif
