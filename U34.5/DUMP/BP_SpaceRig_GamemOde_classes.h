// BlueprintGeneratedClass BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C
// Size: 0x508 (Inherited: 0x4e0)
struct ABP_SpaceRig_Gamemode_C : AFSDGameModeSpaceRig {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	UDifficultyManager* DifficultyManager; // 0x4e8(0x08)
	USceneComponent* DefaultSceneRoot; // 0x4f0(0x08)
	TArray<ABP_CabinController_C*> Cabins; // 0x4f8(0x10)

	bool PlayerCanRestart(APlayerController* Player);
	void SendMissionStartAnalytics();
	void FindOwnedCabin(AController* Player, ABP_CabinController_C* Cabin);
	void FreeCabin(ABP_PlayerController_SpaceRig_C* Player);
	void AssignCabin(AController* Player, ABP_CabinController_C* Cabin);
	void FindCabins();
	void SelectRandomAvailableClass(AFSDPlayerState* Player);
	AActor* ChoosePlayerStart(AController* Player);
	void GetGameState(ABP_GameState_SpaceRig_C* GameState);
	UObject* GetDefaultPawnClassForController(AController* InController);
	void OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55();
	void OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55();
	void ReceiveBeginPlay();
	void OnCountdownComplete();
	void K2_OnLogout(AController* ExitingController);
	void K2_OnRestartPlayer(AController* NewPlayer);
	void ControllerReady(AFSDPlayerController* Target);
	void InstantlyStartMission();
	void ExecuteUbergraph_BP_SpaceRig_Gamemode(int32_t EntryPoint);
};

