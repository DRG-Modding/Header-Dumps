// WidgetBlueprintGeneratedClass ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C
// Size: 0x264 (Inherited: 0x230)
struct UITM_CampaignProgress_NoBrackets_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* Box_CampaignItems; // 0x238(0x08)
	struct UITM_CampaignItem_C* ITM_CampaignItem; // 0x240(0x08)
	struct UCampaign* Campaign; // 0x248(0x08)
	bool UseCustomScale; // 0x250(0x01)
	char UnknownData_251[0x3]; // 0x251(0x03)
	struct FVector2D CustomScaleActive; // 0x254(0x08)
	struct FVector2D CustomScaleCompleted; // 0x25c(0x08)

	void PreConstruct(bool IsDesignTime); // Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.PreConstruct
	void Construct(); // Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Construct
	void Update_Campaign(struct UCampaign* Campaign); // Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Update_Campaign
	void Refresh(); // Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Refresh
	void ExecuteUbergraph_ITM_CampaignProgress_NoBrackets(int32_t EntryPoint); // Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.ExecuteUbergraph_ITM_CampaignProgress_NoBrackets
};

