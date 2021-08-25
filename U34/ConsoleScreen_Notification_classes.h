// WidgetBlueprintGeneratedClass ConsoleScreen_Notification.ConsoleScreen_Notification_C
// Size: 0x320 (Inherited: 0x230)
struct UConsoleScreen_Notification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Ping; // 0x238(0x08)
	struct UImage* LeftIcon; // 0x240(0x08)
	struct UTextBlock* NotificationLabel; // 0x248(0x08)
	struct UImage* RightIcon; // 0x250(0x08)
	struct UBorder* TextBackground; // 0x258(0x08)
	struct UBorder* TextBorder; // 0x260(0x08)
	struct FText NotificationText; // 0x268(0x18)
	int32_t TextSize; // 0x280(0x04)
	bool UpperCase; // 0x284(0x01)
	char UnknownData_285[0x3]; // 0x285(0x03)
	struct FSlateBrush IconBrush; // 0x288(0x88)
	char IconColor; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct UCategoryID* CategoryID; // 0x318(0x08)

	void SetNotificationIcon(struct UTexture2D* Texture); // Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationIcon
	void SetNotificationText(struct FText Text, int32_t NewSize); // Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationText
	void PreConstruct(bool IsDesignTime); // Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.PreConstruct
	void Construct(); // Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.Construct
	void SetNotificationCategory(struct UCategoryID* CategoryID); // Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationCategory
	void OnItemCategoryChanged(); // Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.OnItemCategoryChanged
	void ExecuteUbergraph_ConsoleScreen_Notification(int32_t EntryPoint); // Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.ExecuteUbergraph_ConsoleScreen_Notification
};

