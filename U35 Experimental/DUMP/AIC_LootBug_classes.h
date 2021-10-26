// BlueprintGeneratedClass AIC_LootBug.AIC_LootBug_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_LootBug_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void OnDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_LootBug(int32_t EntryPoint);
};

