// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// Size: 0x850 (Inherited: 0x7f0)
struct ABP_PlayerController_C : ABP_PlayerControllerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7f0(0x08)
	struct UBP_ProceduralController_C* ProceduralController; // 0x7f8(0x08)
	struct FMulticastInlineDelegate MainMenuRequested; // 0x800(0x10)
	bool HUD_Visible; // 0x810(0x01)
	char UnknownData_811[0x3]; // 0x811(0x03)
	int32_t CheatCounter; // 0x814(0x04)
	struct FMulticastInlineDelegate CheatMenuRequested; // 0x818(0x10)
	struct UUI_Cursor_C* MouseCursor_DO_NOT_DELETE; // 0x828(0x08)
	struct FMulticastInlineDelegate ToggleFPS; // 0x830(0x10)
	struct FMulticastInlineDelegate QuickCheatMenuRequested; // 0x840(0x10)

	void UpdateTutorialComplete(); // Function BP_PlayerController.BP_PlayerController_C.UpdateTutorialComplete
	bool ShouldSkipEndscreen(); // Function BP_PlayerController.BP_PlayerController_C.ShouldSkipEndscreen
	void DestroyCharacter(); // Function BP_PlayerController.BP_PlayerController_C.DestroyCharacter
	void IsHUDVisible(bool Visible); // Function BP_PlayerController.BP_PlayerController_C.IsHUDVisible
	void OnLoaded_0556572242FB261AF5947C9A16CF353A(struct UObject* Loaded); // Function BP_PlayerController.BP_PlayerController_C.OnLoaded_0556572242FB261AF5947C9A16CF353A
	void InpActEvt_O_K2Node_InputKeyEvent_17(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_17
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_4
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_3
	void InpActEvt_MenuButton_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MenuButton_K2Node_InputActionEvent_2
	void InpActEvt_Eight_K2Node_InputKeyEvent_16(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_16
	void InpActEvt_Eight_K2Node_InputKeyEvent_15(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_15
	void InpActEvt_Nine_K2Node_InputKeyEvent_14(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_14
	void InpActEvt_Nine_K2Node_InputKeyEvent_13(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_13
	void InpActEvt_Zero_K2Node_InputKeyEvent_12(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_12
	void InpActEvt_Zero_K2Node_InputKeyEvent_11(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_11
	void InpActEvt_Chat_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_1
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_10(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_10
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_8(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_8
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7
	void InpActEvt_H_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_H_K2Node_InputKeyEvent_6
	void InpActEvt_Subtract_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5
	void InpActEvt_Add_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Add_K2Node_InputKeyEvent_4
	void InpActEvt_Multiply_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Multiply_K2Node_InputKeyEvent_3
	void InpActEvt_Ctrl+Alt_N_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Ctrl+Alt_N_K2Node_InputKeyEvent_2
	void InpActEvt_Ctrl+Alt_O_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Ctrl+Alt_O_K2Node_InputKeyEvent_1
	void SelectNewHero(struct UPlayerCharacterID* Hero); // Function BP_PlayerController.BP_PlayerController_C.SelectNewHero
	void ReceiveBeginPlay(); // Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
	void OnGenerationDone(); // Function BP_PlayerController.BP_PlayerController_C.OnGenerationDone
	void Server_RestartLevel(); // Function BP_PlayerController.BP_PlayerController_C.Server_RestartLevel
	void ReceiveEndLevel(); // Function BP_PlayerController.BP_PlayerController_C.ReceiveEndLevel
	void Server_ClientReady(); // Function BP_PlayerController.BP_PlayerController_C.Server_ClientReady
	void SelectLateJoinCharacter(struct UPlayerCharacterID* Hero); // Function BP_PlayerController.BP_PlayerController_C.SelectLateJoinCharacter
	void RequestLoadScreen(); // Function BP_PlayerController.BP_PlayerController_C.RequestLoadScreen
	void ShowSelectCharacterScreen(); // Function BP_PlayerController.BP_PlayerController_C.ShowSelectCharacterScreen
	void ShowLoadingScrren(); // Function BP_PlayerController.BP_PlayerController_C.ShowLoadingScrren
	void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32_t numberOfPlayersInPod); // Function BP_PlayerController.BP_PlayerController_C.Receive_EndLevel_WaitForData
	void Server_SetLag(); // Function BP_PlayerController.BP_PlayerController_C.Server_SetLag
	void ExecuteUbergraph_BP_PlayerController(int32_t EntryPoint); // Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
	void QuickCheatMenuRequested__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.QuickCheatMenuRequested__DelegateSignature
	void ToggleFPS__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.ToggleFPS__DelegateSignature
	void CheatMenuRequested__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.CheatMenuRequested__DelegateSignature
	void MainMenuRequested__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.MainMenuRequested__DelegateSignature
};

