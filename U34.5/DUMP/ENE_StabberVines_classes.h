// BlueprintGeneratedClass ENE_StabberVines.ENE_StabberVines_C
// Size: 0x400 (Inherited: 0x338)
struct AENE_StabberVines_C : AEnemyPawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UOutlineComponent* outline; // 0x340(0x08)
	UBillboardComponent* AttackPosition; // 0x348(0x08)
	UStaticMeshComponent* U33_BiomPlant_ThornBlob_003; // 0x350(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x358(0x08)
	UBillboardComponent* HeadSpawnPosition1; // 0x360(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x368(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	UBillboardComponent* HeadSpawnPosition3; // 0x378(0x08)
	UBillboardComponent* HeadSpawnPosition2; // 0x380(0x08)
	UStaticMeshComponent* Body; // 0x388(0x08)
	USceneComponent* DefaultSceneRoot; // 0x390(0x08)
	float HeadMovementDuration; // 0x398(0x04)
	TArray<ABP_StabberVine_Tentacle_C*> TentaclesCPP; // 0x3a0(0x10)
	bool IsBusy; // 0x3b0(0x01)
	TArray<FTransform> HydraHeadsSpawnRelativeTransforms; // 0x3b8(0x10)
	FName MaterialColourParamString; // 0x3c8(0x08)
	FLinearColor IdleColor; // 0x3d0(0x10)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x3e0(0x08)
	float NormalHeadMovementDurration; // 0x3e8(0x04)
	float AttackTimer; // 0x3ec(0x04)
	float AttackDistance; // 0x3f0(0x04)
	FTimerHandle AttackTimerHandle; // 0x3f8(0x08)

	void TryStartMeleeAttack();
	void AreAllTentaclesDead(bool OutAllDead);
	void GenerateRandomSpikePositions(int32_t SpikeIndex, FVector SpikeLocation, FRotator SpikeRotation);
	void ReceiveBeginPlay();
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void RemoveHead(ABP_StabberVine_Tentacle_C* HeadRef);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void SetupTargetDetection();
	void SetupTentacles();
	void Kill Root();
	void BndEvt__Outline_K2Node_ComponentBoundEvent_1_OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	void ExecuteUbergraph_ENE_StabberVines(int32_t EntryPoint);
};

