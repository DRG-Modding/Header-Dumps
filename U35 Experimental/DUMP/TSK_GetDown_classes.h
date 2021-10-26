// BlueprintGeneratedClass TSK_GetDown.TSK_GetDown_C
// Size: 0xb1 (Inherited: 0xa8)
struct UTSK_GetDown_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) bool Down; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_GetDown(int32_t EntryPoint);
};

