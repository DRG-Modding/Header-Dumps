#ifndef UE4SS_SDK_ITM_HealthBarSection_HPP
#define UE4SS_SDK_ITM_HealthBarSection_HPP

class UITM_HealthBarSection_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* HealAnim;
    UWidgetAnimation* FadeToGray;
    UWidgetAnimation* HitAnim;
    UImage* Background;
    UProgressBar* ProgressBar_Health;
    UProgressBar* ProgressBar_Trail;
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
    void ExecuteUbergraph_ITM_HealthBarSection(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FLinearColor CallFunc_MenuColors_OutputColor, float K2Node_CustomEvent_InPercent, const bool K2Node_CustomEvent_WithAnim, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_FadeToGray, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, UProgressBar* K2Node_Select_Default, FLinearColor CallFunc_LinearColorLerp_ReturnValue, UProgressBar* K2Node_Select_Default_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, UWidgetAnimation* K2Node_Select_Default_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
