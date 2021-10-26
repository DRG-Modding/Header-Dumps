// BlueprintGeneratedClass EWC_Escort_EndDefense.EWC_Escort_EndDefense_C
// Size: 0x74 (Inherited: 0x4c)
struct UEWC_Escort_EndDefense_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) TArray<FVector> SpawnLocations; 
	UPROPERTY(BlueprintReadWrite) FVector DestinationLocation; 

	UFUNCTION(BlueprintCallable) void GetDestinationLocation(FVector Location);
	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void StopConstantPreassure();
	UFUNCTION(BlueprintCallable) void LoopWave();
	UFUNCTION(BlueprintCallable) void SpawnNewWave();
	UFUNCTION(BlueprintCallable) void SpawnLastWave();
	UFUNCTION(BlueprintCallable) void SpawnExtraEnemiesDurringRockAttack();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_Escort_EndDefense(int32_t EntryPoint);
};

