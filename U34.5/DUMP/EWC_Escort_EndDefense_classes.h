// BlueprintGeneratedClass EWC_Escort_EndDefense.EWC_Escort_EndDefense_C
// Size: 0x74 (Inherited: 0x4c)
struct UEWC_Escort_EndDefense_C : UEWC_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	TArray<FVector> SpawnLocations; // 0x58(0x10)
	FVector DestinationLocation; // 0x68(0x0c)

	void GetDestinationLocation(FVector Location);
	void StartWave();
	void StopConstantPreassure();
	void LoopWave();
	void SpawnNewWave();
	void SpawnLastWave();
	void SpawnExtraEnemiesDurringRockAttack();
	void ExecuteUbergraph_EWC_Escort_EndDefense(int32_t EntryPoint);
};

