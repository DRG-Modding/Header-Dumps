#ifndef UE4SS_SDK_Console_MissionStatistics_HPP
#define UE4SS_SDK_Console_MissionStatistics_HPP

class UConsole_MissionStatistics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* AvailablePerkPoints;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UUI_MissionStats_View_C* UI_MissionStats_View;
    class ABP_PlayerController_SpaceRig_C* Player;

    void HasClaimablePerkPoints(bool& Claimable);
    void Construct();
    void StartClaimable();
    void StopClaimable();
    void Update();
    void OnCountChanged_Event(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
    void OnMilestoneClaimed_Event(class UMilestoneAsset* Milestone, int32 ClaimedTier);
    void ExecuteUbergraph_Console_MissionStatistics(int32 EntryPoint);
};

#endif
