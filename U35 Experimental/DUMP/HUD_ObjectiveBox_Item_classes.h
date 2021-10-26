// WidgetBlueprintGeneratedClass HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C
// Size: 0x2c9 (Inherited: 0x290)
struct UHUD_ObjectiveBox_Item_C : UObjectiveWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UImage* Checkbox_Border; // 0x298(0x08)
	UImage* CheckMark; // 0x2a0(0x08)
	UImage* ICON_Counter; // 0x2a8(0x08)
	UHUD_DefaultLabel_C* TEXT_ObjectiveCounter; // 0x2b0(0x08)
	UHUD_DefaultLabel_C* TEXT_ObjectiveDesc; // 0x2b8(0x08)
	UObjective* Objective; // 0x2c0(0x08)
	bool primary; // 0x2c8(0x01)

	void PreConstruct(bool IsDesignTime);
	void ReceiveObjectiveInitialized();
	void ReceiveObjectiveUpdated();
	void ExecuteUbergraph_HUD_ObjectiveBox_Item(int32_t EntryPoint);
};

