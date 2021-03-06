#ifndef UE4SS_SDK_BP_PlayerController_HPP
#define UE4SS_SDK_BP_PlayerController_HPP

class ABP_PlayerController_C : public ABP_PlayerControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_ProceduralController_C* ProceduralController;
    FBP_PlayerController_CMainMenuRequested MainMenuRequested;
    void MainMenuRequested();
    bool HUD_Visible;
    int32 CheatCounter;
    FBP_PlayerController_CCheatMenuRequested CheatMenuRequested;
    void CheatMenuRequested();
    TSubclassOf<class UUI_Cursor_C> MouseCursor_DO_NOT_DELETE;
    FBP_PlayerController_CToggleFPS ToggleFPS;
    void ToggleFPS();
    FBP_PlayerController_CQuickCheatMenuRequested QuickCheatMenuRequested;
    void QuickCheatMenuRequested();

    void UpdateTutorialComplete(class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsTutorialMission_ReturnValue);
    bool ShouldSkipEndscreen(class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_GetMissionSuccessful_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void DestroyCharacter(class APawn* CharacterPawn, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue);
    void IsHUDVisible(bool& Visible);
    void OnLoaded_0556572242FB261AF5947C9A16CF353A(class UObject* Loaded);
    void InpActEvt_O_K2Node_InputKeyEvent_16(FKey Key);
    void InpActEvt_PushToTalk_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PushToTalk_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_MenuButton_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Eight_K2Node_InputKeyEvent_15(FKey Key);
    void InpActEvt_Eight_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_Nine_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_Nine_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_Chat_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_H_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Multiply_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Ctrl+Alt_N_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Ctrl+Alt_O_K2Node_InputKeyEvent_0(FKey Key);
    void SelectNewHero(class UPlayerCharacterID* Hero);
    void ReceiveBeginPlay();
    void OnGenerationDone();
    void Server_RestartLevel();
    void ReceiveEndLevel();
    void Server_ClientReady();
    void SelectLateJoinCharacter(class UPlayerCharacterID* Hero);
    void RequestLoadScreen();
    void ShowSelectCharacterScreen();
    void ShowLoadingScrren();
    void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    void Server_SetLag();
    void ExecuteUbergraph_BP_PlayerController(int32 EntryPoint, FExecuteUbergraph_BP_PlayerControllerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FKey K2Node_InputKeyEvent_Key_9, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, FKey K2Node_InputActionEvent_Key, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FKey Temp_struct_Variable, FKey K2Node_InputKeyEvent_Key_10, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_8, bool CallFunc_HasAuthority_ReturnValue, FKey K2Node_InputKeyEvent_Key_11, TSoftObjectPtr<UTexture> CallFunc_GetRandomSpacerigLoadImagePath_Output, class UPlayerCharacterID* K2Node_CustomEvent_Hero_1, class AActor* CallFunc_FindPlayerStart_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, FString CallFunc_GetCurrentLevelName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FKey Temp_struct_Variable_1, int32 Temp_int_Variable_1, FKey K2Node_InputKeyEvent_Key_12, FString CallFunc_GetVoiceStatus_ReturnValue, FKey K2Node_InputKeyEvent_Key_13, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FKey Temp_struct_Variable_2, bool CallFunc_IsValid_ReturnValue, FKey Temp_struct_Variable_3, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_2, FKey K2Node_InputKeyEvent_Key_14, FKey K2Node_InputKeyEvent_Key_15, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FKey K2Node_InputKeyEvent_Key_7, class UPlayerCharacterID* K2Node_CustomEvent_Hero, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_3, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_4, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, FKey K2Node_InputActionEvent_Key_1, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_5, FKey K2Node_InputKeyEvent_Key, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, FKey Temp_struct_Variable_4, FKey K2Node_InputActionEvent_Key_2, int32 Temp_int_Variable_3, FKey K2Node_InputKeyEvent_Key_1, bool K2Node_Event_areObjectivesCompleted, int32 K2Node_Event_numberOfPlayersInPod, bool CallFunc_IsValid_ReturnValue_5, FKey K2Node_InputActionEvent_Key_3, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Variable, FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FKey K2Node_InputKeyEvent_Key_16, bool CallFunc_IsPlayInEditor_ReturnValue, FKey K2Node_InputKeyEvent_Key_2, FKey K2Node_InputKeyEvent_Key_3, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class UWindowWidget* CallFunc_OpenWindowFromClass_ReturnValue, class AGameStats* CallFunc_GetGameStats_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue, FKey K2Node_InputKeyEvent_Key_4, bool CallFunc_IsLocalPlayerController_ReturnValue, class UObject* Temp_object_Variable, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayInEditor_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_5, bool CallFunc_ShouldSkipEndscreen_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, FKey Temp_struct_Variable_5, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_2, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_3, ESteamBranch CallFunc_GetSteamBranch_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FKey K2Node_InputKeyEvent_Key_6, bool K2Node_Select_Default, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, UClass* CallFunc_LoadClass_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue_2, TSubclassOf<class UWindowWidget> K2Node_ClassDynamicCast_AsWindow_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, class UWindowWidget* CallFunc_OpenWindowFromClass_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded);
    void QuickCheatMenuRequested__DelegateSignature();
    void ToggleFPS__DelegateSignature();
    void CheatMenuRequested__DelegateSignature();
    void MainMenuRequested__DelegateSignature();
};

#endif
