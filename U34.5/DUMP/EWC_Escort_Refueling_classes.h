// BlueprintGeneratedClass EWC_Escort_Refueling.EWC_Escort_Refueling_C
// Size: 0x78 (Inherited: 0x4c)
struct UEWC_Escort_Refueling_C : UEWC_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	FVector TunnelEntranceLocation; // 0x58(0x0c)
	float DelayBetweenWaves; // 0x64(0x04)
	int32_t WaveCountConstantPressure; // 0x68(0x04)
	AActor* Drilldozer; // 0x70(0x08)

	void StartWave();
	void ExecuteUbergraph_EWC_Escort_Refueling(int32_t EntryPoint);
};

