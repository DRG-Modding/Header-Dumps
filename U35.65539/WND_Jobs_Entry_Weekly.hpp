#ifndef UE4SS_SDK_WND_Jobs_Entry_Weekly_HPP
#define UE4SS_SDK_WND_Jobs_Entry_Weekly_HPP

class UWND_Jobs_Entry_Weekly_C : UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* CompletedText;
    UITM_Jobs_WeeklyBG_C* ITM_Jobs_WeeklyBG;
    UWND_JobsEntry_C* WND_JobsEntry;
    UCampaign* Campaign;

    void Updated_Event_0();
    void Fold();
    void SetData(UCampaign* Campaign);
    void Refresh();
    void BndEvt__WND_JobsEntry_K2Node_ComponentBoundEvent_0_Unfolded__DelegateSignature(UWND_Jobs_Entry_Base_C* Entry);
    void Construct();
    void ExecuteUbergraph_WND_Jobs_Entry_Weekly(int32 EntryPoint, Updated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UCampaign* K2Node_Event_Campaign, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, bool CallFunc_CanStartCampaign_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_2, UWND_Jobs_Entry_Base_C* K2Node_ComponentBoundEvent_Entry, bool CallFunc_IsActiveCampaign_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsWeeklyCampaignCompleted_ReturnValue, bool CallFunc_IsWeeklyCampaignCompleted_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
}

#endif
