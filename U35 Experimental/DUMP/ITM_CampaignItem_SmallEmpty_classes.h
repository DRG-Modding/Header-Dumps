// WidgetBlueprintGeneratedClass ITM_CampaignItem_SmallEmpty.ITM_CampaignItem_SmallEmpty_C
// Size: 0x249 (Inherited: 0x230)
struct UITM_CampaignItem_SmallEmpty_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Connector; // 0x238(0x08)
	UImage* InnerFiller; // 0x240(0x08)
	bool FirstMission; // 0x248(0x01)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_CampaignItem_SmallEmpty(int32_t EntryPoint);
};

