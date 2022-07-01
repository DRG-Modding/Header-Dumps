#ifndef UE4SS_SDK_BP_SwarmerTunnelsBase_HPP
#define UE4SS_SDK_BP_SwarmerTunnelsBase_HPP

class ABP_SwarmerTunnelsBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* SpiderSpawnpoinbt3;
    class UBillboardComponent* WarningPoint;
    class UStaticMeshComponent* SM_Prim_Cylinder_08sides;
    class ULevelGenerationCarverComponent* FillerMaterial;
    class UBillboardComponent* SpiderSpawnPoint2;
    class UStaticMeshComponent* StaticMesh5;
    class ULevelGenerationCarverComponent* BAckTunnel2;
    class USphereComponent* TriggerSphere;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* BackTunnel;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* Spider Spawn Point1;
    class USceneComponent* DefaultSceneRoot;
    class UEnemyDescriptor* EnemyToSpawn;
    bool CanSpawn;
    float ChainReactionDistance;
    float ChainReactionProbability;
    float ChainReactionDelayMin;
    float ChainReactionDelayMax;
    TArray<class USceneComponent*> TunnelCarvers;
    int32 NutTunnelsDesired;
    float SpawnProbability;
    float MinSpawnDistanceFromDropPod;
    TArray<class USceneComponent*> ExitCarvers;

    void ReceiveBeginPlay();
    void TriggerNeighbours();
    void ChainReaction();
    void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayCreepySound();
    void ExecuteUbergraph_BP_SwarmerTunnelsBase(int32 EntryPoint);
};

#endif
