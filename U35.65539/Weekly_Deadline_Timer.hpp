#ifndef UE4SS_SDK_Weekly_Deadline_Timer_HPP
#define UE4SS_SDK_Weekly_Deadline_Timer_HPP

class UWeekly_Deadline_Timer_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* I_Background;
    UImage* I_Outline;
    UITM_TimeText_C* ITM_TimeText;
    UTextBlock* TextBlock_Headline;
    UCampaign* Campaign;
    UWeeklyTimerCampaignRequirement* Requirement;

    void PreConstruct(bool IsDesignTime);
    void SetData(UCampaign* Campaign);
    void Update Time();
    void ExecuteUbergraph_Weekly_Deadline_Timer(int32 EntryPoint, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UCampaign* K2Node_CustomEvent_Campaign, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor_1, FTimespan CallFunc_GetTimeUntillNewCampaign_ReturnValue, FTimespan CallFunc_GetWeeklyTimeLeft_ReturnValue, FTimespan CallFunc_GetWeeklyTimeLeft_ReturnValue_1, float CallFunc_GetTotalMilliseconds_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, bool CallFunc_Greater_FloatFloat_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetHasCompleted_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FLinearColor K2Node_Select_Default, UCampaignRequirement* CallFunc_Array_Get_Item, FSlateColor K2Node_MakeStruct_SlateColor, UWeeklyTimerCampaignRequirement* K2Node_DynamicCast_AsWeekly_Timer_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FText K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, FTimespan K2Node_Select_Default_2);
}

#endif
