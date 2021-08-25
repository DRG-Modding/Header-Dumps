// WidgetBlueprintGeneratedClass ModManagerNotificationUI.ModManagerNotificationUI_C
// Size: 0x280 (Inherited: 0x230)
struct UModManagerNotificationUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBackgroundBlur* Blur; // 0x238(0x08)
	struct UTextBlock* KeyBinding; // 0x240(0x08)
	struct UCanvasPanel* MainContentCanvas; // 0x248(0x08)
	struct UTextBlock* ModsLoaded; // 0x250(0x08)
	struct FText MenuKeyBinding; // 0x258(0x18)
	int32_t ModCount; // 0x270(0x04)
	float TimerRate; // 0x274(0x04)
	float Fade Duration; // 0x278(0x04)
	float X; // 0x27c(0x04)

	void Construct(); // Function ModManagerNotificationUI.ModManagerNotificationUI_C.Construct
	void Fade(); // Function ModManagerNotificationUI.ModManagerNotificationUI_C.Fade
	void ExecuteUbergraph_ModManagerNotificationUI(int32_t EntryPoint); // Function ModManagerNotificationUI.ModManagerNotificationUI_C.ExecuteUbergraph_ModManagerNotificationUI
};

