// WidgetBlueprintGeneratedClass WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C
// Size: 0x3e8 (Inherited: 0x270)
struct UWND_AssignmentMissionComplete_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* NewAnimation; // 0x278(0x08)
	UWidgetAnimation* FadeIn; // 0x280(0x08)
	UWidgetAnimation* RemoveUI; // 0x288(0x08)
	UWidgetAnimation* AppearV2; // 0x290(0x08)
	UWidgetAnimation* MoveInProgressBarV2; // 0x298(0x08)
	UWidgetAnimation* MoveToTopProgressBar; // 0x2a0(0x08)
	UWidgetAnimation* MoveInProgressBar; // 0x2a8(0x08)
	UWidgetAnimation* Appear; // 0x2b0(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x2b8(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x2c0(0x08)
	UImage* CampaignImage; // 0x2c8(0x08)
	UTextBlock* CampaignProgressText; // 0x2d0(0x08)
	UCanvasPanel* ContentCanvas; // 0x2d8(0x08)
	UBasic_ButtonScalable2_C* ContinueButton; // 0x2e0(0x08)
	UBorder* HeaderBorder; // 0x2e8(0x08)
	UImage* IconBackground; // 0x2f0(0x08)
	UITM_CampaignProgress_C* ITM_CampaignProgressMain; // 0x2f8(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x300(0x08)
	UUI_ImageTinted_C* LeftTriangleOuter; // 0x308(0x08)
	UMissionControl_MainDialogue_C* MissionControl_MainDialogue; // 0x310(0x08)
	UHorizontalBox* OtherRewardsBox; // 0x318(0x08)
	UOverlay* RewardOverlay; // 0x320(0x08)
	UUI_ImageTinted_C* RightTriangleInner; // 0x328(0x08)
	UUI_ImageTinted_C* RightTriangleOuter; // 0x330(0x08)
	UUI_RewardResourcesBox_C* UI_RewardResourcesBox; // 0x338(0x08)
	UVerticalBox* UnlockRewardsBox; // 0x340(0x08)
	UCampaignNotification* CampaignNotification; // 0x348(0x08)
	FDialogStruct ShoutEntry; // 0x350(0x50)
	USoundBase* MissionControlCue; // 0x3a0(0x08)
	UAudioComponent* MissionControlAudioComponent; // 0x3a8(0x08)
	int32_t Countdown; // 0x3b0(0x04)
	bool CountDownActive; // 0x3b4(0x01)
	FTimerHandle WaitHandle; // 0x3b8(0x08)
	TArray<URewardWidget*> RewardWidgets; // 0x3c0(0x10)
	int32_t RewardIndex; // 0x3d0(0x04)
	int32_t UnclaimedRewards; // 0x3d4(0x04)
	bool CountdownPaused; // 0x3d8(0x01)
	UPlayerCharacterID* RetirableCharacter; // 0x3e0(0x08)

	void CheckMinersManualNotifications();
	void UpdateGoogleAnalytics();
	void UpdateCampaignProgressBar(bool ShowLastMission);
	bool IsWindowOpen();
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SetFrameColor(enum class ENUM_MenuColors Color);
	void GetMissionCompleteShout(UDialogDataAsset* MissionCompleteShout);
	void CreateRewardWidget(UReward* Reward, URewardWidget* Widget);
	void Add Reward List(TArray<UReward*> List);
	void Add Reward(UReward* Reward);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnShown();
	void OnClosed();
	void SetMissionControlPaused(bool IsPaused);
	void Continue();
	void CursorInputHack();
	void Init Window();
	void Start Mission Control Speak();
	void OnAppearFinished();
	void On Mission Control Finished();
	void Count Down();
	void Reward Claimed();
	void OnNewTopWindow();
	void OnProgressBarMoveFinished();
	void OnUpdateProgressBarFinished();
	void OnProgressBarUpdateStep();
	void ExecuteUbergraph_WND_AssignmentMissionComplete(int32_t EntryPoint);
};

