// WidgetBlueprintGeneratedClass ITM_Campaign_Icon.ITM_Campaign_Icon_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_Campaign_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* CampaignIconGlow; // 0x238(0x08)
	struct UImage* CampaignIcon_BG; // 0x240(0x08)
	struct UImage* CampaignIcon_Border; // 0x248(0x08)
	struct UImage* CampaignIcon_Glow; // 0x250(0x08)
	struct USizeBox* CampaignIcon_Holder; // 0x258(0x08)
	struct UImage* CampaignIcon_Mission; // 0x260(0x08)
	struct UVerticalBox* VBOX_AssignmentMembers; // 0x268(0x08)
	bool PlayGlowAnim; // 0x270(0x01)

	void IsAnyMissionCampaign(struct TArray<struct UGeneratedMission*> missions, struct AFSDPlayerState* Player, bool IsOnMission); // Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.IsAnyMissionCampaign
	void PreConstruct(bool IsDesignTime); // Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.PreConstruct
	void SetCampaignIconData(struct TArray<struct UGeneratedMission*> missions); // Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.SetCampaignIconData
	void ExecuteUbergraph_ITM_Campaign_Icon(int32_t EntryPoint); // Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.ExecuteUbergraph_ITM_Campaign_Icon
};

