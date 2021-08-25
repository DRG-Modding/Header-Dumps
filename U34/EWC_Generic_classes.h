// BlueprintGeneratedClass EWC_Generic.EWC_Generic_C
// Size: 0x68 (Inherited: 0x4c)
struct UEWC_Generic_C : UEWC_Base_C {
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	struct TArray<struct FVector> SpawnLocations; // 0x58(0x10)

	void StartWave(); // Function EWC_Generic.EWC_Generic_C.StartWave
	void StopConstantPreassure(); // Function EWC_Generic.EWC_Generic_C.StopConstantPreassure
	void ExecuteUbergraph_EWC_Generic(int32_t EntryPoint); // Function EWC_Generic.EWC_Generic_C.ExecuteUbergraph_EWC_Generic
};

