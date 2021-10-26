// BlueprintGeneratedClass DEC_ShowOutline.DEC_ShowOutline_C
// Size: 0xb0 (Inherited: 0xa0)
struct UDEC_ShowOutline_C : UBTDecorator_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 

	UFUNCTION(BlueprintCallable) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_DEC_ShowOutline(int32_t EntryPoint);
};

