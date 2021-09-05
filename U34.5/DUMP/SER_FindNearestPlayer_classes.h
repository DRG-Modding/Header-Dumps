// BlueprintGeneratedClass SER_FindNearestPlayer.SER_FindNearestPlayer_C
// Size: 0xe8 (Inherited: 0x98)
struct USER_FindNearestPlayer_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	FBlackboardKeySelector TargetKey; // 0xa0(0x28)
	APlayerCharacter* NewTarget; // 0xc8(0x08)
	float MaxRange; // 0xd0(0x04)
	bool MustBeAlive; // 0xd4(0x01)
	bool ChangeTarget; // 0xd5(0x01)
	bool ClearIfNone; // 0xd6(0x01)
	bool accountForAttackers; // 0xd7(0x01)
	bool ChangeTargeOnlyBasedOnDistance; // 0xd8(0x01)
	APawn* MyPawn; // 0xe0(0x08)

	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_SER_FindNearestPlayer(int32_t EntryPoint);
};

