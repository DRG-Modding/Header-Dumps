// BlueprintGeneratedClass TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C
// Size: 0x11c (Inherited: 0xa8)
struct UTSK_GetForwardDownLocation_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector LocationKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) FVector targetloc; 
	UPROPERTY(BlueprintReadWrite) bool ToTarget; 
	UPROPERTY(BlueprintReadWrite) bool Continue; 
	UPROPERTY(BlueprintReadWrite) FVector Location; 

	UFUNCTION(BlueprintCallable) void GetEnd(FVector PawnLocation, FVector TargetLocation, FVector PawnForward);
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_GetForwardDownLocation(int32_t EntryPoint);
};

