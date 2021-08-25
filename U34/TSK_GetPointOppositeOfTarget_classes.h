// BlueprintGeneratedClass TSK_GetPointOppositeOfTarget.TSK_GetPointOppositeOfTarget_C
// Size: 0x14c (Inherited: 0xa8)
struct UTSK_GetPointOppositeOfTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xb0(0x28)
	struct FBlackboardKeySelector DestinationKey; // 0xd8(0x28)
	struct FBlackboardKeySelector ContinueKey; // 0x100(0x28)
	struct FVector Direction; // 0x128(0x0c)
	struct FVector Location; // 0x134(0x0c)
	float DistanceBehindTarget; // 0x140(0x04)
	float MinHeightAboveTarget; // 0x144(0x04)
	float MaxHeightAboveTarget; // 0x148(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_GetPointOppositeOfTarget.TSK_GetPointOppositeOfTarget_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_GetPointOppositeOfTarget(int32_t EntryPoint); // Function TSK_GetPointOppositeOfTarget.TSK_GetPointOppositeOfTarget_C.ExecuteUbergraph_TSK_GetPointOppositeOfTarget
};

