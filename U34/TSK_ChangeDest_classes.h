// BlueprintGeneratedClass TSK_ChangeDest.TSK_ChangeDest_C
// Size: 0xdc (Inherited: 0xa8)
struct UTSK_ChangeDest_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector DestKey; // 0xb0(0x28)
	float ApproximatePlayerDistance; // 0xd8(0x04)

	void FindPlayer(struct AActor* From, struct APlayerCharacter* Player, struct FVector Location); // Function TSK_ChangeDest.TSK_ChangeDest_C.FindPlayer
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_ChangeDest.TSK_ChangeDest_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_ChangeDest(int32_t EntryPoint); // Function TSK_ChangeDest.TSK_ChangeDest_C.ExecuteUbergraph_TSK_ChangeDest
};

