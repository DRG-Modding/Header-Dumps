#ifndef UE4SS_SDK_UI_ClaimableRewards_Entry_HPP
#define UE4SS_SDK_UI_ClaimableRewards_Entry_HPP

class UUI_ClaimableRewards_Entry_C : public UClaimableRewardEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimClaim;
    class UWidgetAnimation* AnimPing;
    class UWidgetAnimation* AnimMoveIn;
    class UBorder* BorderHeader;
    class USizeBox* BoxSizer;
    class UITM_BigButton_C* BTN_Claim;
    class UOverlay* ClaimOverlay;
    class UImage* HeaderEndImage;
    class UImage* RewardImage;
    class URichTextBlock* TextBlock;
    class UTextBlock* TextHeader;
    class UBorder* WindowBorder;

    void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_1();
    void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_0();
    void Refresh();
    void PlayRevealAudio();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnClaimAnimFinished();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnPopupImageLoaded();
    void PlaySlamAudio();
    void ReceiveMoveIn(float InStartDelay);
    void ExecuteUbergraph_UI_ClaimableRewards_Entry(int32 EntryPoint);
};

#endif
