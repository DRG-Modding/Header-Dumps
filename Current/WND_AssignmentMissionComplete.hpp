#ifndef UE4SS_SDK_WND_AssignmentMissionComplete_HPP
#define UE4SS_SDK_WND_AssignmentMissionComplete_HPP

class UWND_AssignmentMissionComplete_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RemoveUI;
    class UWidgetAnimation* AppearV2;
    class UWidgetAnimation* MoveInProgressBarV2;
    class UWidgetAnimation* MoveToTopProgressBar;
    class UWidgetAnimation* MoveInProgressBar;
    class UWidgetAnimation* Appear;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UImage* CampaignImage;
    class UTextBlock* CampaignProgressText;
    class UCanvasPanel* ContentCanvas;
    class UBasic_ButtonScalable2_C* ContinueButton;
    class UBorder* HeaderBorder;
    class UImage* IconBackground;
    class UITM_CampaignProgress_C* ITM_CampaignProgressMain;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UUI_ImageTinted_C* LeftTriangleOuter;
    class UMissionControl_MainDialogue_C* MissionControl_MainDialogue;
    class UHorizontalBox* OtherRewardsBox;
    class USizeBox* Reward_SizeBox;
    class UOverlay* RewardOverlay;
    class UUI_ImageTinted_C* RightTriangleInner;
    class UUI_ImageTinted_C* RightTriangleOuter;
    class UUI_RewardResourcesBox_C* UI_RewardResourcesBox;
    class UVerticalBox* UnlockRewardsBox;
    class UCampaignNotification* CampaignNotification;
    FDialogStruct ShoutEntry;
    class USoundBase* MissionControlCue;
    class UAudioComponent* MissionControlAudioComponent;
    int32 Countdown;
    bool CountDownActive;
    FTimerHandle WaitHandle;
    TArray<class URewardWidget*> RewardWidgets;
    int32 RewardIndex;
    int32 UnclaimedRewards;
    bool CountdownPaused;
    class UPlayerCharacterID* RetirableCharacter;

    void CheckMinersManualNotifications();
    void UpdateGoogleAnalytics();
    void UpdateCampaignProgressBar(bool ShowLastMission);
    bool IsWindowOpen();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetFrameColor(TEnumAsByte<ENUM_MenuColors::Type> Color);
    void GetMissionCompleteShout(class UDialogDataAsset*& MissionCompleteShout);
    void CreateRewardWidget(class UReward* Reward, class URewardWidget*& Widget);
    void Add Reward List(const TArray<class UReward*>& List);
    void Add Reward(class UReward* Reward);
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
    void ExecuteUbergraph_WND_AssignmentMissionComplete(int32 EntryPoint);
};

#endif
