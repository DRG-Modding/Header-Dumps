// WidgetBlueprintGeneratedClass ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C
// Size: 0x260 (Inherited: 0x230)
struct UITM_DeepDive_ObjectiveIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BG; // 0x238(0x08)
	struct UITM_MisSel_MissionIcon_C* Icon_MissionTemplate; // 0x240(0x08)
	struct UImage* IMG_MissionMainBG; // 0x248(0x08)
	struct UImage* IMG_MissionSecondaryBG; // 0x250(0x08)
	struct UITM_MisSel_MissionIcon_C* ITM_MisSel_MissionIcon_C_1; // 0x258(0x08)

	void SetTemplateIcon(struct UITM_MisSel_MissionIcon_C* Icon, struct UMissionTemplate* InMissionTemplate); // Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetTemplateIcon
	void SetObjectiveIcon(struct UUI_MaskedImage_C* Icon, struct UObjective* Objective); // Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetObjectiveIcon
	void SetData(struct UGeneratedMission* InMission); // Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int32_t EntryPoint); // Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon
};

