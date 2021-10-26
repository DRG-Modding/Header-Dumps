// BlueprintGeneratedClass TSK_GetDashPoint.TSK_GetDashPoint_C
// Size: 0xd8 (Inherited: 0xa8)
struct UTSK_GetDashPoint_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_GetDashPoint(int32_t EntryPoint);
};

