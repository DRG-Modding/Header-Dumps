// WidgetBlueprintGeneratedClass ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C
// Size: 0x259 (Inherited: 0x230)
struct UITM_ObjectiveBox_InMission_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* CounterIcon; // 0x238(0x08)
	UHUD_DefaultLabel_C* CounterText; // 0x240(0x08)
	UHUD_DefaultLabel_C* ObjectiveText; // 0x248(0x08)
	UObjective* Objective; // 0x250(0x08)
	bool primary; // 0x258(0x01)

	void UpdateText(FText InText, FText InCounterText, UTexture2D* InCounterIcon, bool Completed);
	void Set Objective(UObjective* Objective, bool IsPrimary);
	void OnObjectiveUpdated(UObjective* Objective);
	void SetCustom(FText Text, bool Completed);
	void ExecuteUbergraph_ITM_ObjectiveBox_InMission(int32_t EntryPoint);
};

