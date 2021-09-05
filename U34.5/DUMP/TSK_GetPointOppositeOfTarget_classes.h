// BlueprintGeneratedClass TSK_GetPointOppositeOfTarget.TSK_GetPointOppositeOfTarget_C
// Size: 0x14c (Inherited: 0xa8)
struct UTSK_GetPointOppositeOfTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector TargetKey; // 0xb0(0x28)
	FBlackboardKeySelector DestinationKey; // 0xd8(0x28)
	FBlackboardKeySelector ContinueKey; // 0x100(0x28)
	FVector Direction; // 0x128(0x0c)
	FVector Location; // 0x134(0x0c)
	float DistanceBehindTarget; // 0x140(0x04)
	float MinHeightAboveTarget; // 0x144(0x04)
	float MaxHeightAboveTarget; // 0x148(0x04)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_GetPointOppositeOfTarget(int32_t EntryPoint);
};

