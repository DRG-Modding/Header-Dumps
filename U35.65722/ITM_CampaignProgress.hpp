#ifndef UE4SS_SDK_ITM_CampaignProgress_HPP
#define UE4SS_SDK_ITM_CampaignProgress_HPP

class UITM_CampaignProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_154;
    class UImage* BG__Top;
    class UImage* BG_L;
    class UImage* BG_Mid;
    class UImage* BG_R;
    class UHorizontalBox* Box_CampaignItems;
    class UImage* Bracket_L;
    class UImage* Bracket_R;
    class UTextBlock* DATA_AssignmentName;
    class UITM_CampaignItem_C* ITM_CampaignItem;
    class UITM_CampaignItem_C* ITM_CampaignItem_0;
    class UCampaign* Campaign;
    bool ShowActiveCampaign;
    class UBasic_ToolTip_C* ToolTip;
    bool UseCustomScale;
    FVector2D CustomScaleActive;
    FVector2D CustomScaleCompleted;

    void ShowCampaignProgress(class UCampaign* Campaign, int32 Progress, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FText Temp_text_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_PlayerControllerBase_C* CallFunc_GetPlayerControllerBase_Controller, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsPlayingOffline_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FText K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_CampaignItem_C* CallFunc_Create_ReturnValue, class UCampaignMission* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMissionTemplate* CallFunc_GetMissionTemplate_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void TryPingMission(int32 missionIndex, class UWidget* CallFunc_GetChildAt_ReturnValue, class UITM_CampaignItem_C* K2Node_DynamicCast_AsITM_Campaign_Item, bool K2Node_DynamicCast_bSuccess);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update_Campaign(class UCampaign* Campaign);
    void ExecuteUbergraph_ITM_CampaignProgress(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UCampaign* K2Node_CustomEvent_Campaign, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_CampaignItem_C* CallFunc_Create_ReturnValue, class UCampaignMission* CallFunc_Array_Get_Item, class UMissionTemplate* CallFunc_GetMissionTemplate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
};

#endif
