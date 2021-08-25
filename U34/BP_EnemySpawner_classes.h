// BlueprintGeneratedClass BP_EnemySpawner.BP_EnemySpawner_C
// Size: 0x39a (Inherited: 0x338)
struct ABP_EnemySpawner_C : AEnemyPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	float Spawn Interval; // 0x348(0x04)
	int32_t AliveCount; // 0x34c(0x04)
	int32_t MaxConcurrentEnemies; // 0x350(0x04)
	int32_t SpawnCount; // 0x354(0x04)
	int32_t MaxTotalSpawnCount; // 0x358(0x04)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct UEnemySpawnManager* Manager; // 0x360(0x08)
	struct FMulticastInlineDelegate On Begin Play; // 0x368(0x10)
	struct TArray<struct FEnemySpawnWave> Spawns; // 0x378(0x10)
	struct TArray<struct UEnemyDescriptor*> SpawnQueue; // 0x388(0x10)
	bool IsAlertet; // 0x398(0x01)
	bool PlayersClose; // 0x399(0x01)

	void SetInactive(struct AActor* Target); // Function BP_EnemySpawner.BP_EnemySpawner_C.SetInactive
	bool CanSpawn(struct UEnemyDescriptor* EnemyClass); // Function BP_EnemySpawner.BP_EnemySpawner_C.CanSpawn
	void ReceiveBeginPlay(); // Function BP_EnemySpawner.BP_EnemySpawner_C.ReceiveBeginPlay
	void Spawn(); // Function BP_EnemySpawner.BP_EnemySpawner_C.Spawn
	void SpawnActor(struct UEnemyDescriptor* Class); // Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnActor
	void SpawnFromQueue(); // Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnFromQueue
	void OnEnemySpawned(struct APawn* enemy); // Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemySpawned
	void OnEnemyDeath(struct UHealthComponentBase* HealthComponent); // Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemyDeath
	void CheckForPlayerProximity(); // Function BP_EnemySpawner.BP_EnemySpawner_C.CheckForPlayerProximity
	void ExecuteUbergraph_BP_EnemySpawner(int32_t EntryPoint); // Function BP_EnemySpawner.BP_EnemySpawner_C.ExecuteUbergraph_BP_EnemySpawner
	void On Begin Play__DelegateSignature(); // Function BP_EnemySpawner.BP_EnemySpawner_C.On Begin Play__DelegateSignature
};

