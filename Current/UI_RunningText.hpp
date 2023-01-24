#ifndef UE4SS_SDK_UI_RunningText_HPP
#define UE4SS_SDK_UI_RunningText_HPP

class UUI_RunningText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDLabelWidget* RunningText;
    class UFSDLabelWidget* TextForSize;
    FText Text;
    bool UpperCase;
    FSlateFontInfo Font;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;
    TEnumAsByte<ETextJustify::Type> Justification;
    int32 CurrentPos;
    float CurrentProgress;
    float Start Delay;
    float Total Duration;
    float CharactersPerSecond;
    FString String;
    bool Auto Play;
    int32 LengthNoWhiteSpaces;
    class USoundCue* CharAudio;
    class UAudioComponent* CharAudioComponent;
    FTimerHandle TimerHandle;
    FUI_RunningText_COnFinished OnFinished;
    void OnFinished();
    class USoundCue* FinishedAudio;
    FString CursorText;
    float Time;
    float CursorBlinkSpeed;
    bool IsPlaying;

    FText GetCursorText(float Time, bool TextFinished);
    void SetFont(FSlateFontInfo InFontInfo);
    void step(float InDeltaTime, bool& Finished);
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetTextColor(TEnumAsByte<ENUM_MenuColors::Type> Color);
    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Play();
    void Stop();
    void Play Timed(float Duration);
    void Destruct();
    void ExecuteUbergraph_UI_RunningText(int32 EntryPoint);
    void OnFinished__DelegateSignature();
};

#endif
