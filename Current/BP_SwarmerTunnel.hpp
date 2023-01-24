#ifndef UE4SS_SDK_BP_SwarmerTunnel_HPP
#define UE4SS_SDK_BP_SwarmerTunnel_HPP

class ABP_SwarmerTunnel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* SpiderSpawnPoint3;
    class ULevelGenerationCarverComponent* e1;
    class ULevelGenerationCarverComponent* e3;
    class ULevelGenerationCarverComponent* e2;
    class ULevelGenerationCarverComponent* e9;
    class ULevelGenerationCarverComponent* e8;
    class ULevelGenerationCarverComponent* e6;
    class ULevelGenerationCarverComponent* e7;
    class ULevelGenerationCarverComponent* e4;
    class ULevelGenerationCarverComponent* e5;
    class ULevelGenerationCarverComponent* t1;
    class ULevelGenerationCarverComponent* t3;
    class ULevelGenerationCarverComponent* t2;
    class ULevelGenerationCarverComponent* t9;
    class ULevelGenerationCarverComponent* t8;
    class ULevelGenerationCarverComponent* t6;
    class ULevelGenerationCarverComponent* t7;
    class ULevelGenerationCarverComponent* t4;
    class ULevelGenerationCarverComponent* t5;
    class USceneComponent* tunnels;
    class UBillboardComponent* WarningPoint;
    class UStaticMeshComponent* SM_Prim_Cylinder_08sides;
    class ULevelGenerationCarverComponent* FillerMaterial;
    class UStaticMeshComponent* StaticMesh19;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh11;
    class UBillboardComponent* SpiderSpawnPoint2;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class ULevelGenerationCarverComponent* BAckTunnel2;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class USphereComponent* TriggerSphere;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* BackTunnel;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
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
    void ExecuteUbergraph_BP_SwarmerTunnel(int32 EntryPoint);
};

#endif
