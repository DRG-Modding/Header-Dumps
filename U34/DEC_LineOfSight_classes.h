// BlueprintGeneratedClass DEC_LineOfSight.DEC_LineOfSight_C
// Size: 0xec (Inherited: 0xa0)
struct UDEC_LineOfSight_C : UBTDecorator_BlueprintBase {
	struct FVector StartOffsetVector; // 0xa0(0x0c)
	struct FVector EndOffsetVector; // 0xac(0x0c)
	struct FBlackboardKeySelector TargetKey; // 0xb8(0x28)
	struct FVector TraceToLocation; // 0xe0(0x0c)

	void ActorOrVector(); // Function DEC_LineOfSight.DEC_LineOfSight_C.ActorOrVector
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_LineOfSight.DEC_LineOfSight_C.PerformConditionCheckAI
};

