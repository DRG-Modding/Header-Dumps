#ifndef UE4SS_SDK_ITM_BTN_ClaimReward_HPP
#define UE4SS_SDK_ITM_BTN_ClaimReward_HPP

class UITM_BTN_ClaimReward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_BigButton_C* BTN_Claim;
    class USizeBox* SizeBox_ButtonSizer;
    class UTextBlock* TextBlock_BiomeName;
    class UTextBlock* TextBlock_PlanetaryRegion;
    class UVerticalBox* VerticalBox_LeftButton;
    FITM_BTN_ClaimReward_COnClicked OnClicked;
    void OnClicked();
    bool IsClaimed;

    void BndEvt__BTN_Claim_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void SetAsBiome(FText BiomeName);
    void HideButton();
    void SetColor(FLinearColor Color);
    void ExecuteUbergraph_ITM_BTN_ClaimReward(int32 EntryPoint, FText K2Node_CustomEvent_BiomeName, FVector2D CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FLinearColor K2Node_CustomEvent_Color);
    void OnClicked__DelegateSignature();
};

#endif
