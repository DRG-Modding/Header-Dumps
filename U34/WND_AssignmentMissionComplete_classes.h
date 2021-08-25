// WidgetBlueprintGeneratedClass WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C
// Size: 0x3e8 (Inherited: 0x270)
struct UWND_AssignmentMissionComplete_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x278(0x08)
	struct UWidgetAnimation* FadeIn; // 0x280(0x08)
	struct UWidgetAnimation* RemoveUI; // 0x288(0x08)
	struct UWidgetAnimation* AppearV2; // 0x290(0x08)
	struct UWidgetAnimation* MoveInProgressBarV2; // 0x298(0x08)
	struct UWidgetAnimation* MoveToTopProgressBar; // 0x2a0(0x08)
	struct UWidgetAnimation* MoveInProgressBar; // 0x2a8(0x08)
	struct UWidgetAnimation* Appear; // 0x2b0(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x2b8(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x2c0(0x08)
	struct UImage* CampaignImage; // 0x2c8(0x08)
	struct UTextBlock* CampaignProgressText; // 0x2d0(0x08)
	struct UCanvasPanel* ContentCanvas; // 0x2d8(0x08)
	struct UBasic_ButtonScalable2_C* ContinueButton; // 0x2e0(0x08)
	struct UBorder* HeaderBorder; // 0x2e8(0x08)
	struct UImage* IconBackground; // 0x2f0(0x08)
	struct UITM_CampaignProgress_C* ITM_CampaignProgressMain; // 0x2f8(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x300(0x08)
	struct UUI_ImageTinted_C* LeftTriangleOuter; // 0x308(0x08)
	struct UMissionControl_MainDialogue_C* MissionControl_MainDialogue; // 0x310(0x08)
	struct UHorizontalBox* OtherRewardsBox; // 0x318(0x08)
	struct UOverlay* RewardOverlay; // 0x320(0x08)
	struct UUI_ImageTinted_C* RightTriangleInner; // 0x328(0x08)
	struct UUI_ImageTinted_C* RightTriangleOuter; // 0x330(0x08)
	struct UUI_RewardResourcesBox_C* UI_RewardResourcesBox; // 0x338(0x08)
	struct UVerticalBox* UnlockRewardsBox; // 0x340(0x08)
	struct UCampaignNotification* CampaignNotification; // 0x348(0x08)
	struct FDialogStruct ShoutEntry; // 0x350(0x50)
	struct USoundBase* MissionControlCue; // 0x3a0(0x08)
	struct UAudioComponent* MissionControlAudioComponent; // 0x3a8(0x08)
	int32_t Countdown; // 0x3b0(0x04)
	bool CountDownActive; // 0x3b4(0x01)
	char UnknownData_3B5[0x3]; // 0x3b5(0x03)
	struct FTimerHandle WaitHandle; // 0x3b8(0x08)
	struct TArray<struct URewardWidget*> RewardWidgets; // 0x3c0(0x10)
	int32_t RewardIndex; // 0x3d0(0x04)
	int32_t UnclaimedRewards; // 0x3d4(0x04)
	bool CountdownPaused; // 0x3d8(0x01)
	char UnknownData_3D9[0x7]; // 0x3d9(0x07)
	struct UPlayerCharacterID* RetirableCharacter; // 0x3e0(0x08)

	void CheckMinersManualNotifications(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CheckMinersManualNotifications
	void UpdateGoogleAnalytics(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateGoogleAnalytics
	void UpdateCampaignProgressBar(bool ShowLastMission); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateCampaignProgressBar
	bool IsWindowOpen(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.IsWindowOpen
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnKeyUp
	void SetFrameColor(char Color); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetFrameColor
	void GetMissionCompleteShout(struct UDialogDataAsset* MissionCompleteShout); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.GetMissionCompleteShout
	void CreateRewardWidget(struct UReward* Reward, struct URewardWidget* Widget); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CreateRewardWidget
	void Add Reward List(struct TArray<struct UReward*> List); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward List
	void Add Reward(struct UReward* Reward); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward
	void PreConstruct(bool IsDesignTime); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.PreConstruct
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void OnShown(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnShown
	void OnClosed(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnClosed
	void SetMissionControlPaused(bool IsPaused); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetMissionControlPaused
	void Continue(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Continue
	void CursorInputHack(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CursorInputHack
	void Init Window(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Init Window
	void Start Mission Control Speak(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Start Mission Control Speak
	void OnAppearFinished(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnAppearFinished
	void On Mission Control Finished(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.On Mission Control Finished
	void Count Down(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Count Down
	void Reward Claimed(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Reward Claimed
	void OnNewTopWindow(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnNewTopWindow
	void OnProgressBarMoveFinished(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarMoveFinished
	void OnUpdateProgressBarFinished(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnUpdateProgressBarFinished
	void OnProgressBarUpdateStep(); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarUpdateStep
	void ExecuteUbergraph_WND_AssignmentMissionComplete(int32_t EntryPoint); // Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.ExecuteUbergraph_WND_AssignmentMissionComplete
};

