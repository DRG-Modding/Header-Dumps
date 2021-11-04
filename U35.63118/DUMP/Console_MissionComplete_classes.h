// WidgetBlueprintGeneratedClass Console_MissionComplete.Console_MissionComplete_C
// Size: 0x3a0 (Inherited: 0x270)
struct UConsole_MissionComplete_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x280(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x288(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x290(0x08)
	UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG; // 0x298(0x08)
	UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_1; // 0x2a0(0x08)
	UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_2; // 0x2a8(0x08)
	UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_3; // 0x2b0(0x08)
	UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_4; // 0x2b8(0x08)
	UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_6; // 0x2c0(0x08)
	UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_7; // 0x2c8(0x08)
	UTextBlock* Data_Complexity; // 0x2d0(0x08)
	UTextBlock* DATA_CreditsEarned; // 0x2d8(0x08)
	UTextBlock* Data_HazardLevel; // 0x2e0(0x08)
	UTextBlock* Data_Length; // 0x2e8(0x08)
	UTextBlock* DATA_MissionTime; // 0x2f0(0x08)
	UTextBlock* Data_TotalBonus; // 0x2f8(0x08)
	UTextBlock* DATA_XPEarned; // 0x300(0x08)
	UImage* Icon_XP; // 0x308(0x08)
	UImage* Image_2; // 0x310(0x08)
	UImage* Image_42; // 0x318(0x08)
	UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarke_Length; // 0x320(0x08)
	UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarker_Complexity; // 0x328(0x08)
	UITM_WarningWithPercent_C* ITM_WarningWithPercent; // 0x330(0x08)
	UVerticalBox* MainScreen; // 0x338(0x08)
	UVerticalBox* MissionFailed; // 0x340(0x08)
	UVerticalBox* MIssionSuccessful; // 0x348(0x08)
	UVerticalBox* MissionTimeHolder; // 0x350(0x08)
	UTextBlock* TEXT_CreditsEarned; // 0x358(0x08)
	UTextBlock* Text_MissionStatus; // 0x360(0x08)
	UTextBlock* TEXT_MissionTime; // 0x368(0x08)
	UTextBlock* TextBlock_2; // 0x370(0x08)
	UTextBlock* TextBlock_4; // 0x378(0x08)
	UTextBlock* TextBlock_5; // 0x380(0x08)
	UTextBlock* TextBlock_6; // 0x388(0x08)
	UVerticalBox* VB_Warnings; // 0x390(0x08)
	UWidgetSwitcher* WidgetSwitcher_Success; // 0x398(0x08)

	void GetMissionResult(UMissionResultInfo* MissionResultInfo);
	void PreConstruct(bool IsDesignTime);
	void BeginScreen();
	void Construct();
	void ExecuteUbergraph_Console_MissionComplete(int32_t EntryPoint);
};

