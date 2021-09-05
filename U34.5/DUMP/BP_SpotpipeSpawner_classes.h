// BlueprintGeneratedClass BP_SpotpipeSpawner.BP_SpotpipeSpawner_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_SpotpipeSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void SpawnSpotpipe();
	void AttachActorToParent(AActor* ParentActor, AActor* ActorToAttach, FTransform RelativeTransform, AActor* AttachedActor);
	void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpotpipeSpawner(int32_t EntryPoint);
};

