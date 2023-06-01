#ifndef UE4SS_SDK_UI_JettyBoot_Score_HPP
#define UE4SS_SDK_UI_JettyBoot_Score_HPP

class UUI_JettyBoot_Score_C : public UUserWidget
{
    class UWidgetAnimation* AnimCount;
    class UBasic_Label_C* Score_Label;
    int32 PreviousScore;
    int32 Score;
    float CountProgress;

    void SetScore(int32 InScore);
    void SetCountProgress(float InProgress);
};

#endif
