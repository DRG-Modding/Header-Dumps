// BlueprintGeneratedClass TSK_GetPointOppositeOfTarget.TSK_GetPointOppositeOfTarget_C
// Size: 0x14c (Inherited: 0xa8)
struct UTSK_GetPointOppositeOfTarget_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector DestinationKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector ContinueKey; 
	UPROPERTY(BlueprintReadWrite) FVector Direction; 
	UPROPERTY(BlueprintReadWrite) FVector Location; 
	UPROPERTY(BlueprintReadWrite) float DistanceBehindTarget; 
	UPROPERTY(BlueprintReadWrite) float MinHeightAboveTarget; 
	UPROPERTY(BlueprintReadWrite) float MaxHeightAboveTarget; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_GetPointOppositeOfTarget(int32_t EntryPoint);
};

