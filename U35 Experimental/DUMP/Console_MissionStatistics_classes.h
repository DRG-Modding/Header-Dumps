// WidgetBlueprintGeneratedClass Console_MissionStatistics.Console_MissionStatistics_C
// Size: 0x260 (Inherited: 0x230)
struct UConsole_MissionStatistics_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UCanvasPanel* AvailablePerkPoints; // 0x238(0x08)
	UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x240(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x248(0x08)
	UUI_MissionStats_View_C* UI_MissionStats_View; // 0x250(0x08)
	ABP_PlayerController_SpaceRig_C* Player; // 0x258(0x08)

	void HasClaimablePerkPoints(bool Claimable);
	void Construct();
	void StartClaimable();
	void StopClaimable();
	void Update();
	void OnCountChanged_Event(UMissionStat* MissionStat, float Value);
	void OnMilestoneClaimed_Event(UMilestoneAsset* Milestone, int32_t ClaimedTier);
	void ExecuteUbergraph_Console_MissionStatistics(int32_t EntryPoint);
};

