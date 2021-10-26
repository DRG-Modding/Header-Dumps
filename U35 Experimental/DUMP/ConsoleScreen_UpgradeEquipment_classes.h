// WidgetBlueprintGeneratedClass ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C
// Size: 0x268 (Inherited: 0x230)
struct UConsoleScreen_UpgradeEquipment_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TextAnim; // 0x238(0x08)
	UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; // 0x240(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x248(0x08)
	FText TextToDisplay; // 0x250(0x18)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnItemUnlocked_Event();
	void UpdateNotification();
	void ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int32_t EntryPoint);
};

