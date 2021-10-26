// BlueprintGeneratedClass SER_FindTargetViaSenses.SER_FindTargetViaSenses_C
// Size: 0xe8 (Inherited: 0x98)
struct USER_FindTargetViaSenses_C : UBTService_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) FGameplayTagContainer AllowedTargets; 

	UFUNCTION(BlueprintCallable) void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void OnSensePawn(APawn* Pawn);
	UFUNCTION(BlueprintCallable) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_SER_FindTargetViaSenses(int32_t EntryPoint);
};

