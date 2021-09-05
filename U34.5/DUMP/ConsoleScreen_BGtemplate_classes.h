// WidgetBlueprintGeneratedClass ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C
// Size: 0x2c0 (Inherited: 0x230)
struct UConsoleScreen_BGtemplate_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* BGicon; // 0x238(0x08)
	UWidgetAnimation* TextAnim; // 0x240(0x08)
	UBorder* Border_1; // 0x248(0x08)
	UBorder* Border_3; // 0x250(0x08)
	UBorder* Border_4; // 0x258(0x08)
	UBorder* Border_5; // 0x260(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x268(0x08)
	UTextBlock* TextBlock_147; // 0x270(0x08)
	UTextBlock* TXT_Main; // 0x278(0x08)
	FText TextToDisplay; // 0x280(0x18)
	FText NotificationText; // 0x298(0x18)
	UTexture2D* NotificationIcon; // 0x2b0(0x08)
	bool NotificationVisible; // 0x2b8(0x01)
	bool Toggle Header Bars; // 0x2b9(0x01)
	int32_t TextSize; // 0x2bc(0x04)

	void SetTextSize(int32_t TextSize);
	void SetHeaderBars(bool Toggle Header Bars);
	void SetNotificationVisible(bool IsVisible);
	void SetNotification(FText Text, UTexture2D* InIcon);
	void SetText(FText InText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ConsoleScreen_BGtemplate(int32_t EntryPoint);
};

