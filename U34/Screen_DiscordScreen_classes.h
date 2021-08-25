// WidgetBlueprintGeneratedClass Screen_DiscordScreen.Screen_DiscordScreen_C
// Size: 0x399 (Inherited: 0x230)
struct UScreen_DiscordScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	struct UBasic_ButtonScalable_C* ClaimRewardButton; // 0x240(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x248(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x250(0x08)
	struct UITM_CommunityGoalFactionSelection_C* ITM_CommunityGoalFactionSelection; // 0x258(0x08)
	struct UITM_CommunityGoalProgress_C* ITM_CommunityGoalProgress; // 0x260(0x08)
	struct UITM_CommunityGoalRecruitment_C* ITM_CommunityGoalRecruitment; // 0x268(0x08)
	struct UITM_CommunityGoalReward_C* ITM_CommunityGoalReward; // 0x270(0x08)
	struct UITM_CommunityGoalReward_C* ITM_CommunityGoalReward_163; // 0x278(0x08)
	struct UVerticalBox* LOADING; // 0x280(0x08)
	struct UVerticalBox* Progress; // 0x288(0x08)
	struct UVerticalBox* RECRUITMENT; // 0x290(0x08)
	struct UVerticalBox* Reward; // 0x298(0x08)
	struct UVerticalBox* SELECTFACTION; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_3; // 0x2b0(0x08)
	struct UCircularThrobber* Twitch_Loading; // 0x2b8(0x08)
	struct FMulticastInlineDelegate ScreenChanged; // 0x2c0(0x10)
	struct FText CCTitle; // 0x2d0(0x18)
	struct FText CCText; // 0x2e8(0x18)
	struct FText DDTitle; // 0x300(0x18)
	struct FText DDText; // 0x318(0x18)
	struct FText MMTitle; // 0x330(0x18)
	struct FText MMText; // 0x348(0x18)
	int32_t Faction; // 0x360(0x04)
	char UnknownData_364[0x4]; // 0x364(0x04)
	struct TArray<struct UITM_CommunityGoal_C*> GoalsArray; // 0x368(0x10)
	struct FTimerHandle GoalStateTimer; // 0x378(0x08)
	enum class ECommunityUIState CurrentState; // 0x380(0x01)
	enum class ECommunityUIState LastState; // 0x381(0x01)
	bool IsRecruitmentPeriod; // 0x382(0x01)
	char UnknownData_383[0x5]; // 0x383(0x05)
	struct TArray<struct UCommunityGoalFaction*> FactionData; // 0x388(0x10)
	bool IsGoalPeriod; // 0x398(0x01)

	void BuildProgressUI(bool ForceRefresh); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildProgressUI
	void RefreshCurrentState(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.RefreshCurrentState
	void SetResult(struct UITM_CommunityGoalResult_C* ResultUI, int32_t FactionID); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetResult
	void AwardRewards(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.AwardRewards
	void MinersUnionTier(float DSMUTier); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.MinersUnionTier
	void BuildRewardUI(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildRewardUI
	void CurrentPlayerFaction(struct UCommunityGoalFaction* Current Faction); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.CurrentPlayerFaction
	void SetGoalState(bool isGoal, bool isRecruitment); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoalState
	void SetGoals(struct TArray<struct FString> Goals, struct TArray<float> Values, struct TArray<int32_t> Members); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoals
	void TestCommunityGoals(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.TestCommunityGoals
	void Construct(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.Construct
	void Do Running Text(struct FText Text, int32_t Index, struct UTextBlock* Target); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.Do Running Text
	void PreConstruct(bool IsDesignTime); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.PreConstruct
	void CheckState(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.CheckState
	void RegisterEvents(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.RegisterEvents
	void OnFactionsDataRecievedEvent(struct TArray<struct FString> Goals, struct TArray<float> Values, struct TArray<int32_t> Members); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionsDataRecievedEvent
	void OnCGSDataReceivedEvent(bool stateReceived); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnCGSDataReceivedEvent
	void RequestData(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.RequestData
	void Destruct(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.Destruct
	void ResetFactionCheckState(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.ResetFactionCheckState
	void BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	void OnFactionChangedEvent(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionChangedEvent
	void Refresh Ui(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.Refresh Ui
	void OnGoalInitialized(); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnGoalInitialized
	void ExecuteUbergraph_Screen_DiscordScreen(int32_t EntryPoint); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.ExecuteUbergraph_Screen_DiscordScreen
	void ScreenChanged__DelegateSignature(enum class ECommunityUIState CurrentState, enum class ECommunityUIState PreviousState); // Function Screen_DiscordScreen.Screen_DiscordScreen_C.ScreenChanged__DelegateSignature
};

