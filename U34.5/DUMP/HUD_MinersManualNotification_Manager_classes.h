// WidgetBlueprintGeneratedClass HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C
// Size: 0x244 (Inherited: 0x230)
struct UHUD_MinersManualNotification_Manager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* VerticalBox_NotificationHolder; // 0x238(0x08)
	float NotificationScreenTime; // 0x240(0x04)

	void Construct();
	void OnMinersManualNotification(enum class EMinersManualSection Section, FGuid ObjectID, FText Text);
	void ExecuteUbergraph_HUD_MinersManualNotification_Manager(int32_t EntryPoint);
};

