// WidgetBlueprintGeneratedClass Screen_DiscordScreen.Screen_DiscordScreen_C
// Size: 0x399 (Inherited: 0x230)
struct UScreen_DiscordScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	UBasic_ButtonScalable_C* ClaimRewardButton; // 0x240(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x248(0x08)
	UWidgetSwitcher* ContentSwitcher; // 0x250(0x08)
	UITM_CommunityGoalFactionSelection_C* ITM_CommunityGoalFactionSelection; // 0x258(0x08)
	UITM_CommunityGoalProgress_C* ITM_CommunityGoalProgress; // 0x260(0x08)
	UITM_CommunityGoalRecruitment_C* ITM_CommunityGoalRecruitment; // 0x268(0x08)
	UITM_CommunityGoalReward_C* ITM_CommunityGoalReward; // 0x270(0x08)
	UITM_CommunityGoalReward_C* ITM_CommunityGoalReward_163; // 0x278(0x08)
	UVerticalBox* LOADING; // 0x280(0x08)
	UVerticalBox* Progress; // 0x288(0x08)
	UVerticalBox* RECRUITMENT; // 0x290(0x08)
	UVerticalBox* Reward; // 0x298(0x08)
	UVerticalBox* SELECTFACTION; // 0x2a0(0x08)
	UTextBlock* TextBlock_1; // 0x2a8(0x08)
	UTextBlock* TextBlock_3; // 0x2b0(0x08)
	UCircularThrobber* Twitch_Loading; // 0x2b8(0x08)
	FMulticastInlineDelegate ScreenChanged; // 0x2c0(0x10)
	FText CCTitle; // 0x2d0(0x18)
	FText CCText; // 0x2e8(0x18)
	FText DDTitle; // 0x300(0x18)
	FText DDText; // 0x318(0x18)
	FText MMTitle; // 0x330(0x18)
	FText MMText; // 0x348(0x18)
	int32_t Faction; // 0x360(0x04)
	TArray<UITM_CommunityGoal_C*> GoalsArray; // 0x368(0x10)
	FTimerHandle GoalStateTimer; // 0x378(0x08)
	enum class ECommunityUIState CurrentState; // 0x380(0x01)
	enum class ECommunityUIState LastState; // 0x381(0x01)
	bool IsRecruitmentPeriod; // 0x382(0x01)
	TArray<UCommunityGoalFaction*> FactionData; // 0x388(0x10)
	bool IsGoalPeriod; // 0x398(0x01)

	void BuildProgressUI(bool ForceRefresh);
	void RefreshCurrentState();
	void SetResult(UITM_CommunityGoalResult_C* ResultUI, int32_t FactionID);
	void AwardRewards();
	void MinersUnionTier(float DSMUTier);
	void BuildRewardUI();
	void CurrentPlayerFaction(UCommunityGoalFaction* Current Faction);
	void SetGoalState(bool isGoal, bool isRecruitment);
	void SetGoals(TArray<FString> Goals, TArray<float> Values, TArray<int32_t> Members);
	void TestCommunityGoals();
	void Construct();
	void Do Running Text(FText Text, int32_t Index, UTextBlock* Target);
	void PreConstruct(bool IsDesignTime);
	void CheckState();
	void RegisterEvents();
	void OnFactionsDataRecievedEvent(TArray<FString> Goals, TArray<float> Values, TArray<int32_t> Members);
	void OnCGSDataReceivedEvent(bool stateReceived);
	void RequestData();
	void Destruct();
	void ResetFactionCheckState();
	void BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
	void OnFactionChangedEvent();
	void Refresh Ui();
	void OnGoalInitialized();
	void ExecuteUbergraph_Screen_DiscordScreen(int32_t EntryPoint);
	void ScreenChanged__DelegateSignature(enum class ECommunityUIState CurrentState, enum class ECommunityUIState PreviousState);
};

