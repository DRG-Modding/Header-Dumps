#ifndef UE4SS_SDK_ITM_CampaignCompletedRequirement_HPP
#define UE4SS_SDK_ITM_CampaignCompletedRequirement_HPP

class UITM_CampaignCompletedRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_73;
    class UTextBlock* T_CampaignText;
    bool RequirementMet;
    class UCamapaignCompletedRequirement* CampaignReq;

    void Construct();
    void ExecuteUbergraph_ITM_CampaignCompletedRequirement(int32 EntryPoint);
};

#endif
