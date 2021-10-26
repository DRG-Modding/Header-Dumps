// BlueprintGeneratedClass AIC_Harvester.AIC_Harvester_C
// Size: 0x370 (Inherited: 0x358)
struct AAIC_Harvester_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBehaviorTree* BehaviorTree; 
	UPROPERTY(BlueprintReadWrite) UHealthComponentBase* HealthComponent; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Harvester(int32_t EntryPoint);
};

