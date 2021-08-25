// BlueprintGeneratedClass BP_SpotpipeSpawner.BP_SpotpipeSpawner_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_SpotpipeSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void SpawnSpotpipe(); // Function BP_SpotpipeSpawner.BP_SpotpipeSpawner_C.SpawnSpotpipe
	void AttachActorToParent(struct AActor* ParentActor, struct AActor* ActorToAttach, struct FTransform RelativeTransform, struct AActor* AttachedActor); // Function BP_SpotpipeSpawner.BP_SpotpipeSpawner_C.AttachActorToParent
	void GetAllPlayerControllers(struct TArray<struct APlayerController*> Controllers); // Function BP_SpotpipeSpawner.BP_SpotpipeSpawner_C.GetAllPlayerControllers
	void ReceiveBeginPlay(); // Function BP_SpotpipeSpawner.BP_SpotpipeSpawner_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_SpotpipeSpawner(int32_t EntryPoint); // Function BP_SpotpipeSpawner.BP_SpotpipeSpawner_C.ExecuteUbergraph_BP_SpotpipeSpawner
};

