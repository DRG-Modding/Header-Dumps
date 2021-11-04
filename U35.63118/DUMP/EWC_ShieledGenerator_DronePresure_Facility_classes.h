// BlueprintGeneratedClass EWC_ShieledGenerator_DronePresure_Facility.EWC_ShieledGenerator_DronePresure_Facility_C
// Size: 0x70 (Inherited: 0x4c)
struct UEWC_ShieledGenerator_DronePresure_Facility_C : UEWC_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	int32_t WaveCountConstantPressure; // 0x58(0x04)
	int32_t WaveCountWaves; // 0x5c(0x04)
	FTimerHandle ConstantWaveTimer; // 0x60(0x08)
	FTimerHandle WaveTimer; // 0x68(0x08)

	FVector Get Refinery Location();
	void StartWave();
	void OnWaveCompleted();
	void ExecuteUbergraph_EWC_ShieledGenerator_DronePresure_Facility(int32_t EntryPoint);
};
