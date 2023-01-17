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
    void ExecuteUbergraph_ITM_CampaignProgress_Small(int32 EntryPoint);
};

#endif
