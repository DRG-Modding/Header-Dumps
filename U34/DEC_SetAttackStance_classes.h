// BlueprintGeneratedClass DEC_SetAttackStance.DEC_SetAttackStance_C
// Size: 0xd0 (Inherited: 0xa0)
struct UDEC_SetAttackStance_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FBlackboardKeySelector AttackingKey; // 0xa8(0x28)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_SetAttackStance.DEC_SetAttackStance_C.PerformConditionCheckAI
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_SetAttackStance.DEC_SetAttackStance_C.ReceiveExecutionStartAI
	void ExecuteUbergraph_DEC_SetAttackStance(int32_t EntryPoint); // Function DEC_SetAttackStance.DEC_SetAttackStance_C.ExecuteUbergraph_DEC_SetAttackStance
};

