// BlueprintGeneratedClass TSK_DrillToTarget.TSK_DrillToTarget_C
// Size: 0x180 (Inherited: 0xa8)
struct UTSK_DrillToTarget_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector StartPosKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector EndPosKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector StartTangentKey; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector EndTangentKey; 
	UPROPERTY(BlueprintReadWrite) float Progress; 
	UPROPERTY(BlueprintReadWrite) float MoveSpeed; 
	UPROPERTY(BlueprintReadWrite) FVector NewLocation; 
	UPROPERTY(BlueprintReadWrite) AEscortMule* MULE; 
	UPROPERTY(BlueprintReadWrite) float RotateSpeedMod; 
	UPROPERTY(BlueprintReadWrite) FRotator NewRotation; 

	UFUNCTION(BlueprintCallable) void FindNextLoc(float DeltaSeconds, float additionalProgress, FVector NewLoc, FRotator NewRotation);
	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_DrillToTarget(int32_t EntryPoint);
};

