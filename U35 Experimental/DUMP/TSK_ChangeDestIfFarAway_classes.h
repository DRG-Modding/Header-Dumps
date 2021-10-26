// BlueprintGeneratedClass TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C
// Size: 0xe0 (Inherited: 0xa8)
struct UTSK_ChangeDestIfFarAway_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector DestKey; 
	UPROPERTY(BlueprintReadWrite) float MaxDistToPlayers; 
	UPROPERTY(BlueprintReadWrite) float ApproximateDestDistance; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_ChangeDestIfFarAway(int32_t EntryPoint);
};

