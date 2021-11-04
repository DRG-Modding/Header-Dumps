// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// Size: 0x850 (Inherited: 0x7f0)
struct ABP_PlayerController_C : ABP_PlayerControllerBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7f0(0x08)
	UBP_ProceduralController_C* ProceduralController; // 0x7f8(0x08)
	FMulticastInlineDelegate MainMenuRequested; // 0x800(0x10)
	bool HUD_Visible; // 0x810(0x01)
	int32_t CheatCounter; // 0x814(0x04)
	FMulticastInlineDelegate CheatMenuRequested; // 0x818(0x10)
	UUI_Cursor_C* MouseCursor_DO_NOT_DELETE; // 0x828(0x08)
	FMulticastInlineDelegate ToggleFPS; // 0x830(0x10)
	FMulticastInlineDelegate QuickCheatMenuRequested; // 0x840(0x10)

	void UpdateTutorialComplete();
	bool ShouldSkipEndscreen();
	void DestroyCharacter();
	void IsHUDVisible(bool Visible);
	void OnLoaded_0556572242FB261AF5947C9A16CF353A(UObject* Loaded);
	void InpActEvt_O_K2Node_InputKeyEvent_17(FKey Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_MenuButton_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_16(FKey Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_15(FKey Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_14(FKey Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_13(FKey Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_12(FKey Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_11(FKey Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_1(FKey Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_H_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Ctrl+Alt_N_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Ctrl+Alt_O_K2Node_InputKeyEvent_1(FKey Key);
	void SelectNewHero(UPlayerCharacterID* Hero);
	void ReceiveBeginPlay();
	void OnGenerationDone();
	void Server_RestartLevel();
	void ReceiveEndLevel();
	void Server_ClientReady();
	void SelectLateJoinCharacter(UPlayerCharacterID* Hero);
	void RequestLoadScreen();
	void ShowSelectCharacterScreen();
	void ShowLoadingScrren();
	void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32_t numberOfPlayersInPod);
	void Server_SetLag();
	void ExecuteUbergraph_BP_PlayerController(int32_t EntryPoint);
	void QuickCheatMenuRequested__DelegateSignature();
	void ToggleFPS__DelegateSignature();
	void CheatMenuRequested__DelegateSignature();
	void MainMenuRequested__DelegateSignature();
};

