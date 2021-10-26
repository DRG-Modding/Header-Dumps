// BlueprintGeneratedClass TSK_DashTo.TSK_DashTo_C
// Size: 0xb8 (Inherited: 0xa8)
struct UTSK_DashTo_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDashPoints* DashPoints; 

	UFUNCTION(BlueprintCallable) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void CustomEvent();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_DashTo(int32_t EntryPoint);
};

