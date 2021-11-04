// WidgetBlueprintGeneratedClass LCD_CampaignProgress.LCD_CampaignProgress_C
// Size: 0x248 (Inherited: 0x230)
struct ULCD_CampaignProgress_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_42; // 0x238(0x08)
	UITM_CampaignProgress_Small_C* ITM_CampaignProgress_Small; // 0x240(0x08)

	void Construct();
	void OnCampaignChanged_Event_1();
	void ExecuteUbergraph_LCD_CampaignProgress(int32_t EntryPoint);
};

