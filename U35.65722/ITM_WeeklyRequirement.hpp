#ifndef UE4SS_SDK_ITM_WeeklyRequirement_HPP
#define UE4SS_SDK_ITM_WeeklyRequirement_HPP

class UITM_WeeklyRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG_M_Back;
    class UImage* BG_M_Outline;
    class UImage* BG_R_Back;
    class UImage* BG_R_Outline;
    class UFSDLabelWidget* TXT_Countdown;
    class UFSDLabelWidget* TXT_Header;
    class UWeeklyTimerCampaignRequirement* Requirement;
    class UCampaign* Campaign;

    FText DoubleDigit(int32 ValueFText CallFunc_Conv_IntToText_ReturnValue);
    void GetTimeText(FText Message:, FTimespan Timespan, FText& Result, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, FText CallFunc_DoubleDigit_ReturnValue, FText CallFunc_DoubleDigit_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText CallFunc_DoubleDigit_ReturnValue_2, FText CallFunc_DoubleDigit_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update Time();
    void ExecuteUbergraph_ITM_WeeklyRequirement(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_ITM_WeeklyRequirementK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHasCompleted_ReturnValue, FTimespan CallFunc_GetTimeUntillNewCampaign_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FTimespan CallFunc_GetWeeklyTimeLeft_ReturnValue, FTimespan CallFunc_GetWeeklyTimeLeft_ReturnValue_1, float CallFunc_GetTotalMilliseconds_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_BooleanAND_ReturnValue, FLinearColor K2Node_Select_Default, FText K2Node_Select_Default_1, FSlateColor K2Node_MakeStruct_SlateColor, FTimespan K2Node_Select_Default_2, FText CallFunc_GetTimeText_Result, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor_1, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
