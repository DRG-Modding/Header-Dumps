// Class OnlineSubsystem.NamedInterfaces
// Size: 0x60 (Inherited: 0x28)
struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28(0x10)
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38(0x10)
};

// Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedMatchInterface : UInterface {

	void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);
	void OnMatchEnded(FString Match);
};

