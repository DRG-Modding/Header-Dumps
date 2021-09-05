// BlueprintGeneratedClass BP_EnemySpawner.BP_EnemySpawner_C
// Size: 0x39a (Inherited: 0x338)
struct ABP_EnemySpawner_C : AEnemyPawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	float Spawn Interval; // 0x348(0x04)
	int32_t AliveCount; // 0x34c(0x04)
	int32_t MaxConcurrentEnemies; // 0x350(0x04)
	int32_t SpawnCount; // 0x354(0x04)
	int32_t MaxTotalSpawnCount; // 0x358(0x04)
	UEnemySpawnManager* Manager; // 0x360(0x08)
	FMulticastInlineDelegate On Begin Play; // 0x368(0x10)
	TArray<FEnemySpawnWave> Spawns; // 0x378(0x10)
	TArray<UEnemyDescriptor*> SpawnQueue; // 0x388(0x10)
	bool IsAlertet; // 0x398(0x01)
	bool PlayersClose; // 0x399(0x01)

	void SetInactive(AActor* Target);
	bool CanSpawn(UEnemyDescriptor* EnemyClass);
	void ReceiveBeginPlay();
	void Spawn();
	void SpawnActor(UEnemyDescriptor* Class);
	void SpawnFromQueue();
	void OnEnemySpawned(APawn* enemy);
	void OnEnemyDeath(UHealthComponentBase* HealthComponent);
	void CheckForPlayerProximity();
	void ExecuteUbergraph_BP_EnemySpawner(int32_t EntryPoint);
	void On Begin Play__DelegateSignature();
};

