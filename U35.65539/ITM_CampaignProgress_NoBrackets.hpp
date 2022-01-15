#ifndef UE4SS_SDK_ITM_CampaignProgress_NoBrackets_HPP
#define UE4SS_SDK_ITM_CampaignProgress_NoBrackets_HPP

class UITM_CampaignProgress_NoBrackets_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* Box_CampaignItems;
    UITM_CampaignItem_C* ITM_CampaignItem;
    UCampaign* Campaign;
    bool UseCustomScale;
    FVector2D CustomScaleActive;
    FVector2D CustomScaleCompleted;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update_Campaign(UCampaign* Campaign);
    void Refresh();
    void ExecuteUbergraph_ITM_CampaignProgress_NoBrackets(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, UCampaign* K2Node_CustomEvent_Campaign, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_CampaignItem_C* CallFunc_Create_ReturnValue, UCampaignMission* CallFunc_Array_Get_Item, UMissionTemplate* CallFunc_GetMissionTemplate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
