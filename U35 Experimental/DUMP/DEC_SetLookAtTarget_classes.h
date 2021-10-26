// BlueprintGeneratedClass DEC_SetLookAtTarget.DEC_SetLookAtTarget_C
// Size: 0xd0 (Inherited: 0xa0)
struct UDEC_SetLookAtTarget_C : UBTDecorator_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 

	UFUNCTION(BlueprintCallable) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_DEC_SetLookAtTarget(int32_t EntryPoint);
};

