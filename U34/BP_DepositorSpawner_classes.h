// BlueprintGeneratedClass BP_DepositorSpawner.BP_DepositorSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_DepositorSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FTransform NewVar_1; // 0x230(0x30)

	void AttachActorToParent(struct AActor* Class, struct FTransform SpawnTransform, struct AActor* ParentActor, struct AActor* AttachedActor); // Function BP_DepositorSpawner.BP_DepositorSpawner_C.AttachActorToParent
	void GetAllPlayerControllers(struct TArray<struct APlayerController*> Controllers); // Function BP_DepositorSpawner.BP_DepositorSpawner_C.GetAllPlayerControllers
	void SpawnDepositor(); // Function BP_DepositorSpawner.BP_DepositorSpawner_C.SpawnDepositor
	void ReceiveBeginPlay(); // Function BP_DepositorSpawner.BP_DepositorSpawner_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_DepositorSpawner(int32_t EntryPoint); // Function BP_DepositorSpawner.BP_DepositorSpawner_C.ExecuteUbergraph_BP_DepositorSpawner
};

