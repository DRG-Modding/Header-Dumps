// WidgetBlueprintGeneratedClass HUD_Milestone_Notification.HUD_Milestone_Notification_C
// Size: 0x2c0 (Inherited: 0x250)
struct UHUD_Milestone_Notification_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Outro; // 0x258(0x08)
	struct UWidgetAnimation* Intro; // 0x260(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x268(0x08)
	struct UBorder* Frame; // 0x270(0x08)
	struct UImage* Glow; // 0x278(0x08)
	struct UTextBlock* KPIHeader; // 0x280(0x08)
	struct UImage* StatIcon; // 0x288(0x08)
	struct UTextBlock* Title; // 0x290(0x08)
	struct UUI_Milestone_Tier_C* UI_Milestone_Tier; // 0x298(0x08)
	struct UMilestoneAsset* Milestone; // 0x2a0(0x08)
	int32_t CurrentTier; // 0x2a8(0x04)
	char UnknownData_2AC[0x4]; // 0x2ac(0x04)
	struct FMulticastInlineDelegate OnMilestoneReached; // 0x2b0(0x10)

	void PreConstruct(bool IsDesignTime); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct
	void Init Widget(); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget
	void Construct(); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct
	void OnMilestoneReached_Event(struct UMilestoneAsset* Milestone, int32_t ReachedTier); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event
	void OnIntroFinished(); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnIntroFinished
	void OnOutroFinished(); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnOutroFinished
	void ExecuteUbergraph_HUD_Milestone_Notification(int32_t EntryPoint); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification
	void OnMilestoneReached__DelegateSignature(); // Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature
};

