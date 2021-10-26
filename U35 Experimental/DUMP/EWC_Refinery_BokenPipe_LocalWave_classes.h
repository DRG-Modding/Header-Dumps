// BlueprintGeneratedClass EWC_Refinery_BokenPipe_LocalWave.EWC_Refinery_BokenPipe_LocalWave_C
// Size: 0x64 (Inherited: 0x4c)
struct UEWC_Refinery_BokenPipe_LocalWave_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector SpawnLocation; 

	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_Refinery_BokenPipe_LocalWave(int32_t EntryPoint);
};

