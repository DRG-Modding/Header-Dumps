#ifndef UE4SS_SDK_ITM_MissionComplete_MissionState_HPP
#define UE4SS_SDK_ITM_MissionComplete_MissionState_HPP

class UITM_MissionComplete_MissionState_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeInBackground;
    class UWidgetAnimation* FadeoutBackground;
    class UWidgetAnimation* FadeOutOverlay;
    class UImage* BlackBackground;
    class UCanvasPanel* OverlayRoot;
    FITM_MissionComplete_MissionState_COnFadeOutOverlayFinished OnFadeOutOverlayFinished;
    void OnFadeOutOverlayFinished();
    FITM_MissionComplete_MissionState_COnAnnouncementFinished OnAnnouncementFinished;
    void OnAnnouncementFinished();
    FITM_MissionComplete_MissionState_COnFadeOutBackgroundFinished OnFadeOutBackgroundFinished;
    void OnFadeOutBackgroundFinished();

    void UpdateBackgroundImage();
    void SetCanvasWidget(class UWidget* Content);
    void ShowCurrentMission(float StartDelay);
    void SignalAnimDone();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Fade Out Overlay(float Duration);
    void OnOverlayFinished();
    void success(float StartDelay, FText StatusText, class USchematic* Reward);
    void Failure(float StartDelay, FText StatusText);
    void OnBackgroundFinished();
    void Fade Out Background(float Duration);
    void ExecuteUbergraph_ITM_MissionComplete_MissionState(int32 EntryPoint);
    void OnFadeOutBackgroundFinished__DelegateSignature();
    void OnAnnouncementFinished__DelegateSignature();
    void OnFadeOutOverlayFinished__DelegateSignature();
};

#endif
