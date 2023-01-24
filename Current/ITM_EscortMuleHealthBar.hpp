#ifndef UE4SS_SDK_ITM_EscortMuleHealthBar_HPP
#define UE4SS_SDK_ITM_EscortMuleHealthBar_HPP

class UITM_EscortMuleHealthBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnHeal;
    class UImage* DrillDozer_Background;
    class UImage* DrillDozer_Background_Caterpillar;
    class UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Left;
    class UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Middle;
    class UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Right;
    class UProgressBar* Left_Health;
    class UImage* Left_Outline;
    class UProgressBar* Middle_Health;
    class UImage* Middle_Outline;
    class UProgressBar* Right_Health;
    class UImage* Right_Outline;
    class UHealthComponent* HealthComponent;
    TArray<class UProgressBar*> Sections;
    TArray<class UITM_HealthBarPercentWWarning_C*> PercentTexts;
    float FadeStartTime;
    float FadeTime;
    FLinearColor TargetColor;
    class UProgressBar* TargetHealthBar;
    float FadeAlpha;
    FRuntimeFloatCurve HealthDisplayCurve;

    void SetFadeAlpha(float FadeAlpha);
    void SetData(class UHealthComponent* HealthComponent);
    void OnNewHealthSegment(int32 currSegment, int32 prevSegment);
    void PreConstruct(bool IsDesignTime);
    void OnDamageTaken(float Amount);
    void OnDamageHealed(float Amount);
    void ExecuteUbergraph_ITM_EscortMuleHealthBar(int32 EntryPoint);
};

#endif
