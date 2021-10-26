// BlueprintGeneratedClass TSK_BackOff.TSK_BackOff_C
// Size: 0xe4 (Inherited: 0xa8)
struct UTSK_BackOff_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector DangerKey; 
	UPROPERTY(BlueprintReadWrite) float Distance; 
	UPROPERTY(BlueprintReadWrite) float WaitAfterFleeing; 
	UPROPERTY(BlueprintReadWrite) float RandomWaitTime; 

	UFUNCTION(BlueprintCallable) void SetBackOffFalse(AController* Controller);
	UFUNCTION(BlueprintCallable) void OutsideDanger(AActor* Pawn, bool res);
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void PathDone(bool success);
	UFUNCTION(BlueprintCallable) void RefreshDest();
	UFUNCTION(BlueprintCallable) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_BackOff(int32_t EntryPoint);
};

