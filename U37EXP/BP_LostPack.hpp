#ifndef UE4SS_SDK_BP_LostPack_HPP
#define UE4SS_SDK_BP_LostPack_HPP

class ABP_LostPack_C : public ATreasureContainer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UParticleSystemComponent* P_TreasureChest_HolloStreaks;
    class UStaticMeshComponent* Carver9;
    class UStaticMeshComponent* Carver8;
    class UBillboardComponent* ExplosionLocation4;
    class UStaticMeshComponent* Carver19;
    class UStaticMeshComponent* Carver18;
    class UStaticMeshComponent* Carver17;
    class UStaticMeshComponent* Carver16;
    class UStaticMeshComponent* Carver15;
    class USceneComponent* NegativeCarvers;
    class USceneComponent* UnusedCarvers;
    class UBillboardComponent* ExplosionLocation3;
    class UStaticMeshComponent* Carver14;
    class UExplosionComponent* Explosion;
    class UStaticMeshComponent* Carver13;
    class UStaticMeshComponent* Carver7;
    class UStaticMeshComponent* Carver6;
    class UStaticMeshComponent* Carver3;
    class UStaticMeshComponent* Carver2;
    class USceneComponent* PositiveCarvers;
    class UBoxComponent* Box1;
    class UStaticMeshComponent* PackMesh;
    class UPointLightComponent* PointLight;
    class USphereComponent* Sphere2;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere1;
    class UStaticMeshComponent* StaticMesh;
    class UTerrainDetectComponent* TerrainDetect;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* BackPlane;
    class UStaticMeshComponent* FrontPlane;
    class USceneComponent* Scene;
    class UBoxComponent* SpawnVolume;
    class UOutlineComponent* outline;
    class UDropToTerrainComponent* DropToTerrain;
    class UStaticMeshComponent* Carver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* TerrainScannerMesh;
    FVector2D ChunkAmountRange;
    FVector2D ChunkValueRange;
    TArray<class UResourceData*> ResourceTypes;
    int32 AmountToSpawn;
    FVector Spawn Location;
    int32 BackPackVersion;
    int32 DetailIndex;
    int32 MaxDetails;
    class UDialogDataAsset* EnteredRoomShout;
    TArray<class USceneComponent*> CarversArray;
    class USoundBase* LostPackFoundMusic;
    class USoundBase* CollectTreasureSound;
    FVector ExplosionCarveLocation;

    void OnRep_BackPackVersion();
    void ActivateBeacon();
    void ReceiveBeginPlay();
    void OnLocalPlayerCollectedTreasure(class APlayerCharacter* Player);
    void SetupChunkSpawn();
    void SpawnChunks();
    void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void All_PlayMusic();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CarveDetails();
    void PlaceTreasure();
    void CarveMoreSpace();
    void OnDisableChestLocally();
    void TestReward();
    void ExecuteUbergraph_BP_LostPack(int32 EntryPoint);
};

#endif
