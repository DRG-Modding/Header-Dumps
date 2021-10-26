// BlueprintGeneratedClass EWC_Generic.EWC_Generic_C
// Size: 0x68 (Inherited: 0x4c)
struct UEWC_Generic_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) TArray<FVector> SpawnLocations; 

	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void StopConstantPreassure();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_Generic(int32_t EntryPoint);
};

