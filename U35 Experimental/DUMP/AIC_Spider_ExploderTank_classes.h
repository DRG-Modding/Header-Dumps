// BlueprintGeneratedClass AIC_Spider_ExploderTank.AIC_Spider_ExploderTank_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_ExploderTank_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void TookDamage(float amount);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_ExploderTank(int32_t EntryPoint);
};

