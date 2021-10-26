// BlueprintGeneratedClass TSK_FindPointAboveTarget.TSK_FindPointAboveTarget_C
// Size: 0x118 (Inherited: 0xa8)
struct UTSK_FindPointAboveTarget_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector LocationKey; 
	UPROPERTY(BlueprintReadWrite) float Distance; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) float Height; 
	UPROPERTY(BlueprintReadWrite) FVector ManualOffset; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_FindPointAboveTarget(int32_t EntryPoint);
};

