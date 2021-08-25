// BlueprintGeneratedClass EWC_Escort_EndDefense.EWC_Escort_EndDefense_C
// Size: 0x74 (Inherited: 0x4c)
struct UEWC_Escort_EndDefense_C : UEWC_Base_C {
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	struct TArray<struct FVector> SpawnLocations; // 0x58(0x10)
	struct FVector DestinationLocation; // 0x68(0x0c)

	void GetDestinationLocation(struct FVector Location); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.GetDestinationLocation
	void StartWave(); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.StartWave
	void StopConstantPreassure(); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.StopConstantPreassure
	void LoopWave(); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.LoopWave
	void SpawnNewWave(); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.SpawnNewWave
	void SpawnLastWave(); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.SpawnLastWave
	void SpawnExtraEnemiesDurringRockAttack(); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.SpawnExtraEnemiesDurringRockAttack
	void ExecuteUbergraph_EWC_Escort_EndDefense(int32_t EntryPoint); // Function EWC_Escort_EndDefense.EWC_Escort_EndDefense_C.ExecuteUbergraph_EWC_Escort_EndDefense
};

