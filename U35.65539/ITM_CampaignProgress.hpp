#ifndef UE4SS_SDK_ITM_CampaignProgress_HPP
#define UE4SS_SDK_ITM_CampaignProgress_HPP

class UITM_CampaignProgress_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_154;
    UImage* BG__Top;
    UImage* BG_L;
    UImage* BG_Mid;
    UImage* BG_R;
    UHorizontalBox* Box_CampaignItems;
    UImage* Bracket_L;
    UImage* Bracket_R;
    UTextBlock* DATA_AssignmentName;
    UITM_CampaignItem_C* ITM_CampaignItem;
    UITM_CampaignItem_C* ITM_CampaignItem_0;
    UCampaign* Campaign;
    bool ShowActiveCampaign;
    UBasic_ToolTip_C* ToolTip;
    bool UseCustomScale;
    FVector2D CustomScaleActive;
    FVector2D CustomScaleCompleted;

    void ShowCampaignProgress(UCampaign* Campaign, int32 Progress, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FText Temp_text_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, UBP_PlayerControllerBase_C* CallFunc_GetPlayerControllerBase_Controller, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsPlayingOffline_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FText K2Node_Select_Default, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_CampaignItem_C* CallFunc_Create_ReturnValue, UCampaignMission* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UMissionTemplate* CallFunc_GetMissionTemplate_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void TryPingMission(int32 missionIndex, UWidget* CallFunc_GetChildAt_ReturnValue, UITM_CampaignItem_C* K2Node_DynamicCast_AsITM_Campaign_Item, bool K2Node_DynamicCast_bSuccess);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update_Campaign(UCampaign* Campaign);
    void ExecuteUbergraph_ITM_CampaignProgress(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, UCampaign* K2Node_CustomEvent_Campaign, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_CampaignItem_C* CallFunc_Create_ReturnValue, UCampaignMission* CallFunc_Array_Get_Item, UMissionTemplate* CallFunc_GetMissionTemplate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
