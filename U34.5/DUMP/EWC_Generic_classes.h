// BlueprintGeneratedClass EWC_Generic.EWC_Generic_C
// Size: 0x68 (Inherited: 0x4c)
struct UEWC_Generic_C : UEWC_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	TArray<FVector> SpawnLocations; // 0x58(0x10)

	void StartWave();
	void StopConstantPreassure();
	void ExecuteUbergraph_EWC_Generic(int32_t EntryPoint);
};

