// BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C
// Size: 0x798 (Inherited: 0x6e0)
struct ABP_GameState_SpaceRig_C : ABP_GameState_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6e0(0x08)
	FMulticastInlineDelegate OnMisionSelected; // 0x6e8(0x10)
	float MissionCountdown; // 0x6f8(0x04)
	bool MissionCountdownActive; // 0x6fc(0x01)
	FMulticastInlineDelegate OnMissionCountdownChanged; // 0x700(0x10)
	bool HostReady; // 0x710(0x01)
	bool HostCountdownActive; // 0x711(0x01)
	float HostCountdown; // 0x714(0x04)
	FMulticastInlineDelegate OnHostCountdownChanged; // 0x718(0x10)
	FMulticastInlineDelegate OnCountdownCompleted; // 0x728(0x10)
	FMulticastInlineDelegate OnHostTimerChanged; // 0x738(0x10)
	FMulticastInlineDelegate OnMissionTimerChanged; // 0x748(0x10)
	bool AllReady; // 0x758(0x01)
	TArray<FBlueprintSessionResult> ServerList; // 0x760(0x10)
	FMulticastInlineDelegate OnServerListChanged; // 0x770(0x10)
	bool SearchingInProgress; // 0x780(0x01)
	bool ForceQuickJoinSearch; // 0x781(0x01)
	FMulticastInlineDelegate OnCountdownChanged; // 0x788(0x10)

	bool AreDeepDiveRequirementsMet();
	void HandleActiveCountdown();
	void OnRep_HostCountdown();
	void OnRep_HostCountdownActive();
	void OnRep_MissionTimerActive();
	void OnRep_MissionCountdown();
	void OnRefresh_3EF307534AC5AC56C0D60384C554CF10(TArray<FBlueprintSessionResult> Results);
	void OnFailure_3EF307534AC5AC56C0D60384C554CF10(TArray<FBlueprintSessionResult> Results);
	void OnSuccess_3EF307534AC5AC56C0D60384C554CF10(TArray<FBlueprintSessionResult> Results);
	void ReceiveTick(float DeltaSeconds);
	void StartMissionTimer();
	void StopMissionTimer();
	void StartHostTimer();
	void StopHostTimer();
	void CountDownCompleted();
	void ReceiveBeginPlay();
	void Search();
	void ReceiveGeneratedMissionReplicated();
	void ManualRefreshServerList();
	void Shout_Cooldown_Started();
	void ExecuteUbergraph_BP_GameState_SpaceRig(int32_t EntryPoint);
	void OnCountdownChanged__DelegateSignature(bool Active);
	void OnServerListChanged__DelegateSignature();
	void OnMissionTimerChanged__DelegateSignature(float newTime);
	void OnHostTimerChanged__DelegateSignature(float newTime);
	void OnCountdownCompleted__DelegateSignature();
	void OnHostCountdownChanged__DelegateSignature(bool IsActive);
	void OnMissionCountdownChanged__DelegateSignature(bool IsActive);
	void OnMisionSelected__DelegateSignature(UGeneratedMission* mission);
};

