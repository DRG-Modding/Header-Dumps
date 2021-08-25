// WidgetBlueprintGeneratedClass ITM_CampaignItem.ITM_CampaignItem_C
// Size: 0x2b4 (Inherited: 0x230)
struct UITM_CampaignItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ANIM_PingIcon; // 0x238(0x08)
	struct UWidgetAnimation* ANIM_ActiveMission; // 0x240(0x08)
	struct UImage* BackgroundGlow; // 0x248(0x08)
	struct UImage* ConnectorLine; // 0x250(0x08)
	struct UImage* InnerBorder; // 0x258(0x08)
	struct UImage* InnerFiller; // 0x260(0x08)
	struct UImage* MissionIcon; // 0x268(0x08)
	struct UImage* OuterBorder; // 0x270(0x08)
	struct UImage* OuterFiller; // 0x278(0x08)
	struct UOverlay* Overlay_Outer; // 0x280(0x08)
	struct UImage* PingGlow; // 0x288(0x08)
	struct USizeBox* SizeBox_2; // 0x290(0x08)
	struct UMissionTemplate* mission; // 0x298(0x08)
	bool FirstMission; // 0x2a0(0x01)
	bool Complete; // 0x2a1(0x01)
	bool Active; // 0x2a2(0x01)
	char UnknownData_2A3[0x1]; // 0x2a3(0x01)
	struct FVector2D CompletedScale; // 0x2a4(0x08)
	struct FVector2D ActiveScale; // 0x2ac(0x08)

	void Ping(); // Function ITM_CampaignItem.ITM_CampaignItem_C.Ping
	void PreConstruct(bool IsDesignTime); // Function ITM_CampaignItem.ITM_CampaignItem_C.PreConstruct
	void Construct(); // Function ITM_CampaignItem.ITM_CampaignItem_C.Construct
	void OnPingStarted(); // Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingStarted
	void OnPingFinished(); // Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingFinished
	void SetScale(struct FVector2D CompletedScale, struct FVector2D ActiveScale); // Function ITM_CampaignItem.ITM_CampaignItem_C.SetScale
	void ExecuteUbergraph_ITM_CampaignItem(int32_t EntryPoint); // Function ITM_CampaignItem.ITM_CampaignItem_C.ExecuteUbergraph_ITM_CampaignItem
};

