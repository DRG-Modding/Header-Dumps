// BlueprintGeneratedClass DEC_CanSeeTarget.DEC_CanSeeTarget_C
// Size: 0xdc (Inherited: 0xa0)
struct UDEC_CanSeeTarget_C : UBTDecorator_BlueprintBase {
	float MaxDistance; // 0xa0(0x04)
	FBlackboardKeySelector TargetKey; // 0xa8(0x28)
	FVector EyeLocationOffset; // 0xd0(0x0c)

	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
};

