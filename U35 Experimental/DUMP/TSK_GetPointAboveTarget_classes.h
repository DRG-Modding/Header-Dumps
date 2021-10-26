// BlueprintGeneratedClass TSK_GetPointAboveTarget.TSK_GetPointAboveTarget_C
// Size: 0x118 (Inherited: 0xa8)
struct UTSK_GetPointAboveTarget_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector LocationKey; 
	UPROPERTY(BlueprintReadWrite) float RandomRange; 
	UPROPERTY(BlueprintReadWrite) float MinRangeAboveTarget; 
	UPROPERTY(BlueprintReadWrite) float MaxRangeAboveTarget; 
	UPROPERTY(BlueprintReadWrite) FVector TempStorage; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_GetPointAboveTarget(int32_t EntryPoint);
};

