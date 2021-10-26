// BlueprintGeneratedClass SER_FindNearestPlayer.SER_FindNearestPlayer_C
// Size: 0xe8 (Inherited: 0x98)
struct USER_FindNearestPlayer_C : UBTService_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* NewTarget; 
	UPROPERTY(BlueprintReadWrite) float MaxRange; 
	UPROPERTY(BlueprintReadWrite) bool MustBeAlive; 
	UPROPERTY(BlueprintReadWrite) bool ChangeTarget; 
	UPROPERTY(BlueprintReadWrite) bool ClearIfNone; 
	UPROPERTY(BlueprintReadWrite) bool accountForAttackers; 
	UPROPERTY(BlueprintReadWrite) bool ChangeTargeOnlyBasedOnDistance; 
	UPROPERTY(BlueprintReadWrite) APawn* MyPawn; 

	UFUNCTION(BlueprintCallable) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_SER_FindNearestPlayer(int32_t EntryPoint);
};

