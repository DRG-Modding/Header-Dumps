#ifndef UE4SS_SDK_ITM_Campaign_Icon_HPP
#define UE4SS_SDK_ITM_Campaign_Icon_HPP

class UITM_Campaign_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CampaignIconGlow;
    class UImage* CampaignIcon_BG;
    class UImage* CampaignIcon_Border;
    class UImage* CampaignIcon_Glow;
    class USizeBox* CampaignIcon_Holder;
    class UImage* CampaignIcon_Mission;
    class UVerticalBox* VBOX_AssignmentMembers;
    bool PlayGlowAnim;

    void IsAnyMissionCampaign(TArray<class UGeneratedMission*>& missions, class AFSDPlayerState* Player, bool& IsOnMission, int32 CallFunc_Array_Length_ReturnValue, class UGeneratedMission* CallFunc_GetActiveCampaignMission_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UGeneratedMission* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetCampaignIconData(const TArray<class UGeneratedMission*>& missions);
    void ExecuteUbergraph_ITM_Campaign_Icon(int32 EntryPoint, bool Temp_bool_Variable, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, const TArray<class UGeneratedMission*>& K2Node_CustomEvent_Missions, bool CallFunc_IsAnyMissionCampaign_IsOnMission, class APlayerState* CallFunc_Array_Get_Item, FString CallFunc_GetPlayerName_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAnyMissionCampaign_IsOnMission_1, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_CampaignItem_Member_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

#endif
