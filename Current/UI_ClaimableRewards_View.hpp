#ifndef UE4SS_SDK_UI_ClaimableRewards_View_HPP
#define UE4SS_SDK_UI_ClaimableRewards_View_HPP

class UUI_ClaimableRewards_View_C : public UClaimableRewardViewWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBlurIn;
    class UCanvasPanel* BackgroundCanvas;
    class UBlurBackground_C* BlurBackground;
    class UHorizontalBox* EntryBox;
    class UVerticalBox* LinesBox;
    class UMissionControl_MainDialogue_C* MissionControl_MainDialogue;
    bool ShowBackgroundBlur;
    class UAudioComponent* AudioSpeak;
    FUI_ClaimableRewards_View_COnMissionControlStarted OnMissionControlStarted;
    void OnMissionControlStarted(class UAudioComponent* MissionControlAudio);
    FUI_ClaimableRewards_View_COnMissionControlFinished OnMissionControlFinished;
    void OnMissionControlFinished();
    int32 RewardsClaimed;
    FUI_ClaimableRewards_View_COnRewardsClaimed OnRewardsClaimed;
    void OnRewardsClaimed();
    FUI_ClaimableRewards_View_COnRewardsAndMissionControlFinished OnRewardsAndMissionControlFinished;
    void OnRewardsAndMissionControlFinished();
    bool RewardsAndMissionControlFinished;
    TArray<class UClaimableRewardEntryWidget*> RewardEntries;

    void GetEntryWidgetClass(TSoftClassPtr<UUserWidget> InOverridetClass, TSubclassOf<class UClaimableRewardEntryWidget>& OutWidgetClass);
    void GetLine(class UHorizontalBox*& EntryBox);
    void SetupView(FClaimableRewardView InViewData);
    void TryFinish();
    void StopAudio();
    void OnAudioFinished_Event();
    void Start Mission Control Speak();
    void ShowBlur();
    void ShowMouseCursor();
    void Move In Rewards();
    void OnRewardClaimed(class UClaimableRewardEntryWidget* InEntryWidget);
    void ReceiveEndFlow();
    void ReceiveDataChanged();
    void ReceiveBeginFlow();
    void ExecuteUbergraph_UI_ClaimableRewards_View(int32 EntryPoint);
    void OnRewardsAndMissionControlFinished__DelegateSignature();
    void OnRewardsClaimed__DelegateSignature();
    void OnMissionControlFinished__DelegateSignature();
    void OnMissionControlStarted__DelegateSignature(class UAudioComponent* MissionControlAudio);
};

#endif
