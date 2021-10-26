// BlueprintGeneratedClass DEC_LineOfSight.DEC_LineOfSight_C
// Size: 0xec (Inherited: 0xa0)
struct UDEC_LineOfSight_C : UBTDecorator_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FVector StartOffsetVector; 
	UPROPERTY(BlueprintReadWrite) FVector EndOffsetVector; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector TargetKey; 
	UPROPERTY(BlueprintReadWrite) FVector TraceToLocation; 

	UFUNCTION(BlueprintCallable) void ActorOrVector();
	UFUNCTION(BlueprintCallable) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
};

