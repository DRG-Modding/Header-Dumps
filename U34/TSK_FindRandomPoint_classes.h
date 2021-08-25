// BlueprintGeneratedClass TSK_FindRandomPoint.TSK_FindRandomPoint_C
// Size: 0xe4 (Inherited: 0xa8)
struct UTSK_FindRandomPoint_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector LocationKey; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)
	bool SnapToCeiling; // 0xdc(0x01)
	enum class EOffsetFrom offsetFrom; // 0xdd(0x01)
	char UnknownData_DE[0x2]; // 0xde(0x02)
	float OffsetFromDistance; // 0xe0(0x04)

	void snap(bool SnapToCeiling, struct UDeepPathfinderMovement* Pathfinder, struct FVector Location); // Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.snap
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_FindRandomPoint(int32_t EntryPoint); // Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ExecuteUbergraph_TSK_FindRandomPoint
};

