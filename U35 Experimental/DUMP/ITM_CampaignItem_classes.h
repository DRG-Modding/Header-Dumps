// WidgetBlueprintGeneratedClass ITM_CampaignItem.ITM_CampaignItem_C
// Size: 0x2b4 (Inherited: 0x230)
struct UITM_CampaignItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ANIM_PingIcon; // 0x238(0x08)
	UWidgetAnimation* ANIM_ActiveMission; // 0x240(0x08)
	UImage* BackgroundGlow; // 0x248(0x08)
	UImage* ConnectorLine; // 0x250(0x08)
	UImage* InnerBorder; // 0x258(0x08)
	UImage* InnerFiller; // 0x260(0x08)
	UImage* MissionIcon; // 0x268(0x08)
	UImage* OuterBorder; // 0x270(0x08)
	UImage* OuterFiller; // 0x278(0x08)
	UOverlay* Overlay_Outer; // 0x280(0x08)
	UImage* PingGlow; // 0x288(0x08)
	USizeBox* SizeBox_2; // 0x290(0x08)
	UMissionTemplate* mission; // 0x298(0x08)
	bool FirstMission; // 0x2a0(0x01)
	bool Complete; // 0x2a1(0x01)
	bool Active; // 0x2a2(0x01)
	FVector2D CompletedScale; // 0x2a4(0x08)
	FVector2D ActiveScale; // 0x2ac(0x08)

	void Ping();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnPingStarted();
	void OnPingFinished();
	void SetScale(FVector2D CompletedScale, FVector2D ActiveScale);
	void ExecuteUbergraph_ITM_CampaignItem(int32_t EntryPoint);
};

