// BlueprintGeneratedClass TSK_FindPointNearTarget.TSK_FindPointNearTarget_C
// Size: 0x110 (Inherited: 0xa8)
struct UTSK_FindPointNearTarget_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector ManualOffset; 
	UPROPERTY(BlueprintReadWrite) float Distance; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector LocationKey; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_FindPointNearTarget(int32_t EntryPoint);
};

