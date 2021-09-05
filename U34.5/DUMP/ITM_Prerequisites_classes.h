// WidgetBlueprintGeneratedClass ITM_Prerequisites.ITM_Prerequisites_C
// Size: 0x249 (Inherited: 0x230)
struct UITM_Prerequisites_C : UUserWidget {
	UHorizontalBox* PrereqHolder; // 0x230(0x08)
	UTextBlock* TXT_Prereqs; // 0x238(0x08)
	UCampaign* Campaign; // 0x240(0x08)
	bool ShowText; // 0x248(0x01)

	void SetData(UCampaign* Campaign, bool RequirementsMet);
	void CreateValidSeedRequirement(UCampaignRequirement* Requirement, UCampaign* Campaign);
	void CreateCampaignCompletedRequirement(UCampaignRequirement* Requirement, UCampaign* Campaign);
	void CreateAnyRequirement(UCampaignRequirement* Requirenent, UCampaign* Campaign);
	void CreatePlayerRankBox(int32_t Required Rank);
	void CreateLevelRequirementBox(int32_t RequiredLevel, UPlayerCharacterID* ID);
};

