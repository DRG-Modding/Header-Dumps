#ifndef UE4SS_SDK_Bp_StartMenu_PlayerController_HPP
#define UE4SS_SDK_Bp_StartMenu_PlayerController_HPP

class ABp_StartMenu_PlayerController_C : public AFSDPlayerControllerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_StartScreen_C* StartScreen;
    class UWidget* ActiveScreen;
    class UWND_Joining_C* JoinWidget;
    bool AcceptInput;
    class UUI_Disconnect_Screen_Base_C* Disconnect;
    bool Joining;
    bool SignInGate;
    class UUI_SteamLoading_C* UI Steam Loading;
    bool SteamLoadingUI;
    bool ReloadOnlineSubsystem;
    TArray<class UNiagaraComponent*> SpawnedParticles;

    void ShouldPromptUserToDeleteMainSaves(bool& Should, TArray<class UFSDSaveGame*>& outMainSaves, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool K2Node_Select_Default, TArray<class UFSDSaveGame*>& CallFunc_GetMainSaves_outMainSaves, int32 CallFunc_GetMainSaves_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Prompt Delete Main Save(TArray<class UFSDSaveGame*>& Saves, FPrompt Delete Main SaveK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UPopup_MoreThanOneMainSave_C* CallFunc_Create_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue);
    void OnModdedSaveCancelled(class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ModdingSavegameCheck(bool& ShouldContinue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_HasPendingInvite_ReturnValue, FModdingSavegameCheckK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, FModdingSavegameCheckK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UPopup_ModdedSave_C* CallFunc_Create_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FModdingSavegameCheckK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_2, FModdingSavegameCheckK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UPopup_ModdedSave_C* CallFunc_OpenSingleUseWindow_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_3, bool CallFunc_AreModsInstalled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4);
    bool ShouldSkipInfoScreen(FString CallFunc_GetMajorProjectVersion_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetHasSeenInfoScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void JoinInvite(class UWND_JoiningModded_C* CallFunc_Create_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UWND_Joining_C* CallFunc_Create_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UWND_JoiningPassword_C* CallFunc_Create_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_IsPendingInvitePasswordProtected_ReturnValue, bool CallFunc_IsPendingInviteModded_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2);
    void OpenGameLevel(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue);
    void DetectControllerMovement(float A, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void DetectMouseMovement(float A, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void Cleanup(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(FKey Key);
    void OnFailure_04D1FF9C451C776CE714DD955E807494();
    void OnSuccess_04D1FF9C451C776CE714DD955E807494(FBlueprintSessionResult Result);
    void OnFailure_A64EBA1647E90DBDF8B6D99030E3E0D5();
    void OnSuccess_A64EBA1647E90DBDF8B6D99030E3E0D5();
    void OnLoaded_7CBF629D4A9F4FCA015C509A1D6E8A59(class UObject* Loaded);
    void OnLoaded_5BEC96E84FBD6958EFD47D9A09FD96A9(UClass* Loaded);
    void OnLoaded_7CBF629D4A9F4FCA015C509AA9E0F545(class UObject* Loaded);
    void OnLoaded_7CBF629D4A9F4FCA015C509A49AA71BD(class UObject* Loaded);
    void ReceiveBeginPlay();
    void PressStart();
    void OnClose_Event_0(class UUI_InfoScreen_C* Screen);
    void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_17(float AxisValue);
    void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_63(float AxisValue);
    void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_71(float AxisValue);
    void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_76(float AxisValue);
    void ReceiveTick(float DeltaSeconds);
    void NetworkErrorAccepted();
    void OnCloseInfoscreen(class UUI_InfoScreen_Xbox_C* Screen);
    void AttempReconnect(bool Yes);
    void CustomEvent_0(class UUI_InfoScreen_Xbox_C* Screen);
    void OnFailedJoiningInvite();
    void OnModdedSaveChosen();
    void OneMainSaveLeft();
    void GenerateNiagaraShaders();
    void NiagaraGenrationDone();
    void ExecuteUbergraph_Bp_StartMenu_PlayerController(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UUI_StartScreen_C* CallFunc_Create_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUI_InfoScreen_C* K2Node_CustomEvent_Screen_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float K2Node_InputAxisKeyEvent_AxisValue_5, float K2Node_InputAxisKeyEvent_AxisValue_4, float K2Node_InputAxisKeyEvent_AxisValue_3, float K2Node_InputAxisKeyEvent_AxisValue_2, float K2Node_InputAxisKeyEvent_AxisValue_1, float K2Node_InputAxisKeyEvent_AxisValue, class UObject* Temp_object_Variable_1, class UObject* K2Node_CustomEvent_Loaded_1, class UTexture* K2Node_DynamicCast_AsTexture_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, float K2Node_Event_DeltaSeconds, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_HasPendingInvite_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, bool CallFunc_HasPendingInvite_ReturnValue_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_4, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_5, bool Temp_bool_Variable_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool Temp_bool_Variable_6, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_6, bool CallFunc_HasPendingInvite_ReturnValue_2, bool Temp_bool_Variable_7, bool CallFunc_BooleanAND_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasPendingInvite_ReturnValue_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_HasSignedIn_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_4, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_12, EFSDTargetPlatform Temp_byte_Variable, bool CallFunc_GetHasSeenInfoScreen_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_13, bool Temp_bool_Variable_8, EFSDTargetPlatform Temp_byte_Variable_1, bool Temp_bool_Variable_9, class UUI_InfoScreen_Xbox_C* K2Node_CustomEvent_Screen_1, bool CallFunc_Not_PreBool_ReturnValue_4, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_2, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, float CallFunc_FadeIt_Duration, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Variable_12, bool CallFunc_IsSteamLoaded_ReturnValue, bool Temp_bool_Variable_13, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_1, class UUI_SteamLoading_C* CallFunc_OpenSingleUseWindow_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsPlayInEditor_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue, UClass* Temp_class_Variable, TSubclassOf<class UUI_Disconnect_Screen_Base_C> K2Node_ClassDynamicCast_AsUI_Disconnect_Screen_Base, bool K2Node_ClassDynamicCast_bSuccess, class UUI_Disconnect_Screen_Base_C* CallFunc_OpenWindowFromClass_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsFirstRejoinAttempt_ReturnValue, FString CallFunc_GetRejoinSessionId_ReturnValue, class UFSDLookupSessionId* CallFunc_FSDLookupSessionId_ReturnValue, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_7, class UUI_InfoScreen_C* CallFunc_Create_ReturnValue_1, float CallFunc_FadeIt_Duration_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue_1, bool K2Node_CustomEvent_Yes, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_15, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_16, bool CallFunc_ShouldSkipInfoScreen_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, FString CallFunc_GetMajorProjectVersion_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, FString CallFunc_GetMajorProjectVersion_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_17, UClass* K2Node_CustomEvent_Loaded_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_4, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_5, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_18, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_5, bool CallFunc_IsLoggedIn_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UUI_InfoScreen_Xbox_C* K2Node_CustomEvent_Screen, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_3, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UUI_InfoScreen_Xbox_C* CallFunc_Create_ReturnValue_2, float CallFunc_FadeIt_Duration_2, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UObject* Temp_object_Variable_2, class UObject* K2Node_CustomEvent_Loaded_3, class UTexture* K2Node_DynamicCast_AsTexture_2, bool K2Node_DynamicCast_bSuccess_2, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FBlueprintSessionResult Temp_struct_Variable, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue, FBlueprintSessionResult K2Node_CustomEvent_result, bool CallFunc_IsValid_ReturnValue_8, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, TSoftObjectPtr<UTexture> CallFunc_GetRandomSpacerigLoadImagePath_Output, class UUI_InfoScreen_Xbox_C* CallFunc_Create_ReturnValue_3, bool Temp_bool_Variable_14, float CallFunc_FadeIt_Duration_3, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, EFSDTargetPlatform Temp_byte_Variable_3, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_3, bool Temp_bool_Variable_19, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool Temp_bool_Variable_20, bool CallFunc_BooleanAND_ReturnValue_6, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool CallFunc_ModdingSavegameCheck_ShouldContinue, bool Temp_bool_Variable_23, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_6, EFSDTargetPlatform Temp_byte_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_7, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_6, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_7, bool K2Node_Select_Default_2, bool K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_ShouldPromptUserToDeleteMainSaves_Should, TArray<class UFSDSaveGame*>& CallFunc_ShouldPromptUserToDeleteMainSaves_outMainSaves, bool CallFunc_Not_PreBool_ReturnValue_6, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_NeedsShadeGeneration_ReturnValue, float CallFunc_FadeIt_Duration_4, bool CallFunc_IsValid_ReturnValue_9, FKey K2Node_InputKeyEvent_Key, float CallFunc_FadeIt_Duration_5, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_IsClosed_Variable, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_19, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_20, bool Temp_bool_Variable_24, TSoftObjectPtr<UTexture> CallFunc_GetRandomSpacerigLoadImagePath_Output_1, bool K2Node_Select_Default_4, TSoftObjectPtr<UTexture> CallFunc_GetRandomSpacerigLoadImagePath_Output_2, FExecuteUbergraph_Bp_StartMenu_PlayerControllerK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13);
};

#endif