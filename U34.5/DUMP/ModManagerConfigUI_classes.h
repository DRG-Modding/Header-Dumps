// WidgetBlueprintGeneratedClass ModManagerConfigUI.ModManagerConfigUI_C
// Size: 0x270 (Inherited: 0x230)
struct UModManagerConfigUI_C : UUserWidget {
	UEditableTextBox* KeyBindingBox; // 0x230(0x08)
	UCheckBox* NotificationsCheckBox; // 0x238(0x08)
	UButton* RecordButton; // 0x240(0x08)
	UTextBlock* RecordButtonText; // 0x248(0x08)
	TArray<FKey> DownKeys; // 0x250(0x10)
	FString DownKeysText; // 0x260(0x10)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
};

