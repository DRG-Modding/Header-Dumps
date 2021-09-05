// BlueprintGeneratedClass BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_MagicCrystalSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	FTransform NewVar_1; // 0x230(0x30)

	void AttachActorToParent(AActor* Class, FTransform SpawnTransform, AActor* ParentActor, AActor* AttachedActor);
	void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	void Spawn Magic Crystal();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MagicCrystalSpawner(int32_t EntryPoint);
};

