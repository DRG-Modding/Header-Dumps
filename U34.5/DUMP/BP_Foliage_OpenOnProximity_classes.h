// BlueprintGeneratedClass BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_Foliage_OpenOnProximity_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	UCapsuleComponent* HitBox_Closed; // 0x230(0x08)
	UCapsuleComponent* HitBox_Open; // 0x238(0x08)
	UBoxComponent* Box; // 0x240(0x08)
	USphereComponent* WalkinTrigger; // 0x248(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	UPathfinderCollisionComponent* PathfinderCollision1; // 0x258(0x08)
	USkeletalMeshComponent* Mesh; // 0x260(0x08)
	USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	UAnimSequenceBase* ReactAnimation; // 0x270(0x08)
	USoundCue* deathSound; // 0x278(0x08)
	float AnimationDuration; // 0x280(0x04)

	void ReceiveBeginPlay();
	void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Close Flower();
	void PlayCloseSequence();
	void ExecuteUbergraph_BP_Foliage_OpenOnProximity(int32_t EntryPoint);
};

