// BlueprintGeneratedClass BP_LocalWaveTrigger.BP_LocalWaveTrigger_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_LocalWaveTrigger_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void CheckForNearbyPlayers();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_LocalWaveTrigger(int32_t EntryPoint);
};

