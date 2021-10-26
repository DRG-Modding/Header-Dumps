// BlueprintGeneratedClass BP_EnemySpawner.BP_EnemySpawner_C
// Size: 0x39a (Inherited: 0x338)
struct ABP_EnemySpawner_C : AEnemyPawn {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Spawn Interval; 
	UPROPERTY(BlueprintReadWrite) int32_t AliveCount; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxConcurrentEnemies; 
	UPROPERTY(BlueprintReadWrite) int32_t SpawnCount; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxTotalSpawnCount; 
	UPROPERTY(BlueprintReadWrite) UEnemySpawnManager* Manager; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Begin Play; 
	UPROPERTY(BlueprintReadWrite) TArray<FEnemySpawnWave> Spawns; 
	UPROPERTY(BlueprintReadWrite) TArray<UEnemyDescriptor*> SpawnQueue; 
	UPROPERTY(BlueprintReadWrite) bool IsAlertet; 
	UPROPERTY(BlueprintReadWrite) bool PlayersClose; 

	UFUNCTION(BlueprintCallable) void SetInactive(AActor* Target);
	UFUNCTION(BlueprintCallable) bool CanSpawn(UEnemyDescriptor* EnemyClass);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Spawn();
	UFUNCTION(BlueprintCallable) void SpawnActor(UEnemyDescriptor* Class);
	UFUNCTION(BlueprintCallable) void SpawnFromQueue();
	UFUNCTION(BlueprintCallable) void OnEnemySpawned(APawn* enemy);
	UFUNCTION(BlueprintCallable) void OnEnemyDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void CheckForPlayerProximity();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_EnemySpawner(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Begin Play__DelegateSignature();
};

