#ifndef UE4SS_SDK_BP_GameState_SpaceRig_HPP
#define UE4SS_SDK_BP_GameState_SpaceRig_HPP

class ABP_GameState_SpaceRig_C : public ABP_GameState_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_GameState_SpaceRig_COnMisionSelected OnMisionSelected;
    void OnMisionSelected(class UGeneratedMission* mission);
    float MissionCountdown;
    bool MissionCountdownActive;
    FBP_GameState_SpaceRig_COnMissionCountdownChanged OnMissionCountdownChanged;
    void OnMissionCountdownChanged(bool IsActive);
    bool HostReady;
    bool HostCountdownActive;
    float HostCountdown;
    FBP_GameState_SpaceRig_COnHostCountdownChanged OnHostCountdownChanged;
    void OnHostCountdownChanged(bool IsActive);
    FBP_GameState_SpaceRig_COnCountdownCompleted OnCountdownCompleted;
    void OnCountdownCompleted();
    FBP_GameState_SpaceRig_COnHostTimerChanged OnHostTimerChanged;
    void OnHostTimerChanged(float newTime);
    FBP_GameState_SpaceRig_COnMissionTimerChanged OnMissionTimerChanged;
    void OnMissionTimerChanged(float newTime);
    bool AllReady;
    TArray<FBlueprintSessionResult> ServerList;
    FBP_GameState_SpaceRig_COnServerListChanged OnServerListChanged;
    void OnServerListChanged();
    bool SearchingInProgress;
    bool ForceQuickJoinSearch;
    FBP_GameState_SpaceRig_COnCountdownChanged OnCountdownChanged;
    void OnCountdownChanged(bool Active);

    bool AreDeepDiveRequirementsMet();
    void HandleActiveCountdown();
    void OnRep_HostCountdown();
    void OnRep_HostCountdownActive();
    void OnRep_MissionTimerActive();
    void OnRep_MissionCountdown();
    void OnRefresh_3EF307534AC5AC56C0D60384C554CF10(const TArray<FBlueprintSessionResult>& Results);
    void OnFailure_3EF307534AC5AC56C0D60384C554CF10(const TArray<FBlueprintSessionResult>& Results);
    void OnSuccess_3EF307534AC5AC56C0D60384C554CF10(const TArray<FBlueprintSessionResult>& Results);
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
    void ExecuteUbergraph_BP_GameState_SpaceRig(int32 EntryPoint);
    void OnCountdownChanged__DelegateSignature(bool Active);
    void OnServerListChanged__DelegateSignature();
    void OnMissionTimerChanged__DelegateSignature(float newTime);
    void OnHostTimerChanged__DelegateSignature(float newTime);
    void OnCountdownCompleted__DelegateSignature();
    void OnHostCountdownChanged__DelegateSignature(bool IsActive);
    void OnMissionCountdownChanged__DelegateSignature(bool IsActive);
    void OnMisionSelected__DelegateSignature(class UGeneratedMission* mission);
};

#endif
