// BlueprintGeneratedClass BP_PoisonGasFungus_PoisonGasCloud.BP_PoisonGasFungus_PoisonGasCloud_C
// Size: 0x274 (Inherited: 0x264)
struct ABP_PoisonGasFungus_PoisonGasCloud_C : ABP_Damage_Cloud_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float InitialDamageDelay; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_PoisonGasFungus_PoisonGasCloud(int32_t EntryPoint);
};

