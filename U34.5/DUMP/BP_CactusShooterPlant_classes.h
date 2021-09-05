// BlueprintGeneratedClass BP_CactusShooterPlant.BP_CactusShooterPlant_C
// Size: 0x2c4 (Inherited: 0x220)
struct ABP_CactusShooterPlant_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x238(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x240(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	UBoxComponent* ShootSpinesTrigger; // 0x250(0x08)
	UCapsuleComponent* CapsuleCollision; // 0x258(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x260(0x08)
	USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	bool CanTrigger; // 0x270(0x01)
	float ResetTime; // 0x274(0x04)
	FMulticastInlineDelegate OnChangeState; // 0x278(0x10)
	FRotator SpikeDirection; // 0x288(0x0c)
	FRandomStream RandomSeedStream; // 0x294(0x08)
	FVector SpikeOrigin; // 0x29c(0x0c)
	float SpikeOriginHeight; // 0x2a8(0x04)
	int32_t NumSpikes; // 0x2ac(0x04)
	float SpikeDistributionAngle; // 0x2b0(0x04)
	FVector2D SpikeOriginHeightMinMax; // 0x2b4(0x08)
	bool AnyPlayerNearby; // 0x2bc(0x01)
	float MinPlayerDistance; // 0x2c0(0x04)

	void ReceiveBeginPlay();
	void BndEvt__ShootSpinesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ShootTheSpikes();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnTerrainPointRemoved();
	void PlayerNearby(APlayerCharacter* Player, bool enteredTrigger);
	void ExecuteUbergraph_BP_CactusShooterPlant(int32_t EntryPoint);
	void OnChangeState__DelegateSignature(bool IsIdle);
};

