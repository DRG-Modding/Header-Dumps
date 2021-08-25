// WidgetBlueprintGeneratedClass Widget_DropPod_Complexity.Widget_DropPod_Complexity_C
// Size: 0x30c (Inherited: 0x230)
struct UWidget_DropPod_Complexity_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x240(0x08)
	struct UVerticalBox* DeepDive_MissionData; // 0x248(0x08)
	struct UImage* Image_42; // 0x250(0x08)
	struct UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty; // 0x258(0x08)
	struct UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength; // 0x260(0x08)
	struct UVerticalBox* NoDeepDive_MissionData; // 0x268(0x08)
	struct UProgressBar* ProgressBar_1; // 0x270(0x08)
	struct UProgressBar* ProgressBar_2; // 0x278(0x08)
	struct UProgressBar* ProgressBar_3; // 0x280(0x08)
	struct UProgressBar* ProgressBar_4; // 0x288(0x08)
	struct UTextBlock* TextBlock_1; // 0x290(0x08)
	struct UTextBlock* TextBlock_2; // 0x298(0x08)
	struct UTextBlock* TextBlock_3; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_4; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_5; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_6; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_7; // 0x2c0(0x08)
	struct UWarningBox_C* WarningBox; // 0x2c8(0x08)
	struct UWarningBox_C* WarningBox_C_2; // 0x2d0(0x08)
	struct UWarningBox_C* WarningBox_C_3; // 0x2d8(0x08)
	struct UWarningBox_C* WarningBox_C_4; // 0x2e0(0x08)
	struct UWarningBox_C* WarningBox_C_5; // 0x2e8(0x08)
	struct UWarningBox_C* WarningBox_C_6; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2f8(0x08)
	float TimePassed; // 0x300(0x04)
	int32_t missionLength; // 0x304(0x04)
	int32_t MissionComplexity; // 0x308(0x04)

	void AdjustBar(float InputPin); // Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.AdjustBar
	void SetGeneratedMission(struct UGeneratedMission* In Mission); // Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.SetGeneratedMission
	void Construct(); // Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.Tick
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.OnGeneratedMissionChanged
	void ExecuteUbergraph_Widget_DropPod_Complexity(int32_t EntryPoint); // Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.ExecuteUbergraph_Widget_DropPod_Complexity
};

