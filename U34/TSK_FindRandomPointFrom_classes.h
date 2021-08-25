// BlueprintGeneratedClass TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C
// Size: 0x108 (Inherited: 0xa8)
struct UTSK_FindRandomPointFrom_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Distance; // 0xb0(0x04)
	bool SnapToCeiling; // 0xb4(0x01)
	bool FindAtDistance; // 0xb5(0x01)
	char UnknownData_B6[0x2]; // 0xb6(0x02)
	struct FBlackboardKeySelector FromLocationKey; // 0xb8(0x28)
	struct FBlackboardKeySelector NewLocationKey; // 0xe0(0x28)

	struct FVector GetLocation(); // Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetLocation
	void snap(bool SnapToCeiling, struct UDeepPathfinderMovement* Pathfinder, struct FVector Location); // Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.snap
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_FindRandomPointFrom(int32_t EntryPoint); // Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ExecuteUbergraph_TSK_FindRandomPointFrom
};

