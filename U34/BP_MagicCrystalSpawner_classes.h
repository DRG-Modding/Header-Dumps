// BlueprintGeneratedClass BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_MagicCrystalSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FTransform NewVar_1; // 0x230(0x30)

	void AttachActorToParent(struct AActor* Class, struct FTransform SpawnTransform, struct AActor* ParentActor, struct AActor* AttachedActor); // Function BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C.AttachActorToParent
	void GetAllPlayerControllers(struct TArray<struct APlayerController*> Controllers); // Function BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C.GetAllPlayerControllers
	void Spawn Magic Crystal(); // Function BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C.Spawn Magic Crystal
	void ReceiveBeginPlay(); // Function BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_MagicCrystalSpawner(int32_t EntryPoint); // Function BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C.ExecuteUbergraph_BP_MagicCrystalSpawner
};

