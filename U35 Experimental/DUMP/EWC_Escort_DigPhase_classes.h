// BlueprintGeneratedClass EWC_Escort_DigPhase.EWC_Escort_DigPhase_C
// Size: 0x84 (Inherited: 0x4c)
struct UEWC_Escort_DigPhase_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector FirstSpawnLocationOverride; 
	UPROPERTY(BlueprintReadWrite) float DelayBetweenWaves; 
	UPROPERTY(BlueprintReadWrite) int32_t WaveCountConstantPressure; 
	UPROPERTY(BlueprintReadWrite) AActor* Drilldozer; 
	UPROPERTY(BlueprintReadWrite) AAIC_EscortMule_C* DrilldoserAIC; 
	UPROPERTY(BlueprintReadWrite) int32_t WaveCountBigTunnelWave; 

	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void SpawnWaves();
	UFUNCTION(BlueprintCallable) void LoopSpawnWaves();
	UFUNCTION(BlueprintCallable) void OnWaveCompleted();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_Escort_DigPhase(int32_t EntryPoint);
};

