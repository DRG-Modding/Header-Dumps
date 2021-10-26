// WidgetBlueprintGeneratedClass Widget_DropPod_MissionType.Widget_DropPod_MissionType_C
// Size: 0x2bc (Inherited: 0x230)
struct UWidget_DropPod_MissionType_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UTextBlock* DATA_MissionName; // 0x240(0x08)
	UTextBlock* DATA_MissionType; // 0x248(0x08)
	USizeBox* DeepDiveIcon; // 0x250(0x08)
	UHorizontalBox* HorizontalBox_Mutators; // 0x258(0x08)
	UImage* Image_42; // 0x260(0x08)
	UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon; // 0x268(0x08)
	UITM_MisDesMutator_C* ITM_MisDesMutator; // 0x270(0x08)
	UITM_MisDesMutator_C* ITM_MisDesMutator_2; // 0x278(0x08)
	UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x280(0x08)
	USizeBox* NotDeepDiveIcon; // 0x288(0x08)
	UITM_MissionBarDropPod_Objective_C* PrimaryObjective; // 0x290(0x08)
	UITM_MissionBarDropPod_Objective_C* SecundaryObjective; // 0x298(0x08)
	UVerticalBox* VerticalBox_MissionData; // 0x2a0(0x08)
	UWidgetSwitcher* WidgetSwitcher_1; // 0x2a8(0x08)
	float TimePassed; // 0x2b0(0x04)
	int32_t missionLength; // 0x2b4(0x04)
	int32_t MissionComplexity; // 0x2b8(0x04)

	void SetMutators(UGeneratedMission* mission);
	void SetGeneratedMission(UGeneratedMission* In Mission);
	void Construct();
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void OnDifficultyChanged_Event_1(UDifficultySetting* Setting);
	void ExecuteUbergraph_Widget_DropPod_MissionType(int32_t EntryPoint);
};

