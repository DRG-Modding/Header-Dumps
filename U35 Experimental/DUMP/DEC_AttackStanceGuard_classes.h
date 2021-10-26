// BlueprintGeneratedClass DEC_AttackStanceGuard.DEC_AttackStanceGuard_C
// Size: 0xa8 (Inherited: 0xa0)
struct UDEC_AttackStanceGuard_C : UBTDecorator_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_DEC_AttackStanceGuard(int32_t EntryPoint);
};

