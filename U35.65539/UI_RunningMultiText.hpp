#ifndef UE4SS_SDK_UI_RunningMultiText_HPP
#define UE4SS_SDK_UI_RunningMultiText_HPP

class UUI_RunningMultiText_C : UBasic_Label_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FText> texts;
    float DelayBetweenText;
    float TextDuration;
    bool RandomizeText;
    float RunnerProgress;
    bool RunnerActive;
    int32 NextIndex;
    FString CurrentLine;
    USoundCue* AudioBeginLine;
    USoundCue* AudioEndLine;

    void PlayCue(USoundCue* InSound, bool CallFunc_IsValid_ReturnValue);
    void InitRun();
    void SetNextLine(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetRunnerProgress(float InProgress, bool& Finished, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
    void SetTextRunnerActive(bool Inactive);
    void SetTexts(TArray<FText>& InTexts);
    void OnTick_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime);
    void Completed_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime);
    void PreConstruct(bool IsDesignTime);
    void DoRun();
    void Destruct();
    void ExecuteUbergraph_UI_RunningMultiText(int32 EntryPoint, float K2Node_CustomEvent_DeltaTime, float K2Node_CustomEvent_NormalizedTime, TickDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_SetRunnerProgress_Finished, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Array_Get_Item, float K2Node_CustomEvent_DeltaTime_1, float K2Node_CustomEvent_NormalizedTime_1, UMiniTimerAction* CallFunc_MiniTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, TickDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
