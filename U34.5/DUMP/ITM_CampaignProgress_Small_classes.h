// WidgetBlueprintGeneratedClass ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_CampaignProgress_Small_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* Box_CampaignItems; // 0x238(0x08)
	UITM_CampaignItem_C* ITM_CampaignItem; // 0x240(0x08)
	UCampaign* Campaign; // 0x248(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update_Campaign(UCampaign* Campaign);
	void Refresh();
	void ExecuteUbergraph_ITM_CampaignProgress_Small(int32_t EntryPoint);
};

