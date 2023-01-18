#ifndef UE4SS_SDK_ITM_CampaignItem_SmallEmpty_HPP
#define UE4SS_SDK_ITM_CampaignItem_SmallEmpty_HPP

class UITM_CampaignItem_SmallEmpty_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Connector;
    class UImage* InnerFiller;
    bool FirstMission;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CampaignItem_SmallEmpty(int32 EntryPoint);
};

#endif
