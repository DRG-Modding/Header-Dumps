#ifndef UE4SS_SDK_MissionControl_TextAnimator_HPP
#define UE4SS_SDK_MissionControl_TextAnimator_HPP

class UMissionControl_TextAnimator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimTextRun;
    class URichTextBlock* TextBlock;
    FText Text;
    FRichTextParseResult Parser;
    float AnimProgress;

    void GetFirstWord(FString inString, FString& OutWord);
    void SetAnimProgress(float AnimProgress);
    void SetText(const FText InText, int32& Unformatted Length);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MissionControl_TextAnimator(int32 EntryPoint);
};

#endif
