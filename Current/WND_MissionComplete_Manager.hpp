#ifndef UE4SS_SDK_WND_MissionComplete_Manager_HPP
#define UE4SS_SDK_WND_MissionComplete_Manager_HPP

class UWND_MissionComplete_Manager_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_MissionComplete_MissionState_C* ITM_MissionResultAnim;
    class USafeZone* SafeZone_0;
    class UOverlay* ScreenOverlay;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class USCREEN_MissionComplete_Base_C* DeepDiveOverlay;
    class UAudioComponent* MenuMusicComponent;
    int32 SafetyValve;

    void OnScreenWantsCursor(class UUserWidget* InWidget);
    void Set Cursor Visible(bool InVisible);
    bool ShowSpaceLoadRigOnContinue();
    void FadeoutMenuMusic(float FadeoutDuration);
    void StartMenuMusic();
    void AreAllEndResultsReady(bool& AllPlayersReady);
    void SetOverlay(class UUserWidget* Content);
    void OnLoaded_FD59AC8A419416B6454AA4BD22EFF1A7(class UObject* Loaded);
    void OnLoaded_FD59AC8A419416B6454AA4BDCCA31D69(class UObject* Loaded);
    void Start Normal End Screen();
    void Start Deep Dive End Screen();
    void BndEvt__ITM_MissionComplete_MissionState_K2Node_ComponentBoundEvent_0_OnAnnouncementFinished__DelegateSignature();
    void BndEvt__ITM_MissionComplete_MissionState_K2Node_ComponentBoundEvent_1_OnFadeOutOverlayFinished__DelegateSignature();
    void BndEvt__ITM_MissionComplete_MissionState_K2Node_ComponentBoundEvent_2_OnFadeOutBackgroundFinished__DelegateSignature();
    void Mark Ready To Continue();
    void Transition To Normal End Screen();
    void OnContinueCountdownChanged();
    void Setup Continue Count Down();
    void OnShown();
    void AddCompleteScreen(TSubclassOf<class USCREEN_MissionComplete_Base_C> Widget_MissionComplete);
    void ExecuteUbergraph_WND_MissionComplete_Manager(int32 EntryPoint);
};

#endif
