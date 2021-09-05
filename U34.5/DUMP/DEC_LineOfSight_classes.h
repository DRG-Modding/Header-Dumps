// BlueprintGeneratedClass DEC_LineOfSight.DEC_LineOfSight_C
// Size: 0xec (Inherited: 0xa0)
struct UDEC_LineOfSight_C : UBTDecorator_BlueprintBase {
	FVector StartOffsetVector; // 0xa0(0x0c)
	FVector EndOffsetVector; // 0xac(0x0c)
	FBlackboardKeySelector TargetKey; // 0xb8(0x28)
	FVector TraceToLocation; // 0xe0(0x0c)

	void ActorOrVector();
	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
};

