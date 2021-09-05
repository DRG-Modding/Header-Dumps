// BlueprintGeneratedClass DEC_IsAttackOffCooldown.DEC_IsAttackOffCooldown_C
// Size: 0xac (Inherited: 0xa0)
struct UDEC_IsAttackOffCooldown_C : UBTDecorator_BlueprintBase {
	bool Any; // 0xa0(0x01)
	FName AttackName; // 0xa4(0x08)

	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
};

