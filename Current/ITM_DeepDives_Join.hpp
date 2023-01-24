#ifndef UE4SS_SDK_ITM_DeepDives_Join_HPP
#define UE4SS_SDK_ITM_DeepDives_Join_HPP

class UITM_DeepDives_Join_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_OnlineRestricted_C* ITM_OnlineRestricted;
    class UBasic_ButtonScalable2_C* RefreshBtn;
    class UITM_DeepDives_ServerFilters_C* ServerList_Filters;
    class UITM_DeepDives_ServerList_C* ServerList_Hard;
    class UITM_DeepDives_ServerList_C* ServerList_Regular;
    class UWND_JoiningModded_C* WND_JoiningModded;
    class UWND_JoiningPassword_C* WND_JoiningPassword;
    class ABP_GameState_SpaceRig_C* GameState;
    FBlueprintSessionResult JoinSession;
    class UWND_Joining_C* WND_JoiningWait;
    int32 UpdateIndex;
    FTimerHandle UpdateTimerHandle;
    FITM_DeepDives_Join_COnJoining OnJoining;
    void OnJoining();
    FBlueprintSessionResult ModdedJoinSession;
    FString ModdedPassword;

    void HandleKeyDown(const FKeyEvent& KeyEvent, bool& OutHandled, FEventReply& OutReply);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void DisableProgressionModsandJoin(FBlueprintSessionResult Session);
    void UpdateTextSearchAndGametypeFilter();
    void PopulateServerViewsIfVisible();
    void PopulateNext();
    void ClearServerViews();
    void PopulateServerViews();
    void OnFailure_1FB10C08435EA9BCE39BD9ABFF154396();
    void OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396();
    void OnFailure_0B5BC1CF422A3FBD05716A89A13443B1();
    void OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1();
    void Construct();
    void Open();
    void BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature(FBlueprintSessionResult Session);
    void BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature(FBlueprintSessionResult Session);
    void OnJoinServerClicked(FBlueprintSessionResult InSession);
    void BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature();
    void BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature(FBlueprintSessionResult Session, FString Password);
    void Close Waiting Window();
    void Join Server(const FBlueprintSessionResult& Session, FString Password);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature(FBlueprintSessionResult Session, FString Password);
    void ModdedSaveLoaded();
    void OnBlocked(bool Yes);
    void Refresh();
    void ExecuteUbergraph_ITM_DeepDives_Join(int32 EntryPoint);
    void OnJoining__DelegateSignature();
};

#endif
