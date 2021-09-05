// BlueprintGeneratedClass BP_DepositorSpawner.BP_DepositorSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_DepositorSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	FTransform NewVar_1; // 0x230(0x30)

	void AttachActorToParent(AActor* Class, FTransform SpawnTransform, AActor* ParentActor, AActor* AttachedActor);
	void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	void SpawnDepositor();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DepositorSpawner(int32_t EntryPoint);
};

