#ifndef UE4SS_SDK_ITM_DeepDives_Join_HPP
#define UE4SS_SDK_ITM_DeepDives_Join_HPP

class UITM_DeepDives_Join_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    UITM_OnlineRestricted_C* ITM_OnlineRestricted;
    UBasic_ButtonScalable2_C* RefreshBtn;
    UITM_DeepDives_ServerFilters_C* ServerList_Filters;
    UITM_DeepDives_ServerList_C* ServerList_Hard;
    UITM_DeepDives_ServerList_C* ServerList_Regular;
    UWND_JoiningModded_C* WND_JoiningModded;
    UWND_JoiningPassword_C* WND_JoiningPassword;
    ABP_GameState_SpaceRig_C* GameState;
    FBlueprintSessionResult JoinSession;
    UWND_Joining_C* WND_JoiningWait;
    int32 UpdateIndex;
    FTimerHandle UpdateTimerHandle;
    FITM_DeepDives_Join_COnJoining OnJoining;
    void OnJoining();
    FBlueprintSessionResult ModdedJoinSession;
    FString ModdedPassword;

    void HandleKeyDown(const FKeyEvent& KeyEvent, bool& OutHandled, FEventReply& OutReply, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_Handle_Key_Down_OutHandled, FEventReply CallFunc_Handle_Key_Down_OutReply);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_HandleKeyDown_OutHandled, FEventReply CallFunc_HandleKeyDown_OutReply);
    void DisableProgressionModsandJoin(FBlueprintSessionResult Session, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2);
    void UpdateTextSearchAndGametypeFilter(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<EGameType>& CallFunc_GetGametypeFilter_SelectedGametypes, FText CallFunc_GetTextFilter_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
    void PopulateServerViewsIfVisible(bool CallFunc_IsVisible_ReturnValue);
    void PopulateNext(FBlueprintSessionResult Session, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_FilterSession_Should_Filter, bool CallFunc_Not_PreBool_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
    void ClearServerViews();
    void PopulateServerViews(FBlueprintSessionResult Session, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
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
    void ExecuteUbergraph_ITM_DeepDives_Join(int32 EntryPoint, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, EFSDTargetPlatform Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, OnModdedSaveLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsInActiveSession_ReturnValue, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UGameStateBase* CallFunc_GetGameState_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_2, bool CallFunc_AreModsInstalled_ReturnValue_1, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_BooleanOR_ReturnValue, OnServerListChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FBlueprintSessionResult K2Node_ComponentBoundEvent_Session_3, FBlueprintSessionResult K2Node_ComponentBoundEvent_Session_2, FBlueprintSessionResult K2Node_CustomEvent_InSession, FBlueprintSessionResult K2Node_ComponentBoundEvent_Session_1, FString K2Node_ComponentBoundEvent_Password_1, bool CallFunc_FSDIsPasswordRequired_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_FSDCancelFindSessions_ReturnValue, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UWND_Joining_C* CallFunc_OpenWindowFromClass_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const FBlueprintSessionResult K2Node_CustomEvent_Session, FString K2Node_CustomEvent_Password, UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue, bool CallFunc_FSDIsSessionValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWND_JoinFailed_C* CallFunc_OpenWindowFromClass_ReturnValue_1, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_1, bool CallFunc_FSDIsSessionValid_ReturnValue_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_FSDIsModdedServer_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, FBlueprintSessionResult K2Node_ComponentBoundEvent_Session, FString K2Node_ComponentBoundEvent_Password, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, UPopup_ModdedSave_C* CallFunc_OpenSingleUseWindow_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue_1, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_CustomEvent_Yes, OnModdedSaveCancelled__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsVisible_ReturnValue_1);
    void OnJoining__DelegateSignature();
}

#endif
