#ifndef UE4SS_SDK_ITM_MissionComplete_MissionState_Failure_HPP
#define UE4SS_SDK_ITM_MissionComplete_MissionState_Failure_HPP

class UITM_MissionComplete_MissionState_Failure_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StateTextAppear;
    class UTextBlock* DATA_MissionState;
    class UTextBlock* DATA_MissionState_Shadow;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_5;
    class UImage* Image_6;
    class UImage* Image_7;
    class UImage* Image_8;
    class UImage* Image_10;
    class UImage* MissionState_BGglow;
    class UImage* MissionState_BGshadow;
    class UOverlay* Overlay_3;
    class UOverlay* SplashOverlay;
    class UUI_RunningText_C* UI_RunningText;
    class UUI_RunningText_C* UI_RunningText_HostAbort;
    bool MissionFailed;
    FText StatusText;
    float StartDelay;
    FITM_MissionComplete_MissionState_Failure_COnAnnouncementFinished OnAnnouncementFinished;
    void OnAnnouncementFinished();
    bool AbortByHost;

    void AssignColors();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_RunningText_K2Node_ComponentBoundEvent_0_OnFinished__DelegateSignature();
    void OnFinished();
    void BndEvt__UI_RunningText_HostAbort_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature();
    void ExecuteUbergraph_ITM_MissionComplete_MissionState_Failure(int32 EntryPoint);
    void OnAnnouncementFinished__DelegateSignature();
};

#endif
