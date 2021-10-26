// BlueprintGeneratedClass BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C
// Size: 0x528 (Inherited: 0x510)
struct ABP_SpaceRig_Gamemode_C : AFSDGameModeSpaceRig {
	FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	UDifficultyManager* DifficultyManager; // 0x518(0x08)
	USceneComponent* DefaultSceneRoot; // 0x520(0x08)

	bool PlayerCanRestart(APlayerController* Player);
	void SendMissionStartAnalytics();
	void SelectRandomAvailableClass(AFSDPlayerState* Player);
	AActor* ChoosePlayerStart(AController* Player);
	void GetGameState(ABP_GameState_SpaceRig_C* GameState);
	UObject* GetDefaultPawnClassForController(AController* InController);
	void OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55();
	void OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55();
	void OnFailure_509E599D4BB91C15BA2979B190501E9F();
	void OnSuccess_509E599D4BB91C15BA2979B190501E9F();
	void ReceiveBeginPlay();
	void OnCountdownComplete();
	void K2_OnLogout(AController* ExitingController);
	void K2_OnRestartPlayer(AController* NewPlayer);
	void ControllerReady(AFSDPlayerController* Target);
	void InstantlyStartMission();
	void On online privilige checked(APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult);
	void ExecuteUbergraph_BP_SpaceRig_Gamemode(int32_t EntryPoint);
};

