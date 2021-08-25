// WidgetBlueprintGeneratedClass Console_MissionComplete.Console_MissionComplete_C
// Size: 0x3a0 (Inherited: 0x270)
struct UConsole_MissionComplete_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x280(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x288(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x290(0x08)
	struct UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG; // 0x298(0x08)
	struct UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_1; // 0x2a0(0x08)
	struct UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_2; // 0x2a8(0x08)
	struct UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_3; // 0x2b0(0x08)
	struct UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_4; // 0x2b8(0x08)
	struct UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_6; // 0x2c0(0x08)
	struct UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_7; // 0x2c8(0x08)
	struct UTextBlock* Data_Complexity; // 0x2d0(0x08)
	struct UTextBlock* DATA_CreditsEarned; // 0x2d8(0x08)
	struct UTextBlock* Data_HazardLevel; // 0x2e0(0x08)
	struct UTextBlock* Data_Length; // 0x2e8(0x08)
	struct UTextBlock* DATA_MissionTime; // 0x2f0(0x08)
	struct UTextBlock* Data_TotalBonus; // 0x2f8(0x08)
	struct UTextBlock* DATA_XPEarned; // 0x300(0x08)
	struct UImage* Icon_XP; // 0x308(0x08)
	struct UImage* Image_2; // 0x310(0x08)
	struct UImage* Image_42; // 0x318(0x08)
	struct UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarke_Length; // 0x320(0x08)
	struct UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarker_Complexity; // 0x328(0x08)
	struct UITM_WarningWithPercent_C* ITM_WarningWithPercent; // 0x330(0x08)
	struct UVerticalBox* MainScreen; // 0x338(0x08)
	struct UVerticalBox* MissionFailed; // 0x340(0x08)
	struct UVerticalBox* MIssionSuccessful; // 0x348(0x08)
	struct UVerticalBox* MissionTimeHolder; // 0x350(0x08)
	struct UTextBlock* TEXT_CreditsEarned; // 0x358(0x08)
	struct UTextBlock* Text_MissionStatus; // 0x360(0x08)
	struct UTextBlock* TEXT_MissionTime; // 0x368(0x08)
	struct UTextBlock* TextBlock_2; // 0x370(0x08)
	struct UTextBlock* TextBlock_4; // 0x378(0x08)
	struct UTextBlock* TextBlock_5; // 0x380(0x08)
	struct UTextBlock* TextBlock_6; // 0x388(0x08)
	struct UVerticalBox* VB_Warnings; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Success; // 0x398(0x08)

	void GetMissionResult(struct UMissionResultInfo* MissionResultInfo); // Function Console_MissionComplete.Console_MissionComplete_C.GetMissionResult
	void PreConstruct(bool IsDesignTime); // Function Console_MissionComplete.Console_MissionComplete_C.PreConstruct
	void BeginScreen(); // Function Console_MissionComplete.Console_MissionComplete_C.BeginScreen
	void Construct(); // Function Console_MissionComplete.Console_MissionComplete_C.Construct
	void ExecuteUbergraph_Console_MissionComplete(int32_t EntryPoint); // Function Console_MissionComplete.Console_MissionComplete_C.ExecuteUbergraph_Console_MissionComplete
};

