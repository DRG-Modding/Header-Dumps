// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C
// Size: 0x248 (Inherited: 0x230)
struct UITM_MisSel_MissionIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic; // 0x238(0x08)
	UMissionTemplate* MissionTemplate; // 0x240(0x08)

	void SetIcon(FObjectiveMissionIcon MissionIcon);
	void SetData(UMissionTemplate* InMissionTemplate);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MisSel_MissionIcon(int32_t EntryPoint);
};

