// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C
// Size: 0x248 (Inherited: 0x230)
struct UITM_MisSel_MissionIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic; // 0x238(0x08)
	struct UMissionTemplate* MissionTemplate; // 0x240(0x08)

	void SetIcon(struct FObjectiveMissionIcon MissionIcon); // Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetIcon
	void SetData(struct UMissionTemplate* InMissionTemplate); // Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_MisSel_MissionIcon(int32_t EntryPoint); // Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.ExecuteUbergraph_ITM_MisSel_MissionIcon
};

