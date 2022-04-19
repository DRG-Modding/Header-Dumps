#ifndef UE4SS_SDK_WND_SeasonOverview_HPP
#define UE4SS_SDK_WND_SeasonOverview_HPP

class UWND_SeasonOverview_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Season_NextReward_C* ITM_BP_NextReward;
    class UITM_InfoBox_C* ITM_InfoBox;
    class UUI_DLC_Season_C* UI_DLC_Season;
    class UVerticalBox* VerticalBox_Seasons;
    class UWND_SeasonChallenges_C* WND_SeasonChallenges;
    class UWND_SeasonEventBonus2Rows_C* WND_SeasonEventBonus2Rows_166;
    class UWND_SeasonLevels_C* WND_SeasonLevels;
    float LastScroolTime;

    void ScrollRow(float Value, bool& didScroll);
    int32 CaclFirstLevel();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnXPChanged();
    void OnShown();
    void Scroll with controller(float Pitch, float Yaw);
    void OnClosed();
    void ExecuteUbergraph_WND_SeasonOverview(int32 EntryPoint);
};

#endif
