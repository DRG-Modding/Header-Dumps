// BlueprintGeneratedClass TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C
// Size: 0x108 (Inherited: 0xa8)
struct UTSK_FindRandomPointFrom_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Distance; // 0xb0(0x04)
	bool SnapToCeiling; // 0xb4(0x01)
	bool FindAtDistance; // 0xb5(0x01)
	FBlackboardKeySelector FromLocationKey; // 0xb8(0x28)
	FBlackboardKeySelector NewLocationKey; // 0xe0(0x28)

	FVector GetLocation();
	void snap(bool SnapToCeiling, UDeepPathfinderMovement* Pathfinder, FVector Location);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindRandomPointFrom(int32_t EntryPoint);
};

