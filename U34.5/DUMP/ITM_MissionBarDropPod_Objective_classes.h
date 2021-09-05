// WidgetBlueprintGeneratedClass ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C
// Size: 0x274 (Inherited: 0x230)
struct UITM_MissionBarDropPod_Objective_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	UTextBlock* DATA_Amount; // 0x240(0x08)
	UTextBlock* DATA_Objective; // 0x248(0x08)
	bool SecondaryObjective; // 0x250(0x01)
	FText ObjectiveText; // 0x258(0x18)
	int32_t FontSize; // 0x270(0x04)

	void SetShowReward(bool Show);
	void SetObjective(UGeneratedMission* mission, UObjective* ObjectiveType);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MissionBarDropPod_Objective(int32_t EntryPoint);
};

