#ifndef UE4SS_SDK__Menu_JobsV3_HPP
#define UE4SS_SDK__Menu_JobsV3_HPP

class U_Menu_JobsV3_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox_1;
    UITM_Job_Section_Header_C* ITM_Job_Section_Header;
    UITM_Job_Section_Header_C* ITM_Job_Section_Header_157;
    UJobs_Header_Assignment_Slot_C* Jobs_Header_Assignment_Slot;
    UVerticalBox* JobsList;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UVerticalBox* WeeklyJobList;
    UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2;
    UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2_1;
    UWND_JobsEntryV2_C* WND_JobsEntryV2;
    UWND_JobsEntryV2_C* WND_JobsEntryV2_140;
    UWND_JobsEntryV2_C* WND_JobsEntryV2_273;
    UWND_JobsEntryV2_C* WND_JobsEntryV2_392;
    UWND_JobsEntryV2_C* WND_JobsEntryV2_519;
    UWND_Jobs_Entry_Base_C* LastUnfolded;

    void HasCompletedIntro(bool& OutCompleted, bool CallFunc_IsCampaignComplete_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue);
    void RefreshJobs(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UWND_Jobs_Entry_Base_C* K2Node_DynamicCast_AsWND_Jobs_Entry_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue_1, UWND_Jobs_Entry_Base_C* K2Node_DynamicCast_AsWND_Jobs_Entry_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
    void AddJobEntry(UCampaign* Campaign, UWND_Jobs_Entry_Base_C* Entry, UPanelSlot* CallFunc_AddChild_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, Updated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UWND_JobsEntryV2_C* CallFunc_Create_ReturnValue, UWND_JobsEntry_WeeklyV2_C* CallFunc_Create_ReturnValue_1);
    void GetFSDPlayer(UFSDPlayerController*& AsFSDPlayer Controller, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void OnShown();
    void Back();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCampaignCompleted_Event();
    void BuildList();
    void ExecuteUbergraph__Menu_JobsV3(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDPlayerController* CallFunc_GetFSDPlayer_AsFSDPlayer_Controller, int32 Temp_int_Loop_Counter_Variable, TArray<TSubclassOf<UCampaign>>& CallFunc_GetUncompletedCampaigns_ReturnValue, TSubclassOf<UCampaign> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UCampaign* CallFunc_GetReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<UCampaign> CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, TSubclassOf<UCampaign> CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UWND_JobsEntry_C* K2Node_DynamicCast_AsWND_Jobs_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_LessEqual_IntInt_ReturnValue, CampaignCompletedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasCompletedIntro_OutCompleted, bool CallFunc_CanSeeCampaign_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_2, Updated__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
