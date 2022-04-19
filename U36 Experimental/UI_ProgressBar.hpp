#ifndef UE4SS_SDK_UI_ProgressBar_HPP
#define UE4SS_SDK_UI_ProgressBar_HPP

class UUI_ProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimEase;
    class UProgressBar* InternalProgressBar;
    float Percent;
    float AnimationProgress;
    float AnimationStart;
    TEnumAsByte<EEasingFunc::Type> EaseMethod;
    float BlendExp;
    int32 Steps;
    FProgressBarStyle Style;
    FLinearColor FillColorAndOpacity;

    void SetFillColorAndOpacity(FLinearColor InColor);
    void SetStyle(FProgressBarStyle InStyle);
    void GetPercent(float& OutPercent);
    void SetPercent(float InPercent, float InEaseDuration);
    void SetAnimationProgress(float AnimationProgress);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ProgressBar(int32 EntryPoint);
};

#endif
