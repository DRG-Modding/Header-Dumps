// BlueprintGeneratedClass MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C
// Size: 0x240 (Inherited: 0x220)
struct AMOD_Proxy_SpawnWave_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UEnemyWaveController* Wave; // 0x230(0x08)
	struct UEnemyWaveController* WaveInstance; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C.ReceiveBeginPlay
	void ExecuteUbergraph_MOD_Proxy_SpawnWave(int32_t EntryPoint); // Function MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C.ExecuteUbergraph_MOD_Proxy_SpawnWave
};

