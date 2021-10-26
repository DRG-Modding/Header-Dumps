// BlueprintGeneratedClass AIC_ShootingPlant.AIC_ShootingPlant_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_ShootingPlant_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void Recieve_BlackboardValueChanged(FName KeyName);
	UFUNCTION(BlueprintCallable) void OnDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void StartBehavior();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_ShootingPlant(int32_t EntryPoint);
};

