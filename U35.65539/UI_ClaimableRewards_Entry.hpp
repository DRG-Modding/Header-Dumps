#ifndef UE4SS_SDK_UI_ClaimableRewards_Entry_HPP
#define UE4SS_SDK_UI_ClaimableRewards_Entry_HPP

class UUI_ClaimableRewards_Entry_C : UClaimableRewardEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimClaim;
    UWidgetAnimation* AnimPing;
    UWidgetAnimation* AnimMoveIn;
    UBorder* BorderHeader;
    USizeBox* BoxSizer;
    UITM_BigButton_C* BTN_Claim;
    UOverlay* ClaimOverlay;
    UImage* HeaderEndImage;
    UImage* RewardImage;
    URichTextBlock* TextBlock;
    UTextBlock* TextHeader;
    UBorder* WindowBorder;

    void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_0();
    void Refresh(UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_1, FText CallFunc_TextToUpper_ReturnValue);
    void PlayRevealAudio();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void MoveIn(float StartDelay);
    void OnClaimAnimFinished();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_ClaimableRewards_Entry(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_StartDelay, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
}

#endif
