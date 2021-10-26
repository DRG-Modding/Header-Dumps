// BlueprintGeneratedClass BP_DepositorSpawner.BP_DepositorSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_DepositorSpawner_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FTransform NewVar_1; 

	UFUNCTION(BlueprintCallable) void AttachActorToParent(AActor* Class, FTransform SpawnTransform, AActor* ParentActor, AActor* AttachedActor);
	UFUNCTION(BlueprintCallable) void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	UFUNCTION(BlueprintCallable) void SpawnDepositor();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DepositorSpawner(int32_t EntryPoint);
};

