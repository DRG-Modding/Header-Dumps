// WidgetBlueprintGeneratedClass ITM_Prerequisites.ITM_Prerequisites_C
// Size: 0x249 (Inherited: 0x230)
struct UITM_Prerequisites_C : UUserWidget {
	struct UHorizontalBox* PrereqHolder; // 0x230(0x08)
	struct UTextBlock* TXT_Prereqs; // 0x238(0x08)
	struct UCampaign* Campaign; // 0x240(0x08)
	bool ShowText; // 0x248(0x01)

	void SetData(struct UCampaign* Campaign, bool RequirementsMet); // Function ITM_Prerequisites.ITM_Prerequisites_C.SetData
	void CreateValidSeedRequirement(struct UCampaignRequirement* Requirement, struct UCampaign* Campaign); // Function ITM_Prerequisites.ITM_Prerequisites_C.CreateValidSeedRequirement
	void CreateCampaignCompletedRequirement(struct UCampaignRequirement* Requirement, struct UCampaign* Campaign); // Function ITM_Prerequisites.ITM_Prerequisites_C.CreateCampaignCompletedRequirement
	void CreateAnyRequirement(struct UCampaignRequirement* Requirenent, struct UCampaign* Campaign); // Function ITM_Prerequisites.ITM_Prerequisites_C.CreateAnyRequirement
	void CreatePlayerRankBox(int32_t Required Rank); // Function ITM_Prerequisites.ITM_Prerequisites_C.CreatePlayerRankBox
	void CreateLevelRequirementBox(int32_t RequiredLevel, struct UPlayerCharacterID* ID); // Function ITM_Prerequisites.ITM_Prerequisites_C.CreateLevelRequirementBox
};

