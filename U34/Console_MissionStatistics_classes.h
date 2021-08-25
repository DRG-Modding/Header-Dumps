// WidgetBlueprintGeneratedClass Console_MissionStatistics.Console_MissionStatistics_C
// Size: 0x260 (Inherited: 0x230)
struct UConsole_MissionStatistics_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCanvasPanel* AvailablePerkPoints; // 0x238(0x08)
	struct UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x240(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x248(0x08)
	struct UUI_MissionStats_View_C* UI_MissionStats_View; // 0x250(0x08)
	struct ABP_PlayerController_SpaceRig_C* Player; // 0x258(0x08)

	void HasClaimablePerkPoints(bool Claimable); // Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints
	void Construct(); // Function Console_MissionStatistics.Console_MissionStatistics_C.Construct
	void StartClaimable(); // Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable
	void StopClaimable(); // Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable
	void Update(); // Function Console_MissionStatistics.Console_MissionStatistics_C.Update
	void OnCountChanged_Event(struct UMissionStat* MissionStat, float Value); // Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event
	void OnMilestoneClaimed_Event(struct UMilestoneAsset* Milestone, int32_t ClaimedTier); // Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event
	void ExecuteUbergraph_Console_MissionStatistics(int32_t EntryPoint); // Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics
};

