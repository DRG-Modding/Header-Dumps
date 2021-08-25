// BlueprintGeneratedClass EWC_PumpSequence_ConstantPresure_Refinery.EWC_PumpSequence_ConstantPresure_Refinery_C
// Size: 0x70 (Inherited: 0x4c)
struct UEWC_PumpSequence_ConstantPresure_Refinery_C : UEWC_Base_C {
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	int32_t WaveCountConstantPressure; // 0x58(0x04)
	int32_t WaveCountWaves; // 0x5c(0x04)
	struct FTimerHandle ConstantWaveTimer; // 0x60(0x08)
	struct FTimerHandle WaveTimer; // 0x68(0x08)

	struct FVector Get Refinery Location(); // Function EWC_PumpSequence_ConstantPresure_Refinery.EWC_PumpSequence_ConstantPresure_Refinery_C.Get Refinery Location
	struct UEnemyWaveManager* GetWaveManager(); // Function EWC_PumpSequence_ConstantPresure_Refinery.EWC_PumpSequence_ConstantPresure_Refinery_C.GetWaveManager
	void StartWave(); // Function EWC_PumpSequence_ConstantPresure_Refinery.EWC_PumpSequence_ConstantPresure_Refinery_C.StartWave
	void OnWaveCompleted(); // Function EWC_PumpSequence_ConstantPresure_Refinery.EWC_PumpSequence_ConstantPresure_Refinery_C.OnWaveCompleted
	void ExecuteUbergraph_EWC_PumpSequence_ConstantPresure_Refinery(int32_t EntryPoint); // Function EWC_PumpSequence_ConstantPresure_Refinery.EWC_PumpSequence_ConstantPresure_Refinery_C.ExecuteUbergraph_EWC_PumpSequence_ConstantPresure_Refinery
};

