#ifndef UE4SS_SDK_ITM_Campaign_Icon_HPP
#define UE4SS_SDK_ITM_Campaign_Icon_HPP

class UITM_Campaign_Icon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* CampaignIconGlow;
    UImage* CampaignIcon_BG;
    UImage* CampaignIcon_Border;
    UImage* CampaignIcon_Glow;
    USizeBox* CampaignIcon_Holder;
    UImage* CampaignIcon_Mission;
    UVerticalBox* VBOX_AssignmentMembers;
    bool PlayGlowAnim;

    void IsAnyMissionCampaign(TArray<UGeneratedMission*>& missions, UFSDPlayerState* Player, bool& IsOnMission, int32 CallFunc_Array_Length_ReturnValue, UGeneratedMission* CallFunc_GetActiveCampaignMission_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, UGeneratedMission* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetCampaignIconData(const TArray<UGeneratedMission*>& missions);
    void ExecuteUbergraph_ITM_Campaign_Icon(int32 EntryPoint, bool Temp_bool_Variable, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, const TArray<UGeneratedMission*>& K2Node_CustomEvent_Missions, bool CallFunc_IsAnyMissionCampaign_IsOnMission, UPlayerState* CallFunc_Array_Get_Item, FString CallFunc_GetPlayerName_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAnyMissionCampaign_IsOnMission_1, bool CallFunc_Less_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_CampaignItem_Member_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
