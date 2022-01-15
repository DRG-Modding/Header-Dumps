#ifndef UE4SS_SDK_WND_JobsEntry_WeeklyV2_HPP
#define UE4SS_SDK_WND_JobsEntry_WeeklyV2_HPP

class UWND_JobsEntry_WeeklyV2_C : UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Assignment_Image;
    UHorizontalBox* Box_CampaignItems;
    UButton* Button_Main;
    UImage* I_BG2;
    UImage* I_BG2_2;
    UImage* I_O2;
    UITM_Prerequisites_C* ITM_Prerequisites;
    UITM_WeeklyMissionOverlay_C* ITM_WeeklyMissionOverlay;
    UOverlay* Overlay_Scaler;
    UTextBlock* Text_AssignmentName;
    UWeekly_Deadline_Timer_C* Weekly_Deadline_Timer;
    UCampaign* Campaign;
    bool IsFolded;
    UMaterialInstanceDynamic* DynMaterial;

    bool VisibleAndEnabled(UWidget* Widgetbool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetInfo(UTexture2D* CallFunc_GetPicture_ReturnValue);
    bool IsActiveCampaign(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetData(UCampaign* Campaign);
    void Refresh();
    void Event_Updated();
    void ExecuteUbergraph_WND_JobsEntry_WeeklyV2(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsActiveCampaign_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, UCampaign* K2Node_Event_Campaign, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UWND_Assignment_Popup_C* CallFunc_OpenWindowFromClass_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, int32 CallFunc_Array_Length_ReturnValue, Updated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UITM_CampaignItem_SmallEmpty_C* CallFunc_Create_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue_1, bool CallFunc_SetData_RequirementsMet, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsWeeklyCampaignCompleted_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanStartCampaign_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
}

#endif
