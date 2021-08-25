// BlueprintGeneratedClass SER_FindNearestPlayer.SER_FindNearestPlayer_C
// Size: 0xe8 (Inherited: 0x98)
struct USER_FindNearestPlayer_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xa0(0x28)
	struct APlayerCharacter* NewTarget; // 0xc8(0x08)
	float MaxRange; // 0xd0(0x04)
	bool MustBeAlive; // 0xd4(0x01)
	bool ChangeTarget; // 0xd5(0x01)
	bool ClearIfNone; // 0xd6(0x01)
	bool accountForAttackers; // 0xd7(0x01)
	bool ChangeTargeOnlyBasedOnDistance; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct APawn* MyPawn; // 0xe0(0x08)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function SER_FindNearestPlayer.SER_FindNearestPlayer_C.ReceiveTickAI
	void ExecuteUbergraph_SER_FindNearestPlayer(int32_t EntryPoint); // Function SER_FindNearestPlayer.SER_FindNearestPlayer_C.ExecuteUbergraph_SER_FindNearestPlayer
};

