#ifndef UE4SS_SDK_ITM_HealthBarSection_HPP
#define UE4SS_SDK_ITM_HealthBarSection_HPP

class UITM_HealthBarSection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HealAnim;
    class UWidgetAnimation* FadeToGray;
    class UWidgetAnimation* HitAnim;
    class UImage* Background;
    class UProgressBar* ProgressBar_Health;
    class UProgressBar* ProgressBar_Trail;
    TEnumAsByte<ENUM_MenuColors::Type> FillledGoodHealth;
    TEnumAsByte<ENUM_MenuColors::Type> FillledMediumHealth;
    TEnumAsByte<ENUM_MenuColors::Type> FillledBadHealth;
    TEnumAsByte<ENUM_MenuColors::Type> HealedColor;
    FLinearColor BackgroundColor;
    bool DoFadeGray;
    FTimerHandle GrayFadeTimer;
    float TotalFadeTime;
    float FadeStartTime;
    bool IsHeal;
    float Percent;

    void SetPercent(float InPercent, const bool WithAnim);
    void SetDestroyed();
    void Construct();
    void HitAnimFinished();
    void PreConstruct(bool IsDesignTime);
    void FadeGray(bool FadeToGray);
    void Colorfade();
    void ExecuteUbergraph_ITM_HealthBarSection(int32 EntryPoint);
};

#endif
