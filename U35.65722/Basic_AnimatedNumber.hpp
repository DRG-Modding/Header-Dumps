#ifndef UE4SS_SDK_Basic_AnimatedNumber_HPP
#define UE4SS_SDK_Basic_AnimatedNumber_HPP

class UBasic_AnimatedNumber_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Number;
    FSlateFontInfo Font;
    float Number;
    int32 FractionalDigits;
    class USoundCue* CountSound;
    float StartTime;
    FTimerHandle TimerHandle;
    float OldNumber;
    bool PlaySount;
    float TempCountNumber;
    float CountAnimTime;

    void CountUp(float alpha, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetNumber(float Number, bool DoCountAnim, bool PlayCountSound);
    void ExecuteUbergraph_Basic_AnimatedNumber(int32 EntryPoint, FExecuteUbergraph_Basic_AnimatedNumberK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, float K2Node_CustomEvent_Number, bool K2Node_CustomEvent_DoCountAnim, bool K2Node_CustomEvent_PlayCountSound, FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
