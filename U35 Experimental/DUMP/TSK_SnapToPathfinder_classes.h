// BlueprintGeneratedClass TSK_SnapToPathfinder.TSK_SnapToPathfinder_C
// Size: 0xb0 (Inherited: 0xa8)
struct UTSK_SnapToPathfinder_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_SnapToPathfinder(int32_t EntryPoint);
};

