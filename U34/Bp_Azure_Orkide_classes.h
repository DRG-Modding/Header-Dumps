// BlueprintGeneratedClass Bp_Azure_Orkide.Bp_Azure_Orkide_C
// Size: 0x288 (Inherited: 0x220)
struct ABp_Azure_Orkide_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	struct UCapsuleComponent* HitBox_Closed; // 0x230(0x08)
	struct UCapsuleComponent* HitBox_Open; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct USphereComponent* WalkinTrigger; // 0x248(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x250(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision1; // 0x268(0x08)
	struct USphereComponent* Trigger; // 0x270(0x08)
	struct USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Orkid; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)

	void ReceiveBeginPlay(); // Function Bp_Azure_Orkide.Bp_Azure_Orkide_C.ReceiveBeginPlay
	void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Bp_Azure_Orkide.Bp_Azure_Orkide_C.BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void Close Flower(); // Function Bp_Azure_Orkide.Bp_Azure_Orkide_C.Close Flower
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function Bp_Azure_Orkide.Bp_Azure_Orkide_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void PlayCloseSequence(); // Function Bp_Azure_Orkide.Bp_Azure_Orkide_C.PlayCloseSequence
	void ExecuteUbergraph_Bp_Azure_Orkide(int32_t EntryPoint); // Function Bp_Azure_Orkide.Bp_Azure_Orkide_C.ExecuteUbergraph_Bp_Azure_Orkide
};

