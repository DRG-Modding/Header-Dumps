// BlueprintGeneratedClass TSK_GetPointNearCeiling.TSK_GetPointNearCeiling_C
// Size: 0x11c (Inherited: 0xa8)
struct UTSK_GetPointNearCeiling_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float SearchRadius; // 0xb0(0x04)
	float CeilingMaxDistance; // 0xb4(0x04)
	struct FBlackboardKeySelector TargetKey; // 0xb8(0x28)
	struct FBlackboardKeySelector DestinationKey; // 0xe0(0x28)
	float MinHeightBelowCeiling; // 0x108(0x04)
	float MaxHeightBelowCeiling; // 0x10c(0x04)
	struct FVector TargetLocation; // 0x110(0x0c)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_GetPointNearCeiling.TSK_GetPointNearCeiling_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_GetPointNearCeiling(int32_t EntryPoint); // Function TSK_GetPointNearCeiling.TSK_GetPointNearCeiling_C.ExecuteUbergraph_TSK_GetPointNearCeiling
};

