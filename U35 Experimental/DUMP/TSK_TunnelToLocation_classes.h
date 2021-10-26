// BlueprintGeneratedClass TSK_TunnelToLocation.TSK_TunnelToLocation_C
// Size: 0xf0 (Inherited: 0xa8)
struct UTSK_TunnelToLocation_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey; 
	UPROPERTY(BlueprintReadWrite) UBP_BurrowComponent_C* BurrowComponent; 
	UPROPERTY(BlueprintReadWrite) AEnemyDeepPathfinderCharacter* enemy; 
	UPROPERTY(BlueprintReadWrite) float BurrowSpeed; 
	UPROPERTY(BlueprintReadWrite) float BurrowDuration; 

	UFUNCTION(BlueprintCallable) FVector GetLocation();
	UFUNCTION(BlueprintCallable) float GetBurrowDuration();
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_TunnelToLocation(int32_t EntryPoint);
};

