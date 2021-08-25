// BlueprintGeneratedClass TSK_FindPointNearTarget.TSK_FindPointNearTarget_C
// Size: 0x110 (Inherited: 0xa8)
struct UTSK_FindPointNearTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FVector ManualOffset; // 0xb0(0x0c)
	float Distance; // 0xbc(0x04)
	struct FBlackboardKeySelector TargetKey; // 0xc0(0x28)
	struct FBlackboardKeySelector LocationKey; // 0xe8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FindPointNearTarget.TSK_FindPointNearTarget_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_FindPointNearTarget(int32_t EntryPoint); // Function TSK_FindPointNearTarget.TSK_FindPointNearTarget_C.ExecuteUbergraph_TSK_FindPointNearTarget
};

