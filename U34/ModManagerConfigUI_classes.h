// WidgetBlueprintGeneratedClass ModManagerConfigUI.ModManagerConfigUI_C
// Size: 0x270 (Inherited: 0x230)
struct UModManagerConfigUI_C : UUserWidget {
	struct UEditableTextBox* KeyBindingBox; // 0x230(0x08)
	struct UCheckBox* NotificationsCheckBox; // 0x238(0x08)
	struct UButton* RecordButton; // 0x240(0x08)
	struct UTextBlock* RecordButtonText; // 0x248(0x08)
	struct TArray<struct FKey> DownKeys; // 0x250(0x10)
	struct FString DownKeysText; // 0x260(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ModManagerConfigUI.ModManagerConfigUI_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ModManagerConfigUI.ModManagerConfigUI_C.OnKeyDown
};

