// WidgetBlueprintGeneratedClass ConsoleScreen_Notification.ConsoleScreen_Notification_C
// Size: 0x320 (Inherited: 0x230)
struct UConsoleScreen_Notification_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Ping; // 0x238(0x08)
	UImage* LeftIcon; // 0x240(0x08)
	UTextBlock* NotificationLabel; // 0x248(0x08)
	UImage* RightIcon; // 0x250(0x08)
	UBorder* TextBackground; // 0x258(0x08)
	UBorder* TextBorder; // 0x260(0x08)
	FText NotificationText; // 0x268(0x18)
	int32_t TextSize; // 0x280(0x04)
	bool UpperCase; // 0x284(0x01)
	FSlateBrush IconBrush; // 0x288(0x88)
	enum class ENUM_MenuColors IconColor; // 0x310(0x01)
	UCategoryID* CategoryID; // 0x318(0x08)

	void SetTextSize(int32_t InTextSize);
	void SetNotificationIcon(UTexture2D* Texture);
	void SetNotificationText(FText Text);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetNotificationCategory(UCategoryID* CategoryID);
	void OnItemCategoryChanged();
	void ExecuteUbergraph_ConsoleScreen_Notification(int32_t EntryPoint);
};

