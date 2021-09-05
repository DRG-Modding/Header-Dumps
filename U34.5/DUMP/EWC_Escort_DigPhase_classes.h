// BlueprintGeneratedClass EWC_Escort_DigPhase.EWC_Escort_DigPhase_C
// Size: 0x84 (Inherited: 0x4c)
struct UEWC_Escort_DigPhase_C : UEWC_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	FVector FirstSpawnLocationOverride; // 0x58(0x0c)
	float DelayBetweenWaves; // 0x64(0x04)
	int32_t WaveCountConstantPressure; // 0x68(0x04)
	AActor* Drilldozer; // 0x70(0x08)
	AAIC_EscortMule_C* DrilldoserAIC; // 0x78(0x08)
	int32_t WaveCountBigTunnelWave; // 0x80(0x04)

	void StartWave();
	void SpawnWaves();
	void LoopSpawnWaves();
	void OnWaveCompleted();
	void ExecuteUbergraph_EWC_Escort_DigPhase(int32_t EntryPoint);
};

