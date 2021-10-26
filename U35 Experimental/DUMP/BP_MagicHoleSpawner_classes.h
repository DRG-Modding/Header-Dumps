// BlueprintGeneratedClass BP_MagicHoleSpawner.BP_MagicHoleSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_MagicHoleSpawner_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FTransform NewVar_1; 

	UFUNCTION(BlueprintCallable) void AttachActorToParent(AActor* Class, FTransform SpawnTransform, AActor* ParentActor, AActor* AttachedActor);
	UFUNCTION(BlueprintCallable) void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	UFUNCTION(BlueprintCallable) void Spawn Magic Hole();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MagicHoleSpawner(int32_t EntryPoint);
};

