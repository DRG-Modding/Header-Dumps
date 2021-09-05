// BlueprintGeneratedClass DEC_SetLookAtTarget.DEC_SetLookAtTarget_C
// Size: 0xd0 (Inherited: 0xa0)
struct UDEC_SetLookAtTarget_C : UBTDecorator_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	FBlackboardKeySelector TargetKey; // 0xa8(0x28)

	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	void ExecuteUbergraph_DEC_SetLookAtTarget(int32_t EntryPoint);
};

