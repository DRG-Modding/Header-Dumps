// BlueprintGeneratedClass AIC_Maggot.AIC_Maggot_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Maggot_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBehaviorTree* BehaviorTree; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Maggot(int32_t EntryPoint);
};

