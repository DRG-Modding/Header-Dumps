// WidgetBlueprintGeneratedClass ITM_MissionInfo.ITM_MissionInfo_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_MissionInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DataDifficultyName; // 0x238(0x08)
	UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty; // 0x240(0x08)
	UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength; // 0x248(0x08)
	UITM_WarningAndMutator_C* ITM_WarningAndMutator; // 0x250(0x08)

	void UpdateMissionInfo(UGeneratedMission* mission);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MissionInfo(int32_t EntryPoint);
};

