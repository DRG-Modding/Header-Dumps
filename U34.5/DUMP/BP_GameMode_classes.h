// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
// Size: 0x4f9 (Inherited: 0x4c8)
struct ABP_GameMode_C : AFSDGameMode {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	UEnemyWaveManager* EnemyWaveManager; // 0x4d0(0x08)
	UDifficultyManager* DifficultyManager; // 0x4d8(0x08)
	UEncounterManager* EncounterManager; // 0x4e0(0x08)
	USceneComponent* DefaultSceneRoot; // 0x4e8(0x08)
	FTimerHandle TimerHandle; // 0x4f0(0x08)
	bool CanSpawnBosco; // 0x4f8(0x01)

	void PreloadMuleClass();
	void TryPreloadCheatMenu();
	void GetEscapepodLocation(FTransform Location);
	void EnableMuleButton();
	void DestroyNetworkedActors();
	void LoadToMission(UMissionTemplate* mission);
	UObject* GetDefaultPawnClassForController(AController* InController);
	void SetDesiredDifficulty();
	AActor* ChoosePlayerStart(AController* Player);
	void RecieveEndLevel();
	void ReceiveBeginPlay();
	void WaitForGeneration();
	void Recieve_ContinueTimerEnded();
	void Call DropPod();
	void Trigger End Wave(bool cancelAllWaves);
	void SpawnBosco(FTransform Location);
	void RemoveBosco();
	void Handle Bosco Respawn();
	void OnPlayerLeave(AFSDPlayerState* PlayerState);
	void Loaded();
	void DonkeyButtonPressed();
	void LoadSpaceRig();
	void ExecuteUbergraph_BP_GameMode(int32_t EntryPoint);
};

