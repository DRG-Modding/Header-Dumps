// BlueprintGeneratedClass BP_MagicCrystalSpawner.BP_MagicCrystalSpawner_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_MagicCrystalSpawner_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FTransform NewVar_1; 

	UFUNCTION(BlueprintCallable) void AttachActorToParent(AActor* Class, FTransform SpawnTransform, AActor* ParentActor, AActor* AttachedActor);
	UFUNCTION(BlueprintCallable) void GetAllPlayerControllers(TArray<APlayerController*> Controllers);
	UFUNCTION(BlueprintCallable) void Spawn Magic Crystal();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MagicCrystalSpawner(int32_t EntryPoint);
};

