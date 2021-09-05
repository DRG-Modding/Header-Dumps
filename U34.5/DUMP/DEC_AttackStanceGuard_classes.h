// BlueprintGeneratedClass DEC_AttackStanceGuard.DEC_AttackStanceGuard_C
// Size: 0xa8 (Inherited: 0xa0)
struct UDEC_AttackStanceGuard_C : UBTDecorator_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)

	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	void ExecuteUbergraph_DEC_AttackStanceGuard(int32_t EntryPoint);
};

