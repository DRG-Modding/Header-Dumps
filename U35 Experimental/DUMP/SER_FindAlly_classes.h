// BlueprintGeneratedClass SER_FindAlly.SER_FindAlly_C
// Size: 0x11c (Inherited: 0x98)
struct USER_FindAlly_C : UBTService_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) float MaxRange; 
	UPROPERTY(BlueprintReadWrite) FGameplayTagQuery AllyQuery; 
	UPROPERTY(BlueprintReadWrite) float RangeToReCheck; 

	UFUNCTION(BlueprintCallable) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_SER_FindAlly(int32_t EntryPoint);
};

