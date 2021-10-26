// BlueprintGeneratedClass AIC_Shark.AIC_Shark_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_Shark_C : AEnemyAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Shark(int32_t EntryPoint);
};

