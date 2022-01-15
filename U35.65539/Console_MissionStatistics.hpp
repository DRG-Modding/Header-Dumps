#ifndef UE4SS_SDK_Console_MissionStatistics_HPP
#define UE4SS_SDK_Console_MissionStatistics_HPP

class UConsole_MissionStatistics_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* AvailablePerkPoints;
    UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    UUI_MissionStats_View_C* UI_MissionStats_View;
    ABP_PlayerController_SpaceRig_C* Player;

    void HasClaimablePerkPoints(bool& Claimable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UMilestoneAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsClaimable_ReturnValue);
    void Construct();
    void StartClaimable();
    void StopClaimable();
    void Update();
    void OnCountChanged_Event(UMissionStat* MissionStat, float Value);
    void OnMilestoneClaimed_Event(UMilestoneAsset* Milestone, int32 ClaimedTier);
    void ExecuteUbergraph_Console_MissionStatistics(int32 EntryPoint, UGameData* CallFunc_GetFSDGameData_ReturnValue, OnMilestoneClaimed__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, UMilestoneAsset* CallFunc_Array_Get_Item, bool CallFunc_HasClaimablePerkPoints_Claimable, UMissionStat* K2Node_CustomEvent_MissionStat, float K2Node_CustomEvent_Value, StatCountChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UMilestoneAsset* K2Node_CustomEvent_Milestone, int32 K2Node_CustomEvent_ClaimedTier, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
}

#endif
