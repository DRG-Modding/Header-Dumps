// WidgetBlueprintGeneratedClass HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C
// Size: 0x2c9 (Inherited: 0x290)
struct UHUD_ObjectiveBox_Item_C : UObjectiveWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Checkbox_Border; // 0x298(0x08)
	struct UImage* CheckMark; // 0x2a0(0x08)
	struct UImage* ICON_Counter; // 0x2a8(0x08)
	struct UHUD_DefaultLabel_C* TEXT_ObjectiveCounter; // 0x2b0(0x08)
	struct UHUD_DefaultLabel_C* TEXT_ObjectiveDesc; // 0x2b8(0x08)
	struct UObjective* Objective; // 0x2c0(0x08)
	bool primary; // 0x2c8(0x01)

	void PreConstruct(bool IsDesignTime); // Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct
	void ReceiveObjectiveInitialized(); // Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveInitialized
	void ReceiveObjectiveUpdated(); // Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveUpdated
	void ExecuteUbergraph_HUD_ObjectiveBox_Item(int32_t EntryPoint); // Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item
};

