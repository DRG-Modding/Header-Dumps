// BlueprintGeneratedClass MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C
// Size: 0x24a (Inherited: 0x220)
struct AMOD_Proxy_SpawnEnemy_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UEnemyDescriptor* enemy; // 0x230(0x08)
	FMulticastInlineDelegate OnEnemySpawned; // 0x238(0x10)
	bool useSpawnFX; // 0x248(0x01)
	bool IsAlert; // 0x249(0x01)

	void ReceiveBeginPlay();
	void spawned(APawn* enemy);
	void ExecuteUbergraph_MOD_Proxy_SpawnEnemy(int32_t EntryPoint);
	void OnEnemySpawned__DelegateSignature(APawn* enemy);
};

