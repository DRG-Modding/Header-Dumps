// WidgetBlueprintGeneratedClass ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C
// Size: 0x274 (Inherited: 0x230)
struct UITM_MissionBarDropPod_Objective_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	struct UTextBlock* DATA_Amount; // 0x240(0x08)
	struct UTextBlock* DATA_Objective; // 0x248(0x08)
	bool SecondaryObjective; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct FText ObjectiveText; // 0x258(0x18)
	int32_t FontSize; // 0x270(0x04)

	void SetShowReward(bool Show); // Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetShowReward
	void SetObjective(struct UGeneratedMission* mission, struct UObjective* ObjectiveType); // Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetObjective
	void PreConstruct(bool IsDesignTime); // Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.PreConstruct
	void ExecuteUbergraph_ITM_MissionBarDropPod_Objective(int32_t EntryPoint); // Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.ExecuteUbergraph_ITM_MissionBarDropPod_Objective
};

