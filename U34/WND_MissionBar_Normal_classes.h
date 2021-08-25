// WidgetBlueprintGeneratedClass WND_MissionBar_Normal.WND_MissionBar_Normal_C
// Size: 0x340 (Inherited: 0x230)
struct UWND_MissionBar_Normal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ANIM_AssignmentIcon_Throb; // 0x238(0x08)
	struct UWidgetAnimation* ANIM_Intro; // 0x240(0x08)
	struct UImage* AssignmentIcon; // 0x248(0x08)
	struct UImage* AssignmentIconGlow; // 0x250(0x08)
	struct UOverlay* AssignmentIconHolder; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x260(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x268(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x270(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x278(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon_1; // 0x280(0x08)
	struct UBorder* Border_1; // 0x288(0x08)
	struct UBorder* Border_2; // 0x290(0x08)
	struct UBorder* Border_3; // 0x298(0x08)
	struct UBorder* Border_4; // 0x2a0(0x08)
	struct UBorder* BottomBorder; // 0x2a8(0x08)
	struct UTextBlock* DATA_HazardLevelName; // 0x2b0(0x08)
	struct UTextBlock* DATA_MissionName; // 0x2b8(0x08)
	struct UTextBlock* DATA_MissionType; // 0x2c0(0x08)
	struct UTextBlock* DATA_PlanetaryRegionName; // 0x2c8(0x08)
	struct UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty; // 0x2d0(0x08)
	struct UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength; // 0x2d8(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x2e0(0x08)
	struct UITM_MissionBar_Warning_C* ITM_MissionBar_MutatorDescription; // 0x2e8(0x08)
	struct UITM_MissionBar_Warning_C* ITM_MissionBar_Warning; // 0x2f0(0x08)
	struct UBorder* MtopBG; // 0x2f8(0x08)
	struct UITM_MissionBar_Objective_C* PrimaryObjective; // 0x300(0x08)
	struct UITM_MissionBar_Objective_C* SecondaryObjective; // 0x308(0x08)
	struct UTextBlock* TextBlock_CampaignWarning; // 0x310(0x08)
	struct UBorder* TopBorder; // 0x318(0x08)
	struct UImage* TopSlantL; // 0x320(0x08)
	struct UImage* TopSlantR; // 0x328(0x08)
	struct UVerticalBox* VBox_Mutators; // 0x330(0x08)
	struct UVerticalBox* VBox_Warnings; // 0x338(0x08)

	void SetDifficultyData(struct UDifficultySetting* Target); // Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetDifficultyData
	void CampaignChecks(struct UGeneratedMission* mission, bool CampaignMission, bool AreRestrictionsMet); // Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks
	void SetGeneratedMission(struct UGeneratedMission* InMission); // Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission
	void PreConstruct(bool IsDesignTime); // Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct
	void Construct(); // Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct
	void OnDifficultyChanged_Event_1(struct UDifficultySetting* Setting); // Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.OnDifficultyChanged_Event_1
	void ExecuteUbergraph_WND_MissionBar_Normal(int32_t EntryPoint); // Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal
};

