// BlueprintGeneratedClass BTTask_ReachedDropship.BTTask_ReachedDropship_C
// Size: 0xb0 (Inherited: 0xa8)
struct UBTTask_ReachedDropship_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BTTask_ReachedDropship(int32_t EntryPoint);
};

