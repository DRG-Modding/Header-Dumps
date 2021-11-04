// BlueprintGeneratedClass TSK_FindRandomPointFrom_WIthinHeight.TSK_FindRandomPointFrom_WithinHeight_C
// Size: 0x130 (Inherited: 0xa8)
struct UTSK_FindRandomPointFrom_WithinHeight_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float MaxHeightDiff; // 0xb0(0x04)
	float Distance; // 0xb4(0x04)
	bool SnapToCeiling; // 0xb8(0x01)
	bool FindAtDistance; // 0xb9(0x01)
	FBlackboardKeySelector FromLocationKey; // 0xc0(0x28)
	FBlackboardKeySelector NewLocationKey; // 0xe8(0x28)
	FVector Temp; // 0x110(0x0c)
	int32_t Attempts; // 0x11c(0x04)
	int32_t MaxAttempts; // 0x120(0x04)
	FVector Origin; // 0x124(0x0c)

	void PassHeightCheck(FVector Candidate, FVector Origin, bool pass);
	FVector GetLocation();
	void snap(bool SnapToCeiling, UDeepPathfinderMovement* Pathfinder, FVector Location);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindRandomPointFrom_WithinHeight(int32_t EntryPoint);
};

