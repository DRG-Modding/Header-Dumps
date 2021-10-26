// WidgetBlueprintGeneratedClass ITM_Campaign_Icon.ITM_Campaign_Icon_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_Campaign_Icon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* CampaignIconGlow; // 0x238(0x08)
	UImage* CampaignIcon_BG; // 0x240(0x08)
	UImage* CampaignIcon_Border; // 0x248(0x08)
	UImage* CampaignIcon_Glow; // 0x250(0x08)
	USizeBox* CampaignIcon_Holder; // 0x258(0x08)
	UImage* CampaignIcon_Mission; // 0x260(0x08)
	UVerticalBox* VBOX_AssignmentMembers; // 0x268(0x08)
	bool PlayGlowAnim; // 0x270(0x01)

	void IsAnyMissionCampaign(TArray<UGeneratedMission*> missions, AFSDPlayerState* Player, bool IsOnMission);
	void PreConstruct(bool IsDesignTime);
	void SetCampaignIconData(TArray<UGeneratedMission*> missions);
	void ExecuteUbergraph_ITM_Campaign_Icon(int32_t EntryPoint);
};

