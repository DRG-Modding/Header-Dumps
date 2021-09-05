// BlueprintGeneratedClass BP_MagicHoleSpawner.BP_MagicHoleSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_MagicHoleSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	FTransform NewVar_1; // 0x230(0x30)

	void AttachActorToParent(AActor* Class, FTransform SpawnTransform, AActor* ParentActor, AActor* AttachedActor);
	void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	void Spawn Magic Hole();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MagicHoleSpawner(int32_t EntryPoint);
};

