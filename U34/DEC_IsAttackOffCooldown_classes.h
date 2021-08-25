// BlueprintGeneratedClass DEC_IsAttackOffCooldown.DEC_IsAttackOffCooldown_C
// Size: 0xac (Inherited: 0xa0)
struct UDEC_IsAttackOffCooldown_C : UBTDecorator_BlueprintBase {
	bool Any; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	struct FName AttackName; // 0xa4(0x08)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_IsAttackOffCooldown.DEC_IsAttackOffCooldown_C.PerformConditionCheckAI
};

