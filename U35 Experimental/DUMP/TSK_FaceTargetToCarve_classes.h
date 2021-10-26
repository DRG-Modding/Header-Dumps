// BlueprintGeneratedClass TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C
// Size: 0xe8 (Inherited: 0xa8)
struct UTSK_FaceTargetToCarve_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetActorKey; 
	UPROPERTY(BlueprintReadWrite) float Angle; 
	UPROPERTY(BlueprintReadWrite) int32_t Tries; 
	UPROPERTY(BlueprintReadWrite) bool FailIfCantTurn; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxTries; 

	UFUNCTION(BlueprintCallable) bool IsFacingTarget(AActor* Tank);
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_FaceTargetToCarve(int32_t EntryPoint);
};

