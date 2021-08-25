// BlueprintGeneratedClass EWC_Escort_DigPhase.EWC_Escort_DigPhase_C
// Size: 0x84 (Inherited: 0x4c)
struct UEWC_Escort_DigPhase_C : UEWC_Base_C {
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	struct FVector FirstSpawnLocationOverride; // 0x58(0x0c)
	float DelayBetweenWaves; // 0x64(0x04)
	int32_t WaveCountConstantPressure; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct AActor* Drilldozer; // 0x70(0x08)
	struct AAIC_EscortMule_C* DrilldoserAIC; // 0x78(0x08)
	int32_t WaveCountBigTunnelWave; // 0x80(0x04)

	void StartWave(); // Function EWC_Escort_DigPhase.EWC_Escort_DigPhase_C.StartWave
	void SpawnWaves(); // Function EWC_Escort_DigPhase.EWC_Escort_DigPhase_C.SpawnWaves
	void LoopSpawnWaves(); // Function EWC_Escort_DigPhase.EWC_Escort_DigPhase_C.LoopSpawnWaves
	void OnWaveCompleted(); // Function EWC_Escort_DigPhase.EWC_Escort_DigPhase_C.OnWaveCompleted
	void ExecuteUbergraph_EWC_Escort_DigPhase(int32_t EntryPoint); // Function EWC_Escort_DigPhase.EWC_Escort_DigPhase_C.ExecuteUbergraph_EWC_Escort_DigPhase
};

