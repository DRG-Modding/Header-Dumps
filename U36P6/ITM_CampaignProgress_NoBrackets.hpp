#ifndef UE4SS_SDK_ITM_CampaignProgress_NoBrackets_HPP
#define UE4SS_SDK_ITM_CampaignProgress_NoBrackets_HPP

class UITM_CampaignProgress_NoBrackets_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Box_CampaignItems;
    class UITM_CampaignItem_C* ITM_CampaignItem;
    class UCampaign* Campaign;
    bool UseCustomScale;
    FVector2D CustomScaleActive;
    FVector2D CustomScaleCompleted;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update_Campaign(class UCampaign* Campaign);
    void Refresh();
    void ExecuteUbergraph_ITM_CampaignProgress_NoBrackets(int32 EntryPoint);
};

#endif
