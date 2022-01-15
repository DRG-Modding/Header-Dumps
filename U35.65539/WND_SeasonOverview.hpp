#ifndef UE4SS_SDK_WND_SeasonOverview_HPP
#define UE4SS_SDK_WND_SeasonOverview_HPP

class UWND_SeasonOverview_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_Season_NextReward_C* ITM_BP_NextReward;
    UITM_InfoBox_C* ITM_InfoBox;
    UUI_DLC_Season_C* UI_DLC_Season;
    UVerticalBox* VerticalBox_Seasons;
    UWND_SeasonChallenges_C* WND_SeasonChallenges;
    UWND_SeasonEventBonus_C* WND_SeasonEventBonus;
    UWND_SeasonLevels_C* WND_SeasonLevels;
    float LastScroolTime;

    void ScrollRow(float Value, bool& didScroll, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
    int32 CaclFirstLevel(int32 numbAtCurrRow, bool LastLevelClaimed, int32 currLevel, int32 TempResult, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetSeasonLevel_level, float CallFunc_GetSeasonLevel_currentLevelPercent, int32 CallFunc_GetSeasonLevel_currentLevelXP, int32 CallFunc_GetSeasonLevel_LevelXPTotal, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsRewardClaimed_isNormalClaimed, bool CallFunc_IsRewardClaimed_isSpecialClaimed, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_SelectInt_ReturnValue, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_ScrollRow_didScroll, FEventReply CallFunc_Unhandled_ReturnValue);
    void OnXPChanged();
    void OnShown();
    void Scroll with controller(float Pitch, float Yaw);
    void OnClosed();
    void ExecuteUbergraph_WND_SeasonOverview(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ShowCharacterSelectorRotateSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FSeasonLevel CallFunc_GetNextReward_ReturnValue, int32 CallFunc_CaclFirstLevel_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, float K2Node_CustomEvent_pitch, float K2Node_CustomEvent_yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_ScrollRow_didScroll);
}

#endif
