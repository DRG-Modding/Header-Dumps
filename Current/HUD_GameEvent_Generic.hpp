#ifndef UE4SS_SDK_HUD_GameEvent_Generic_HPP
#define UE4SS_SDK_HUD_GameEvent_Generic_HPP

class UHUD_GameEvent_Generic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimTimeLimit;
    class UCanvasPanel* Canvas;
    class UTextBlock* DATA_Header;
    class UTextBlock* DATA_Objective;
    class UTextBlock* DATA_ObjectiveCounter;
    class UTextBlock* DATA_Timer;
    class UProgressBar* EventProgressBar;
    class UHorizontalBox* ObjectiveHolder;
    class AGameEvent* GameEvent;
    FText TextFailed;
    FText TextSuccess;

    void SetSecondsAsTime(float Seconds);
    void RegisterGameEvent(class AGameEvent* GameEvent);
    void Construct();
    void ProgressChanged(float CurrentProgress);
    void NumberObjectivesChanged(int32 stageCompleted);
    void PreConstruct(bool IsDesignTime);
    void Setup Timer();
    void Setup Score();
    void ShutDown();
    void UpdateTime(float CurrentProgress);
    void UnbindScoreEvents();
    void UnbindTimerEvents();
    void SetupProgressBar();
    void UnbindProgressBarEvents();
    void OnProgressBarChanged(float CurrentProgress);
    void ExecuteUbergraph_HUD_GameEvent_Generic(int32 EntryPoint);
};

#endif
