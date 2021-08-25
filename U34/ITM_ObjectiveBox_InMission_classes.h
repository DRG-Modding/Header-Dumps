// WidgetBlueprintGeneratedClass ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C
// Size: 0x259 (Inherited: 0x230)
struct UITM_ObjectiveBox_InMission_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* CounterIcon; // 0x238(0x08)
	struct UHUD_DefaultLabel_C* CounterText; // 0x240(0x08)
	struct UHUD_DefaultLabel_C* ObjectiveText; // 0x248(0x08)
	struct UObjective* Objective; // 0x250(0x08)
	bool primary; // 0x258(0x01)

	void UpdateText(struct FText InText, struct FText InCounterText, struct UTexture2D* InCounterIcon, bool Completed); // Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText
	void Set Objective(struct UObjective* Objective, bool IsPrimary); // Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective
	void OnObjectiveUpdated(struct UObjective* Objective); // Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated
	void SetCustom(struct FText Text, bool Completed); // Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom
	void ExecuteUbergraph_ITM_ObjectiveBox_InMission(int32_t EntryPoint); // Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission
};

