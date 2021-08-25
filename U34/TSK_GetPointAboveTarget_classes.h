// BlueprintGeneratedClass TSK_GetPointAboveTarget.TSK_GetPointAboveTarget_C
// Size: 0x118 (Inherited: 0xa8)
struct UTSK_GetPointAboveTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xb0(0x28)
	struct FBlackboardKeySelector LocationKey; // 0xd8(0x28)
	float RandomRange; // 0x100(0x04)
	float MinRangeAboveTarget; // 0x104(0x04)
	float MaxRangeAboveTarget; // 0x108(0x04)
	struct FVector TempStorage; // 0x10c(0x0c)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_GetPointAboveTarget.TSK_GetPointAboveTarget_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_GetPointAboveTarget(int32_t EntryPoint); // Function TSK_GetPointAboveTarget.TSK_GetPointAboveTarget_C.ExecuteUbergraph_TSK_GetPointAboveTarget
};

