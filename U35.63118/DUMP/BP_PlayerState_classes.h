// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// Size: 0x449 (Inherited: 0x418)
struct ABP_PlayerState_C : AFSDPlayerState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	UPlayerResourceComponent* PlayerResource; // 0x420(0x08)
	USceneComponent* DefaultSceneRoot; // 0x428(0x08)
	bool LateJoinFinished; // 0x430(0x01)
	bool TestDropThing; // 0x431(0x01)
	ARessuplyPodSpawn* PodSpawnClass; // 0x438(0x08)
	AActor* PodBeacnClass; // 0x440(0x08)
	bool TestLateJoin; // 0x448(0x01)

	TArray<FCreditsReward> GetDeepDiveCreditsReward(int32_t StagesCompleted, int32_t goldCollected);
	TArray<FXPReward> GetXPRewardDeepDive(int32_t StagesCompleted);
	void GetRessupyBeaconClass(AActor* PodSpawnClass);
	void GetRessuplySpawnClass(ARessuplyPodSpawn* PodSpawnClass);
	void SpawnPlayerInPod(AFSDPlayerController* Player);
	void SpawnPlayerDirectly(AController* Player);
	TArray<FXPReward> GetXPRewardsCustom(TMap<UResourceData*, float> Resources, int32_t EnemiesKilled, bool FailPrimaryObjectiveCompleted, bool FailSecondaryObjectiveCompleted);
	void OnLoaded_E2B28351414D5B2A20966496F0955946(UObject* Loaded);
	void OnLoaded_97A4F0694E71C770F24EA6A654B14857(UObject* Loaded);
	void OnLateJoinFinished();
	void ReceiveBeginPlay();
	void LogState();
	void CharacterSelected();
	void TestLatjoin();
	void RespawnPlayer();
	void ExecuteUbergraph_BP_PlayerState(int32_t EntryPoint);
};

