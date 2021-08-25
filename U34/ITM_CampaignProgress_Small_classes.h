// WidgetBlueprintGeneratedClass ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_CampaignProgress_Small_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* Box_CampaignItems; // 0x238(0x08)
	struct UITM_CampaignItem_C* ITM_CampaignItem; // 0x240(0x08)
	struct UCampaign* Campaign; // 0x248(0x08)

	void PreConstruct(bool IsDesignTime); // Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.PreConstruct
	void Construct(); // Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Construct
	void Update_Campaign(struct UCampaign* Campaign); // Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Update_Campaign
	void Refresh(); // Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Refresh
	void ExecuteUbergraph_ITM_CampaignProgress_Small(int32_t EntryPoint); // Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.ExecuteUbergraph_ITM_CampaignProgress_Small
};

