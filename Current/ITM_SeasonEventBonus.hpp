#ifndef UE4SS_SDK_ITM_SeasonEventBonus_HPP
#define UE4SS_SDK_ITM_SeasonEventBonus_HPP

class UITM_SeasonEventBonus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnHover;
    class UBorder* Border_Token;
    class UButton* Button_Outer;
    class UWidgetSwitcher* CLAIM;
    class UImage* Image_592;
    class UImage* Image_686;
    class UImage* Image_BG;
    class UImage* Image_BG_Outline;
    class UImage* Image_Core;
    class UImage* Image_NormalCheckmark;
    class UImage* Image_NormalClaim;
    class UImage* Image_SmallCheckmark;
    class UImage* Image_Token;
    class UOverlay* Overlay_Outer;
    class USizeBox* SizeBox_Outer;
    class USeasonTokenReward* TokenReward;
    ESeasonVisibilityState State;
    bool IsBackRow;
    FITM_SeasonEventBonus_COnBonusClaimed OnBonusClaimed;
    void OnBonusClaimed();

    class UWidget* Get_Tooltip();
    void Construct();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateLook();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void OnWindowClose_Event();
    void ExecuteUbergraph_ITM_SeasonEventBonus(int32 EntryPoint);
    void OnBonusClaimed__DelegateSignature();
};

#endif
