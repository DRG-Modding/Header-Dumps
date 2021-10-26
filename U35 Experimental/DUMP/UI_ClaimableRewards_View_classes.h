// WidgetBlueprintGeneratedClass UI_ClaimableRewards_View.UI_ClaimableRewards_View_C
// Size: 0x348 (Inherited: 0x2a0)
struct UUI_ClaimableRewards_View_C : UClaimableRewardViewWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	UWidgetAnimation* AnimBlurIn; // 0x2a8(0x08)
	UCanvasPanel* BackgroundCanvas; // 0x2b0(0x08)
	UBlurBackground_C* BlurBackground; // 0x2b8(0x08)
	UHorizontalBox* EntryBox; // 0x2c0(0x08)
	UVerticalBox* LinesBox; // 0x2c8(0x08)
	UMissionControl_MainDialogue_C* MissionControl_MainDialogue; // 0x2d0(0x08)
	bool ShowBackgroundBlur; // 0x2d8(0x01)
	UAudioComponent* AudioSpeak; // 0x2e0(0x08)
	FMulticastInlineDelegate OnMissionControlStarted; // 0x2e8(0x10)
	FMulticastInlineDelegate OnMissionControlFinished; // 0x2f8(0x10)
	int32_t RewardsClaimed; // 0x308(0x04)
	FMulticastInlineDelegate OnRewardsClaimed; // 0x310(0x10)
	FMulticastInlineDelegate OnRewardsAndMissionControlFinished; // 0x320(0x10)
	bool RewardsAndMissionControlFinished; // 0x330(0x01)
	TArray<UUI_ClaimableRewards_Entry_C*> RewardEntries; // 0x338(0x10)

	void GetLine(UHorizontalBox* EntryBox);
	void SetupView(FClaimableRewardView InViewData);
	void TryFinish();
	void StopAudio();
	void OnAudioFinished_Event();
	void Start Mission Control Speak();
	void ShowBlur();
	void ShowMouseCursor();
	void Move In Rewards();
	void OnRewardClaimed(UClaimableRewardEntryWidget* InEntryWidget);
	void ReceiveEndFlow();
	void ReceiveDataChanged();
	void ReceiveBeginFlow();
	void ExecuteUbergraph_UI_ClaimableRewards_View(int32_t EntryPoint);
	void OnRewardsAndMissionControlFinished__DelegateSignature();
	void OnRewardsClaimed__DelegateSignature();
	void OnMissionControlFinished__DelegateSignature();
	void OnMissionControlStarted__DelegateSignature(UAudioComponent* MissionControlAudio);
};

