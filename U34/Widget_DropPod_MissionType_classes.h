// WidgetBlueprintGeneratedClass Widget_DropPod_MissionType.Widget_DropPod_MissionType_C
// Size: 0x2bc (Inherited: 0x230)
struct UWidget_DropPod_MissionType_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UTextBlock* DATA_MissionName; // 0x240(0x08)
	struct UTextBlock* DATA_MissionType; // 0x248(0x08)
	struct USizeBox* DeepDiveIcon; // 0x250(0x08)
	struct UHorizontalBox* HorizontalBox_Mutators; // 0x258(0x08)
	struct UImage* Image_42; // 0x260(0x08)
	struct UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon; // 0x268(0x08)
	struct UITM_MisDesMutator_C* ITM_MisDesMutator; // 0x270(0x08)
	struct UITM_MisDesMutator_C* ITM_MisDesMutator_2; // 0x278(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x280(0x08)
	struct USizeBox* NotDeepDiveIcon; // 0x288(0x08)
	struct UITM_MissionBarDropPod_Objective_C* PrimaryObjective; // 0x290(0x08)
	struct UITM_MissionBarDropPod_Objective_C* SecundaryObjective; // 0x298(0x08)
	struct UVerticalBox* VerticalBox_MissionData; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2a8(0x08)
	float TimePassed; // 0x2b0(0x04)
	int32_t missionLength; // 0x2b4(0x04)
	int32_t MissionComplexity; // 0x2b8(0x04)

	void SetMutators(struct UGeneratedMission* mission); // Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.SetMutators
	void SetGeneratedMission(struct UGeneratedMission* In Mission); // Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.SetGeneratedMission
	void Construct(); // Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.Construct
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnGeneratedMissionChanged
	void OnDifficultyChanged_Event_1(struct UDifficultySetting* Setting); // Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnDifficultyChanged_Event_1
	void ExecuteUbergraph_Widget_DropPod_MissionType(int32_t EntryPoint); // Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.ExecuteUbergraph_Widget_DropPod_MissionType
};

