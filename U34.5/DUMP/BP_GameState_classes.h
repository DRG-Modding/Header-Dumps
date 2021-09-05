// BlueprintGeneratedClass BP_GameState.BP_GameState_C
// Size: 0x6b8 (Inherited: 0x660)
struct ABP_GameState_C : AFSDGameState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	USceneComponent* DefaultSceneRoot; // 0x668(0x08)
	TArray<UPlayerCharacterID*> InitialHeroes; // 0x670(0x10)
	TArray<UPlayerCharacterID*> InitialHeroesLeft; // 0x680(0x10)
	TSoftObjectPtr<UObject> MaggotAnimationSharing; // 0x690(0x28)

	TArray<UPlayerCharacterID*> GetPlayableCharacterIDs();
	TArray<APlayerCharacter*> GetPlayableCharacters();
	void GetRandomIntialHero(UPlayerCharacterID* HeroClass);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartGame();
	void HandleSeamlessTravelEvent();
	void ReceiveTick(float DeltaSeconds);
	void CustomEvent_1();
	void ExecuteUbergraph_BP_GameState(int32_t EntryPoint);
};

