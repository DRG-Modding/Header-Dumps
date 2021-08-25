// WidgetBlueprintGeneratedClass LCD_CampaignProgress.LCD_CampaignProgress_C
// Size: 0x248 (Inherited: 0x230)
struct ULCD_CampaignProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_42; // 0x238(0x08)
	struct UITM_CampaignProgress_Small_C* ITM_CampaignProgress_Small; // 0x240(0x08)

	void Construct(); // Function LCD_CampaignProgress.LCD_CampaignProgress_C.Construct
	void OnCampaignChanged_Event_1(); // Function LCD_CampaignProgress.LCD_CampaignProgress_C.OnCampaignChanged_Event_1
	void ExecuteUbergraph_LCD_CampaignProgress(int32_t EntryPoint); // Function LCD_CampaignProgress.LCD_CampaignProgress_C.ExecuteUbergraph_LCD_CampaignProgress
};

