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

    void UpdateTutorialComplete();
    bool ShouldSkipEndscreen();
    void DestroyCharacter();
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
    void ExecuteUbergraph_BP_PlayerController(int32 EntryPoint);
    void QuickCheatMenuRequested__DelegateSignature();
    void ToggleFPS__DelegateSignature();
    void CheatMenuRequested__DelegateSignature();
    void MainMenuRequested__DelegateSignature();
};

#endif
