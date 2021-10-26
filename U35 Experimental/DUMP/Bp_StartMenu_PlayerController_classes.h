// BlueprintGeneratedClass Bp_StartMenu_PlayerController.Bp_StartMenu_PlayerController_C
// Size: 0x5fa (Inherited: 0x5b8)
struct ABp_StartMenu_PlayerController_C : AFSDPlayerControllerBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UUI_StartScreen_C* StartScreen; 
	UPROPERTY(BlueprintReadWrite) UWidget* ActiveScreen; 
	UPROPERTY(BlueprintReadWrite) UWND_Joining_C* JoinWidget; 
	UPROPERTY(BlueprintReadWrite) bool AcceptInput; 
	UPROPERTY(BlueprintReadWrite) UUI_Disconnect_Screen_Base_C* Disconnect; 
	UPROPERTY(BlueprintReadWrite) bool Joining; 
	UPROPERTY(BlueprintReadWrite) bool SignInGate; 
	UPROPERTY(BlueprintReadWrite) UUI_SteamLoading_C* UI Steam Loading; 
	UPROPERTY(BlueprintReadWrite) bool SteamLoadingUI; 
	UPROPERTY(BlueprintReadWrite) bool ReloadOnlineSubsystem; 

	UFUNCTION(BlueprintCallable) void ModdingSavegameCheck(bool ShouldContinue);
	UFUNCTION(BlueprintCallable) bool ShouldSkipInfoScreen();
	UFUNCTION(BlueprintCallable) void JoinInvite();
	UFUNCTION(BlueprintCallable) void OpenGameLevel();
	UFUNCTION(BlueprintCallable) void DetectControllerMovement(float A);
	UFUNCTION(BlueprintCallable) void DetectMouseMovement(float A);
	UFUNCTION(BlueprintCallable) void Cleanup();
	UFUNCTION(BlueprintCallable) void OnLoaded_7CBF629D4A9F4FCA015C509A1D6E8A59(UObject* Loaded);
	UFUNCTION(BlueprintCallable) void OnLoaded_7CBF629D4A9F4FCA015C509AA9E0F545(UObject* Loaded);
	UFUNCTION(BlueprintCallable) void OnLoaded_7CBF629D4A9F4FCA015C509A49AA71BD(UObject* Loaded);
	UFUNCTION(BlueprintCallable) void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void OnFailure_04D1FF9C451C776CE714DD955E807494();
	UFUNCTION(BlueprintCallable) void OnSuccess_04D1FF9C451C776CE714DD955E807494(FBlueprintSessionResult Result);
	UFUNCTION(BlueprintCallable) void OnFailure_A64EBA1647E90DBDF8B6D99030E3E0D5();
	UFUNCTION(BlueprintCallable) void OnSuccess_A64EBA1647E90DBDF8B6D99030E3E0D5();
	UFUNCTION(BlueprintCallable) void OnLoaded_5BEC96E84FBD6958EFD47D9A09FD96A9(UObject* Loaded);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void PressStart();
	UFUNCTION(BlueprintCallable) void OnClose_Event_1(UUI_InfoScreen_C* Screen);
	UFUNCTION(BlueprintCallable) void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	UFUNCTION(BlueprintCallable) void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	UFUNCTION(BlueprintCallable) void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_18(float AxisValue);
	UFUNCTION(BlueprintCallable) void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_64(float AxisValue);
	UFUNCTION(BlueprintCallable) void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_72(float AxisValue);
	UFUNCTION(BlueprintCallable) void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_77(float AxisValue);
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void NetworkErrorAccepted();
	UFUNCTION(BlueprintCallable) void OnCloseInfoscreen(UUI_InfoScreen_Xbox_C* Screen);
	UFUNCTION(BlueprintCallable) void AttempReconnect(bool Yes);
	UFUNCTION(BlueprintCallable) void CustomEvent_1(UUI_InfoScreen_Xbox_C* Screen);
	UFUNCTION(BlueprintCallable) void OnFailedJoiningInvite();
	UFUNCTION(BlueprintCallable) void OnModdedSaveChosen();
	UFUNCTION(BlueprintCallable) void OnPackageMounted(bool Sandbox);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Bp_StartMenu_PlayerController(int32_t EntryPoint);
};

