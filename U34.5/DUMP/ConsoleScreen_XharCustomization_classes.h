// WidgetBlueprintGeneratedClass ConsoleScreen_XharCustomization.ConsoleScreen_XharCustomization_C
// Size: 0x248 (Inherited: 0x230)
struct UConsoleScreen_XharCustomization_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; // 0x238(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x240(0x08)

	void Construct();
	void OnItemUINotificationChange();
	void ExecuteUbergraph_ConsoleScreen_XharCustomization(int32_t EntryPoint);
};

