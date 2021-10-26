// BlueprintGeneratedClass AIC_InsectSwarm.AIC_InsectSwarm_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_InsectSwarm_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FName IsAlertedKey; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_InsectSwarm(int32_t EntryPoint);
};

