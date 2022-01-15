#ifndef UE4SS_SDK_BP_GameState_SpaceRig_HPP
#define UE4SS_SDK_BP_GameState_SpaceRig_HPP

class ABP_GameState_SpaceRig_C : UBP_GameState_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_GameState_SpaceRig_COnMisionSelected OnMisionSelected;
    void OnMisionSelected(UGeneratedMission* mission);
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

    bool AreDeepDiveRequirementsMet(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_AreAllSelectedClassesQualified_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void HandleActiveCountdown(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_AreDeepDiveRequirementsMet_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue_1);
    void OnRep_HostCountdown();
    void OnRep_HostCountdownActive(bool CallFunc_BooleanOR_ReturnValue);
    void OnRep_MissionTimerActive(bool CallFunc_BooleanOR_ReturnValue);
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
    void ExecuteUbergraph_BP_GameState_SpaceRig(int32 EntryPoint, const TArray<FBlueprintSessionResult>& K2Node_CustomEvent_Results_2, const TArray<FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, BlueprintFindSessionsResultDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FBlueprintSessionResult>& K2Node_CustomEvent_Results, BlueprintFindSessionsResultDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, TArray<FBlueprintSessionResult>& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, BlueprintFindSessionsResultDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UFSDFindSessionsCallbackProxy* CallFunc_FSDFindSessions_ReturnValue, bool CallFunc_IsValid_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetAutoRefreshServerlist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_AreDeepDiveRequirementsMet_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2);
    void OnCountdownChanged__DelegateSignature(bool Active);
    void OnServerListChanged__DelegateSignature();
    void OnMissionTimerChanged__DelegateSignature(float newTime);
    void OnHostTimerChanged__DelegateSignature(float newTime);
    void OnCountdownCompleted__DelegateSignature();
    void OnHostCountdownChanged__DelegateSignature(bool IsActive);
    void OnMissionCountdownChanged__DelegateSignature(bool IsActive);
    void OnMisionSelected__DelegateSignature(UGeneratedMission* mission);
}

#endif
