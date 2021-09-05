// BlueprintGeneratedClass TSK_GetDashPoint.TSK_GetDashPoint_C
// Size: 0xd8 (Inherited: 0xa8)
struct UTSK_GetDashPoint_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector TargetKey; // 0xb0(0x28)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_GetDashPoint(int32_t EntryPoint);
};

