#ifndef UE4SS_SDK_Screen_DiscordScreen_HPP
#define UE4SS_SDK_Screen_DiscordScreen_HPP

class UScreen_DiscordScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBasic_ButtonScalable_C* ClaimRewardButton;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UWidgetSwitcher* ContentSwitcher;
    class UITM_CommunityGoalFactionSelection_C* ITM_CommunityGoalFactionSelection;
    class UITM_CommunityGoalProgress_C* ITM_CommunityGoalProgress;
    class UITM_CommunityGoalRecruitment_C* ITM_CommunityGoalRecruitment;
    class UITM_CommunityGoalReward_C* ITM_CommunityGoalReward;
    class UITM_CommunityGoalReward_C* ITM_CommunityGoalReward_162;
    class UVerticalBox* LOADING;
    class UVerticalBox* Progress;
    class UVerticalBox* RECRUITMENT;
    class UVerticalBox* Reward;
    class UVerticalBox* SELECTFACTION;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_2;
    class UCircularThrobber* Twitch_Loading;
    FScreen_DiscordScreen_CScreenChanged ScreenChanged;
    void ScreenChanged(ECommunityUIState CurrentState, ECommunityUIState previousState);
    FText CCTitle;
    FText CCText;
    FText DDTitle;
    FText DDText;
    FText MMTitle;
    FText MMText;
    int32 Faction;
    TArray<class UITM_CommunityGoal_C*> GoalsArray;
    FTimerHandle GoalStateTimer;
    ECommunityUIState CurrentState;
    ECommunityUIState LastState;
    bool IsRecruitmentPeriod;
    TArray<class UCommunityGoalFaction*> FactionData;
    bool IsGoalPeriod;

    void BuildProgressUI(bool ForceRefresh);
    void RefreshCurrentState();
    void SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32 FactionID);
    void AwardRewards();
    void MinersUnionTier(float& DSMUTier);
    void BuildRewardUI();
    void CurrentPlayerFaction(class UCommunityGoalFaction*& Current Faction);
    void SetGoalState(bool isGoal, bool isRecruitment);
    void SetGoals(TArray<FString>& Goals, TArray<float>& Values, TArray<int32>& Members);
    void TestCommunityGoals();
    void Construct();
    void Do Running Text(FText Text, int32 Index, class UTextBlock* Target);
    void PreConstruct(bool IsDesignTime);
    void CheckState();
    void RegisterEvents();
    void OnFactionsDataRecievedEvent(const TArray<FString>& Goals, const TArray<float>& Values, const TArray<int32>& Members);
    void OnCGSDataReceivedEvent(bool stateReceived);
    void RequestData();
    void Destruct();
    void ResetFactionCheckState();
    void BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
    void OnFactionChangedEvent();
    void Refresh Ui();
    void OnGoalInitialized();
    void ExecuteUbergraph_Screen_DiscordScreen(int32 EntryPoint);
    void ScreenChanged__DelegateSignature(ECommunityUIState CurrentState, ECommunityUIState previousState);
};

#endif
