// BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C
// Size: 0x770 (Inherited: 0x6b8)
struct ABP_GameState_SpaceRig_C : ABP_GameState_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct FMulticastInlineDelegate OnMisionSelected; // 0x6c0(0x10)
	float MissionCountdown; // 0x6d0(0x04)
	bool MissionCountdownActive; // 0x6d4(0x01)
	char UnknownData_6D5[0x3]; // 0x6d5(0x03)
	struct FMulticastInlineDelegate OnMissionCountdownChanged; // 0x6d8(0x10)
	bool HostReady; // 0x6e8(0x01)
	bool HostCountdownActive; // 0x6e9(0x01)
	char UnknownData_6EA[0x2]; // 0x6ea(0x02)
	float HostCountdown; // 0x6ec(0x04)
	struct FMulticastInlineDelegate OnHostCountdownChanged; // 0x6f0(0x10)
	struct FMulticastInlineDelegate OnCountdownCompleted; // 0x700(0x10)
	struct FMulticastInlineDelegate OnHostTimerChanged; // 0x710(0x10)
	struct FMulticastInlineDelegate OnMissionTimerChanged; // 0x720(0x10)
	bool AllReady; // 0x730(0x01)
	char UnknownData_731[0x7]; // 0x731(0x07)
	struct TArray<struct FBlueprintSessionResult> ServerList; // 0x738(0x10)
	struct FMulticastInlineDelegate OnServerListChanged; // 0x748(0x10)
	bool SearchingInProgress; // 0x758(0x01)
	bool ForceQuickJoinSearch; // 0x759(0x01)
	char UnknownData_75A[0x6]; // 0x75a(0x06)
	struct FMulticastInlineDelegate OnCountdownChanged; // 0x760(0x10)

	bool AreDeepDiveRequirementsMet(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet
	void HandleActiveCountdown(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown
	void OnRep_HostCountdown(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdown
	void OnRep_HostCountdownActive(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive
	void OnRep_MissionTimerActive(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive
	void OnRep_MissionCountdown(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionCountdown
	void OnRefresh_3EF307534AC5AC56C0D60384C554CF10(struct TArray<struct FBlueprintSessionResult> Results); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10
	void OnFailure_3EF307534AC5AC56C0D60384C554CF10(struct TArray<struct FBlueprintSessionResult> Results); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10
	void OnSuccess_3EF307534AC5AC56C0D60384C554CF10(struct TArray<struct FBlueprintSessionResult> Results); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10
	void ReceiveTick(float DeltaSeconds); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick
	void StartMissionTimer(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartMissionTimer
	void StopMissionTimer(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopMissionTimer
	void StartHostTimer(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartHostTimer
	void StopHostTimer(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopHostTimer
	void CountDownCompleted(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.CountDownCompleted
	void ReceiveBeginPlay(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveBeginPlay
	void Search(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Search
	void ReceiveGeneratedMissionReplicated(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveGeneratedMissionReplicated
	void ManualRefreshServerList(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ManualRefreshServerList
	void Shout_Cooldown_Started(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Shout_Cooldown_Started
	void ExecuteUbergraph_BP_GameState_SpaceRig(int32_t EntryPoint); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig
	void OnCountdownChanged__DelegateSignature(bool Active); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature
	void OnServerListChanged__DelegateSignature(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnServerListChanged__DelegateSignature
	void OnMissionTimerChanged__DelegateSignature(float newTime); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature
	void OnHostTimerChanged__DelegateSignature(float newTime); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature
	void OnCountdownCompleted__DelegateSignature(); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownCompleted__DelegateSignature
	void OnHostCountdownChanged__DelegateSignature(bool IsActive); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature
	void OnMissionCountdownChanged__DelegateSignature(bool IsActive); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature
	void OnMisionSelected__DelegateSignature(struct UGeneratedMission* mission); // Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature
};

