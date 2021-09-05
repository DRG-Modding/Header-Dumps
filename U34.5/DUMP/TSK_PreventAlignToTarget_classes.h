// BlueprintGeneratedClass TSK_PreventAlignToTarget.TSK_PreventAlignToTarget_C
// Size: 0xb0 (Inherited: 0xa8)
struct UTSK_PreventAlignToTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_PreventAlignToTarget(int32_t EntryPoint);
};

