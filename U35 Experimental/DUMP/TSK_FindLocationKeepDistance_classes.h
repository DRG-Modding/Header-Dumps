// BlueprintGeneratedClass TSK_FindLocationKeepDistance.TSK_FindLocationKeepDistance_C
// Size: 0x110 (Inherited: 0xa8)
struct UTSK_FindLocationKeepDistance_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float MinDistance; 
	UPROPERTY(BlueprintReadWrite) float MaxDistance; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetToAvoid; 
	UPROPERTY(BlueprintReadWrite) float IdealDistance; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetLocation; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_FindLocationKeepDistance(int32_t EntryPoint);
};

