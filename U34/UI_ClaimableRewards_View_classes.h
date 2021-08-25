// WidgetBlueprintGeneratedClass UI_ClaimableRewards_View.UI_ClaimableRewards_View_C
// Size: 0x348 (Inherited: 0x2a0)
struct UUI_ClaimableRewards_View_C : UClaimableRewardViewWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* AnimBlurIn; // 0x2a8(0x08)
	struct UCanvasPanel* BackgroundCanvas; // 0x2b0(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x2b8(0x08)
	struct UHorizontalBox* EntryBox; // 0x2c0(0x08)
	struct UVerticalBox* LinesBox; // 0x2c8(0x08)
	struct UMissionControl_MainDialogue_C* MissionControl_MainDialogue; // 0x2d0(0x08)
	bool ShowBackgroundBlur; // 0x2d8(0x01)
	char UnknownData_2D9[0x7]; // 0x2d9(0x07)
	struct UAudioComponent* AudioSpeak; // 0x2e0(0x08)
	struct FMulticastInlineDelegate OnMissionControlStarted; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnMissionControlFinished; // 0x2f8(0x10)
	int32_t RewardsClaimed; // 0x308(0x04)
	char UnknownData_30C[0x4]; // 0x30c(0x04)
	struct FMulticastInlineDelegate OnRewardsClaimed; // 0x310(0x10)
	struct FMulticastInlineDelegate OnRewardsAndMissionControlFinished; // 0x320(0x10)
	bool RewardsAndMissionControlFinished; // 0x330(0x01)
	char UnknownData_331[0x7]; // 0x331(0x07)
	struct TArray<struct UUI_ClaimableRewards_Entry_C*> RewardEntries; // 0x338(0x10)

	void GetLine(struct UHorizontalBox* EntryBox); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine
	void SetupView(struct FClaimableRewardView InViewData); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView
	void TryFinish(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish
	void StopAudio(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio
	void OnAudioFinished_Event(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnAudioFinished_Event
	void Start Mission Control Speak(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Start Mission Control Speak
	void ShowBlur(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowBlur
	void ShowMouseCursor(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowMouseCursor
	void Move In Rewards(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Move In Rewards
	void OnRewardClaimed(struct UClaimableRewardEntryWidget* InEntryWidget); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed
	void ReceiveEndFlow(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveEndFlow
	void ReceiveDataChanged(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveDataChanged
	void ReceiveBeginFlow(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveBeginFlow
	void ExecuteUbergraph_UI_ClaimableRewards_View(int32_t EntryPoint); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View
	void OnRewardsAndMissionControlFinished__DelegateSignature(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsAndMissionControlFinished__DelegateSignature
	void OnRewardsClaimed__DelegateSignature(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsClaimed__DelegateSignature
	void OnMissionControlFinished__DelegateSignature(); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlFinished__DelegateSignature
	void OnMissionControlStarted__DelegateSignature(struct UAudioComponent* MissionControlAudio); // Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature
};

