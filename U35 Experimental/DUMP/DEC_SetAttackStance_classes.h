// BlueprintGeneratedClass DEC_SetAttackStance.DEC_SetAttackStance_C
// Size: 0xd0 (Inherited: 0xa0)
struct UDEC_SetAttackStance_C : UBTDecorator_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector AttackingKey; 

	UFUNCTION(BlueprintCallable) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_DEC_SetAttackStance(int32_t EntryPoint);
};

