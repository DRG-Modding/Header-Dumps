// WidgetBlueprintGeneratedClass HUD_Milestone_Notification.HUD_Milestone_Notification_C
// Size: 0x2c0 (Inherited: 0x250)
struct UHUD_Milestone_Notification_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Outro; // 0x258(0x08)
	UWidgetAnimation* Intro; // 0x260(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x268(0x08)
	UBorder* Frame; // 0x270(0x08)
	UImage* Glow; // 0x278(0x08)
	UTextBlock* KPIHeader; // 0x280(0x08)
	UImage* StatIcon; // 0x288(0x08)
	UTextBlock* Title; // 0x290(0x08)
	UUI_Milestone_Tier_C* UI_Milestone_Tier; // 0x298(0x08)
	UMilestoneAsset* Milestone; // 0x2a0(0x08)
	int32_t CurrentTier; // 0x2a8(0x04)
	FMulticastInlineDelegate OnMilestoneReached; // 0x2b0(0x10)

	void PreConstruct(bool IsDesignTime);
	void Init Widget();
	void Construct();
	void OnMilestoneReached_Event(UMilestoneAsset* Milestone, int32_t ReachedTier);
	void OnIntroFinished();
	void OnOutroFinished();
	void ExecuteUbergraph_HUD_Milestone_Notification(int32_t EntryPoint);
	void OnMilestoneReached__DelegateSignature();
};

