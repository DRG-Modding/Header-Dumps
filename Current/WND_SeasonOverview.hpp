#ifndef UE4SS_SDK_WND_SeasonOverview_HPP
#define UE4SS_SDK_WND_SeasonOverview_HPP

class UWND_SeasonOverview_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimRevealSeasonToggle;
    class UITM_Season_NextReward_C* ITM_BP_NextReward;
    class UITM_InfoBox_C* ITM_InfoBox;
    class UITM_SeasonContentToggle_C* Toggle_SeasonContent;
    class UUI_DLC_Season_C* UI_DLC_Season;
    class UVerticalBox* VerticalBox_Seasons;
    class UWND_SeasonChallenges_C* WND_SeasonChallenges;
    class UWND_SeasonEventBonus_Plague_C* WND_SeasonEventBonus_Plague;
    class UWND_SeasonLevels_C* WND_SeasonLevels;
    float LastScroolTime;

    void ScrollRow(float Value, bool& didScroll);
    int32 CaclFirstLevel();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnXPChanged();
    void OnShown();
    void Scroll with controller(float Pitch, float Yaw);
    void OnClosed();
    void BndEvt__WND_SeasonOverview_WND_SeasonLevels_K2Node_ComponentBoundEvent_0_RewardClaimed__DelegateSignature(class UReward* Reward);
    void CheckShowSeasonCompleted();
    void OnSeasonCompleted_Closed(class UWindowWidget* Window);
    void ExecuteUbergraph_WND_SeasonOverview(int32 EntryPoint);
};

#endif
