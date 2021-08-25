// BlueprintGeneratedClass EWC_Escort_Refueling.EWC_Escort_Refueling_C
// Size: 0x78 (Inherited: 0x4c)
struct UEWC_Escort_Refueling_C : UEWC_Base_C {
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	struct FVector TunnelEntranceLocation; // 0x58(0x0c)
	float DelayBetweenWaves; // 0x64(0x04)
	int32_t WaveCountConstantPressure; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct AActor* Drilldozer; // 0x70(0x08)

	void StartWave(); // Function EWC_Escort_Refueling.EWC_Escort_Refueling_C.StartWave
	void ExecuteUbergraph_EWC_Escort_Refueling(int32_t EntryPoint); // Function EWC_Escort_Refueling.EWC_Escort_Refueling_C.ExecuteUbergraph_EWC_Escort_Refueling
};

