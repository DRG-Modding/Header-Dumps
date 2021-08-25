// BlueprintGeneratedClass DEC_AttackStanceGuard.DEC_AttackStanceGuard_C
// Size: 0xa8 (Inherited: 0xa0)
struct UDEC_AttackStanceGuard_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_AttackStanceGuard.DEC_AttackStanceGuard_C.PerformConditionCheckAI
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, char NodeResult); // Function DEC_AttackStanceGuard.DEC_AttackStanceGuard_C.ReceiveExecutionFinishAI
	void ExecuteUbergraph_DEC_AttackStanceGuard(int32_t EntryPoint); // Function DEC_AttackStanceGuard.DEC_AttackStanceGuard_C.ExecuteUbergraph_DEC_AttackStanceGuard
};

