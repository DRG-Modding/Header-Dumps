// BlueprintGeneratedClass TSK_ChangeDest.TSK_ChangeDest_C
// Size: 0xdc (Inherited: 0xa8)
struct UTSK_ChangeDest_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector DestKey; // 0xb0(0x28)
	float ApproximatePlayerDistance; // 0xd8(0x04)

	void FindPlayer(AActor* From, APlayerCharacter* Player, FVector Location);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_ChangeDest(int32_t EntryPoint);
};

