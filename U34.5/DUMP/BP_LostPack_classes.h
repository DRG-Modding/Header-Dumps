// BlueprintGeneratedClass BP_LostPack.BP_LostPack_C
// Size: 0x434 (Inherited: 0x288)
struct ABP_LostPack_C : ATreasureContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UParticleSystemComponent* P_TreasureChest_HolloStreaks; // 0x290(0x08)
	UStaticMeshComponent* Carver9; // 0x298(0x08)
	UStaticMeshComponent* Carver8; // 0x2a0(0x08)
	UBillboardComponent* ExplosionLocation4; // 0x2a8(0x08)
	UStaticMeshComponent* Carver19; // 0x2b0(0x08)
	UStaticMeshComponent* Carver18; // 0x2b8(0x08)
	UStaticMeshComponent* Carver17; // 0x2c0(0x08)
	UStaticMeshComponent* Carver16; // 0x2c8(0x08)
	UStaticMeshComponent* Carver15; // 0x2d0(0x08)
	USceneComponent* NegativeCarvers; // 0x2d8(0x08)
	USceneComponent* UnusedCarvers; // 0x2e0(0x08)
	UBillboardComponent* ExplosionLocation3; // 0x2e8(0x08)
	UStaticMeshComponent* Carver14; // 0x2f0(0x08)
	UExplosionComponent* Explosion; // 0x2f8(0x08)
	UStaticMeshComponent* Carver13; // 0x300(0x08)
	UStaticMeshComponent* Carver7; // 0x308(0x08)
	UStaticMeshComponent* Carver6; // 0x310(0x08)
	UStaticMeshComponent* Carver3; // 0x318(0x08)
	UStaticMeshComponent* Carver2; // 0x320(0x08)
	USceneComponent* PositiveCarvers; // 0x328(0x08)
	UBoxComponent* Box1; // 0x330(0x08)
	UStaticMeshComponent* PackMesh; // 0x338(0x08)
	UPointLightComponent* PointLight; // 0x340(0x08)
	USphereComponent* Sphere2; // 0x348(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x350(0x08)
	USphereComponent* Sphere1; // 0x358(0x08)
	UStaticMeshComponent* StaticMesh; // 0x360(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x368(0x08)
	USphereComponent* Sphere; // 0x370(0x08)
	UStaticMeshComponent* BackPlane; // 0x378(0x08)
	UStaticMeshComponent* FrontPlane; // 0x380(0x08)
	USceneComponent* Scene; // 0x388(0x08)
	UBoxComponent* SpawnVolume; // 0x390(0x08)
	UOutlineComponent* outline; // 0x398(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x3a0(0x08)
	UStaticMeshComponent* Carver; // 0x3a8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3b0(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x3b8(0x08)
	FVector2D ChunkAmountRange; // 0x3c0(0x08)
	FVector2D ChunkValueRange; // 0x3c8(0x08)
	TArray<UResourceData*> ResourceTypes; // 0x3d0(0x10)
	int32_t AmountToSpawn; // 0x3e0(0x04)
	FVector Spawn Location; // 0x3e4(0x0c)
	int32_t BackPackVersion; // 0x3f0(0x04)
	int32_t DetailIndex; // 0x3f4(0x04)
	int32_t MaxDetails; // 0x3f8(0x04)
	UDialogDataAsset* EnteredRoomShout; // 0x400(0x08)
	TArray<USceneComponent*> CarversArray; // 0x408(0x10)
	USoundBase* LostPackFoundMusic; // 0x418(0x08)
	USoundBase* CollectTreasureSound; // 0x420(0x08)
	FVector ExplosionCarveLocation; // 0x428(0x0c)

	void OnRep_BackPackVersion();
	void ActivateBeacon();
	void ReceiveBeginPlay();
	void OnLocalPlayerCollectedTreasure(APlayerCharacter* Player);
	void SetupChunkSpawn();
	void SpawnChunks();
	void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Sphere2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void All_PlayMusic();
	void BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void CarveDetails();
	void PlaceTreasure();
	void CarveMoreSpace();
	void OnDisableChestLocally();
	void TestReward();
	void ExecuteUbergraph_BP_LostPack(int32_t EntryPoint);
};

