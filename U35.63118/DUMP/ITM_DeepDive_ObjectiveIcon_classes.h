// WidgetBlueprintGeneratedClass ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C
// Size: 0x260 (Inherited: 0x230)
struct UITM_DeepDive_ObjectiveIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BG; // 0x238(0x08)
	UITM_MisSel_MissionIcon_C* Icon_MissionTemplate; // 0x240(0x08)
	UImage* IMG_MissionMainBG; // 0x248(0x08)
	UImage* IMG_MissionSecondaryBG; // 0x250(0x08)
	UITM_MisSel_MissionIcon_C* ITM_MisSel_MissionIcon_C_1; // 0x258(0x08)

	void SetTemplateIcon(UITM_MisSel_MissionIcon_C* Icon, UMissionTemplate* InMissionTemplate);
	void SetObjectiveIcon(UUI_MaskedImage_C* Icon, UObjective* Objective);
	void SetData(UGeneratedMission* InMission);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int32_t EntryPoint);
};

