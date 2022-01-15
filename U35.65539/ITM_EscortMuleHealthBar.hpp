#ifndef UE4SS_SDK_ITM_EscortMuleHealthBar_HPP
#define UE4SS_SDK_ITM_EscortMuleHealthBar_HPP

class UITM_EscortMuleHealthBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* OnHeal;
    UImage* DrillDozer_Background;
    UImage* DrillDozer_Background_Caterpillar;
    UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Left;
    UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Middle;
    UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Right;
    UProgressBar* Left_Health;
    UImage* Left_Outline;
    UProgressBar* Middle_Health;
    UImage* Middle_Outline;
    UProgressBar* Right_Health;
    UImage* Right_Outline;
    UHealthComponent* HealthComponent;
    TArray<UProgressBar*> Sections;
    TArray<UITM_HealthBarPercentWWarning_C*> PercentTexts;
    float FadeStartTime;
    float FadeTime;
    FLinearColor TargetColor;
    UProgressBar* TargetHealthBar;
    float FadeAlpha;
    FRuntimeFloatCurve HealthDisplayCurve;

    void SetFadeAlpha(float FadeAlpha, float CallFunc_FClamp_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_LinearColorLerp_ReturnValue);
    void SetData(UHealthComponent* HealthComponent);
    void OnNewHealthSegment(int32 currSegment, int32 prevSegment);
    void PreConstruct(bool IsDesignTime);
    void OnDamageTaken(float Amount);
    void OnDamageHealed(float Amount);
    void ExecuteUbergraph_ITM_EscortMuleHealthBar(int32 EntryPoint, float CallFunc_EvaluateRuntimeCurve_ReturnValue, float CallFunc_EvaluateRuntimeCurve_ReturnValue_1, UHealthComponent* K2Node_CustomEvent_HealthComponent, int32 K2Node_CustomEvent_currSegment, int32 K2Node_CustomEvent_prevSegment, HealthSegmentChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_GetCurrentHealthSegment_segment, float CallFunc_GetCurrentHealthSegment_segmentHealth, float CallFunc_GetCurrentHealthSegment_segmentHealthPercent, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_EvaluateRuntimeCurve_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_EvaluateRuntimeCurve_ReturnValue_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_MapRangeClamped_ReturnValue_1, FText CallFunc_Format_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, UProgressBar* CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_SelectFloat_ReturnValue_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, UProgressBar* CallFunc_Array_Get_Item_1, int32 CallFunc_GetCurrentHealthSegment_segment_1, float CallFunc_GetCurrentHealthSegment_segmentHealth_1, float CallFunc_GetCurrentHealthSegment_segmentHealthPercent_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, uint8 Temp_byte_Variable, TArray<UProgressBar*>& K2Node_MakeArray_Array_2, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable, uint8 K2Node_Select_Default, UITM_HealthBarPercentWWarning_C* CallFunc_Array_Get_Item_2, FLinearColor CallFunc_MenuColors_OutputColor_2, float K2Node_CustomEvent_Amount_1, float K2Node_CustomEvent_Amount, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UITM_HealthBarPercentWWarning_C* CallFunc_Array_Get_Item_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Variable, UProgressBar* CallFunc_Array_Get_Item_4, UITM_HealthBarPercentWWarning_C* CallFunc_Array_Get_Item_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FText CallFunc_Conv_FloatToText_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, FText CallFunc_Format_ReturnValue_2, TArray<UITM_HealthBarPercentWWarning_C*>& K2Node_MakeArray_Array_4, FLinearColor CallFunc_MenuColors_OutputColor_3);
}

#endif
