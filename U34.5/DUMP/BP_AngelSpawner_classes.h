// BlueprintGeneratedClass BP_AngelSpawner.BP_AngelSpawner_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_AngelSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void SpawnAngel();
	void AttachActorToParent(AActor* ParentActor, AActor* ActorToAttach, FTransform RelativeTransform, AActor* AttachedActor);
	void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AngelSpawner(int32_t EntryPoint);
};

