#ifndef UE4SS_SDK__Menu_JobsV3_HPP
#define UE4SS_SDK__Menu_JobsV3_HPP

class U_Menu_JobsV3_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox_1;
    class UITM_Job_Section_Header_C* ITM_Job_Section_Header;
    class UITM_Job_Section_Header_C* ITM_Job_Section_Header_157;
    class UJobs_Header_Assignment_Slot_C* Jobs_Header_Assignment_Slot;
    class UVerticalBox* JobsList;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UVerticalBox* WeeklyJobList;
    class UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2;
    class UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2_1;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_140;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_273;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_392;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_519;
    class UWND_Jobs_Entry_Base_C* LastUnfolded;

    void HasCompletedIntro(bool& OutCompleted, bool CallFunc_IsCampaignComplete_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue);
    void RefreshJobs(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWND_Jobs_Entry_Base_C* K2Node_DynamicCast_AsWND_Jobs_Entry_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWND_Jobs_Entry_Base_C* K2Node_DynamicCast_AsWND_Jobs_Entry_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
    void AddJobEntry(class UCampaign* Campaign, class UWND_Jobs_Entry_Base_C* Entry, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, FAddJobEntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWND_JobsEntryV2_C* CallFunc_Create_ReturnValue, class UWND_JobsEntry_WeeklyV2_C* CallFunc_Create_ReturnValue_1);
    void GetFSDPlayer(class AFSDPlayerController*& AsFSDPlayer Controller, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void OnShown();
    void Back();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCampaignCompleted_Event();
    void BuildList();
    void ExecuteUbergraph__Menu_JobsV3(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AFSDPlayerController* CallFunc_GetFSDPlayer_AsFSDPlayer_Controller, int32 Temp_int_Loop_Counter_Variable, TArray<class TSubclassOf<UCampaign>>& CallFunc_GetUncompletedCampaigns_ReturnValue, TSubclassOf<class UCampaign> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCampaign* CallFunc_GetReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<class UCampaign> CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, TSubclassOf<class UCampaign> CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWND_JobsEntry_C* K2Node_DynamicCast_AsWND_Jobs_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_LessEqual_IntInt_ReturnValue, FExecuteUbergraph__Menu_JobsV3K2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasCompletedIntro_OutCompleted, bool CallFunc_CanSeeCampaign_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_2, FExecuteUbergraph__Menu_JobsV3K2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
