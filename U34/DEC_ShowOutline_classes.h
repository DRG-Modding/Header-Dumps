// BlueprintGeneratedClass DEC_ShowOutline.DEC_ShowOutline_C
// Size: 0xb0 (Inherited: 0xa0)
struct UDEC_ShowOutline_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct UOutlineComponent* outline; // 0xa8(0x08)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_ShowOutline.DEC_ShowOutline_C.PerformConditionCheckAI
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionStartAI
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, char NodeResult); // Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionFinishAI
	void ExecuteUbergraph_DEC_ShowOutline(int32_t EntryPoint); // Function DEC_ShowOutline.DEC_ShowOutline_C.ExecuteUbergraph_DEC_ShowOutline
};

