// WidgetBlueprintGeneratedClass ITM_MissionBar_Objective.ITM_MissionBar_Objective_C
// Size: 0x270 (Inherited: 0x230)
struct UITM_MissionBar_Objective_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	UTextBlock* DATA_Amount; // 0x240(0x08)
	UTextBlock* DATA_Objective; // 0x248(0x08)
	bool SecondaryObjective; // 0x250(0x01)
	FText ObjectiveText; // 0x258(0x18)

	void SetObjective(UGeneratedMission* mission, UObjective* ObjectiveType);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MissionBar_Objective(int32_t EntryPoint);
};

