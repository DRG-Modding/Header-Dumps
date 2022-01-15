#ifndef UE4SS_SDK_UI_ProgressBar_HPP
#define UE4SS_SDK_UI_ProgressBar_HPP

class UUI_ProgressBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimEase;
    UProgressBar* InternalProgressBar;
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
    void SetPercent(float InPercent, float InEaseDuration, float Diff, bool Temp_bool_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void SetAnimationProgress(float AnimationProgress, float CallFunc_Ease_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ProgressBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
