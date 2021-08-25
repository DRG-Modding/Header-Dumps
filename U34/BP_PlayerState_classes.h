// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// Size: 0x441 (Inherited: 0x410)
struct ABP_PlayerState_C : AFSDPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UPlayerResourceComponent* PlayerResource; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	bool LateJoinFinished; // 0x428(0x01)
	bool TestDropThing; // 0x429(0x01)
	char UnknownData_42A[0x6]; // 0x42a(0x06)
	struct ARessuplyPodSpawn* PodSpawnClass; // 0x430(0x08)
	struct AActor* PodBeacnClass; // 0x438(0x08)
	bool TestLateJoin; // 0x440(0x01)

	struct TArray<struct FCreditsReward> GetDeepDiveCreditsReward(int32_t StagesCompleted, int32_t goldCollected); // Function BP_PlayerState.BP_PlayerState_C.GetDeepDiveCreditsReward
	struct TArray<struct FXPReward> GetXPRewardDeepDive(int32_t StagesCompleted); // Function BP_PlayerState.BP_PlayerState_C.GetXPRewardDeepDive
	void GetRessupyBeaconClass(struct AActor* PodSpawnClass); // Function BP_PlayerState.BP_PlayerState_C.GetRessupyBeaconClass
	void GetRessuplySpawnClass(struct ARessuplyPodSpawn* PodSpawnClass); // Function BP_PlayerState.BP_PlayerState_C.GetRessuplySpawnClass
	void SpawnPlayerInPod(struct AFSDPlayerController* Player); // Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerInPod
	void SpawnPlayerDirectly(struct AController* Player); // Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerDirectly
	struct TArray<struct FXPReward> GetXPRewardsCustom(struct TMap<struct UResourceData*, float> Resources, int32_t EnemiesKilled, bool FailPrimaryObjectiveCompleted, bool FailSecondaryObjectiveCompleted); // Function BP_PlayerState.BP_PlayerState_C.GetXPRewardsCustom
	void OnLoaded_E2B28351414D5B2A20966496F0955946(struct UObject* Loaded); // Function BP_PlayerState.BP_PlayerState_C.OnLoaded_E2B28351414D5B2A20966496F0955946
	void OnLoaded_97A4F0694E71C770F24EA6A654B14857(struct UObject* Loaded); // Function BP_PlayerState.BP_PlayerState_C.OnLoaded_97A4F0694E71C770F24EA6A654B14857
	void OnLateJoinFinished(); // Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished
	void ReceiveBeginPlay(); // Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
	void LogState(); // Function BP_PlayerState.BP_PlayerState_C.LogState
	void CharacterSelected(); // Function BP_PlayerState.BP_PlayerState_C.CharacterSelected
	void TestLatjoin(); // Function BP_PlayerState.BP_PlayerState_C.TestLatjoin
	void RespawnPlayer(); // Function BP_PlayerState.BP_PlayerState_C.RespawnPlayer
	void ExecuteUbergraph_BP_PlayerState(int32_t EntryPoint); // Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
};

