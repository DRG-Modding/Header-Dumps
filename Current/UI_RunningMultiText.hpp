#ifndef UE4SS_SDK_UI_RunningMultiText_HPP
#define UE4SS_SDK_UI_RunningMultiText_HPP

class UUI_RunningMultiText_C : public UBasic_Label_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FText> texts;
    float DelayBetweenText;
    float TextDuration;
    bool RandomizeText;
    float RunnerProgress;
    bool RunnerActive;
    int32 NextIndex;
    FString CurrentLine;
    class USoundCue* AudioBeginLine;
    class USoundCue* AudioEndLine;

    void PlayCue(class USoundCue* InSound);
    void InitRun();
    void SetNextLine();
    void SetRunnerProgress(float InProgress, bool& Finished);
    void SetTextRunnerActive(bool Inactive);
    void SetTexts(TArray<FText>& InTexts);
    void OnTick_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime);
    void Completed_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime);
    void PreConstruct(bool IsDesignTime);
    void DoRun();
    void Destruct();
    void ExecuteUbergraph_UI_RunningMultiText(int32 EntryPoint);
};

#endif
