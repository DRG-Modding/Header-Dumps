// WidgetBlueprintGeneratedClass ITM_CampaignProgress.ITM_CampaignProgress_C
// Size: 0x2c4 (Inherited: 0x230)
struct UITM_CampaignProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x238(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_155; // 0x240(0x08)
	struct UImage* BG__Top; // 0x248(0x08)
	struct UImage* BG_L; // 0x250(0x08)
	struct UImage* BG_Mid; // 0x258(0x08)
	struct UImage* BG_R; // 0x260(0x08)
	struct UHorizontalBox* Box_CampaignItems; // 0x268(0x08)
	struct UImage* Bracket_L; // 0x270(0x08)
	struct UImage* Bracket_R; // 0x278(0x08)
	struct UTextBlock* DATA_AssignmentName; // 0x280(0x08)
	struct UITM_CampaignItem_C* ITM_CampaignItem; // 0x288(0x08)
	struct UITM_CampaignItem_C* ITM_CampaignItem_1; // 0x290(0x08)
	struct UCampaign* Campaign; // 0x298(0x08)
	bool ShowActiveCampaign; // 0x2a0(0x01)
	char UnknownData_2A1[0x7]; // 0x2a1(0x07)
	struct UBasic_ToolTip_C* ToolTip; // 0x2a8(0x08)
	bool UseCustomScale; // 0x2b0(0x01)
	char UnknownData_2B1[0x3]; // 0x2b1(0x03)
	struct FVector2D CustomScaleActive; // 0x2b4(0x08)
	struct FVector2D CustomScaleCompleted; // 0x2bc(0x08)

	void ShowCampaignProgress(struct UCampaign* Campaign, int32_t Progress); // Function ITM_CampaignProgress.ITM_CampaignProgress_C.ShowCampaignProgress
	void TryPingMission(int32_t missionIndex); // Function ITM_CampaignProgress.ITM_CampaignProgress_C.TryPingMission
	void PreConstruct(bool IsDesignTime); // Function ITM_CampaignProgress.ITM_CampaignProgress_C.PreConstruct
	void Construct(); // Function ITM_CampaignProgress.ITM_CampaignProgress_C.Construct
	void Update_Campaign(struct UCampaign* Campaign); // Function ITM_CampaignProgress.ITM_CampaignProgress_C.Update_Campaign
	void ExecuteUbergraph_ITM_CampaignProgress(int32_t EntryPoint); // Function ITM_CampaignProgress.ITM_CampaignProgress_C.ExecuteUbergraph_ITM_CampaignProgress
};

