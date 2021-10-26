// WidgetBlueprintGeneratedClass ConsoleScreen_Base.ConsoleScreen_Base_C
// Size: 0x260 (Inherited: 0x230)
struct UConsoleScreen_Base_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; // 0x238(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x240(0x08)
	FText Text; // 0x248(0x18)

	void SetNotificationVisible(bool NewVisibility);
	void SetNotification(FText Text, UTexture2D* IconTexture);
	void SetText(FText InText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ConsoleScreen_Base(int32_t EntryPoint);
};

