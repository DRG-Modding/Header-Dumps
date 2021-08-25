// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
// Size: 0x4f9 (Inherited: 0x4c8)
struct ABP_GameMode_C : AFSDGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UEnemyWaveManager* EnemyWaveManager; // 0x4d0(0x08)
	struct UDifficultyManager* DifficultyManager; // 0x4d8(0x08)
	struct UEncounterManager* EncounterManager; // 0x4e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4e8(0x08)
	struct FTimerHandle TimerHandle; // 0x4f0(0x08)
	bool CanSpawnBosco; // 0x4f8(0x01)

	void PreloadMuleClass(); // Function BP_GameMode.BP_GameMode_C.PreloadMuleClass
	void TryPreloadCheatMenu(); // Function BP_GameMode.BP_GameMode_C.TryPreloadCheatMenu
	void GetEscapepodLocation(struct FTransform Location); // Function BP_GameMode.BP_GameMode_C.GetEscapepodLocation
	void EnableMuleButton(); // Function BP_GameMode.BP_GameMode_C.EnableMuleButton
	void DestroyNetworkedActors(); // Function BP_GameMode.BP_GameMode_C.DestroyNetworkedActors
	void LoadToMission(struct UMissionTemplate* mission); // Function BP_GameMode.BP_GameMode_C.LoadToMission
	struct UObject* GetDefaultPawnClassForController(struct AController* InController); // Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController
	void SetDesiredDifficulty(); // Function BP_GameMode.BP_GameMode_C.SetDesiredDifficulty
	struct AActor* ChoosePlayerStart(struct AController* Player); // Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart
	void RecieveEndLevel(); // Function BP_GameMode.BP_GameMode_C.RecieveEndLevel
	void ReceiveBeginPlay(); // Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
	void WaitForGeneration(); // Function BP_GameMode.BP_GameMode_C.WaitForGeneration
	void Recieve_ContinueTimerEnded(); // Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded
	void Call DropPod(); // Function BP_GameMode.BP_GameMode_C.Call DropPod
	void Trigger End Wave(bool cancelAllWaves); // Function BP_GameMode.BP_GameMode_C.Trigger End Wave
	void SpawnBosco(struct FTransform Location); // Function BP_GameMode.BP_GameMode_C.SpawnBosco
	void RemoveBosco(); // Function BP_GameMode.BP_GameMode_C.RemoveBosco
	void Handle Bosco Respawn(); // Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn
	void OnPlayerLeave(struct AFSDPlayerState* PlayerState); // Function BP_GameMode.BP_GameMode_C.OnPlayerLeave
	void Loaded(); // Function BP_GameMode.BP_GameMode_C.Loaded
	void DonkeyButtonPressed(); // Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed
	void LoadSpaceRig(); // Function BP_GameMode.BP_GameMode_C.LoadSpaceRig
	void ExecuteUbergraph_BP_GameMode(int32_t EntryPoint); // Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
};

