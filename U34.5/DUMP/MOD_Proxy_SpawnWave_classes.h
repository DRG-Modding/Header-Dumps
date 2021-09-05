// BlueprintGeneratedClass MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C
// Size: 0x240 (Inherited: 0x220)
struct AMOD_Proxy_SpawnWave_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UEnemyWaveController* Wave; // 0x230(0x08)
	UEnemyWaveController* WaveInstance; // 0x238(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_MOD_Proxy_SpawnWave(int32_t EntryPoint);
};

