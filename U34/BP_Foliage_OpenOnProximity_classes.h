// BlueprintGeneratedClass BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_Foliage_OpenOnProximity_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	struct UCapsuleComponent* HitBox_Closed; // 0x230(0x08)
	struct UCapsuleComponent* HitBox_Open; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct USphereComponent* WalkinTrigger; // 0x248(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision1; // 0x258(0x08)
	struct USkeletalMeshComponent* Mesh; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct UAnimSequenceBase* ReactAnimation; // 0x270(0x08)
	struct USoundCue* deathSound; // 0x278(0x08)
	float AnimationDuration; // 0x280(0x04)

	void ReceiveBeginPlay(); // Function BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C.ReceiveBeginPlay
	void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C.BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void Close Flower(); // Function BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C.Close Flower
	void PlayCloseSequence(); // Function BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C.PlayCloseSequence
	void ExecuteUbergraph_BP_Foliage_OpenOnProximity(int32_t EntryPoint); // Function BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C.ExecuteUbergraph_BP_Foliage_OpenOnProximity
};

