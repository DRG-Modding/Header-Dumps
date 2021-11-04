// BlueprintGeneratedClass TSK_FindRandomPoint.TSK_FindRandomPoint_C
// Size: 0xe4 (Inherited: 0xa8)
struct UTSK_FindRandomPoint_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector LocationKey; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)
	bool SnapToCeiling; // 0xdc(0x01)
	enum class EOffsetFrom offsetFrom; // 0xdd(0x01)
	float OffsetFromDistance; // 0xe0(0x04)

	void snap(bool SnapToCeiling, UDeepPathfinderMovement* Pathfinder, FVector Location);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindRandomPoint(int32_t EntryPoint);
};

