// WidgetBlueprintGeneratedClass WND_MissionBar_Normal.WND_MissionBar_Normal_C
// Size: 0x340 (Inherited: 0x230)
struct UWND_MissionBar_Normal_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ANIM_AssignmentIcon_Throb; // 0x238(0x08)
	UWidgetAnimation* ANIM_Intro; // 0x240(0x08)
	UImage* AssignmentIcon; // 0x248(0x08)
	UImage* AssignmentIconGlow; // 0x250(0x08)
	UOverlay* AssignmentIconHolder; // 0x258(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x260(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x268(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x270(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x278(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon_1; // 0x280(0x08)
	UBorder* Border_1; // 0x288(0x08)
	UBorder* Border_2; // 0x290(0x08)
	UBorder* Border_3; // 0x298(0x08)
	UBorder* Border_4; // 0x2a0(0x08)
	UBorder* BottomBorder; // 0x2a8(0x08)
	UTextBlock* DATA_HazardLevelName; // 0x2b0(0x08)
	UTextBlock* DATA_MissionName; // 0x2b8(0x08)
	UTextBlock* DATA_MissionType; // 0x2c0(0x08)
	UTextBlock* DATA_PlanetaryRegionName; // 0x2c8(0x08)
	UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty; // 0x2d0(0x08)
	UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength; // 0x2d8(0x08)
	UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x2e0(0x08)
	UITM_MissionBar_Warning_C* ITM_MissionBar_MutatorDescription; // 0x2e8(0x08)
	UITM_MissionBar_Warning_C* ITM_MissionBar_Warning; // 0x2f0(0x08)
	UBorder* MtopBG; // 0x2f8(0x08)
	UITM_MissionBar_Objective_C* PrimaryObjective; // 0x300(0x08)
	UITM_MissionBar_Objective_C* SecondaryObjective; // 0x308(0x08)
	UTextBlock* TextBlock_CampaignWarning; // 0x310(0x08)
	UBorder* TopBorder; // 0x318(0x08)
	UImage* TopSlantL; // 0x320(0x08)
	UImage* TopSlantR; // 0x328(0x08)
	UVerticalBox* VBox_Mutators; // 0x330(0x08)
	UVerticalBox* VBox_Warnings; // 0x338(0x08)

	void SetDifficultyData(UDifficultySetting* Target);
	void CampaignChecks(UGeneratedMission* mission, bool CampaignMission, bool AreRestrictionsMet);
	void SetGeneratedMission(UGeneratedMission* InMission);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnDifficultyChanged_Event_1(UDifficultySetting* Setting);
	void ExecuteUbergraph_WND_MissionBar_Normal(int32_t EntryPoint);
};

