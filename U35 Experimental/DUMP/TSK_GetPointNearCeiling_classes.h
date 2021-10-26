// BlueprintGeneratedClass TSK_GetPointNearCeiling.TSK_GetPointNearCeiling_C
// Size: 0x11c (Inherited: 0xa8)
struct UTSK_GetPointNearCeiling_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float SearchRadius; 
	UPROPERTY(BlueprintReadWrite) float CeilingMaxDistance; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector DestinationKey; 
	UPROPERTY(BlueprintReadWrite) float MinHeightBelowCeiling; 
	UPROPERTY(BlueprintReadWrite) float MaxHeightBelowCeiling; 
	UPROPERTY(BlueprintReadWrite) FVector TargetLocation; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_GetPointNearCeiling(int32_t EntryPoint);
};

