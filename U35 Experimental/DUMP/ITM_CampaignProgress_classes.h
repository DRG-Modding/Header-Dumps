// WidgetBlueprintGeneratedClass ITM_CampaignProgress.ITM_CampaignProgress_C
// Size: 0x2c4 (Inherited: 0x230)
struct UITM_CampaignProgress_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x238(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_155; // 0x240(0x08)
	UImage* BG__Top; // 0x248(0x08)
	UImage* BG_L; // 0x250(0x08)
	UImage* BG_Mid; // 0x258(0x08)
	UImage* BG_R; // 0x260(0x08)
	UHorizontalBox* Box_CampaignItems; // 0x268(0x08)
	UImage* Bracket_L; // 0x270(0x08)
	UImage* Bracket_R; // 0x278(0x08)
	UTextBlock* DATA_AssignmentName; // 0x280(0x08)
	UITM_CampaignItem_C* ITM_CampaignItem; // 0x288(0x08)
	UITM_CampaignItem_C* ITM_CampaignItem_1; // 0x290(0x08)
	UCampaign* Campaign; // 0x298(0x08)
	bool ShowActiveCampaign; // 0x2a0(0x01)
	UBasic_ToolTip_C* ToolTip; // 0x2a8(0x08)
	bool UseCustomScale; // 0x2b0(0x01)
	FVector2D CustomScaleActive; // 0x2b4(0x08)
	FVector2D CustomScaleCompleted; // 0x2bc(0x08)

	void ShowCampaignProgress(UCampaign* Campaign, int32_t Progress);
	void TryPingMission(int32_t missionIndex);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update_Campaign(UCampaign* Campaign);
	void ExecuteUbergraph_ITM_CampaignProgress(int32_t EntryPoint);
};

