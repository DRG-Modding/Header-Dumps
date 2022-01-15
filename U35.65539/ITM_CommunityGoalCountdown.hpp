#ifndef UE4SS_SDK_ITM_CommunityGoalCountdown_HPP
#define UE4SS_SDK_ITM_CommunityGoalCountdown_HPP

class UITM_CommunityGoalCountdown_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* CountDownTitle;
    UTextBlock* DaysTextBlock;
    UTextBlock* HoursTextBlock;
    UTextBlock* MinutesTextBlock;
    FTimespan TSpan;
    FText Title;

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetTime(float Seconds);
    void ExecuteUbergraph_ITM_CommunityGoalCountdown(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Seconds, int32 CallFunc_FTrunc_ReturnValue, FTimespan CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetHours_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_GetDays_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_2);
}

#endif
