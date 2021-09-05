// BlueprintGeneratedClass DEC_SetAttackStance.DEC_SetAttackStance_C
// Size: 0xd0 (Inherited: 0xa0)
struct UDEC_SetAttackStance_C : UBTDecorator_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	FBlackboardKeySelector AttackingKey; // 0xa8(0x28)

	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_DEC_SetAttackStance(int32_t EntryPoint);
};

