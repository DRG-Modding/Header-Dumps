// WidgetBlueprintGeneratedClass ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C
// Size: 0x2c0 (Inherited: 0x230)
struct UConsoleScreen_BGtemplate_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* BGicon; // 0x238(0x08)
	struct UWidgetAnimation* TextAnim; // 0x240(0x08)
	struct UBorder* Border_1; // 0x248(0x08)
	struct UBorder* Border_3; // 0x250(0x08)
	struct UBorder* Border_4; // 0x258(0x08)
	struct UBorder* Border_5; // 0x260(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x268(0x08)
	struct UTextBlock* TextBlock_147; // 0x270(0x08)
	struct UTextBlock* TXT_Main; // 0x278(0x08)
	struct FText TextToDisplay; // 0x280(0x18)
	struct FText NotificationText; // 0x298(0x18)
	struct UTexture2D* NotificationIcon; // 0x2b0(0x08)
	bool NotificationVisible; // 0x2b8(0x01)
	bool Toggle Header Bars; // 0x2b9(0x01)
	char UnknownData_2BA[0x2]; // 0x2ba(0x02)
	int32_t TextSize; // 0x2bc(0x04)

	void SetTextSize(int32_t TextSize); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetTextSize
	void SetHeaderBars(bool Toggle Header Bars); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetHeaderBars
	void SetNotificationVisible(bool IsVisible); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotificationVisible
	void SetNotification(struct FText Text, struct UTexture2D* InIcon); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotification
	void SetText(struct FText InText); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText
	void PreConstruct(bool IsDesignTime); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct
	void Construct(); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct
	void ExecuteUbergraph_ConsoleScreen_BGtemplate(int32_t EntryPoint); // Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate
};

