// BlueprintGeneratedClass TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C
// Size: 0x108 (Inherited: 0xa8)
struct UTSK_GetPointInFrontOf_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector Target; // 0xb0(0x28)
	struct FBlackboardKeySelector Destination; // 0xd8(0x28)
	float Range; // 0x100(0x04)
	int32_t Forward; // 0x104(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_GetPointInFrontOf(int32_t EntryPoint); // Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ExecuteUbergraph_TSK_GetPointInFrontOf
};

