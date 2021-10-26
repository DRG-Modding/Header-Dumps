// BlueprintGeneratedClass EWC_PumpSequence_Wave_Refinery.EWC_PumpSequence_Wave_Refinery_C
// Size: 0x70 (Inherited: 0x4c)
struct UEWC_PumpSequence_Wave_Refinery_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) int32_t WaveCountConstantPressure; 
	UPROPERTY(BlueprintReadWrite) int32_t WaveCountWaves; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle ConstantWaveTimer; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle WaveTimer; 

	UFUNCTION(BlueprintCallable) FVector Get Refinery Location();
	UFUNCTION(BlueprintCallable) UEnemyWaveManager* GetWaveManager();
	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_PumpSequence_Wave_Refinery(int32_t EntryPoint);
};

