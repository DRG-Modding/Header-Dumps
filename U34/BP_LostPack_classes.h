// BlueprintGeneratedClass BP_LostPack.BP_LostPack_C
// Size: 0x434 (Inherited: 0x288)
struct ABP_LostPack_C : ATreasureContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UParticleSystemComponent* P_TreasureChest_HolloStreaks; // 0x290(0x08)
	struct UStaticMeshComponent* Carver9; // 0x298(0x08)
	struct UStaticMeshComponent* Carver8; // 0x2a0(0x08)
	struct UBillboardComponent* ExplosionLocation4; // 0x2a8(0x08)
	struct UStaticMeshComponent* Carver19; // 0x2b0(0x08)
	struct UStaticMeshComponent* Carver18; // 0x2b8(0x08)
	struct UStaticMeshComponent* Carver17; // 0x2c0(0x08)
	struct UStaticMeshComponent* Carver16; // 0x2c8(0x08)
	struct UStaticMeshComponent* Carver15; // 0x2d0(0x08)
	struct USceneComponent* NegativeCarvers; // 0x2d8(0x08)
	struct USceneComponent* UnusedCarvers; // 0x2e0(0x08)
	struct UBillboardComponent* ExplosionLocation3; // 0x2e8(0x08)
	struct UStaticMeshComponent* Carver14; // 0x2f0(0x08)
	struct UExplosionComponent* Explosion; // 0x2f8(0x08)
	struct UStaticMeshComponent* Carver13; // 0x300(0x08)
	struct UStaticMeshComponent* Carver7; // 0x308(0x08)
	struct UStaticMeshComponent* Carver6; // 0x310(0x08)
	struct UStaticMeshComponent* Carver3; // 0x318(0x08)
	struct UStaticMeshComponent* Carver2; // 0x320(0x08)
	struct USceneComponent* PositiveCarvers; // 0x328(0x08)
	struct UBoxComponent* Box1; // 0x330(0x08)
	struct UStaticMeshComponent* PackMesh; // 0x338(0x08)
	struct UPointLightComponent* PointLight; // 0x340(0x08)
	struct USphereComponent* Sphere2; // 0x348(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x350(0x08)
	struct USphereComponent* Sphere1; // 0x358(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x360(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x368(0x08)
	struct USphereComponent* Sphere; // 0x370(0x08)
	struct UStaticMeshComponent* BackPlane; // 0x378(0x08)
	struct UStaticMeshComponent* FrontPlane; // 0x380(0x08)
	struct USceneComponent* Scene; // 0x388(0x08)
	struct UBoxComponent* SpawnVolume; // 0x390(0x08)
	struct UOutlineComponent* outline; // 0x398(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x3a0(0x08)
	struct UStaticMeshComponent* Carver; // 0x3a8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x3b0(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x3b8(0x08)
	struct FVector2D ChunkAmountRange; // 0x3c0(0x08)
	struct FVector2D ChunkValueRange; // 0x3c8(0x08)
	struct TArray<struct UResourceData*> ResourceTypes; // 0x3d0(0x10)
	int32_t AmountToSpawn; // 0x3e0(0x04)
	struct FVector Spawn Location; // 0x3e4(0x0c)
	int32_t BackPackVersion; // 0x3f0(0x04)
	int32_t DetailIndex; // 0x3f4(0x04)
	int32_t MaxDetails; // 0x3f8(0x04)
	char UnknownData_3FC[0x4]; // 0x3fc(0x04)
	struct UDialogDataAsset* EnteredRoomShout; // 0x400(0x08)
	struct TArray<struct USceneComponent*> CarversArray; // 0x408(0x10)
	struct USoundBase* LostPackFoundMusic; // 0x418(0x08)
	struct USoundBase* CollectTreasureSound; // 0x420(0x08)
	struct FVector ExplosionCarveLocation; // 0x428(0x0c)

	void OnRep_BackPackVersion(); // Function BP_LostPack.BP_LostPack_C.OnRep_BackPackVersion
	void ActivateBeacon(); // Function BP_LostPack.BP_LostPack_C.ActivateBeacon
	void ReceiveBeginPlay(); // Function BP_LostPack.BP_LostPack_C.ReceiveBeginPlay
	void OnLocalPlayerCollectedTreasure(struct APlayerCharacter* Player); // Function BP_LostPack.BP_LostPack_C.OnLocalPlayerCollectedTreasure
	void SetupChunkSpawn(); // Function BP_LostPack.BP_LostPack_C.SetupChunkSpawn
	void SpawnChunks(); // Function BP_LostPack.BP_LostPack_C.SpawnChunks
	void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_LostPack.BP_LostPack_C.BndEvt__CollectUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ReceiveTick(float DeltaSeconds); // Function BP_LostPack.BP_LostPack_C.ReceiveTick
	void BndEvt__Sphere2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_LostPack.BP_LostPack_C.BndEvt__Sphere2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void ALL_PlayMusic(); // Function BP_LostPack.BP_LostPack_C.ALL_PlayMusic
	void BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_LostPack.BP_LostPack_C.BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void CarveDetails(); // Function BP_LostPack.BP_LostPack_C.CarveDetails
	void PlaceTreasure(); // Function BP_LostPack.BP_LostPack_C.PlaceTreasure
	void CarveMoreSpace(); // Function BP_LostPack.BP_LostPack_C.CarveMoreSpace
	void OnDisableChestLocally(); // Function BP_LostPack.BP_LostPack_C.OnDisableChestLocally
	void TestReward(); // Function BP_LostPack.BP_LostPack_C.TestReward
	void ExecuteUbergraph_BP_LostPack(int32_t EntryPoint); // Function BP_LostPack.BP_LostPack_C.ExecuteUbergraph_BP_LostPack
};

