// BlueprintGeneratedClass TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C
// Size: 0xe0 (Inherited: 0xa8)
struct UTSK_ChangeDestIfFarAway_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector DestKey; // 0xb0(0x28)
	float MaxDistToPlayers; // 0xd8(0x04)
	float ApproximateDestDistance; // 0xdc(0x04)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_ChangeDestIfFarAway(int32_t EntryPoint);
};

