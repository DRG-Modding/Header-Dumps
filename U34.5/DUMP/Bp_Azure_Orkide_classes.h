// BlueprintGeneratedClass Bp_Azure_Orkide.Bp_Azure_Orkide_C
// Size: 0x288 (Inherited: 0x220)
struct ABp_Azure_Orkide_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	UCapsuleComponent* HitBox_Closed; // 0x230(0x08)
	UCapsuleComponent* HitBox_Open; // 0x238(0x08)
	UBoxComponent* Box; // 0x240(0x08)
	USphereComponent* WalkinTrigger; // 0x248(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x250(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	UPathfinderCollisionComponent* PathfinderCollision1; // 0x268(0x08)
	USphereComponent* Trigger; // 0x270(0x08)
	USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Orkid; // 0x278(0x08)
	USceneComponent* DefaultSceneRoot; // 0x280(0x08)

	void ReceiveBeginPlay();
	void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Close Flower();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void PlayCloseSequence();
	void ExecuteUbergraph_Bp_Azure_Orkide(int32_t EntryPoint);
};

