#ifndef UE4SS_SDK_ITM_CampaignProgress_Small_HPP
#define UE4SS_SDK_ITM_CampaignProgress_Small_HPP

class UITM_CampaignProgress_Small_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* Box_CampaignItems;
    UITM_CampaignItem_C* ITM_CampaignItem;
    UCampaign* Campaign;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update_Campaign(UCampaign* Campaign);
    void Refresh();
    void ExecuteUbergraph_ITM_CampaignProgress_Small(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, UCampaign* K2Node_CustomEvent_Campaign, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UCampaignMission* CallFunc_Array_Get_Item, UITM_CampaignItem_C* CallFunc_Create_ReturnValue, UMissionTemplate* CallFunc_GetMissionTemplate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
}

#endif
