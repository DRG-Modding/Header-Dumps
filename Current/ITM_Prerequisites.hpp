#ifndef UE4SS_SDK_ITM_Prerequisites_HPP
#define UE4SS_SDK_ITM_Prerequisites_HPP

class UITM_Prerequisites_C : public UUserWidget
{
    class UImage* BG;
    class UImage* outline;
    class UHorizontalBox* PrereqHolder;
    class UTextBlock* TXT_Prereqs;
    class UCampaign* Campaign;
    bool ShowText;

    void SetData(class UCampaign* Campaign, bool& RequirementsMet);
    void CreateValidSeedRequirement(class UCampaignRequirement* Requirement, class UCampaign* Campaign);
    void CreateCampaignCompletedRequirement(class UCamapaignCompletedRequirement* CampaignReq, class UCampaign* Campaign);
    void CreateAnyRequirement(class UCampaignRequirement* Requirenent, class UCampaign* Campaign);
    void CreatePlayerRankBox(int32 Required Rank);
    void CreateLevelRequirementBox(int32 RequiredLevel, class UPlayerCharacterID* ID);
};

#endif
