// BlueprintGeneratedClass DEC_ShowOutline.DEC_ShowOutline_C
// Size: 0xb0 (Inherited: 0xa0)
struct UDEC_ShowOutline_C : UBTDecorator_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	UOutlineComponent* outline; // 0xa8(0x08)

	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	void ExecuteUbergraph_DEC_ShowOutline(int32_t EntryPoint);
};

