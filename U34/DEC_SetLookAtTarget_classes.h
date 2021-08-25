// BlueprintGeneratedClass DEC_SetLookAtTarget.DEC_SetLookAtTarget_C
// Size: 0xd0 (Inherited: 0xa0)
struct UDEC_SetLookAtTarget_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xa8(0x28)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_SetLookAtTarget.DEC_SetLookAtTarget_C.PerformConditionCheckAI
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_SetLookAtTarget.DEC_SetLookAtTarget_C.ReceiveExecutionStartAI
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, char NodeResult); // Function DEC_SetLookAtTarget.DEC_SetLookAtTarget_C.ReceiveExecutionFinishAI
	void ExecuteUbergraph_DEC_SetLookAtTarget(int32_t EntryPoint); // Function DEC_SetLookAtTarget.DEC_SetLookAtTarget_C.ExecuteUbergraph_DEC_SetLookAtTarget
};

