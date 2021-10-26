// BlueprintGeneratedClass TSK_PreventAlignToTarget.TSK_PreventAlignToTarget_C
// Size: 0xb0 (Inherited: 0xa8)
struct UTSK_PreventAlignToTarget_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_PreventAlignToTarget(int32_t EntryPoint);
};

