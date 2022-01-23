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

    void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_0();
    void Refresh(class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_1, FText CallFunc_TextToUpper_ReturnValue);
    void PlayRevealAudio();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void MoveIn(float StartDelay);
    void OnClaimAnimFinished();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_ClaimableRewards_Entry(int32 EntryPoint, FExecuteUbergraph_UI_ClaimableRewards_EntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_StartDelay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
};

#endif
