// BlueprintGeneratedClass BP_SpotpipeSpawner.BP_SpotpipeSpawner_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_SpotpipeSpawner_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void SpawnSpotpipe();
	UFUNCTION(BlueprintCallable) void AttachActorToParent(AActor* ParentActor, AActor* ActorToAttach, FTransform RelativeTransform, AActor* AttachedActor);
	UFUNCTION(BlueprintCallable) void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SpotpipeSpawner(int32_t EntryPoint);
};

