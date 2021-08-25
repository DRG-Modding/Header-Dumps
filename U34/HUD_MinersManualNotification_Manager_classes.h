// WidgetBlueprintGeneratedClass HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C
// Size: 0x244 (Inherited: 0x230)
struct UHUD_MinersManualNotification_Manager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* VerticalBox_NotificationHolder; // 0x238(0x08)
	float NotificationScreenTime; // 0x240(0x04)

	void Construct(); // Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.Construct
	void OnMinersManualNotification(enum class EMinersManualSection Section, struct FGuid ObjectID, struct FText Text); // Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.OnMinersManualNotification
	void ExecuteUbergraph_HUD_MinersManualNotification_Manager(int32_t EntryPoint); // Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.ExecuteUbergraph_HUD_MinersManualNotification_Manager
};

