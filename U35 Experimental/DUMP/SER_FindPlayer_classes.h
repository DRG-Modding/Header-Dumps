// BlueprintGeneratedClass SER_FindPlayer.SER_FindPlayer_C
// Size: 0xd0 (Inherited: 0x98)
struct USER_FindPlayer_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	float MaxDistance; // 0xa0(0x04)
	bool MustBeAlive; // 0xa4(0x01)
	FBlackboardKeySelector PlayerKey; // 0xa8(0x28)

	void FindNearestPlayer(AActor* From);
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_SER_FindPlayer(int32_t EntryPoint);
};

