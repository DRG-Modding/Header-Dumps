// BlueprintGeneratedClass TSK_DashTo.TSK_DashTo_C
// Size: 0xb8 (Inherited: 0xa8)
struct UTSK_DashTo_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	UDashPoints* DashPoints; // 0xb0(0x08)

	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void CustomEvent();
	void ExecuteUbergraph_TSK_DashTo(int32_t EntryPoint);
};

