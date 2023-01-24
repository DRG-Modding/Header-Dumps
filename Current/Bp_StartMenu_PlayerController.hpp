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

    void ShouldPromptUserToDeleteMainSaves(bool& Should, TArray<class UFSDSaveGame*>& outMainSaves);
    void Prompt Delete Main Save(TArray<class UFSDSaveGame*>& Saves);
    void OnModdedSaveCancelled();
    void ModdingSavegameCheck(bool& WaitForCallback);
    bool ShouldSkipInfoScreen();
    void JoinInvite();
    void OpenGameLevel();
    void DetectControllerMovement(float A);
    void DetectMouseMovement(float A);
    void Cleanup();
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(FKey Key);
    void OnFailure_04D1FF9C451C776CE714DD955E807494();
    void OnSuccess_04D1FF9C451C776CE714DD955E807494(FBlueprintSessionResult Result);
    void OnFailure_A64EBA1647E90DBDF8B6D99030E3E0D5();
    void OnSuccess_A64EBA1647E90DBDF8B6D99030E3E0D5();
    void OnLoaded_5BEC96E84FBD6958EFD47D9A09FD96A9(UClass* Loaded);
    void OnLoaded_7CBF629D4A9F4FCA015C509A1D6E8A59(class UObject* Loaded);
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
    void OnModdedSaveReady();
    void OneMainSaveLeft();
    void GenerateNiagaraShaders();
    void NiagaraGenrationDone();
    void CheckSavegame();
    void ExecuteUbergraph_Bp_StartMenu_PlayerController(int32 EntryPoint);
};

#endif
