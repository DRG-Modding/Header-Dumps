// WidgetBlueprintGeneratedClass ConsoleScreen_Base.ConsoleScreen_Base_C
// Size: 0x260 (Inherited: 0x230)
struct UConsoleScreen_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; // 0x238(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x240(0x08)
	struct FText Text; // 0x248(0x18)

	void SetNotificationVisible(bool NewVisibility); // Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotificationVisible
	void SetNotification(struct FText Text, struct UTexture2D* IconTexture); // Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotification
	void SetText(struct FText InText); // Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetText
	void PreConstruct(bool IsDesignTime); // Function ConsoleScreen_Base.ConsoleScreen_Base_C.PreConstruct
	void ExecuteUbergraph_ConsoleScreen_Base(int32_t EntryPoint); // Function ConsoleScreen_Base.ConsoleScreen_Base_C.ExecuteUbergraph_ConsoleScreen_Base
};

