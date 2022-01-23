#ifndef UE4SS_SDK_ITM_WeeklyMissionOverlay_HPP
#define UE4SS_SDK_ITM_WeeklyMissionOverlay_HPP

class UITM_WeeklyMissionOverlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_Checkmark;
    class UBorder* DeadlineTimer;
    class UImage* I_Background;
    class UImage* Image_Checkmark;
    class UITM_TimeText_C* ITM_TimeText;
    class UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner_1;
    class UImage* outline;
    class UImage* outline_1;
    class UTextBlock* Text_Headline;
    class UTextBlock* TextBlock_Timer;
    class UCampaign* Campaign;
    class UWeeklyTimerCampaignRequirement* Requirement;

    void PreConstruct(bool IsDesignTime);
    void SetData(class UCampaign* Campaign, FText Headline, bool ShowTimer);
    void Update Time();
    void SetInvalid(class UCampaign* Campaign);
    void ExecuteUbergraph_ITM_WeeklyMissionOverlay(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UCampaign* K2Node_CustomEvent_Campaign_1, FText K2Node_CustomEvent_Headline, bool K2Node_CustomEvent_ShowTimer, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHasCompleted_ReturnValue, FTimespan CallFunc_GetTimeUntillNewCampaign_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FTimespan CallFunc_GetWeeklyTimeLeft_ReturnValue, FTimespan CallFunc_GetWeeklyTimeLeft_ReturnValue_1, float CallFunc_GetTotalMilliseconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, FTimespan K2Node_Select_Default, class UCampaignRequirement* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWeeklyTimerCampaignRequirement* K2Node_DynamicCast_AsWeekly_Timer_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UCampaign* K2Node_CustomEvent_Campaign, FText CallFunc_MakeLiteralText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FExecuteUbergraph_ITM_WeeklyMissionOverlayK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2);
};

#endif
