// BlueprintGeneratedClass AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Tank_Boss_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void OnArmorDestroyed(float EnrageDuration);
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void StartSpeedModifier();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Tank_Boss(int32_t EntryPoint);
};

