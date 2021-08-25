// WidgetBlueprintGeneratedClass LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C
// Size: 0x308 (Inherited: 0x230)
struct ULCD_MissionReadout_HazCompLen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget; // 0x240(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_1; // 0x248(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_2; // 0x250(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_3; // 0x258(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_4; // 0x260(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_5; // 0x268(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_6; // 0x270(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_7; // 0x278(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_8; // 0x280(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_9; // 0x288(0x08)
	struct UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_10; // 0x290(0x08)
	struct UVerticalBox* ComplexityLevels; // 0x298(0x08)
	struct UTextBlock* DATA_PlanetaryRegionName; // 0x2a0(0x08)
	struct UVerticalBox* HazardLevels; // 0x2a8(0x08)
	struct UImage* Image_42; // 0x2b0(0x08)
	struct UVerticalBox* LenghtLevels; // 0x2b8(0x08)
	struct UProgressBar* ProgressBar_Complexity; // 0x2c0(0x08)
	struct UProgressBar* ProgressBar_Haz; // 0x2c8(0x08)
	struct UProgressBar* ProgressBar_Length; // 0x2d0(0x08)
	struct UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base; // 0x2d8(0x08)
	struct UVerticalBox* VerticalBox_MissionData; // 0x2e0(0x08)
	struct TArray<struct FText> Names; // 0x2e8(0x10)
	int32_t Index; // 0x2f8(0x04)
	float TimePassed; // 0x2fc(0x04)
	int32_t MissionComplexity; // 0x300(0x04)
	int32_t missionLength; // 0x304(0x04)

	void AdjustCLBar(float InputPin); // Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar
	void AdjustBar(float InputPin); // Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar
	void SetGeneratedMission(struct UGeneratedMission* In Mission); // Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick
	void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(struct UGeneratedMission* InMission); // Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
	void ExecuteUbergraph_LCD_MissionReadout_HazCompLen(int32_t EntryPoint); // Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen
};

