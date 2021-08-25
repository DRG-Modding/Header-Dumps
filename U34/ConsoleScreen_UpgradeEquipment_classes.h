// WidgetBlueprintGeneratedClass ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C
// Size: 0x268 (Inherited: 0x230)
struct UConsoleScreen_UpgradeEquipment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TextAnim; // 0x238(0x08)
	struct UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; // 0x240(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x248(0x08)
	struct FText TextToDisplay; // 0x250(0x18)

	void Construct(); // Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct
	void OnItemUnlocked_Event(); // Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event
	void UpdateNotification(); // Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification
	void ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int32_t EntryPoint); // Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment
};

