// BlueprintGeneratedClass DEC_CanSeeTarget.DEC_CanSeeTarget_C
// Size: 0xdc (Inherited: 0xa0)
struct UDEC_CanSeeTarget_C : UBTDecorator_BlueprintBase {
	float MaxDistance; // 0xa0(0x04)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
	struct FBlackboardKeySelector TargetKey; // 0xa8(0x28)
	struct FVector EyeLocationOffset; // 0xd0(0x0c)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_CanSeeTarget.DEC_CanSeeTarget_C.PerformConditionCheckAI
};

