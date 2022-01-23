#ifndef UE4SS_SDK_Console_MissionStatistics_HPP
#define UE4SS_SDK_Console_MissionStatistics_HPP

class UConsole_MissionStatistics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* AvailablePerkPoints;
    class UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UUI_MissionStats_View_C* UI_MissionStats_View;
    class ABP_PlayerController_SpaceRig_C* Player;

    void HasClaimablePerkPoints(bool& Claimable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMilestoneAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsClaimable_ReturnValue);
    void Construct();
    void StartClaimable();
    void StopClaimable();
    void Update();
    void OnCountChanged_Event(class UMissionStat* MissionStat, float Value);
    void OnMilestoneClaimed_Event(class UMilestoneAsset* Milestone, int32 ClaimedTier);
    void ExecuteUbergraph_Console_MissionStatistics(int32 EntryPoint, class UGameData* CallFunc_GetFSDGameData_ReturnValue, FExecuteUbergraph_Console_MissionStatisticsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMilestoneAsset* CallFunc_Array_Get_Item, bool CallFunc_HasClaimablePerkPoints_Claimable, class UMissionStat* K2Node_CustomEvent_MissionStat, float K2Node_CustomEvent_Value, FExecuteUbergraph_Console_MissionStatisticsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UMilestoneAsset* K2Node_CustomEvent_Milestone, int32 K2Node_CustomEvent_ClaimedTier, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

#endif
