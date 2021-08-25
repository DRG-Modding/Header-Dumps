// BlueprintGeneratedClass BP_AngelSpawner.BP_SupportPodSpawner_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_SupportPodSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void SpawnSupportPod(); // Function BP_AngelSpawner.BP_SupportPodSpawner_C.SpawnSupportPod
	void AttachActorToParent(struct AActor* ParentActor, struct AActor* ActorToAttach, struct FTransform RelativeTransform, struct AActor* AttachedActor); // Function BP_AngelSpawner.BP_SupportPodSpawner_C.AttachActorToParent
	void GetAllPlayerControllers(struct TArray<struct APlayerController*> Controllers); // Function BP_AngelSpawner.BP_SupportPodSpawner_C.GetAllPlayerControllers
	void ReceiveBeginPlay(); // Function BP_AngelSpawner.BP_SupportPodSpawner_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_SupportPodSpawner(int32_t EntryPoint); // Function BP_AngelSpawner.BP_SupportPodSpawner_C.ExecuteUbergraph_BP_SupportPodSpawner
};

// BlueprintGeneratedClass BP_AngelSpawner.BP_AngelSpawner_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_AngelSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void SpawnAngel(); // Function BP_AngelSpawner.BP_AngelSpawner_C.SpawnAngel
	void AttachActorToParent(struct AActor* ParentActor, struct AActor* ActorToAttach, struct FTransform RelativeTransform, struct AActor* AttachedActor); // Function BP_AngelSpawner.BP_AngelSpawner_C.AttachActorToParent
	void GetAllPlayerControllers(struct TArray<struct APlayerController*> Controllers); // Function BP_AngelSpawner.BP_AngelSpawner_C.GetAllPlayerControllers
	void ReceiveBeginPlay(); // Function BP_AngelSpawner.BP_AngelSpawner_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_AngelSpawner(int32_t EntryPoint); // Function BP_AngelSpawner.BP_AngelSpawner_C.ExecuteUbergraph_BP_AngelSpawner
};

