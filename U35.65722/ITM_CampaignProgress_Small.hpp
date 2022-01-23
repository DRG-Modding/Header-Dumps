#ifndef UE4SS_SDK_ITM_CampaignProgress_Small_HPP
#define UE4SS_SDK_ITM_CampaignProgress_Small_HPP

class UITM_CampaignProgress_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Box_CampaignItems;
    class UITM_CampaignItem_C* ITM_CampaignItem;
    class UCampaign* Campaign;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update_Campaign(class UCampaign* Campaign);
    void Refresh();
    void ExecuteUbergraph_ITM_CampaignProgress_Small(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UCampaign* K2Node_CustomEvent_Campaign, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCampaignMission* CallFunc_Array_Get_Item, class UITM_CampaignItem_C* CallFunc_Create_ReturnValue, class UMissionTemplate* CallFunc_GetMissionTemplate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

#endif
