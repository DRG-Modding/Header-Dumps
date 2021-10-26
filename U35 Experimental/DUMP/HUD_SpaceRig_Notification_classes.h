// WidgetBlueprintGeneratedClass HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C
// Size: 0x2b0 (Inherited: 0x230)
struct UHUD_SpaceRig_Notification_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Outro; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UBorder* Frame; // 0x248(0x08)
	UImage* Glow; // 0x250(0x08)
	UTextBlock* Header; // 0x258(0x08)
	UImage* NotificationIcon; // 0x260(0x08)
	UTextBlock* NotificationLabel; // 0x268(0x08)
	FSpaceRigNotification Notification; // 0x270(0x40)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnIntroFinished();
	void OnOutroFinished();
	void ExecuteUbergraph_HUD_SpaceRig_Notification(int32_t EntryPoint);
};

