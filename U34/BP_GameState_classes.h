// BlueprintGeneratedClass BP_GameState.BP_GameState_C
// Size: 0x6b8 (Inherited: 0x660)
struct ABP_GameState_C : AFSDGameState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x668(0x08)
	struct TArray<struct UPlayerCharacterID*> InitialHeroes; // 0x670(0x10)
	struct TArray<struct UPlayerCharacterID*> InitialHeroesLeft; // 0x680(0x10)
	struct TSoftObjectPtr<struct UObject> MaggotAnimationSharing; // 0x690(0x28)

	struct TArray<struct UPlayerCharacterID*> GetPlayableCharacterIDs(); // Function BP_GameState.BP_GameState_C.GetPlayableCharacterIDs
	struct TArray<struct APlayerCharacter*> GetPlayableCharacters(); // Function BP_GameState.BP_GameState_C.GetPlayableCharacters
	void GetRandomIntialHero(struct UPlayerCharacterID* HeroClass); // Function BP_GameState.BP_GameState_C.GetRandomIntialHero
	void UserConstructionScript(); // Function BP_GameState.BP_GameState_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
	void StartGame(); // Function BP_GameState.BP_GameState_C.StartGame
	void HandleSeamlessTravelEvent(); // Function BP_GameState.BP_GameState_C.HandleSeamlessTravelEvent
	void ReceiveTick(float DeltaSeconds); // Function BP_GameState.BP_GameState_C.ReceiveTick
	void CustomEvent_1(); // Function BP_GameState.BP_GameState_C.CustomEvent_1
	void ExecuteUbergraph_BP_GameState(int32_t EntryPoint); // Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
};

