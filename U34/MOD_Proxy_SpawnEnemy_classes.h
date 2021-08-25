// BlueprintGeneratedClass MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C
// Size: 0x24a (Inherited: 0x220)
struct AMOD_Proxy_SpawnEnemy_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UEnemyDescriptor* enemy; // 0x230(0x08)
	struct FMulticastInlineDelegate OnEnemySpawned; // 0x238(0x10)
	bool useSpawnFX; // 0x248(0x01)
	bool IsAlert; // 0x249(0x01)

	void ReceiveBeginPlay(); // Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ReceiveBeginPlay
	void spawned(struct APawn* enemy); // Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.spawned
	void ExecuteUbergraph_MOD_Proxy_SpawnEnemy(int32_t EntryPoint); // Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ExecuteUbergraph_MOD_Proxy_SpawnEnemy
	void OnEnemySpawned__DelegateSignature(struct APawn* enemy); // Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.OnEnemySpawned__DelegateSignature
};

