#ifndef UE4SS_SDK_ITM_HealthBarWithImage_HPP
#define UE4SS_SDK_ITM_HealthBarWithImage_HPP

class UITM_HealthBarWithImage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* OnHeal;
    UImage* Image_Outline;
    UProgressBar* ProgressBar_Health;
    TEnumAsByte<ENUM_MenuColors::Type> FillledGoodHealth;
    TEnumAsByte<ENUM_MenuColors::Type> FillledMediumHealth;
    TEnumAsByte<ENUM_MenuColors::Type> FillledBadHealth;
    TEnumAsByte<ENUM_MenuColors::Type> HealedColor;
    UObject* Image;
    UTexture2D* OutlineImage;

    void UpdateColor();
    void PreConstruct(bool IsDesignTime);
    void SetPercent(float InPercent);
    void SetDestroyed();
    void ExecuteUbergraph_ITM_HealthBarWithImage(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsAnimationPlaying_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, float K2Node_CustomEvent_InPercent, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor CallFunc_SelectColor_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_5, FLinearColor CallFunc_SelectColor_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_4, FLinearColor CallFunc_MenuColors_OutputColor_6, FLinearColor CallFunc_MenuColors_OutputColor_7, FLinearColor CallFunc_SelectColor_ReturnValue_2, FLinearColor CallFunc_SelectColor_ReturnValue_3, FLinearColor CallFunc_LinearColorLerp_ReturnValue);
}

#endif
