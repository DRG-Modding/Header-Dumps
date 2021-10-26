// BlueprintGeneratedClass TSK_ChangeDest.TSK_ChangeDest_C
// Size: 0xdc (Inherited: 0xa8)
struct UTSK_ChangeDest_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector DestKey; 
	UPROPERTY(BlueprintReadWrite) float ApproximatePlayerDistance; 

	UFUNCTION(BlueprintCallable) void FindPlayer(AActor* From, APlayerCharacter* Player, FVector Location);
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_ChangeDest(int32_t EntryPoint);
};

