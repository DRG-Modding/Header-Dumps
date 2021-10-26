// BlueprintGeneratedClass EWC_Escort_Refueling.EWC_Escort_Refueling_C
// Size: 0x78 (Inherited: 0x4c)
struct UEWC_Escort_Refueling_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector TunnelEntranceLocation; 
	UPROPERTY(BlueprintReadWrite) float DelayBetweenWaves; 
	UPROPERTY(BlueprintReadWrite) int32_t WaveCountConstantPressure; 
	UPROPERTY(BlueprintReadWrite) AActor* Drilldozer; 

	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_Escort_Refueling(int32_t EntryPoint);
};

