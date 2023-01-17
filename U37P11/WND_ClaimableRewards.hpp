#ifndef UE4SS_SDK_WND_ClaimableRewards_HPP
#define UE4SS_SDK_WND_ClaimableRewards_HPP

class UWND_ClaimableRewards_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBlurIn;
    class UBasic_ButtonScalable2_C* ContinueButton;
    class UUI_ClaimableRewards_View_C* RewardView;
    class UAudioComponent* AudioSpeak;
    FClaimableRewardView Data;

    void GetData(FClaimableRewardView& OutData);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnShown();
    void BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature();
    void DoClose();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WND_ClaimableRewards(int32 EntryPoint);
};

#endif
