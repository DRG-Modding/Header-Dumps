// BlueprintGeneratedClass TSK_RandomPointFromOrigin.TSK_RandomPointFromOrigin_C
// Size: 0x128 (Inherited: 0xa8)
struct UTSK_RandomPointFromOrigin_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) bool FindAtDistance; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector Origin; 
	UPROPERTY(BlueprintReadWrite) float Distance; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector LocationKey; 
	UPROPERTY(BlueprintReadWrite) FVector OriginVec; 
	UPROPERTY(BlueprintReadWrite) FVector Vector; 

	UFUNCTION(BlueprintCallable) void ActorOrVector();
	UFUNCTION(BlueprintCallable) void snap(bool snap, UDeepPathfinderMovement* Path, FVector Origin);
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_RandomPointFromOrigin(int32_t EntryPoint);
};

