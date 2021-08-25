// BlueprintGeneratedClass BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C
// Size: 0x508 (Inherited: 0x4e0)
struct ABP_SpaceRig_Gamemode_C : AFSDGameModeSpaceRig {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UDifficultyManager* DifficultyManager; // 0x4e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4f0(0x08)
	struct TArray<struct ABP_CabinController_C*> Cabins; // 0x4f8(0x10)

	bool PlayerCanRestart(struct APlayerController* Player); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart
	void SendMissionStartAnalytics(); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics
	void FindOwnedCabin(struct AController* Player, struct ABP_CabinController_C* Cabin); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindOwnedCabin
	void FreeCabin(struct ABP_PlayerController_SpaceRig_C* Player); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FreeCabin
	void AssignCabin(struct AController* Player, struct ABP_CabinController_C* Cabin); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.AssignCabin
	void FindCabins(); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindCabins
	void SelectRandomAvailableClass(struct AFSDPlayerState* Player); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass
	struct AActor* ChoosePlayerStart(struct AController* Player); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart
	void GetGameState(struct ABP_GameState_SpaceRig_C* GameState); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState
	struct UObject* GetDefaultPawnClassForController(struct AController* InController); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController
	void OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55(); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55
	void OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55(); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55
	void ReceiveBeginPlay(); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay
	void OnCountdownComplete(); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete
	void K2_OnLogout(struct AController* ExitingController); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout
	void K2_OnRestartPlayer(struct AController* NewPlayer); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer
	void ControllerReady(struct AFSDPlayerController* Target); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady
	void InstantlyStartMission(); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission
	void ExecuteUbergraph_BP_SpaceRig_Gamemode(int32_t EntryPoint); // Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode
};

