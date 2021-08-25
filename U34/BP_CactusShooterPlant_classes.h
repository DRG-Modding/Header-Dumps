// BlueprintGeneratedClass BP_CactusShooterPlant.BP_CactusShooterPlant_C
// Size: 0x2c4 (Inherited: 0x220)
struct ABP_CactusShooterPlant_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x238(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x240(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	struct UBoxComponent* ShootSpinesTrigger; // 0x250(0x08)
	struct UCapsuleComponent* CapsuleCollision; // 0x258(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	bool CanTrigger; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	float ResetTime; // 0x274(0x04)
	struct FMulticastInlineDelegate OnChangeState; // 0x278(0x10)
	struct FRotator SpikeDirection; // 0x288(0x0c)
	struct FRandomStream RandomSeedStream; // 0x294(0x08)
	struct FVector SpikeOrigin; // 0x29c(0x0c)
	float SpikeOriginHeight; // 0x2a8(0x04)
	int32_t NumSpikes; // 0x2ac(0x04)
	float SpikeDistributionAngle; // 0x2b0(0x04)
	struct FVector2D SpikeOriginHeightMinMax; // 0x2b4(0x08)
	bool AnyPlayerNearby; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	float MinPlayerDistance; // 0x2c0(0x04)

	void ReceiveBeginPlay(); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.ReceiveBeginPlay
	void BndEvt__ShootSpinesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.BndEvt__ShootSpinesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void ShootTheSpikes(); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.ShootTheSpikes
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.OnTerrainPointRemoved
	void PlayerNearby(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.PlayerNearby
	void ExecuteUbergraph_BP_CactusShooterPlant(int32_t EntryPoint); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.ExecuteUbergraph_BP_CactusShooterPlant
	void OnChangeState__DelegateSignature(bool IsIdle); // Function BP_CactusShooterPlant.BP_CactusShooterPlant_C.OnChangeState__DelegateSignature
};

