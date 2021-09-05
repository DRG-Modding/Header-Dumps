// BlueprintGeneratedClass TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C
// Size: 0x108 (Inherited: 0xa8)
struct UTSK_GetPointInFrontOf_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector Target; // 0xb0(0x28)
	FBlackboardKeySelector Destination; // 0xd8(0x28)
	float Range; // 0x100(0x04)
	int32_t Forward; // 0x104(0x04)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_GetPointInFrontOf(int32_t EntryPoint);
};

