// WidgetBlueprintGeneratedClass HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C
// Size: 0x2b0 (Inherited: 0x230)
struct UHUD_SpaceRig_Notification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Outro; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UBorder* Frame; // 0x248(0x08)
	struct UImage* Glow; // 0x250(0x08)
	struct UTextBlock* Header; // 0x258(0x08)
	struct UImage* NotificationIcon; // 0x260(0x08)
	struct UTextBlock* NotificationLabel; // 0x268(0x08)
	struct FSpaceRigNotification Notification; // 0x270(0x40)

	void PreConstruct(bool IsDesignTime); // Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.PreConstruct
	void Construct(); // Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.Construct
	void OnIntroFinished(); // Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnIntroFinished
	void OnOutroFinished(); // Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnOutroFinished
	void ExecuteUbergraph_HUD_SpaceRig_Notification(int32_t EntryPoint); // Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.ExecuteUbergraph_HUD_SpaceRig_Notification
};

