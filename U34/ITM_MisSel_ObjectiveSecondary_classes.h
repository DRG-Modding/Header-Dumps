// WidgetBlueprintGeneratedClass ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_MisSel_ObjectiveSecondary_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DataMissionReward; // 0x238(0x08)
	struct UTextBlock* DATAMissionSecondaryObjective; // 0x240(0x08)
	struct UImage* Image_1; // 0x248(0x08)

	void SetData(struct UObjective* Objective, float missionLength, float HazardBonus); // Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.PreConstruct
	void ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary(int32_t EntryPoint); // Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary
};

