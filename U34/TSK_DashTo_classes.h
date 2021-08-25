// BlueprintGeneratedClass TSK_DashTo.TSK_DashTo_C
// Size: 0xb8 (Inherited: 0xa8)
struct UTSK_DashTo_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UDashPoints* DashPoints; // 0xb0(0x08)

	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_DashTo.TSK_DashTo_C.ReceiveAbortAI
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_DashTo.TSK_DashTo_C.ReceiveExecuteAI
	void CustomEvent(); // Function TSK_DashTo.TSK_DashTo_C.CustomEvent
	void ExecuteUbergraph_TSK_DashTo(int32_t EntryPoint); // Function TSK_DashTo.TSK_DashTo_C.ExecuteUbergraph_TSK_DashTo
};

