// BlueprintGeneratedClass BP_GameState.BP_GameState_C
// Size: 0x6e0 (Inherited: 0x688)
struct ABP_GameState_C : AFSDGameState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x688(0x08)
	USceneComponent* DefaultSceneRoot; // 0x690(0x08)
	TArray<UPlayerCharacterID*> InitialHeroes; // 0x698(0x10)
	TArray<UPlayerCharacterID*> InitialHeroesLeft; // 0x6a8(0x10)
	TSoftObjectPtr<UObject> MaggotAnimationSharing; // 0x6b8(0x28)

	TArray<UPlayerCharacterID*> GetPlayableCharacterIDs();
	void GetRandomIntialHero(UPlayerCharacterID* HeroClass);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartGame();
	void HandleSeamlessTravelEvent();
	void ReceiveTick(float DeltaSeconds);
	void CustomEvent_1();
	void ExecuteUbergraph_BP_GameState(int32_t EntryPoint);
};

