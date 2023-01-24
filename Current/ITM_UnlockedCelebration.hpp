#ifndef UE4SS_SDK_ITM_UnlockedCelebration_HPP
#define UE4SS_SDK_ITM_UnlockedCelebration_HPP

class UITM_UnlockedCelebration_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UITM_BigButton_C* ContinueButton;
    class UTextBlock* ForgeItemName;
    class UImage* Image_0;
    class UImage* NoiseImage;
    class UVerticalBox* RewardHolder;
    class UUI_MasteryReward_C* UI_MasteryReward;
    class UImage* UpperBarCorner;
    FITM_UnlockedCelebration_COnFinished OnFinished;
    void OnFinished(TArray<class UUnlockReward*>& Rewards);
    TArray<class UUnlockReward*> Unlocks;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ClickContinue();
    void ShowRewards(FMasteryItem Rewards, TSubclassOf<class AActor> Item);
    void ExecuteUbergraph_ITM_UnlockedCelebration(int32 EntryPoint);
    void OnFinished__DelegateSignature(TArray<class UUnlockReward*>& Rewards);
};

#endif
