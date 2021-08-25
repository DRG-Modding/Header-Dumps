// BlueprintGeneratedClass TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C
// Size: 0xe0 (Inherited: 0xa8)
struct UTSK_ChangeDestIfFarAway_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector DestKey; // 0xb0(0x28)
	float MaxDistToPlayers; // 0xd8(0x04)
	float ApproximateDestDistance; // 0xdc(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_ChangeDestIfFarAway(int32_t EntryPoint); // Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ExecuteUbergraph_TSK_ChangeDestIfFarAway
};

