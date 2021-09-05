// WidgetBlueprintGeneratedClass ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C
// Size: 0x264 (Inherited: 0x230)
struct UITM_CampaignProgress_NoBrackets_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* Box_CampaignItems; // 0x238(0x08)
	UITM_CampaignItem_C* ITM_CampaignItem; // 0x240(0x08)
	UCampaign* Campaign; // 0x248(0x08)
	bool UseCustomScale; // 0x250(0x01)
	FVector2D CustomScaleActive; // 0x254(0x08)
	FVector2D CustomScaleCompleted; // 0x25c(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update_Campaign(UCampaign* Campaign);
	void Refresh();
	void ExecuteUbergraph_ITM_CampaignProgress_NoBrackets(int32_t EntryPoint);
};

